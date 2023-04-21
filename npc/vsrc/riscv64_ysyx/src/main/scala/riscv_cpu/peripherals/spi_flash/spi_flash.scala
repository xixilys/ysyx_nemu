package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

class spi (apb_addr_w:Int,apb_data_w:Int)extends  BlackBox {
    val io = IO(new Bundle {
        val clk  = Input(Bool())
        val resetn = Input(Bool())
        // val in_paddr = Input(UInt(apb_addr_w.W))
        // val in_psel  = Input(Bool())
        // val in_penable = Input(Bool())
        // val in_pprot  = Input(UInt(3.W))
        // val in_pwrite = Input(Bool())
        // val in_pwdata = Input(UInt(apb_data_w.W))
        // val in_pstrb  = Input(UInt((apb_data_w/8).W))
        // val in_pready = Input(Bool())
        // val in_prdata = Output(UInt(apb_data_w.W))
        // val in_pslverr = Output(Bool())
        val in = new apb_bundle(32,32)
        val in_pprot = Input(UInt(3.W))
        val spi_clk = Output(Bool())
        val spi_cs = Output(UInt(2.W))
        val spi_mosi = Output(Bool())
        val spi_miso = Input(Bool())
        val spi_irq_out = Output(Bool())
    })


 
}
class spiFlash  extends BlackBox {
    val io = IO(new Bundle{
        val clk = Input(Bool())
        val cs  = Input(UInt(2.W))
        val mosi = Input(Bool())
        val miso = Output(Bool())
    })
  
}

class on_board_flash extends Module {
    class spi_bundle extends Bundle {
        val spi_clk = Output(Bool())
        val spi_cs  = Output(Bool())
        val spi_mosi = Output(Bool())
        val spi_miso = Input(Bool())
    }
    val io = IO(new spi_bundle)
    val io1 = IO(Flipped(new spi_bundle))
    io1 <> io

}



class SPI_lite extends Module {
  val io = IO(new Bundle {
    val cs = Output(Bool())
    val mosi = Output(Bool())
    val miso = Input(Bool())
    val sck = Output(Bool())
    val write = Input(Bool())
    val byte = Input(UInt(8.W))
    val start = Input(Bool())
    val done = Output(Bool())
  })

  // SPI state machine
  val idle :: write :: read :: Nil = Enum(3)
  val state = RegInit(idle)


  // SPI shift register
  val shiftReg = Reg(UInt(8.W))

  // CS and SCK signals
  val csReg = RegInit(true.B)
  val sckReg = RegInit(false.B)

  // Write byte counter
  val byteCount = RegInit(0.U(3.W))

  // Done signal
  io.done := state === idle

  // State machine
  switch(state) {
    is(idle) {
      csReg := true.B
      sckReg := false.B
      byteCount := 0.U
      when(io.start) {
        state := write
      }.elsewhen(io.write === false.B) {
        state := read
      }
    }
    is(write) {
      when(byteCount < 8.U) {
        csReg := false.B
        sckReg := false.B
        io.mosi := io.byte(byteCount)
        shiftReg := Cat(shiftReg(6, 0), io.miso)
        state := write
      }.otherwise {
        byteCount := 0.U
        state := idle
      }
    }
    is(read) {
      when(byteCount < 8.U) {
        csReg := false.B
        sckReg := true.B
        shiftReg := Cat(shiftReg(6, 0), io.miso)
        byteCount := byteCount + 1.U
        state := read
      }.otherwise {
        byteCount := 0.U
        state := idle
      }
    }
  }

  // Output signals
  io.cs := csReg
  io.sck := sckReg
  io.mosi := io.write && state === write
  io.byte := shiftReg
}



class W25Q64 extends Module {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val cs = Output(Bool())
    val mosi = Output(Bool())
    val miso = Input(Bool())
    val sck = Output(Bool())
    val data  = Output(UInt(8.W))
  })

  // Set up SPI interface
  val spi = Module(new SPI_lite)
  // spi.io.clk := io.clk
  spi.io.cs := io.cs
  spi.io.mosi := io.mosi
  spi.io.miso := io.miso
  spi.io.sck := io.sck

  val w25q64_state = RegInit(0.U(4.W))

  val cmd :: addr :: read :: Nil = Enum(3)
  
  
  // Send read command
  spi.io.write := true.B
  spi.io.byte := 0x03.U
  spi.io.start := true.B
  spi.io.done := false.B

  // Read data
  val data = Reg(UInt(8.W))
  when(spi.io.done) {
    data := spi.io.byte
  }

  // Output data
  val outReg = Reg(UInt(8.W))
  outReg := data
  io.data := outReg
}

class on_board_flash_test extends Module {
    
    class spi_bundle extends Bundle {
        val spi_clk = Output(Bool())
        val spi_cs  = Output(Bool())
        val spi_mosi = Output(Bool())
        val spi_miso = Input(Bool())
    }
    val io = IO(new spi_bundle)
    val board_reset = IO(Output(Bool()))
    val led_shine = IO(Output(Bool()))
    withClockAndReset(clock,!reset.asBool) {
    //this is  devider 
        board_reset := RegNext(~reset.asBool)
        val (clk_counter,clk_signal) = Counter(1.U.asBool,15)
        val spi_clk_reg = RegInit(0.U.asBool)
        
        
        val sInit :: sRead  :: Nil = Enum(2)
        val start_state = RegInit(sInit)
        io.spi_cs := 0.U.asBool
        io.spi_mosi := 0.U.asBool
        switch(start_state) {
          is(sInit) {
            val (sum_counter,sum_counter_signal) = Counter(clk_signal,40)
            spi_clk_reg := Mux(io.spi_cs === 1.U || sum_counter(5,0) >= 32.U ,0.U.asBool,Mux(clk_signal ,!spi_clk_reg,spi_clk_reg))
            
            io.spi_mosi := 1.U.asBool
            io.spi_cs := (sum_counter >=  32.U ) || !reset.asBool
            
            

            start_state := Mux(sum_counter_signal,sRead,start_state)
          }
          is(sRead) {
            val (sum_counter,sum_counter_signal) = Counter(start_state === sRead && clk_signal,800)
            
            spi_clk_reg := Mux(io.spi_cs === 1.U || sum_counter(4,0) >= 16.U ,0.U.asBool,Mux(clk_signal ,!spi_clk_reg,spi_clk_reg))
            
            io.spi_mosi := sum_counter === (0x6 * 2  + 0).U || sum_counter === (0x6 * 2 + 1).U || 
                sum_counter === (0x7 * 2 + 0).U || sum_counter === (0x7 * 2 + 1).U  ||
                  sum_counter === ((8 * 3 * 2 + 7) * 2 + 0).U || sum_counter === ((8*3 * 2  + 7) * 2 + 1).U  || 
                // sum_counter === (0x4 * 2 + 0).U || sum_counter === (0x4 * 2 + 1).U   ||
                (sum_counter >= 0x80.U)
            
            start_state := sRead.asUInt
        
            io.spi_cs := (sum_counter >=  (64 * 8).U ) || !reset.asBool
            
        
            
          }
          // i)
          
        }
        io.spi_clk := spi_clk_reg
        led_shine := RegNext(io.spi_miso)
        
    }

}


// object on_board_flash_test extends App{
//     (new ChiselStage).emitVerilog(new on_board_flash_test)
// }