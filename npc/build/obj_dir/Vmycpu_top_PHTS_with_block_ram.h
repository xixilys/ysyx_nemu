// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_PHTS_WITH_BLOCK_RAM_H_
#define VERILATED_VMYCPU_TOP_PHTS_WITH_BLOCK_RAM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_pht_data_with_block_ram;


class Vmycpu_top_PHTS_with_block_ram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_1;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_2;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_3;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_4;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_5;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_6;
    Vmycpu_top_pht_data_with_block_ram* __PVT__pht_data_with_block_ram_7;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ __PVT__phts_0_rdata;
        CData/*7:0*/ __PVT__phts_1_rdata;
        CData/*7:0*/ __PVT__phts_2_rdata;
        CData/*7:0*/ __PVT__phts_3_rdata;
        CData/*7:0*/ __PVT__phts_4_rdata;
        CData/*7:0*/ __PVT__phts_5_rdata;
        CData/*7:0*/ __PVT__phts_6_rdata;
        CData/*7:0*/ __PVT__phts_7_rdata;
        VL_OUT8(__PVT__io_out,1,0);
        CData/*7:0*/ __PVT___GEN_1;
        CData/*7:0*/ __PVT___GEN_2;
        CData/*7:0*/ __PVT___GEN_3;
        CData/*7:0*/ __PVT___GEN_4;
        CData/*7:0*/ __PVT___GEN_5;
        CData/*7:0*/ __PVT___GEN_6;
        CData/*7:0*/ __PVT___GEN_7;
        CData/*1:0*/ __PVT___io_out_T_10;
        CData/*1:0*/ __PVT___io_out_T_12;
        CData/*6:0*/ __PVT__raddr_reg;
        CData/*7:0*/ __PVT__ways_araddr_reg;
        VL_OUT8(__PVT__io_pht_out,7,0);
        CData/*7:0*/ __PVT__pht_data_with_block_ram_2_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_4_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_5_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_6_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_7_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_3_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_io_rdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_1_io_rdata;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_1_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_2_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_3_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_6_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_7_io_waddr;
        VL_IN8(__PVT__io_aw_addr,6,0);
        CData/*4:0*/ __PVT__pht_data_with_block_ram_4_io_waddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_5_io_waddr;
        VL_IN8(__PVT__io_ar_pht_addr,2,0);
        CData/*6:0*/ __Vdly__raddr_reg;
        CData/*7:0*/ __Vdly__ways_araddr_reg;
        VL_IN8(__PVT__clock,0,0);
        CData/*0:0*/ __PVT__pht_data_with_block_ram_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_1_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_2_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_3_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_4_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_5_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_6_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_7_clock;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_2_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_3_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_io_wen;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_2_io_wen;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_3_io_wen;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_4_io_wen;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_5_io_wen;
        VL_IN8(__PVT__io_ar_addr,6,0);
        VL_IN8(__PVT__io_write,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*0:0*/ __PVT__pht_data_with_block_ram_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_1_reset;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_io_raddr;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_1_io_wen;
    };
    struct {
        CData/*4:0*/ __PVT__pht_data_with_block_ram_1_io_raddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_2_io_raddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_3_io_raddr;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_4_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_5_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_6_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_6_io_wen;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_7_reset;
        CData/*0:0*/ __PVT__pht_data_with_block_ram_7_io_wen;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_4_io_raddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_5_io_raddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_6_io_raddr;
        CData/*4:0*/ __PVT__pht_data_with_block_ram_7_io_raddr;
        VL_IN8(__PVT__io_aw_pht_addr,2,0);
        VL_IN8(__PVT__io_in,7,0);
        CData/*7:0*/ __PVT__pht_data_with_block_ram_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_1_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_4_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_5_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_6_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_7_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_2_io_wdata;
        CData/*7:0*/ __PVT__pht_data_with_block_ram_3_io_wdata;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_PHTS_with_block_ram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_PHTS_with_block_ram();
    VL_UNCOPYABLE(Vmycpu_top_PHTS_with_block_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
