// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BHT_BANKS_ONEISSUE_H_
#define VERILATED_VMYCPU_TOP_BHT_BANKS_ONEISSUE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_BHT;


class Vmycpu_top_BHT_banks_oneissue final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_BHT* __PVT__BHT;
    Vmycpu_top_BHT* __PVT__BHT_1;
    Vmycpu_top_BHT* __PVT__BHT_2;
    Vmycpu_top_BHT* __PVT__BHT_3;

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ __PVT__BHT_io_ar_addr;
    CData/*6:0*/ __PVT__BHT_1_io_ar_addr;
    VL_IN8(__PVT__clock,0,0);
    CData/*0:0*/ __PVT__BHT_clock;
    CData/*0:0*/ __PVT__BHT_1_clock;
    CData/*0:0*/ __PVT__BHT_2_clock;
    CData/*0:0*/ __PVT__BHT_3_clock;
    VL_IN8(__PVT__io_in,2,0);
    CData/*2:0*/ __PVT__BHT_io_in;
    CData/*2:0*/ __PVT__BHT_1_io_in;
    CData/*2:0*/ __PVT__BHT_2_io_in;
    CData/*2:0*/ __PVT__BHT_3_io_in;
    VL_IN8(__PVT__io_ar_addr_L,6,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_aw_addr,6,0);
    CData/*0:0*/ __PVT__BHT_reset;
    CData/*6:0*/ __PVT__BHT_io_aw_addr;
    CData/*0:0*/ __PVT__BHT_io_write;
    CData/*0:0*/ __PVT__BHT_1_reset;
    CData/*6:0*/ __PVT__BHT_1_io_aw_addr;
    CData/*0:0*/ __PVT__BHT_1_io_write;
    CData/*0:0*/ __PVT__BHT_2_reset;
    CData/*6:0*/ __PVT__BHT_2_io_ar_addr;
    CData/*6:0*/ __PVT__BHT_2_io_aw_addr;
    CData/*0:0*/ __PVT__BHT_2_io_write;
    CData/*0:0*/ __PVT__BHT_3_reset;
    CData/*6:0*/ __PVT__BHT_3_io_ar_addr;
    CData/*6:0*/ __PVT__BHT_3_io_aw_addr;
    CData/*0:0*/ __PVT__BHT_3_io_write;
    CData/*2:0*/ __PVT__BHT_3_io_out;
    CData/*2:0*/ __PVT__bht_banks_3_out;
    VL_OUT8(__PVT__io_out_L,2,0);
    CData/*2:0*/ __PVT__BHT_io_out;
    CData/*2:0*/ __PVT__BHT_1_io_out;
    CData/*2:0*/ __PVT__BHT_2_io_out;
    CData/*2:0*/ __PVT__bht_banks_0_out;
    CData/*2:0*/ __PVT__bht_banks_1_out;
    CData/*2:0*/ __PVT___GEN_1;
    CData/*2:0*/ __PVT__bht_banks_2_out;
    CData/*2:0*/ __PVT___GEN_2;
    VL_IN8(__PVT__io_ar_bank_sel,1,0);
    VL_IN8(__PVT__io_write,0,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_BHT_banks_oneissue(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_BHT_banks_oneissue();
    VL_UNCOPYABLE(Vmycpu_top_BHT_banks_oneissue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
