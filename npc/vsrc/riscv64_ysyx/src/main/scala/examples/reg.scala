package examples

import chisel3._
import chisel3.util._

class REG extends Module {

    val io = IO(new Bundle {

        val io = Input(UInt(1.W))
        val a  = Input(UInt(8.W))
        val en = Input(Bool())
        val c  = Output(UInt(1.W)) 
    })
    val reg0 = RegNext(io.a)
    val reg1 = RegInit(io.a)
    val reg2 = Reg(UInt(8.W))
    val reg3 = ShiftRegister(io.a,4);
    val reg4 = RegNext(VecInit(io.a,io.a))
    reg2 := io.a
    io.c := reg0(0) || reg1(4)||reg2(5) || reg3(3) || reg4(0)(2) || reg4(1)(4)
}
import chisel3.stage.ChiselStage

// object Reg_test extends App{
//     (new ChiselStage).emitVerilog(new REG)
// }
