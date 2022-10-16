// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BRANCH_PREDICTION_WITH_BLOCKRAM_H_
#define VERILATED_VMYCPU_TOP_BRANCH_PREDICTION_WITH_BLOCKRAM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;
class Vmycpu_top_PHTS_banks_oneissue_block_ram;
class Vmycpu_top_BHT_banks_oneissue;
class Vmycpu_top_BTB_banks_oneissue_with_block_ram;


class Vmycpu_top_branch_prediction_with_blockram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_PHTS_banks_oneissue_block_ram* __PVT__PHTS_banks_oneissue_block_ram;
    Vmycpu_top_BHT_banks_oneissue* __PVT__BHT_banks_oneissue;
    Vmycpu_top_BTB_banks_oneissue_with_block_ram* __PVT__BTB_banks_oneissue_with_block_ram;

    // DESIGN SPECIFIC STATE
    VL_IN64(__PVT__io_pc,63,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_aw_bht_addr,6,0);
    CData/*0:0*/ __PVT__BHT_banks_oneissue_reset;
    CData/*6:0*/ __PVT__BHT_banks_oneissue_io_aw_addr;
    CData/*0:0*/ __PVT__PHTS_banks_oneissue_block_ram_clock;
    CData/*0:0*/ __PVT__BTB_banks_oneissue_with_block_ram_clock;
    CData/*0:0*/ __PVT__BTB_banks_oneissue_with_block_ram_reset;
    QData/*63:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L;
    QData/*63:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr;
    VL_IN8(__PVT__io_bht_in,6,0);
    CData/*6:0*/ __PVT__BHT_banks_oneissue_io_ar_addr_L;
    CData/*2:0*/ __PVT__BHT_banks_oneissue_io_in;
    VL_IN8(__PVT__io_aw_pht_ways_addr,3,0);
    VL_IN8(__PVT__io_pht_in,7,0);
    CData/*2:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr;
    CData/*7:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_in;
    VL_IN8(__PVT__io_aw_pht_addr,6,0);
    CData/*6:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_aw_addr;
    CData/*0:0*/ __PVT__BHT_banks_oneissue_clock;
    VL_IN64(__PVT__io_aw_target_addr,63,0);
    QData/*63:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr;
    VL_IN64(__PVT__io_write_pc,63,0);
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__io_btb_write,0,0);
    VL_IN8(__PVT__io_bht_write,0,0);
    VL_IN8(__PVT__io_pht_write,0,0);
    VL_OUT8(__PVT__io_lookup_data_0,6,0);
    CData/*0:0*/ __PVT__PHTS_banks_oneissue_block_ram_reset;
    CData/*1:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel;
    CData/*2:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr;
    CData/*1:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel;
    CData/*0:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_write;
    CData/*1:0*/ __PVT__BHT_banks_oneissue_io_ar_bank_sel;
    CData/*0:0*/ __PVT__BHT_banks_oneissue_io_write;
    CData/*0:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_write;
    CData/*0:0*/ __PVT__pc_hash_num_array_0;
    CData/*0:0*/ __PVT__pc_hash_num_array_1;
    CData/*0:0*/ __PVT__pc_hash_num_array_2;
    CData/*0:0*/ __PVT__pc_hash_num_array_3;
    CData/*3:0*/ __PVT__pc_hash;
    CData/*6:0*/ __PVT__stage_2_pht_lookup_0;
    CData/*6:0*/ __Vdly__stage_2_pht_lookup_0;
    CData/*6:0*/ __PVT__stage_1_pht_lookup_0;
    CData/*6:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L;
    CData/*2:0*/ __PVT__BHT_banks_oneissue_io_out_L;
    VL_OUT8(__PVT__io_out_L,1,0);
    VL_OUT8(__PVT__io_pre_L,0,0);
    VL_OUT8(__PVT__io_bht_L,6,0);
    VL_OUT8(__PVT__io_btb_hit_0,0,0);
    VL_OUT8(__PVT__io_pht_lookup_value_out,7,0);
    CData/*1:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_out_L;
    CData/*7:0*/ __PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
    CData/*0:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_hit_L;
    CData/*0:0*/ __PVT___io_pre_L_T_1;
    CData/*0:0*/ __PVT___io_pre_L_T_3;
    VL_OUT64(__PVT__io_pre_target_L,63,0);
    QData/*63:0*/ __PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
    VL_IN8(__PVT__io_stage2_stall,0,0);
    VL_IN8(__PVT__io_stage2_flush,0,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_branch_prediction_with_blockram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_branch_prediction_with_blockram();
    VL_UNCOPYABLE(Vmycpu_top_branch_prediction_with_blockram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
