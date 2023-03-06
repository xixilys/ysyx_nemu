package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._
import scala.math._
import scala.reflect.runtime.Macros
import javax.swing.plaf.basic.BasicToolBarUI


class data_ram_one_port( length: Int,width:Int) extends Module {
    val addr_width = (log10(length)/log10(2)).toInt
    val width_width = width / 8//(log10(width)/log10(2)).toInt
    val io = IO(new Bundle {
     
    val        clka = Input(UInt(1.W))
    val        ena  = Input(UInt(1.W))
    val        wea   = Input(UInt(width_width.W))
    val        addra   = Input(UInt(addr_width.W))
    val        dina  = Input(UInt(width.W))
    val        douta  = Output(UInt(width.W))
  
    })
    val table = VecInit(Seq.fill(width_width)(Module(new Look_up_table_read_first_(length,8)).io))
    val dout_out_vec = Wire(Vec(width_width,UInt(8.W)))
    for(i <- 0 until width_width) {
        table(i).ar_addr := io.addra
        table(i).aw_addr := io.addra
        table(i).write   := io.wea(i) && io.ena.asBool
        table(i).in      := io.dina(8 * (i + 1) - 1,8 * i)
        dout_out_vec(i)  := table(i).out
    }
    io.douta := dout_out_vec.asUInt


}

class sram_data(length:Int ,width:Int) extends BlackBox (Map("sram_width"-> width,
                                                                        "sram_length" -> length    )){
    val io = IO(new Bundle {
        val  reset = Input(Bool())
        val  clock = Input(Bool())
        val  en    = Input(Bool())
        val  raddr  = Input(UInt((length * 8).W))
        val  waddr  = Input(UInt((length * 8).W))
        val  wdata  = Input(UInt((length * 8).W))
        val  rdata  = Output(UInt((length * 8).W))
        val  ena    = Input(UInt(width.W))
    })
}
class data_ram_one_port_with_latency( length: Int,width:Int) extends Module {
    val addr_width = (log10(length)/log10(2)).toInt
    val width_width = width / 8//(log10(width)/log10(2)).toInt
    val io = IO(new Bundle {
     
    val        clka = Input(UInt(1.W))
    val        ena  = Input(UInt(1.W))
    val        wea   = Input(UInt(width_width.W))
    val        addra   = Input(UInt(addr_width.W))
    val        dina  = Input(UInt(width.W))
    val        douta  = Output(UInt(width.W))
  
    })
    val table = VecInit(Seq.fill(width_width)(Module(new Look_up_table_read_first_(length,8)).io))
    val dout_out_vec = Wire(Vec(width_width,UInt(8.W)))
    for(i <- 0 until width_width) {
        table(i).ar_addr := io.addra
        table(i).aw_addr := io.addra
        table(i).write   := io.wea(i) && io.ena.asBool
        table(i).in      := io.dina(8 * (i + 1) - 1,8 * i)
        dout_out_vec(i)  := table(i).out
    }
    //打一拍
    io.douta := RegNext(dout_out_vec.asUInt)


}


class data_ram_simple_two_ports( length: Int,width:Int) extends Module {
    val addr_width = (log10(length)/log10(2)).toInt
    val width_width = width / 8//(log10(width)/log10(2)).toInt
    val io = IO(new Bundle {
     
        val        clka = Input(UInt(1.W))
        val        clkb = Input(UInt(1.W))
        val        ena  = Input(UInt(1.W))
        val        enb  = Input(UInt(1.W))
        val        wea   = Input(UInt(1.W)) //没有使能对于字的写
        //a端口为写 b端口读
        val        addra   = Input(UInt(addr_width.W))
        val        dina  = Input(UInt(width.W))
        val        addrb   = Input(UInt(addr_width.W))
        val        doutb  = Output(UInt(width.W))
  
    })
    val table = Module(new Look_up_table_read_first_(length,width)).io
    table.ar_addr := io.addra
    table.aw_addr := io.addrb
    table.in      := io.dina
    table.write   := io.wea
    io.doutb      := table.out

}
// parameter Bits = 128;
// parameter Word_Depth = 64;
// parameter Add_Width = 6;
// parameter Wen_Width = 128;
class S011HD1P_X32Y2D128_BW extends BlackBox {
    val Bits = 128;
    val Word_Depth = 64;
    val Add_Width = 6;
    val Wen_Width = 128;
    val io = IO(new Bundle{
        val Q    = Output(UInt(Bits.W))
        val CLK  = Input(Bool())
        val CEN  = Input(Bool()) 
        val WEN  = Input(Bool())
        val BWEN = Input(UInt(Wen_Width.W))
        val A    = Input(UInt(Add_Width.W))
        val D    = Input(UInt(Bits.W))
    }) 
}
class sram_port extends  Bundle {
    val Bits = 128;
    val Word_Depth = 64;
    val Add_Width = 6;
    val Wen_Width = 128;

    val addr  = Input(UInt(Add_Width.W))
    val cen   = Input(Bool()) 
    val wen   = Input(Bool())
    val wmask = Input(UInt(Wen_Width.W))
    val wdata = Input(UInt(Bits.W))
    val rdata = Output(UInt(Bits.W))
}
//把ysyx提供的ip核封装一层
class  ysyx_sram_with_mask(width:Int) extends Module{
    val Bits = 128;
    val Word_Depth = 64;
    val Add_Width = 6
    val Wen_Width = 128
    val my_addr_width = log2Up(Word_Depth * Bits / width); 
    val width_width = width /8
    val bits_should_shift = log2Up(Bits/width)
    val io = IO(new Bundle {
        val        ena  = Input(UInt(1.W))
        val        wea   = Input(UInt(width_width.W))
        val        addra   = Input(UInt(my_addr_width.W))
        val        dina  = Input(UInt(width.W))
        val        douta  = Output(UInt(width.W))
        val        sram_port = Flipped(new sram_port)

    })
    // val sram = Module(new S011HD1P_X32Y2D128_BW).io
    io.sram_port.cen := !io.ena.asBool
    io.sram_port.wen := io.wea === 0.U

    // val shift_bits = io.addra(bits_should_shift - 1,0)
    val final_write_data = Wire(Vec(Bits/width,(UInt(Bits.W))))
    val final_ena_data   = Wire(Vec(Bits/width,(UInt(width.W))))
    final_write_data.zipWithIndex.foreach{ case(a,index) =>
        final_write_data(index) := io.dina << (width * index)
    }
    final_ena_data.zipWithIndex.foreach{ case(a,index) =>
        val ena_budle = Wire(Vec(width / 8,(UInt(8.W))))
        ena_budle.zipWithIndex.foreach{ case(a,index) =>
           ena_budle(index) := Mux(io.wea(index),0x0.U,0xff.U)   
        }
        final_ena_data(index)  := Mux(index.U === io.addra(bits_should_shift - 1,0),(ena_budle.asUInt),~(0.U(width.W)))
        // final_ena_data := io.dina << (width * index)
    }

    
    io.sram_port.wdata := final_write_data(io.addra(bits_should_shift - 1,0))
    io.sram_port.wmask := final_ena_data.asUInt//final_ena_data(io.addra(bits_should_shift - 1,0))
    io.sram_port.addr := io.addra(my_addr_width - 1,bits_should_shift)
    val addr_reg  = RegNext(io.addra)
    val shift_num  = addr_reg(bits_should_shift - 1,0)
    val sram_data_bundle = Wire(Vec(Bits / width,UInt(width.W)))
    sram_data_bundle.zipWithIndex.foreach{ case(a,index) =>
        sram_data_bundle(index) := io.sram_port.rdata((index + 1) * width  - 1, index  * width)
    }
    io.douta := sram_data_bundle(shift_num)

    

    
    

   
}


// class unsigned_div extends Module{

//     val io = IO(new Bundle {
//         val aclk = Input(Clock())
//         val s_axis_divisor_tvalid  = Input(UInt(1.W))
//         val s_axis_divisor_tready  = Output(UInt(1.W))
//         val s_axis_divisor_tdata   = Input(UInt(32.W))
//         val s_axis_dividend_tvalid = Input(UInt(1.W))
//         val s_axis_dividend_tready = Output(UInt(1.W))
//         val s_axis_dividend_tdata  = Input(UInt(32.W))
//         val m_axis_dout_tvalid     = Output(UInt(1.W))
//         val m_axis_dout_tdata      = Output(UInt(64.W))
//   })
  
  

// }

// class signed_div extends Module{

//     val io = IO(new Bundle {
//         val aclk = Input(Clock())
//         val s_axis_divisor_tvalid  = Input(UInt(1.W))
//         val s_axis_divisor_tready  = Output(UInt(1.W))
//         val s_axis_divisor_tdata   = Input(UInt(32.W))498
//         val s_axis_dividend_tvalid = Input(UInt(1.W))
//         val s_axis_dividend_tready = Output(UInt(1.W))
//         val s_axis_dividend_tdata  = Input(UInt(32.W))
//         val m_axis_dout_tvalid     = Output(UInt(1.W))
//         val m_axis_dout_tdata      = Output(UInt(64.W))

//   })

// }


// object data_ram_one_port_test extends App{
//     (new ChiselStage).emitVerilog(new data_ram_one_simple_two_ports(128,32))
// }