package examples
import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

class timer(n:Int) extends Module with system_config {
    val io = IO(new Bundle {
        val out = Output(UInt(1.W))
        val en  = Input(UInt(1.W))
    })
    val counter_max = sys_clock_frequency / n
    val(a,b) = Counter(io.en.asBool,(counter_max-1))
    io.out := b   
    when(a(1,1)===0.U){
        io.out := 0.U
    }
}

// object Timer_test extends App{
//     (new ChiselStage).emitVerilog(new timer(1000))
// }
