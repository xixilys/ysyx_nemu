package examples
import chisel3._
import chisel3.stage.ChiselStage


class logic_experiment_lib1 extends Module{
    
    val io = IO(new Bundle {
        val en   = Input(UInt(1.W))
        val in   = Input(UInt(1.W))
        val out0 = Output(UInt(7.W))
        val out1 = Output(UInt(7.W))
        val out_sel1 = Output(UInt(4.W))
        val out_sel2 = Output(UInt(4.W))
    })
    val timer_reg = Wire(UInt(1.W))
    val num_reg   = RegInit(0.U(32.W))
    val timer1    = Module( new timer(10))
    timer_reg := timer1.io.out

    val show_number = Module(new Show_Numbers)
    io.out_sel1 := show_number.io.out_sel1
    io.out_sel2 := show_number.io.out_sel2
    show_number.io.in := num_reg
    io.out0 := show_number.io.out0
    io.out1 := show_number.io.out1

    timer1.io.en := io.en
    show_number.io.en := io.en

    withClock(clock) {
        when(io.in === 1.U) {
            num_reg := 20202542.U
        }.elsewhen(timer_reg === 1.U) {
            when(num_reg === 20202542.U) {
                num_reg := 0.U
            }.otherwise {
                num_reg := num_reg + 1.U
            }
        }.otherwise{
            num_reg := num_reg
        }

    }
}
    
//  object lib1_test extends App{
//     (new ChiselStage).emitVerilog(new logic_experiment_lib1)
// }
   



    
