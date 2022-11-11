// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram\n"); );
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___ctor_var_reset(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_pc = 0;
    vlSelf->__PVT__io_write_pc = 0;
    vlSelf->__PVT__io_aw_pht_ways_addr = 0;
    vlSelf->__PVT__io_aw_pht_addr = 0;
    vlSelf->__PVT__io_aw_bht_addr = 0;
    vlSelf->__PVT__io_aw_target_addr = 0;
    vlSelf->__PVT__io_btb_write = 0;
    vlSelf->__PVT__io_bht_write = 0;
    vlSelf->__PVT__io_pht_write = 0;
    vlSelf->__PVT__io_bht_in = 0;
    vlSelf->__PVT__io_pht_in = 0;
    vlSelf->__PVT__io_out_L = 0;
    vlSelf->__PVT__io_pre_L = 0;
    vlSelf->__PVT__io_bht_L = 0;
    vlSelf->__PVT__io_btb_hit_0 = 0;
    vlSelf->__PVT__io_pre_target_L = 0;
    vlSelf->__PVT__io_stage2_stall = 0;
    vlSelf->__PVT__io_stage2_flush = 0;
    vlSelf->__PVT__io_pht_lookup_value_out = 0;
    vlSelf->__PVT__io_lookup_data_0 = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_out_L = 0;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out = 0;
    vlSelf->__PVT__BHT_banks_oneissue_clock = 0;
    vlSelf->__PVT__BHT_banks_oneissue_reset = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_write = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_in = 0;
    vlSelf->__PVT__BHT_banks_oneissue_io_out_L = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L = 0;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L = 0;
    vlSelf->__PVT__pc_hash_num_array_0 = 0;
    vlSelf->__PVT__pc_hash_num_array_1 = 0;
    vlSelf->__PVT__pc_hash_num_array_2 = 0;
    vlSelf->__PVT__pc_hash_num_array_3 = 0;
    vlSelf->__PVT__pc_hash = 0;
    vlSelf->__PVT__stage_2_pht_lookup_0 = 0;
    vlSelf->__PVT__stage_1_pht_lookup_0 = 0;
    vlSelf->__PVT___io_pre_L_T_1 = 0;
    vlSelf->__PVT___io_pre_L_T_3 = 0;
    vlSelf->__Vdly__stage_2_pht_lookup_0 = 0;
}
