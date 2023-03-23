
package difftest


import chisel3._
import chisel3.util._
import Chisel.BlackBox
import chisel3.experimental.{DataMirror, ExtModule}

// abstract class  
class difftest_commit (data_length:Int)extends BlackBox {
    val io = IO(new Bundle{
        val reset = Input(Bool())
        val clock = Input(Bool())
        val gpr_wire = Input(UInt((data_length * 32).W))
        val pc = Input(UInt(data_length.W))
        val debug_pc = Input(UInt(data_length.W))
        val inst_commit = Input(Bool())
        val data_ok_ok = Output(Bool())
        val cpu_ebreak_sign = Input(Bool())
        val cpu_timer_int = Input(Bool())
    })

}
class mem_trace_module (data_length:Int) extends BlackBox {
    val io = IO(new Bundle{
        val reset = Input(Bool())
        val clock = Input(Bool())
        val data = Input(UInt((data_length).W))
        val pc = Input(UInt(data_length.W))
        val addr = Input(UInt(data_length.W))
        val mem_req  = Input(Bool())
        val mem_write_read = Input(Bool())
        val mem_size  = Input(UInt(3.W))
        val mem_cached = Input(Bool())
    })

}
class log_print(data_length:Int) extends  BlackBox {
    val io = IO(new Bundle{
        val reset = Input(Bool())
        val clock = Input(Bool())
        val pc = Input(UInt(data_length.W))
        val inst_commit = Input(Bool())
        val cpu_ebreak_sign = Input(Bool())
    })
}