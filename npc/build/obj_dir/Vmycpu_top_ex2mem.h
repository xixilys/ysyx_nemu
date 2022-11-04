// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_EX2MEM_H_
#define VERILATED_VMYCPU_TOP_EX2MEM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_ex2mem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN16(__PVT__io1_WritecsrAddrE,11,0);
        VL_IN8(__PVT__io1_eBreakE,0,0);
        CData/*0:0*/ __PVT__LoadUnsigned_Reg;
        CData/*0:0*/ __Vdly__LoadUnsigned_Reg;
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__io_en,0,0);
        VL_IN8(__PVT__io_clr,0,0);
        VL_IN8(__PVT__io1_RegWriteE,0,0);
        VL_IN8(__PVT__io_WriteRegE,4,0);
        VL_IN8(__PVT__io1_csrWriteE,0,0);
        VL_IN64(__PVT__io_Pc_NextE,63,0);
        QData/*63:0*/ __PVT__pc_nextReg;
        QData/*63:0*/ __Vdly__pc_nextReg;
        VL_OUT8(__PVT__io_csrWriteM,0,0);
        CData/*0:0*/ __PVT__csrWrite_Reg;
        CData/*0:0*/ __Vdly__csrWrite_Reg;
        VL_OUT16(__PVT__io_WritecsrAddrM,11,0);
        SData/*11:0*/ __PVT__WritecsrAddr_Reg;
        SData/*11:0*/ __Vdly__WritecsrAddr_Reg;
        VL_OUT64(__PVT__io_WriteDataM,63,0);
        QData/*63:0*/ __PVT__WriteData_Reg;
        QData/*63:0*/ __Vdly__WriteData_Reg;
        VL_IN8(__PVT__io1_MemWidthE,1,0);
        VL_OUT8(__PVT__io_MemWidthM,1,0);
        CData/*1:0*/ __PVT__MemWidth_Reg;
        CData/*1:0*/ __Vdly__MemWidth_Reg;
        IData/*31:0*/ __PVT__ExceptionType_Reg;
        IData/*31:0*/ __Vdly__ExceptionType_Reg;
        VL_IN(__PVT__io_ExceptionTypeE,31,0);
        VL_IN(__PVT__io_mem_trace_budleE_data,31,0);
        IData/*31:0*/ __PVT__mem_trace_budleReg_data;
        IData/*31:0*/ __Vdly__mem_trace_budleReg_data;
        VL_IN8(__PVT__io_mem_trace_budleE_mem_fetch_type,1,0);
        VL_OUT8(__PVT__io_mem_trace_budleM_mem_fetch_type,1,0);
        CData/*1:0*/ __PVT__mem_trace_budleReg_mem_fetch_type;
        CData/*1:0*/ __Vdly__mem_trace_budleReg_mem_fetch_type;
        VL_IN64(__PVT__io_WriteDataE,63,0);
        VL_IN8(__PVT__io1_LoadUnsignedE,0,0);
        CData/*1:0*/ __PVT__BranchJump_JrM_Reg;
        CData/*1:0*/ __Vdly__BranchJump_JrM_Reg;
        VL_IN8(__PVT__io1_BranchJump_JrE,1,0);
        VL_OUT8(__PVT__io_MemRLM,1,0);
        VL_IN64(__PVT__io1_PCE,63,0);
        VL_IN64(__PVT__io_mem_trace_budleE_pc,63,0);
        QData/*63:0*/ __PVT__PC_Reg;
        QData/*63:0*/ __PVT__mem_trace_budleReg_pc;
        QData/*63:0*/ __PVT__CsrWritedataReg;
        QData/*63:0*/ __Vdly__PC_Reg;
        QData/*63:0*/ __Vdly__mem_trace_budleReg_pc;
        QData/*63:0*/ __Vdly__CsrWritedataReg;
        VL_IN8(__PVT__io1_MemRLE,1,0);
        CData/*1:0*/ __PVT__MemRLM_Reg;
        CData/*1:0*/ __Vdly__MemRLM_Reg;
        CData/*0:0*/ __PVT__eBreak_Reg;
        CData/*0:0*/ __Vdly__eBreak_Reg;
        VL_IN64(__PVT__io_CsrWritedataE,63,0);
        VL_OUT8(__PVT__io_eBreakM,0,0);
        VL_OUT64(__PVT__io_PCM,63,0);
        VL_OUT64(__PVT__io_Pc_NextM,63,0);
        VL_OUT64(__PVT__io_mem_trace_budleM_pc,63,0);
        VL_OUT64(__PVT__io_CsrWritedataM,63,0);
        VL_OUT8(__PVT__io_LoadUnsignedM,0,0);
        VL_IN64(__PVT__io_RtE,63,0);
        VL_OUT64(__PVT__io_RtM,63,0);
    };
    struct {
        QData/*63:0*/ __PVT__RtM_Reg;
        QData/*63:0*/ __Vdly__RtM_Reg;
        VL_IN64(__PVT__io_PhyAddrE,63,0);
        VL_OUT8(__PVT__io_BranchJump_JrM,1,0);
        VL_OUT64(__PVT__io_PhyAddrM,63,0);
        QData/*63:0*/ __PVT__PhyAddr_Reg;
        QData/*63:0*/ __Vdly__PhyAddr_Reg;
        VL_OUT(__PVT__io_ExceptionTypeM_Out,31,0);
        VL_OUT8(__PVT__io_RegWriteM,0,0);
        VL_OUT8(__PVT__io_MemToRegM,0,0);
        VL_OUT8(__PVT__io_WriteRegM,4,0);
        CData/*0:0*/ __PVT__RegWrite_Reg;
        CData/*0:0*/ __PVT__MemToReg_Reg;
        CData/*4:0*/ __PVT__WriteReg_Reg;
        CData/*0:0*/ __Vdly__RegWrite_Reg;
        CData/*0:0*/ __Vdly__MemToReg_Reg;
        CData/*4:0*/ __Vdly__WriteReg_Reg;
        VL_IN8(__PVT__io1_MemToRegE,0,0);
        VL_OUT8(__PVT__io_mem_trace_budleM_len,2,0);
        VL_OUT64(__PVT__io_mem_trace_budleM_addr,63,0);
        VL_IN8(__PVT__io_mem_trace_budleE_len,2,0);
        CData/*2:0*/ __PVT__mem_trace_budleReg_len;
        CData/*2:0*/ __Vdly__mem_trace_budleReg_len;
        VL_OUT(__PVT__io_mem_trace_budleM_data,31,0);
        VL_IN64(__PVT__io_mem_trace_budleE_addr,63,0);
        QData/*63:0*/ __PVT__mem_trace_budleReg_addr;
        QData/*63:0*/ __Vdly__mem_trace_budleReg_addr;
        VL_OUT8(__PVT__io_Tlb_ControlM,2,0);
        VL_IN8(__PVT__io1_Tlb_Control,2,0);
        CData/*2:0*/ __PVT__Tlb_Control_Reg;
        CData/*2:0*/ __Vdly__Tlb_Control_Reg;
        VL_IN8(__PVT__reset,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_ex2mem(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_ex2mem();
    VL_UNCOPYABLE(Vmycpu_top_ex2mem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
