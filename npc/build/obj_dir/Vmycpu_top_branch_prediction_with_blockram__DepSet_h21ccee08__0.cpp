// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_banks_oneissue_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock 
        = vlSelf->__PVT__BHT_banks_oneissue_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__reset 
        = vlSelf->__PVT__BHT_banks_oneissue_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__reset 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_write 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_write 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_2_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr, 4U, 9U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr, 4U, 9U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_1_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr, 4U, 9U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_2_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr, 4U, 9U));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_in 
        = vlSelf->__PVT__BHT_banks_oneissue_io_in;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_write 
        = vlSelf->__PVT__BHT_banks_oneissue_io_write;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    vlSelf->__PVT__io_pht_lookup_value_out = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out 
        = vlSelf->__PVT__io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_out_L;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_hit_L;
    vlSelf->__PVT__io_btb_hit_0 = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L;
}
