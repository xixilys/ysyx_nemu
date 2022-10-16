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
        VL_IN8(__PVT__io1_MemRLE,1,0);
        VL_OUT8(__PVT__io_MemRLM,1,0);
        VL_OUT8(__PVT__io_Tlb_ControlM,2,0);
        VL_OUT8(__PVT__io_mem_trace_budleM_mem_fetch_type,1,0);
        CData/*0:0*/ __PVT__InDelaySlot_Reg;
        CData/*1:0*/ __PVT__BranchJump_JrM_Reg;
        CData/*1:0*/ __PVT__mem_trace_budleReg_mem_fetch_type;
        CData/*0:0*/ __Vdly__InDelaySlot_Reg;
        CData/*1:0*/ __Vdly__BranchJump_JrM_Reg;
        CData/*1:0*/ __Vdly__mem_trace_budleReg_mem_fetch_type;
        VL_IN(__PVT__io_mem_trace_budleE_data,31,0);
        VL_OUT(__PVT__io_mem_trace_budleM_data,31,0);
        IData/*31:0*/ __PVT__mem_trace_budleReg_data;
        IData/*31:0*/ __Vdly__mem_trace_budleReg_data;
        CData/*1:0*/ __PVT__MemRLM_Reg;
        CData/*1:0*/ __Vdly__MemRLM_Reg;
        CData/*2:0*/ __PVT__Tlb_Control_Reg;
        CData/*2:0*/ __Vdly__Tlb_Control_Reg;
        VL_IN8(__PVT__io1_Tlb_Control,2,0);
        VL_OUT(__PVT__io_WriteCP0HiLoDataM,31,0);
        IData/*31:0*/ __PVT__WriteCP0HiLoData_Reg;
        IData/*31:0*/ __Vdly__WriteCP0HiLoData_Reg;
        VL_OUT8(__PVT__io_CP0WriteM,0,0);
        VL_OUT8(__PVT__io_WriteCP0AddrM,4,0);
        CData/*0:0*/ __PVT__CP0Write_Reg;
        CData/*4:0*/ __PVT__WriteCP0Addr_Reg;
        CData/*0:0*/ __Vdly__CP0Write_Reg;
        CData/*4:0*/ __Vdly__WriteCP0Addr_Reg;
        VL_IN64(__PVT__io1_PCE,63,0);
        VL_IN8(__PVT__io_en,0,0);
        VL_IN8(__PVT__io_clr,0,0);
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN64(__PVT__io_mem_trace_budleE_pc,63,0);
        VL_IN8(__PVT__io1_LoadUnsignedE,0,0);
        CData/*0:0*/ __PVT__LoadUnsigned_Reg;
        CData/*0:0*/ __Vdly__LoadUnsigned_Reg;
        VL_IN(__PVT__io_WriteCP0HiLoDataE,31,0);
        VL_IN64(__PVT__io_PhyAddrE,63,0);
        QData/*63:0*/ __PVT__PhyAddr_Reg;
        QData/*63:0*/ __PVT__mem_trace_budleReg_pc;
        QData/*63:0*/ __Vdly__PhyAddr_Reg;
        QData/*63:0*/ __Vdly__mem_trace_budleReg_pc;
        VL_IN8(__PVT__io1_WriteCP0AddrE,4,0);
        VL_OUT8(__PVT__io_LoadUnsignedM,0,0);
        VL_OUT64(__PVT__io_PhyAddrM,63,0);
        VL_OUT64(__PVT__io_PCM,63,0);
        QData/*63:0*/ __PVT__PC_Reg;
        QData/*63:0*/ __Vdly__PC_Reg;
        VL_IN8(__PVT__io1_CP0WriteE,0,0);
        VL_OUT8(__PVT__io_InDelaySlotM,0,0);
        VL_OUT8(__PVT__io_BranchJump_JrM,1,0);
        VL_OUT8(__PVT__io_eBreakM,0,0);
        VL_OUT(__PVT__io_ExceptionTypeM_Out,31,0);
        VL_OUT8(__PVT__io_mem_trace_budleM_len,2,0);
        VL_OUT64(__PVT__io_Pc_NextM,63,0);
        VL_OUT64(__PVT__io_mem_trace_budleM_pc,63,0);
        VL_OUT64(__PVT__io_mem_trace_budleM_addr,63,0);
        VL_IN8(__PVT__io1_WriteCP0SelE,2,0);
        VL_IN8(__PVT__io1_eBreakE,0,0);
        VL_IN8(__PVT__io_mem_trace_budleE_len,2,0);
        VL_OUT8(__PVT__io_WriteCP0SelM,2,0);
        CData/*2:0*/ __PVT__WriteCP0Sel_Reg;
        CData/*2:0*/ __PVT__mem_trace_budleReg_len;
    };
    struct {
        CData/*2:0*/ __Vdly__WriteCP0Sel_Reg;
        CData/*2:0*/ __Vdly__mem_trace_budleReg_len;
        VL_IN64(__PVT__io_Pc_NextE,63,0);
        VL_IN64(__PVT__io_mem_trace_budleE_addr,63,0);
        QData/*63:0*/ __PVT__pc_nextReg;
        QData/*63:0*/ __PVT__mem_trace_budleReg_addr;
        QData/*63:0*/ __Vdly__pc_nextReg;
        QData/*63:0*/ __Vdly__mem_trace_budleReg_addr;
        VL_IN8(__PVT__io1_InDelaySlotE,0,0);
        VL_IN8(__PVT__io1_BranchJump_JrE,1,0);
        VL_IN8(__PVT__io_mem_trace_budleE_mem_fetch_type,1,0);
        CData/*0:0*/ __PVT__eBreak_Reg;
        CData/*0:0*/ __Vdly__eBreak_Reg;
        VL_IN(__PVT__io_ExceptionTypeE,31,0);
        IData/*31:0*/ __PVT__ExceptionType_Reg;
        IData/*31:0*/ __Vdly__ExceptionType_Reg;
        VL_IN64(__PVT__io_RtE,63,0);
        VL_IN8(__PVT__io1_MemWidthE,1,0);
        CData/*1:0*/ __PVT__MemWidth_Reg;
        CData/*1:0*/ __Vdly__MemWidth_Reg;
        VL_OUT8(__PVT__io_MemWidthM,1,0);
        VL_OUT64(__PVT__io_RtM,63,0);
        QData/*63:0*/ __PVT__RtM_Reg;
        QData/*63:0*/ __Vdly__RtM_Reg;
        VL_OUT8(__PVT__io_MemToRegM,0,0);
        VL_IN8(__PVT__io1_MemToRegE,0,0);
        VL_OUT8(__PVT__io_RegWriteM,0,0);
        VL_OUT8(__PVT__io_WriteRegM,4,0);
        CData/*0:0*/ __PVT__RegWrite_Reg;
        CData/*0:0*/ __PVT__MemToReg_Reg;
        CData/*4:0*/ __PVT__WriteReg_Reg;
        CData/*0:0*/ __Vdly__RegWrite_Reg;
        CData/*0:0*/ __Vdly__MemToReg_Reg;
        CData/*4:0*/ __Vdly__WriteReg_Reg;
        VL_IN8(__PVT__io1_RegWriteE,0,0);
        VL_IN8(__PVT__io_WriteRegE,4,0);
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
