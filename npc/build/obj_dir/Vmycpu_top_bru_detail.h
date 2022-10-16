// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BRU_DETAIL_H_
#define VERILATED_VMYCPU_TOP_BRU_DETAIL_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_bru_detail final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__io_out_bht,6,0);
    CData/*6:0*/ __PVT__bht_value;
    CData/*6:0*/ __Vdly__bht_value;
    VL_IN8(__PVT__io_in_bht,6,0);
    CData/*6:0*/ __Vdly__lookup_data_value;
    VL_IN8(__PVT__io_in_lookup_data,6,0);
    VL_OUT8(__PVT__io_out_lookup_data,6,0);
    CData/*6:0*/ __PVT__lookup_data_value;
    VL_OUT8(__PVT__io_out_pht_lookup_value,7,0);
    CData/*3:0*/ __PVT__hashcode_value;
    CData/*3:0*/ __Vdly__hashcode_value;
    VL_IN8(__PVT__io_in_hashcode,3,0);
    VL_OUT8(__PVT__io_out_hashcode,3,0);
    CData/*7:0*/ __PVT__pht_lookup_value_data;
    CData/*7:0*/ __Vdly__pht_lookup_value_data;
    VL_IN8(__PVT__io_in_pht_lookup_value,7,0);
    CData/*1:0*/ __PVT__pht_value;
    CData/*1:0*/ __Vdly__pht_value;
    QData/*63:0*/ __PVT__target_pc_value;
    QData/*63:0*/ __Vdly__target_pc_value;
    VL_IN64(__PVT__io_in_target_pc,63,0);
    VL_OUT64(__PVT__io_out_target_pc,63,0);
    VL_OUT8(__PVT__io_out_pht,1,0);
    VL_IN8(__PVT__io_in_pht,1,0);
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_flush,0,0);
    VL_IN8(__PVT__io_stall,0,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_bru_detail(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_bru_detail();
    VL_UNCOPYABLE(Vmycpu_top_bru_detail);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
