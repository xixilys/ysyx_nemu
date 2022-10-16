// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_PC_DETAIL_H_
#define VERILATED_VMYCPU_TOP_PC_DETAIL_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_pc_detail final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_flush,0,0);
    VL_IN8(__PVT__io_stall,0,0);
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT64(__PVT__io_out_pc_value_out,63,0);
    QData/*63:0*/ __PVT__pc_value;
    QData/*63:0*/ __Vdly__pc_value;
    VL_IN64(__PVT__io_in_pc_value_in,63,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_pc_detail(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_pc_detail();
    VL_UNCOPYABLE(Vmycpu_top_pc_detail);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
