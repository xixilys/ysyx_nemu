// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DIFFTEST_COMMIT_H_
#define VERILATED_VMYCPU_TOP_DIFFTEST_COMMIT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_difftest_commit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__pc_debug;
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__inst_commit,0,0);
    VL_IN8(__PVT__cpu_ebreak_sign,0,0);
    VL_IN64(__PVT__pc,63,0);
    VL_IN64(__PVT__debug_pc,63,0);
    VL_IN8(__PVT__clock,0,0);
    VL_OUT8(__PVT__data_ok_ok,0,0);
    VL_INW(__PVT__gpr_wire,2047,0,64);
    VlUnpacked<QData/*63:0*/, 32> __PVT__gpr;
    QData/*63:0*/ __PVT__commit_pc;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_difftest_commit(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_difftest_commit();
    VL_UNCOPYABLE(Vmycpu_top_difftest_commit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
