// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_MEM_TRACE_MODULE_H_
#define VERILATED_VMYCPU_TOP_MEM_TRACE_MODULE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_mem_trace_module final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__mem_req,0,0);
    VL_IN8(__PVT__mem_size,2,0);
    VL_IN8(__PVT__mem_write_read,0,0);
    VL_IN64(__PVT__addr,63,0);
    VL_IN64(__PVT__data,63,0);
    VL_IN64(__PVT__pc,63,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_mem_trace_module(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_mem_trace_module();
    VL_UNCOPYABLE(Vmycpu_top_mem_trace_module);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
