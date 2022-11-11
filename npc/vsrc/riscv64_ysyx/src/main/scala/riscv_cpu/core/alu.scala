package examples

import chisel3._
import chisel3.stage._
import chisel3.util._

class alu extends Module with riscv_macros {
        
    val io = IO(new Bundle { 

        val ctrl  = Input(UInt(24.W)) // 使用独热码来进行控制

        val in1   = Input(UInt(data_length.W))
        val in2   = Input(UInt(data_length.W))

        val result = Output(UInt(data_length.W))
        val overflow = Output(UInt(1.W))
        val data_w   = Input(Bool())

    })
   // val result_Reg = RegInit(0.U(32.W))
    // io.result     :=  result_Reg//给输出加上寄存器
    val sa         = io.in2(5,0) 
    val sa_for_32bit = io.in2(4,0)

    val answer_and   =  io.in1 & io.in2
    val answer_or    =  io.in1 | io.in2
    val answer_xor   =  io.in1 ^ io.in2
    val answer_nor   =  ~answer_or  //或非

    val answer_slt   = Mux((io.in1.asSInt <  io.in2.asSInt),1.U,0.U)//有符号小于比较
    val answer_sltu  = Mux((io.in1 <  io.in2),1.U,0.U)//无符号小于比较
    val answer_sll   = io.in1 << sa

    val answer_srl   = io.in1 >> sa
    val answer_srlw  = io.in1(31,0) >> sa_for_32bit
    val answer_sra   = (io.in1.asSInt >> sa).asUInt
    val answer_sraw  = (io.in1(31,0).asSInt >> sa_for_32bit).asUInt

    val answer_lui   = sign_extend(Cat(io.in2(31,12),0.U(12.W)),32) // 输入2

    val in1_extend   = Cat(io.in1(data_length - 1),io.in1)
    val in2_extend   = Cat(io.in2(data_length - 1),io.in2)

    val answer_add   = in1_extend + in2_extend  //使用变形补码法来判断溢出
    val answer_sub   = in1_extend - in2_extend 

    val normal_result =  Mux1H(Seq(
        io.ctrl(ALU_ADD)    -> answer_add(data_length - 1,0),
        io.ctrl(ALU_ADDE)   -> answer_add(data_length - 1,0),
        io.ctrl(ALU_ADDU)   -> answer_add(data_length - 1,0),
        io.ctrl(ALU_SUB)    -> answer_sub(data_length - 1,0),
        io.ctrl(ALU_SUBE)   -> answer_sub(data_length - 1,0),
        io.ctrl(ALU_SUBU)   -> answer_sub(data_length - 1,0),
        io.ctrl(ALU_AND)    -> answer_and,
        io.ctrl(ALU_OR)     -> answer_or,
        io.ctrl(ALU_NOR)    -> answer_nor,
        io.ctrl(ALU_XOR)    -> answer_xor,
        io.ctrl(ALU_LUI)    -> answer_lui,
        io.ctrl(ALU_SLL)    -> answer_sll,
        io.ctrl(ALU_SLT)    -> answer_slt,
        io.ctrl(ALU_SRA)    -> Mux(io.data_w,answer_sraw,answer_sra),
        io.ctrl(ALU_SRL)    -> Mux(io.data_w,answer_srlw,answer_srl),
        io.ctrl(ALU_SLTU)   -> answer_sltu
    ))
    io.result := Mux(io.data_w,sign_extend(normal_result(31,0),32),normal_result)
    io.overflow := (io.ctrl(ALU_ADDE) && (answer_add(data_length) =/= answer_add(data_length - 1))) || (io.ctrl(ALU_SUBE) && (answer_sub(data_length) =/= answer_sub(data_length - 1)))
}
// object alu_test extends App{
//     (new ChiselStage).emitVerilog(new alu)
// }

