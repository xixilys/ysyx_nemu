package examples

import chisel3._
import chisel3.stage._
import chisel3.util._
import chisel3.util.experimental.decode.decoder
class ex_in_and_out_port extends Bundle {
    val    data_length = 64
    val    RegWriteE= Output(UInt(1.W))
    val    MemToRegE= Output(UInt(1.W))
    val    MemWriteE= Output(UInt(1.W))
    val    ALUCtrlE= Output(UInt(16.W))
    val    ALUSrcE= Vec(2,Output(Bool()))
    val    RegDstE= Output(UInt(5.W))
    val    LinkE= Output(UInt(1.W))
    val    PCPlus4E= Output(UInt(data_length.W))
    val    LoadUnsignedE= Output(UInt(1.W))
    val    MemWidthE= Output(UInt(2.W))
 
    val    csrWriteE= Output(UInt(1.W))
  
    val    WritecsrAddrE= Output(UInt(12.W))
    val    ReadcsrAddrE= Output(UInt(12.W))

    val    PCE= Output(UInt(data_length.W))

    val    BranchJump_JrE = Output(Bool())
    // val    Tlb_Control    = Output(UInt(3.W))
    val    eBreakE        = Output(Bool())
    // val    fence_i_control = Output(Bool())
 
    
   
    // val    R1E  =       Output(UInt(32.W))
    
   
}

class id2ex extends Module with riscv_macros{ //觉得除法器那一块有很多可以改的东西，但是怕改了出问题，还是不要改了吧
    val io1 = (IO(Flipped(new decoder_port)))
    val io2 = (IO(new ex_in_and_out_port))
    
    val io = IO(new Bundle { //有隐式的时钟与复位，并且复位为高电平复位
        //流水线中的延迟器
    val               en= Input(UInt(1.W))
    val               clr= Input(UInt(1.W))
    
    val         csrToRegE_Out= Output(UInt(1.W))
    val         RD1D= Input(UInt(data_length.W))
    val         RD2D= Input(UInt(data_length.W))
    val         R2D= Input(UInt(5.W))
    val         R1D= Input(UInt(5.W))
    val         RdD= Input(UInt(5.W))
    val         ImmD= Input(UInt(data_length.W))
    val         PCPlus4D= Input(UInt(data_length.W))
    val         WritecsrAddrD= Input(UInt(12.W))

    val         ReadcsrAddrD= Input(UInt(12.W))
    
    val         PCD = Input(UInt(data_length.W))
    val         ExceptionTypeD= Input(UInt(32.W))
    val         Pc_NextD = Input(UInt(data_length.W))

    // val         


    
    val         BranchJump_JrD = Input(Bool())
    val         BadVaddrD = Input(UInt(data_length.W))
    // val         Tlb_Control = Input(UInt(3.W))

    
    val         RD1E= Output(UInt(data_length.W))
    val         RD2E= Output(UInt(data_length.W))
    val         R2E= Output(UInt(5.W))
    val         R1E= Output(UInt(5.W))
    val         RdE= Output(UInt(5.W))
    val         ImmE= Output(UInt(data_length.W))
    val         BadVaddrE = Output(UInt(data_length.W))
    val         data_wE = Output(Bool())
    val         Pc_NextE = Output(UInt(data_length.W))
    val         muldiv_control = Output(UInt(24.W))
    val         alu_calE = Output(Bool())
    val         muldiv_calE = Output(Bool())
    val         inst_should_skipE = Output(Bool())
    val         ExceptionTypeE_Out = Output(UInt(32.W))
    val         csr_controlE   = Output(UInt(3.W))
    val         csr_ImmE       = Output(Bool())

    val         fence_i_controlE = Output(Bool())
    
    })
    val    RegWriteE_Reg = RegInit(0.U(1.W))
    val    MemToRegE_Reg = RegInit(0.U(1.W))
    val    MemWriteE_Reg = RegInit(0.U(1.W))
    val    ALUCtrlE_Reg = RegInit(0.U(16.W))
    val    ALUSrcE_Reg = RegInit(VecInit(Seq.fill(2)(0.U(2.W))))
    val    RegDstE_Reg = RegInit(0.U(5.W))
    val    RD1E_Reg = RegInit(0.U(data_length.W))
    val    RD2E_Reg = RegInit(0.U(data_length.W))
    val    R2E_Reg = RegInit(0.U(5.W))
    val    R1E_Reg = RegInit(0.U(5.W))
    val    RdE_Reg = RegInit(0.U(5.W))
    val    ImmE_Reg = RegInit(0.U(data_length.W))
    val    LinkE_Reg = RegInit(0.U(1.W))
    val    PCPlus4E_Reg = RegInit(0.U(data_length.W))
    val    LoadUnsignedE_Reg = RegInit(0.U(1.W))
    val    MemWidthE_Reg = RegInit(0.U(2.W))
    val    fence_i_controlE_Reg = RegInit(0.U.asBool)


    val    WritecsrAddrE_Reg = RegInit(0.U(12.W))
    val    ReadcsrAddrE_Reg = RegInit(0.U(12.W))
    val    PCE_Reg = RegInit(0.U(data_length.W))
    val    ExceptionTypeE_Reg = RegInit(0.U(32.W))
    val    MemRLE_Reg       = RegInit(0.U(2.W))
    val    BranchJump_JrE_Reg = RegInit(0.U.asBool)
    val    BadVaddrE_Reg = RegInit(0.U(data_length.W))
    // val    Tlb_Control_Reg   = RegInit(0.U(3.W))
    val    ebreak_Reg  = RegInit(0.U.asBool)
    val    data_WReg = RegInit(0.U.asBool)
    val    Pc_NextReg = RegInit(0.U(data_length.W))
    val    muldiv_Reg = RegInit(0.U(24.W))
    val    inst_should_skip_Reg = RegInit(0.U.asBool)

    val    decoder_port_reg = RegInit(0.U.asTypeOf(new decoder_port))
    decoder_port_reg := Mux(io.clr.asBool,0.U.asTypeOf(new decoder_port),Mux(io.en.asBool,io1,decoder_port_reg))

    RD1E_Reg                :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.RD1D,RD1E_Reg))
    RD2E_Reg                :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.RD2D,RD2E_Reg))
    R2E_Reg                 :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.R2D,R2E_Reg))
    R1E_Reg                 :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.R1D,R1E_Reg))
    RdE_Reg                 :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.RdD,RdE_Reg))
    ImmE_Reg                :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.ImmD,ImmE_Reg))
    PCPlus4E_Reg            :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.PCPlus4D,PCPlus4E_Reg))
    WritecsrAddrE_Reg       :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.WritecsrAddrD,WritecsrAddrE_Reg))
    // WritecsrSelE_Reg        :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.WritecsrSelD,WritecsrSelE_Reg))
    ReadcsrAddrE_Reg        :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.ReadcsrAddrD,ReadcsrAddrE_Reg))
    // ReadcsrSelE_Reg         :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.ReadcsrSelD,ReadcsrSelE_Reg))
    PCE_Reg                 :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.PCD,PCE_Reg))
    ExceptionTypeE_Reg      :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.ExceptionTypeD,ExceptionTypeE_Reg))
    BranchJump_JrE_Reg      :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.BranchJump_JrD, BranchJump_JrE_Reg))
    BadVaddrE_Reg           :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.BadVaddrD, BadVaddrE_Reg))  
    // Tlb_Control_Reg         :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.Tlb_Control, Tlb_Control_Reg))  
    Pc_NextReg              :=        Mux(io.clr.asBool,0.U,Mux(io.en.asBool,io.Pc_NextD,Pc_NextReg))


    io.muldiv_calE    := decoder_port_reg.muldiv_cal
    io.alu_calE       := decoder_port_reg.alu_cal
    io2.RegWriteE     := decoder_port_reg.RegWriteD 
    io2.MemToRegE     := decoder_port_reg.MemToRegD
    io2.MemWriteE     := decoder_port_reg.MemWriteD
    io2.ALUCtrlE      := decoder_port_reg.ALUCtrlD
    io2.ALUSrcE       := decoder_port_reg.ALUSrcD
    io2.RegDstE       := decoder_port_reg.RegDstD
    io.RD1E           := RD1E_Reg 
    io.RD2E           := RD2E_Reg 
    io.R2E            := R2E_Reg 
    io.R1E            := R1E_Reg 
    io.RdE            := RdE_Reg 
    io.ImmE           := ImmE_Reg 
    io2.LinkE         := decoder_port_reg.LinkD
    io2.PCPlus4E      := PCPlus4E_Reg
    io2.LoadUnsignedE := decoder_port_reg.LoadUnsignedD 
    io2.MemWidthE     := decoder_port_reg.MemWidthD
    io2.csrWriteE     := decoder_port_reg.csrWriteD
    io.csrToRegE_Out     := decoder_port_reg.csrToRegD
    io2.WritecsrAddrE := WritecsrAddrE_Reg 
    io2.ReadcsrAddrE  := ReadcsrAddrE_Reg 
    io2.PCE           := PCE_Reg 

    io.ExceptionTypeE_Out:= ExceptionTypeE_Reg 
    io2.BranchJump_JrE := BranchJump_JrE_Reg 
    io.BadVaddrE      := BadVaddrE_Reg 
    
    // io2.Tlb_Control   := Tlb_Control_Reg
    io.data_wE            := decoder_port_reg.data_wD
    io2.eBreakE           := decoder_port_reg.ebreakD
    io.fence_i_controlE   := decoder_port_reg.fence_i_control
    io.Pc_NextE           := Pc_NextReg
    io.muldiv_control     := decoder_port_reg.muldiv_control
    io.inst_should_skipE  := decoder_port_reg.inst_should_skip
    io.csr_controlE       := decoder_port_reg.csr_control
    io.csr_ImmE           := decoder_port_reg.csr_Imm

}

// object id2ex_test extends App{
//     (new ChiselStage).emitVerilog(new id2ex)
// }

