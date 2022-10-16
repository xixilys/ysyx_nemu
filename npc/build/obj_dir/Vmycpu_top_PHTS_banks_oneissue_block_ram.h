// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_PHTS_BANKS_ONEISSUE_BLOCK_RAM_H_
#define VERILATED_VMYCPU_TOP_PHTS_BANKS_ONEISSUE_BLOCK_RAM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_PHTS_with_block_ram;


class Vmycpu_top_PHTS_banks_oneissue_block_ram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_PHTS_with_block_ram* __PVT__PHTS_with_block_ram;
    Vmycpu_top_PHTS_with_block_ram* __PVT__PHTS_with_block_ram_1;
    Vmycpu_top_PHTS_with_block_ram* __PVT__PHTS_with_block_ram_2;
    Vmycpu_top_PHTS_with_block_ram* __PVT__PHTS_with_block_ram_3;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_ar_bank_sel,1,0);
        VL_IN8(__PVT__io_ar_pht_addr,2,0);
        CData/*0:0*/ __PVT__PHTS_with_block_ram_reset;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_io_ar_pht_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_io_write;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_1_reset;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_1_io_ar_pht_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_2_reset;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_2_io_ar_pht_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_3_reset;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_3_io_ar_pht_addr;
        CData/*1:0*/ __Vdly__ar_bank_sel_reg;
        CData/*1:0*/ __PVT__ar_bank_sel_reg;
        VL_OUT8(__PVT__io_out_L,1,0);
        VL_OUT8(__PVT__io_pht_out,7,0);
        CData/*7:0*/ __PVT__PHTS_with_block_ram_io_pht_out;
        CData/*1:0*/ __PVT__PHTS_with_block_ram_io_out;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_1_io_pht_out;
        CData/*1:0*/ __PVT__PHTS_with_block_ram_1_io_out;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_2_io_pht_out;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_3_io_pht_out;
        CData/*1:0*/ __PVT__phts_banks_0_out;
        CData/*1:0*/ __PVT__phts_banks_1_out;
        CData/*1:0*/ __PVT___GEN_1;
        CData/*1:0*/ __PVT___GEN_2;
        CData/*7:0*/ __PVT__phts_banks_0_pht_out;
        CData/*7:0*/ __PVT__phts_banks_1_pht_out;
        CData/*7:0*/ __PVT___GEN_5;
        CData/*7:0*/ __PVT__phts_banks_2_pht_out;
        CData/*7:0*/ __PVT___GEN_6;
        CData/*7:0*/ __PVT__phts_banks_3_pht_out;
        CData/*1:0*/ __PVT__phts_banks_2_out;
        CData/*1:0*/ __PVT__phts_banks_3_out;
        CData/*1:0*/ __PVT__PHTS_with_block_ram_2_io_out;
        CData/*1:0*/ __PVT__PHTS_with_block_ram_3_io_out;
        VL_IN8(__PVT__io_aw_bank_sel,1,0);
        VL_IN8(__PVT__io_write,0,0);
        VL_IN8(__PVT__io_ar_addr_L,6,0);
        CData/*6:0*/ __PVT__PHTS_with_block_ram_io_ar_addr;
        CData/*6:0*/ __PVT__PHTS_with_block_ram_1_io_ar_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_1_io_write;
        CData/*6:0*/ __PVT__PHTS_with_block_ram_2_io_ar_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_2_io_write;
        CData/*6:0*/ __PVT__PHTS_with_block_ram_3_io_ar_addr;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_3_io_write;
        VL_IN8(__PVT__io_aw_pht_addr,2,0);
        VL_IN8(__PVT__io_in,7,0);
        CData/*2:0*/ __PVT__PHTS_with_block_ram_io_aw_pht_addr;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_io_in;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_1_io_aw_pht_addr;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_1_io_in;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_2_io_aw_pht_addr;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_2_io_in;
        CData/*2:0*/ __PVT__PHTS_with_block_ram_3_io_aw_pht_addr;
        CData/*7:0*/ __PVT__PHTS_with_block_ram_3_io_in;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_clock;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_1_clock;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_2_clock;
        CData/*0:0*/ __PVT__PHTS_with_block_ram_3_clock;
        VL_IN8(__PVT__io_aw_addr,6,0);
        CData/*6:0*/ __PVT__PHTS_with_block_ram_io_aw_addr;
        CData/*6:0*/ __PVT__PHTS_with_block_ram_1_io_aw_addr;
    };
    struct {
        CData/*6:0*/ __PVT__PHTS_with_block_ram_2_io_aw_addr;
        CData/*6:0*/ __PVT__PHTS_with_block_ram_3_io_aw_addr;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_PHTS_banks_oneissue_block_ram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_PHTS_banks_oneissue_block_ram();
    VL_UNCOPYABLE(Vmycpu_top_PHTS_banks_oneissue_block_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
