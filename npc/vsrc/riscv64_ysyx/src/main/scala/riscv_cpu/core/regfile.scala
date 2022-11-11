
package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

class regfile extends Module with riscv_macros{
        
    val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位

        val A1   = Input(UInt(5.W))
        val A2   = Input(UInt(5.W))
        val WE3   = Input(UInt(1.W))//write enables 
        val A3   = Input(UInt(5.W))
        val WD3   = Input(UInt(data_length.W))

        val RD1    = Output(UInt(data_length.W))
        val RD2   = Output(UInt(data_length.W))
        val reg_file_alL_out = Output(UInt((data_length * 32).W))
        
    })

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(data_length.W)))) //初始化寄存器
    regs(0) := 0.U
    regs(io.A3) := Mux((io.WE3.asBool && io.A3 =/=0.U),io.WD3,regs(io.A3))

    io.reg_file_alL_out := Cat(regs.reverse)
    //io.RD1 := Mux(io.WE3.asBool && io.A1 === io.A3,io.WD3,Mux1H(reg_search_answer_a1,regs))
    //io.RD2 := Mux(io.WE3.asBool && io.A2 === io.A3,io.WD3,Mux1H(reg_search_answer_a2,regs))
     io.RD1 := Mux(io.WE3.asBool && io.A1 === io.A3 && io.A1 =/= 0.U ,io.WD3,regs(io.A1))
     io.RD2 := Mux(io.WE3.asBool && io.A2 === io.A3 && io.A2 =/= 0.U ,io.WD3,regs(io.A2))
    //      MuxCase(regs(io.A2),Seq(
    //     (io.A2 === 0.U) -> 0.U,
    //     (io.WE3.asBool && io.A2 === io.A3) -> io.WD3
    // ))   
}

// object regfile_test extends App{
//     (new ChiselStage).emitVerilog(new regfile )
// }
