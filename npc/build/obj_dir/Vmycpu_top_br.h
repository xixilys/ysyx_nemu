// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BR_H_
#define VERILATED_VMYCPU_TOP_BR_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_br final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__io_exe,0,0);
    CData/*0:0*/ __PVT___result_T;
    CData/*0:0*/ __PVT___result_T_1;
    CData/*0:0*/ __PVT___result_T_4;
    CData/*0:0*/ __PVT___result_T_7;
    CData/*0:0*/ __PVT___result_T_8;
    CData/*0:0*/ __PVT___result_T_9;
    CData/*5:0*/ __PVT__result;
    CData/*5:0*/ __PVT___io_exe_T_4;
    VL_IN64(__PVT__io_r1,63,0);
    VL_IN64(__PVT__io_r2,63,0);
    VL_IN8(__PVT__io_branch,5,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_br(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_br();
    VL_UNCOPYABLE(Vmycpu_top_br);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
