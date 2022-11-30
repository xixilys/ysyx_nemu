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
//         val s_axis_divisor_tdata   = Input(UInt(32.W))
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