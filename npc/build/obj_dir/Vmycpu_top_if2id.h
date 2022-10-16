// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_IF2ID_H_
#define VERILATED_VMYCPU_TOP_IF2ID_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_if2id final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN64(__PVT__io_PCPlus4F,63,0);
    VL_IN64(__PVT__io_PCF,63,0);
    CData/*1:0*/ __PVT__ExceptionTypeD_Reg;
    CData/*1:0*/ __Vdly__ExceptionTypeD_Reg;
    VL_OUT64(__PVT__io_PCD,63,0);
    QData/*63:0*/ __PVT__PCPlus4D_Reg;
    QData/*63:0*/ __PVT__PCD_Reg;
    QData/*63:0*/ __Vdly__PCPlus4D_Reg;
    QData/*63:0*/ __Vdly__PCD_Reg;
    VL_OUT8(__PVT__io_ExceptionTypeD_Out,1,0);
    VL_OUT64(__PVT__io_PCPlus4D,63,0);
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__io_InDelaySlotD,0,0);
    CData/*0:0*/ __PVT__InDelaySlotD_Reg;
    CData/*0:0*/ __Vdly__InDelaySlotD_Reg;
    VL_IN8(__PVT__io_NextDelaySlotD,0,0);
    VL_OUT(__PVT__io_InstrD,31,0);
    IData/*31:0*/ __Vdly__InstrD_Reg;
    IData/*31:0*/ __PVT__InstrD_Reg;
    QData/*63:0*/ __PVT___InstrD_Reg_T_3;
    VL_IN64(__PVT__io_InstrF,63,0);
    QData/*63:0*/ __PVT___InstrD_Reg_T_2;
    VL_IN8(__PVT__io_ExceptionTypeF,1,0);
    VL_IN8(__PVT__io_en,0,0);
    VL_IN8(__PVT__io_clr,0,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_if2id(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_if2id();
    VL_UNCOPYABLE(Vmycpu_top_if2id);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
