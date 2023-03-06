package examples

import chisel3._
import chisel3.stage._
import chisel3.util._


class mem2wb extends Module with riscv_macros {//
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜
    val io = IO(new Bundle {
        val        en = Input(UInt(1.W))
        val        clr = Input(UInt(1.W))
        
        val   RegWriteM = Input(UInt(1.W))
        val   MemToRegM = Input(UInt(1.W))
        val   ReadDataM = Input(UInt(data_length.W))
        val   ResultM   = Input(UInt(data_length.W))
        val   WriteRegM = Input(UInt(5.W))


        val   csrWriteM = Input(UInt(1.W))
        val   WritecsrAddrM = Input(UInt(12.W))
        val   CsrWritedataM = Input(UInt(data_length.W))
        val   PCM = Input(UInt(data_length.W))
        val   BadVAddrM = Input(UInt(data_length.W))
        val   ExceptionTypeM = Input(UInt((32 -1) .W))
        val   BranchJump_JrM = Input(Bool())
        // val   Tlb_ControlM    = Input(UInt(3.W))
        val   eBreakM         = Input(Bool())
        val   Pc_NextM        = Input(UInt(data_length.W))
        val   Mem_trace_budleM = Input(new mtrace_relative_bundle)
        
        val   RegWriteW_Out = Output(UInt(1.W))
        val   MemToRegW = Output(UInt(1.W))
        val   ReadDataW = Output(UInt(data_length.W))
        val   ResultW = Output(UInt(data_length.W))
        val   WriteRegW = Output(UInt(5.W))
        val   csrWriteW = Output(UInt(1.W))
        val   WritecsrAddrW      = Output(UInt(12.W))
        val   PCW                = Output(UInt(data_length.W))
        val   BadVAddrW          = Output(UInt(data_length.W))
        val   ExceptionTypeW_Out = Output(UInt((32 - 1).W))
        val   BranchJump_JrW     = Output(Bool())
        // val   Tlb_ControlW       = Output(UInt(3.W))
        val   eBreakW            = Output(Bool())
        val   Pc_NextW           = Output(UInt(data_length.W))
        val   Mem_trace_budleW   = Output(new mtrace_relative_bundle)
        val   CsrWritedataW      = Output(UInt(data_length.W))
    })
            
        val   RegWriteW = RegInit(0.U(1.W))
        val   MemToRegW = RegInit(0.U(1.W))
        val   ReadDataW = RegInit(0.U(data_length.W))
        val   ResultW = RegInit(0.U(data_length.W))
        val   WriteRegW = RegInit(0.U(5.W))

        val   csrWriteW = RegInit(0.U(1.W))
        val   WritecsrAddrW = RegInit(0.U(12.W))

        val   PCW = RegInit(0.U(data_length.W))
        val   BadVAddrW = RegInit(0.U(data_length.W))
        val   ExceptionTypeW = RegInit(0.U((32 -1).W))
        
        val   BranchJump_JrW_Reg = RegInit(0.U.asBool)
        // val   Tlb_Control_Reg = RegInit(0.U(3.W))
        val   ebreak_Reg      = RegInit(0.U.asBool)
        val   pc_nextReg  = RegInit(0.U(data_length.W))
        val   Mem_trace_budleReg = RegInit(0.U.asTypeOf(new mtrace_relative_bundle))
        val   CsrWritedataReg = RegInit(0.U(data_length.W))

        io.RegWriteW_Out           := RegWriteW
        io.MemToRegW           := MemToRegW
        io.ReadDataW           := ReadDataW
        io.ResultW             := ResultW
        io.WriteRegW           := WriteRegW
        io.csrWriteW           := csrWriteW
        io.WritecsrAddrW       := WritecsrAddrW
     
        io.PCW                 := PCW
        io.BadVAddrW           := BadVAddrW
        io.ExceptionTypeW_Out  := ExceptionTypeW
        io.BranchJump_JrW      := BranchJump_JrW_Reg   
        // io.Tlb_ControlW        := Tlb_Control_Reg
        io.eBreakW             := ebreak_Reg
        io.Pc_NextW            := pc_nextReg
        io.Mem_trace_budleW     := Mem_trace_budleReg

        RegWriteW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. RegWriteM,RegWriteW))
        MemToRegW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. MemToRegM,MemToRegW))
        ReadDataW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. ReadDataM,ReadDataW))
        ResultW            := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. ResultM,ResultW))
        WriteRegW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. WriteRegM,WriteRegW))
       

        csrWriteW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. csrWriteM,csrWriteW))
        WritecsrAddrW      := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. WritecsrAddrM,WritecsrAddrW))

        PCW                := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. PCM,PCW))
        BadVAddrW          := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. BadVAddrM,BadVAddrW))
        ExceptionTypeW     := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. ExceptionTypeM,ExceptionTypeW))
        BranchJump_JrW_Reg         :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.BranchJump_JrM, BranchJump_JrW_Reg))
        
        // Tlb_Control_Reg    := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io. Tlb_ControlM,Tlb_Control_Reg))
        ebreak_Reg         := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.eBreakM,ebreak_Reg))
        pc_nextReg         := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.Pc_NextM,pc_nextReg))
        Mem_trace_budleReg := Mux(io.clr.asBool,0.U.asTypeOf(new mtrace_relative_bundle),Mux(io.en.asBool,io.Mem_trace_budleM,Mem_trace_budleReg))
        CsrWritedataReg    := Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.CsrWritedataM,CsrWritedataReg))
        io.CsrWritedataW   := CsrWritedataReg
}

// object mem2wb_test extends App{
//     (new ChiselStage).emitVerilog(new mem2wb)
// }

