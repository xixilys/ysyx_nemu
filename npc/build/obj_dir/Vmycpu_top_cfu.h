// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_CFU_H_
#define VERILATED_VMYCPU_TOP_CFU_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_cfu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__io_FlushW,0,0);
        VL_OUT8(__PVT__io_FlushD,0,0);
        VL_OUT8(__PVT__io_Forward1E,1,0);
        CData/*0:0*/ __PVT___io_Forward1E_T_6;
        CData/*0:0*/ __PVT___io_Forward1E_T_12;
        CData/*0:0*/ __PVT___io_Forward1E_T_15;
        CData/*1:0*/ __PVT___io_Forward1E_T_17;
        CData/*1:0*/ __PVT___io_Forward1E_T_18;
        VL_IN8(__PVT__io_RegWriteW,0,0);
        CData/*0:0*/ __PVT___io_Forward2D_T_5;
        VL_IN8(__PVT__io_WriteRegM,4,0);
        VL_IN8(__PVT__io_MemToRegM,0,0);
        VL_IN8(__PVT__io_R1D,4,0);
        VL_IN8(__PVT__io_R2D,4,0);
        VL_IN8(__PVT__io_R2E,4,0);
        VL_OUT8(__PVT__io_Forward2E,1,0);
        VL_OUT8(__PVT__io_Forward1D,1,0);
        CData/*0:0*/ __PVT___io_Forward2D_T_3;
        CData/*0:0*/ __PVT___io_Forward2D_T_9;
        CData/*0:0*/ __PVT___io_Forward1D_T_3;
        CData/*0:0*/ __PVT___io_Forward1D_T_9;
        CData/*0:0*/ __PVT___io_Forward1D_T_12;
        CData/*1:0*/ __PVT___io_Forward1D_T_13;
        CData/*1:0*/ __PVT___io_Forward1D_T_14;
        CData/*0:0*/ __PVT___io_Forward2E_T_3;
        CData/*0:0*/ __PVT___io_Forward2E_T_6;
        CData/*0:0*/ __PVT___io_Forward2E_T_9;
        CData/*0:0*/ __PVT___io_Forward2E_T_12;
        CData/*0:0*/ __PVT___io_Forward2E_T_15;
        CData/*1:0*/ __PVT___io_Forward2E_T_17;
        CData/*1:0*/ __PVT___io_Forward2E_T_18;
        CData/*0:0*/ __PVT___io_Forward1E_T_3;
        CData/*0:0*/ __PVT___io_Forward1E_T_9;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_9;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_10;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_15;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_16;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_21;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_22;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_27;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_28;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_33;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_34;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_39;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_40;
        CData/*0:0*/ __PVT___mem2regM_Stall_T_45;
        VL_IN8(__PVT__io_WriteRegW,4,0);
        VL_IN8(__PVT__io_R1E,4,0);
        CData/*0:0*/ __PVT___io_Forward2D_T_11;
        VL_IN8(__PVT__io_RegWriteM,0,0);
        VL_IN8(__PVT__io_WriteRegM2,4,0);
        VL_IN8(__PVT__io_RegWriteM2,0,0);
        VL_IN8(__PVT__io_MemToRegM2,0,0);
        VL_IN8(__PVT__io_WriteRegE,4,0);
        VL_OUT8(__PVT__io_Forward2D,1,0);
        CData/*0:0*/ __PVT___io_Forward2D_T_12;
        CData/*1:0*/ __PVT___io_Forward2D_T_13;
        CData/*1:0*/ __PVT___io_Forward2D_T_14;
        CData/*0:0*/ __PVT___br_Stall_T_12;
        CData/*0:0*/ __PVT___br_Stall_T_16;
        VL_IN8(__PVT__io_dmem_calD,0,0);
        VL_IN8(__PVT__io_RegWriteE,0,0);
        CData/*0:0*/ __PVT___br_Stall_T_5;
        CData/*0:0*/ __PVT___br_Stall_T_13;
    };
    struct {
        CData/*0:0*/ __PVT___br_Stall_T_18;
        CData/*0:0*/ __PVT___jr_Stall_T_12;
        VL_OUT8(__PVT__io_StallD,0,0);
        VL_OUT8(__PVT__io_StallM2,0,0);
        VL_OUT8(__PVT__io_StallW,0,0);
        VL_OUT8(__PVT__io_FlushM,0,0);
        VL_OUT8(__PVT__io_FlushM2,0,0);
        CData/*0:0*/ __PVT___br_Stall_T_10;
        CData/*0:0*/ __PVT___br_Stall_T_19;
        CData/*0:0*/ __PVT___br_Stall_T_20;
        CData/*0:0*/ __PVT__br_Stall;
        CData/*0:0*/ __PVT___jr_Stall_T_8;
        CData/*0:0*/ __PVT___jr_Stall_T_9;
        CData/*0:0*/ __PVT___jr_Stall_T_13;
        CData/*0:0*/ __PVT___jr_Stall_T_14;
        CData/*0:0*/ __PVT__dmem_addr_cal_Stall;
        CData/*0:0*/ __PVT___io_StallF_T_5;
        CData/*0:0*/ __PVT___io_StallM_T_1;
        VL_IN8(__PVT__io_BranchD_Flag,0,0);
        VL_IN8(__PVT__io_JRD,0,0);
        VL_IN8(__PVT__io_CanBranchD,0,0);
        CData/*0:0*/ __PVT___br_Stall_T_22;
        VL_IN8(__PVT__io_InException,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__io_StallE,0,0);
        VL_OUT8(__PVT__io_StallM,0,0);
        CData/*0:0*/ __PVT___has_Stall_T;
        VL_IN8(__PVT__io_DataPendingM,0,0);
        CData/*0:0*/ __PVT__mem2regM_Stall;
        VL_IN8(__PVT__io_Inst_Fifo_Empty,0,0);
        VL_OUT8(__PVT__io_StallF,0,0);
        VL_OUT8(__PVT__io_FlushE,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_cfu(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_cfu();
    VL_UNCOPYABLE(Vmycpu_top_cfu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
