package examples

import chisel3._
import chisel3.stage._
import chisel3.util._

class br extends Module with riscv_macros { //应该就是在id时就开始准备清空流水线或者跳转了
        
    val io = IO(new Bundle { 
        val en  = Input(UInt(1.W))

        val r1  = Input(UInt(data_length.W))
        val r2  = Input(UInt(data_length.W))
        val branch  = Input(UInt(6.W))

        val exe   = Output(UInt(1.W))
    })
    val r1_Wire = Wire(UInt(data_length.W))
    val r2_Wire = Wire(UInt(data_length.W))
    
    r1_Wire :=  Mux(io.en.asBool,io.r1,0.U)
    r2_Wire :=  Mux(io.en.asBool,io.r2,0.U)

    val result = Cat((r1_Wire.asUInt >= r2_Wire.asUInt),
                    (r1_Wire.asUInt < r2_Wire.asUInt),
                    (r1_Wire.asSInt >= r2_Wire.asSInt),
                    (r1_Wire.asSInt <  r2_Wire.asSInt),
                    (r1_Wire =/= r2_Wire ),
                    (r1_Wire === r2_Wire))   //正好代表branch量中不同位代表不同意思 ,具体看macros
    io.exe := io.en.asBool && !reset.asBool && ((result & io.branch) =/= 0.U)
}

// object br_test extends App{
//     (new ChiselStage).emitVerilog(new br)
// }

