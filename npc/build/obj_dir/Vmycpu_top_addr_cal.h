// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_ADDR_CAL_H_
#define VERILATED_VMYCPU_TOP_ADDR_CAL_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_addr_cal final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT64(__PVT__io_d_paddr,63,0);
    VL_IN64(__PVT__io_d_vaddr,63,0);
    VL_OUT8(__PVT__io_d_cached,0,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_addr_cal(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_addr_cal();
    VL_UNCOPYABLE(Vmycpu_top_addr_cal);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
