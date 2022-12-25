package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import dataclass.data


class ex2mem extends Module with riscv_macros {//
        //完全没用到chisel真正好的地方，我是废物呜呜呜呜\
    val io1 = (IO(Flipped(new ex_in_and_out_port)))
    val io = IO(new Bundle {
        val    en   = Input(UInt(1.W))
        val    clr   = Input(UInt(1.W))
        val    ALUOutE   = Input(UInt(data_length.W))
        val    WriteDataE   = Input(UInt(data_length.W))
        val    WriteRegE   = Input(UInt(5.W))
        val    PhyAddrE   = Input(UInt(data_length.W))
        val    CsrWritedataE  = Input(UInt(data_length.W))
        val    csrWriteE   = Input(UInt(1.W))
        val    csrToRegE   = Input(UInt(1.W))
        val    ReadcsrDataE   = Input(UInt(32.W))
        val    BadVAddrE   = Input(UInt(data_length.W))
        val    ExceptionTypeE   = Input(UInt(32.W))
        val    RtE         = Input(UInt(data_length.W))
        val    Pc_NextE     = Input(UInt(data_length.W))
        val    mem_trace_budleE = Input(new mtrace_relative_bundle)
        
        val   RegWriteM   = Output(UInt(1.W))
        val   MemToRegM   = Output(UInt(1.W))
        val   MemWriteM   = Output(UInt(1.W))
        val   ALUOutM   = Output(UInt(data_length.W))
        val   WriteDataM   = Output(UInt(data_length.W))
        val   WriteRegM   = Output(UInt(5.W))
        val   LinkM   = Output(UInt(1.W))
        val   PCPlus4M   = Output(UInt(data_length.W))
        val   LoadUnsignedM   = Output(UInt(1.W))
        val   MemWidthM   = Output(UInt(2.W))
        val   PhyAddrM   = Output(UInt(data_length.W))


        val   csrWriteM   = Output(UInt(1.W))
        val   csrToRegM   = Output(UInt(1.W))
        val   WritecsrAddrM   = Output(UInt(12.W))
        val   ReadcsrDataM   = Output(UInt(32.W))
        val   PCM   = Output(UInt(data_length.W))
        val   BadVAddrM   = Output(UInt(data_length.W))
        val   ExceptionTypeM_Out = Output(UInt(32.W))
        val   MemRLM      = Output(UInt(2.W))
        val   RtM         = Output(UInt(data_length.W))
        val   BranchJump_JrM = Output(UInt(2.W))
        val   Tlb_ControlM   = Output(UInt(3.W))
        val   eBreakM        = Output(Bool())
        val   Pc_NextM       = Output(UInt(data_length.W))
        val   mem_trace_budleM = Output(new mtrace_relative_bundle)
        val   CsrWritedataM  = Output(UInt(data_length.W))
        val   fence_i_controlM = Output(Bool())
    })
        val   RegWrite_Reg  = RegInit(0.U(1.W))
        val   MemToReg_Reg  = RegInit(0.U(1.W))
        val   MemWrite_Reg  = RegInit(0.U(1.W))
        val   ALUOut_Reg  = RegInit(0.U(data_length.W))
        val   WriteData_Reg  = RegInit(0.U(data_length.W))
        val   WriteReg_Reg  = RegInit(0.U(5.W))
        val   Link_Reg  = RegInit(0.U(1.W))
        val   PCPlus4_Reg  = RegInit(0.U(data_length.W))
        val   LoadUnsigned_Reg  = RegInit(0.U(1.W))
        val   MemWidth_Reg  = RegInit(0.U(2.W))
        val   PhyAddr_Reg  = RegInit(0.U(data_length.W))

        val   HiIn_Reg  = RegInit(0.U(32.W))
        val   LoIn_Reg  = RegInit(0.U(32.W))
        val   csrWrite_Reg  = RegInit(0.U(1.W))
        val   csrToReg_Reg  = RegInit(0.U(1.W))
        val   WritecsrAddr_Reg  = RegInit(0.U(12.W))

        val   ReadcsrData_Reg  = RegInit(0.U(32.W))
        val   PC_Reg  = RegInit(0.U(data_length.W))
        val   BadVAddr_Reg  = RegInit(0.U(data_length.W))
        val   ExceptionType_Reg= RegInit(0.U(32.W))
        val   MemRLM_Reg      = RegInit(0.U(2.W))
        val   RtM_Reg = RegInit(0.U(data_length.W))
        val   BranchJump_JrM_Reg = RegInit(0.U(2.W))
        val   Tlb_Control_Reg   =  RegInit(0.U(3.W))
        val   eBreak_Reg  = RegInit(0.U.asBool())
        val   pc_nextReg  = RegInit(0.U(data_length.W))
        val   mem_trace_budleReg = RegInit(0.U.asTypeOf(new mtrace_relative_bundle))
        val   CsrWritedataReg    = RegInit(0.U(data_length.W))

        val   fence_i_controlReg = RegInit(0.U(io1.fence_i_control.getWidth))

  
        RegWrite_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.RegWriteE ,  RegWrite_Reg))
        MemWrite_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.MemWriteE,MemWrite_Reg))
        ALUOut_Reg:=              Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.ALUOutE,ALUOut_Reg))
        WriteData_Reg:=           Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.WriteDataE,WriteData_Reg))
        WriteReg_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.WriteRegE,WriteReg_Reg))
        Link_Reg:=                Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.LinkE,Link_Reg))
        PCPlus4_Reg:=             Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.PCPlus4E,PCPlus4_Reg))
        LoadUnsigned_Reg:=        Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.LoadUnsignedE,LoadUnsigned_Reg))
        MemWidth_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.MemWidthE,MemWidth_Reg))
        PhyAddr_Reg:=             Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.PhyAddrE,PhyAddr_Reg))

        csrWrite_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.csrWriteE,csrWrite_Reg))
        csrToReg_Reg:=            Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.csrToRegE,csrToReg_Reg))
        WritecsrAddr_Reg:=        Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.WritecsrAddrE, WritecsrAddr_Reg))
   
        ReadcsrData_Reg      :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.ReadcsrDataE, ReadcsrData_Reg))
        PC_Reg               :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.PCE,PC_Reg))
        BadVAddr_Reg         :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.BadVAddrE, BadVAddr_Reg))
        ExceptionType_Reg    :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io.ExceptionTypeE, ExceptionType_Reg))
        MemToReg_Reg         :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.MemToRegE, MemToReg_Reg ))
        MemRLM_Reg           :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.MemRLE, MemRLM_Reg ))
        RtM_Reg              :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.RtE,RtM_Reg))
        BranchJump_JrM_Reg   :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io1.BranchJump_JrE, BranchJump_JrM_Reg))
        Tlb_Control_Reg      :=   Mux(io.clr.asBool,0.U, Mux(io.en.asBool,io1.Tlb_Control, Tlb_Control_Reg))
        eBreak_Reg           :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io1.eBreakE,eBreak_Reg))
        pc_nextReg           :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.Pc_NextE,pc_nextReg)) 
        mem_trace_budleReg   :=   Mux(io.clr.asBool,0.U.asTypeOf(new mtrace_relative_bundle),Mux(io.en.asBool,io.mem_trace_budleE,mem_trace_budleReg))
        CsrWritedataReg      :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.CsrWritedataE,CsrWritedataReg))
        fence_i_controlReg   :=   Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io1.fence_i_control,fence_i_controlReg))


        io.RegWriteM         := RegWrite_Reg
        io.MemToRegM         := MemToReg_Reg
        io.MemWriteM         := MemWrite_Reg
        io.ALUOutM           := ALUOut_Reg
        io.WriteDataM        := WriteData_Reg
        io.WriteRegM         := WriteReg_Reg
        io.LinkM             := Link_Reg
        io.PCPlus4M          := PCPlus4_Reg
        io.LoadUnsignedM     := LoadUnsigned_Reg
        io.MemWidthM         := MemWidth_Reg
        io.PhyAddrM          := PhyAddr_Reg


        io.csrWriteM         := csrWrite_Reg
        io.csrToRegM         := csrToReg_Reg
        io.WritecsrAddrM     := WritecsrAddr_Reg

        io.ReadcsrDataM      := ReadcsrData_Reg
        io.PCM               := PC_Reg
        io.BadVAddrM         := BadVAddr_Reg
        io.ExceptionTypeM_Out:= ExceptionType_Reg
        io.MemRLM            := MemRLM_Reg 
        io.RtM               := RtM_Reg 
        io.BranchJump_JrM    := BranchJump_JrM_Reg 
        io.Tlb_ControlM      := Tlb_Control_Reg
        io.eBreakM           := eBreak_Reg
        io.Pc_NextM          := pc_nextReg
        io.mem_trace_budleM  := mem_trace_budleReg
        io.CsrWritedataM     := CsrWritedataReg 
        io.fence_i_controlM  := fence_i_controlReg
}   
// object ex2mem_test extends App{
//     (new ChiselStage).emitVerilog(new ex2mem)
// }

