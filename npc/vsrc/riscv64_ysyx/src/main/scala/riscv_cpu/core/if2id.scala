
package examples

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._



class if2id(length_width :Int,bank_width:Int) extends Module with riscv_macros{
    val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
        //流水线中的延迟器
        val en  = Input(UInt(1.W))
        val clr  = Input(UInt(1.W))

        val InstrF = Input(UInt(32.W))
        val PCPlus4F  = Input(UInt(data_length.W))
        val PCPlus8F  = Input(UInt(data_length.W))
        val PCF       = Input(UInt(data_length.W))
        //这里只处理有关tlb例外有关的东西
        val ExceptionTypeF = Input(UInt(2.W))

        val InstrD   = Output(UInt(32.W))
        val PCPlus4D = Output(UInt(data_length.W))
        val PCPlus8D = Output(UInt(data_length.W))
        val PCD      = Output(UInt(data_length.W))
        val ExceptionTypeD_Out = Output(UInt(2.W))
    
    })
    val InstrD_Reg = RegInit("b0010011".U(32.W))
    val PCPlus4D_Reg = RegInit(0.U(data_length.W))
    val PCPlus8D_Reg = RegInit(0.U(data_length.W))
    val PCD_Reg = RegInit(0.U(data_length.W))
    val ExceptionTypeD_Reg = RegInit(0.U(2.W))


    
    io.InstrD := InstrD_Reg 
    io.PCPlus4D :=  PCPlus4D_Reg
    io.PCPlus8D :=  PCPlus8D_Reg
    io.ExceptionTypeD_Out := ExceptionTypeD_Reg
    io.PCD  :=  PCD_Reg
    

    InstrD_Reg  :=             Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.InstrF,InstrD_Reg  ))
    PCPlus4D_Reg  :=           Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.PCPlus4F,PCPlus4D_Reg ))
    PCPlus8D_Reg  :=           Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.PCPlus8F, PCPlus8D_Reg ))
    PCD_Reg                 :=     Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.PCF,PCD_Reg ))
    ExceptionTypeD_Reg      :=     Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.ExceptionTypeF, ExceptionTypeD_Reg )) 

    

}

// object if2id_test extends App{
//     (new ChiselStage).emitVerilog(new if2id )
// }

