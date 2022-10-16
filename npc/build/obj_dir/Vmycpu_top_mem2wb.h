// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_MEM2WB_H_
#define VERILATED_VMYCPU_TOP_MEM2WB_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_mem2wb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_BranchJump_JrM,1,0);
        VL_IN8(__PVT__io_eBreakM,0,0);
        VL_IN(__PVT__io_Mem_trace_budleM_data,31,0);
        VL_OUT8(__PVT__io_BranchJump_JrW,1,0);
        VL_OUT8(__PVT__io_eBreakW,0,0);
        VL_OUT8(__PVT__io_Mem_trace_budleW_mem_fetch_type,1,0);
        VL_OUT8(__PVT__io_Mem_trace_budleW_len,2,0);
        CData/*1:0*/ __PVT__BranchJump_JrW_Reg;
        CData/*0:0*/ __PVT__ebreak_Reg;
        CData/*1:0*/ __PVT__Mem_trace_budleReg_mem_fetch_type;
        CData/*2:0*/ __PVT__Mem_trace_budleReg_len;
        CData/*1:0*/ __Vdly__BranchJump_JrW_Reg;
        CData/*0:0*/ __Vdly__ebreak_Reg;
        CData/*1:0*/ __Vdly__Mem_trace_budleReg_mem_fetch_type;
        CData/*2:0*/ __Vdly__Mem_trace_budleReg_len;
        VL_OUT(__PVT__io_Mem_trace_budleW_data,31,0);
        IData/*31:0*/ __PVT__Mem_trace_budleReg_data;
        IData/*31:0*/ __Vdly__Mem_trace_budleReg_data;
        VL_OUT64(__PVT__io_Pc_NextW,63,0);
        VL_OUT64(__PVT__io_Mem_trace_budleW_pc,63,0);
        VL_OUT64(__PVT__io_Mem_trace_budleW_addr,63,0);
        QData/*63:0*/ __PVT__pc_nextReg;
        QData/*63:0*/ __PVT__Mem_trace_budleReg_pc;
        QData/*63:0*/ __PVT__Mem_trace_budleReg_addr;
        QData/*63:0*/ __Vdly__pc_nextReg;
        QData/*63:0*/ __Vdly__Mem_trace_budleReg_pc;
        QData/*63:0*/ __Vdly__Mem_trace_budleReg_addr;
        VL_IN8(__PVT__io_Mem_trace_budleM_len,2,0);
        VL_IN64(__PVT__io_Pc_NextM,63,0);
        VL_IN64(__PVT__io_Mem_trace_budleM_pc,63,0);
        VL_IN64(__PVT__io_Mem_trace_budleM_addr,63,0);
        VL_IN8(__PVT__io_Mem_trace_budleM_mem_fetch_type,1,0);
        VL_OUT64(__PVT__io_PCW,63,0);
        QData/*63:0*/ __PVT__PCW;
        QData/*63:0*/ __Vdly__PCW;
        VL_IN64(__PVT__io_PCM,63,0);
        VL_IN8(__PVT__io_CP0WriteM,0,0);
        VL_OUT8(__PVT__io_CP0WriteW,0,0);
        VL_OUT8(__PVT__io_InDelaySlotW,0,0);
        VL_IN64(__PVT__io_WriteCP0HiLoDataM,63,0);
        VL_OUT64(__PVT__io_WriteCP0HiLoDataW,63,0);
        QData/*63:0*/ __PVT__WriteCP0HiLoDataW;
        QData/*63:0*/ __Vdly__WriteCP0HiLoDataW;
        CData/*0:0*/ __PVT__InDelaySlotW;
        CData/*0:0*/ __Vdly__InDelaySlotW;
        VL_OUT8(__PVT__io_WriteCP0AddrW,4,0);
        VL_OUT8(__PVT__io_WriteCP0SelW,2,0);
        CData/*4:0*/ __PVT__WriteCP0AddrW;
        CData/*2:0*/ __PVT__WriteCP0SelW;
        CData/*4:0*/ __Vdly__WriteCP0AddrW;
        CData/*2:0*/ __Vdly__WriteCP0SelW;
        VL_OUT(__PVT__io_ExceptionTypeW_Out,31,0);
        IData/*31:0*/ __PVT__ExceptionTypeW;
        IData/*31:0*/ __Vdly__ExceptionTypeW;
        VL_IN8(__PVT__io_WriteCP0AddrM,4,0);
        VL_IN8(__PVT__io_WriteCP0SelM,2,0);
        VL_IN8(__PVT__io_InDelaySlotM,0,0);
        VL_IN(__PVT__io_ExceptionTypeM,31,0);
        VL_IN64(__PVT__io_ResultM,63,0);
        VL_OUT8(__PVT__io_RegWriteW_Out,0,0);
        VL_OUT8(__PVT__io_WriteRegW,4,0);
        CData/*0:0*/ __PVT__RegWriteW;
        CData/*4:0*/ __PVT__WriteRegW;
        CData/*0:0*/ __Vdly__RegWriteW;
    };
    struct {
        CData/*4:0*/ __Vdly__WriteRegW;
        VL_OUT64(__PVT__io_ResultW,63,0);
        QData/*63:0*/ __PVT__ResultW;
        QData/*63:0*/ __Vdly__ResultW;
        VL_IN8(__PVT__io_RegWriteM,0,0);
        VL_IN8(__PVT__io_WriteRegM,4,0);
        CData/*0:0*/ __PVT__CP0WriteW;
        CData/*0:0*/ __Vdly__CP0WriteW;
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_en,0,0);
        VL_IN8(__PVT__io_clr,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_mem2wb(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_mem2wb();
    VL_UNCOPYABLE(Vmycpu_top_mem2wb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
