// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset 
        = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock 
        = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock 
        = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7\n"); );
    // Body
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__9(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__9\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__10(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__10\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr = vlSelf->__PVT__io_aw_bht_addr;
    vlSelf->__PVT__BHT_banks_oneissue_io_in = (7U & 
                                               VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_bht_in), 0U, 3U));
    vlSelf->__PVT__BHT_banks_oneissue_io_write = vlSelf->__PVT__io_bht_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__11(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__11\n"); );
    // Body
    vlSelf->__PVT__pc_hash_num_array_0 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 4U, 4U))));
    vlSelf->__PVT__pc_hash_num_array_1 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 8U, 4U))));
    vlSelf->__PVT__pc_hash_num_array_2 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xcU, 4U))));
    vlSelf->__PVT__pc_hash_num_array_3 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0x10U, 4U))));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__12(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__12\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr 
        = vlSelf->__PVT__io_aw_target_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in 
        = vlSelf->__PVT__io_pht_in;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__io_aw_pht_ways_addr), 0U, 3U));
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_write_pc, 2U, 2U));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__14(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__14\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__15(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__15\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__16(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__16\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 4U, 7U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L 
        = vlSelf->__PVT__io_pc;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_write_pc;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__19(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__19\n"); );
    // Body
    vlSelf->__PVT__pc_hash = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__pc_hash_num_array_3), 
                                           VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__pc_hash_num_array_2), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__pc_hash_num_array_1), (IData)(vlSelf->__PVT__pc_hash_num_array_0))));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__21(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__21\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write 
        = vlSelf->__PVT__io_btb_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__23(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__23\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write 
        = vlSelf->__PVT__io_pht_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__27(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__27\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__pc_hash), 0U, 3U));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__32(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__32\n"); );
    // Body
    vlSelf->__PVT__io_pht_lookup_value_out = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__34(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__34\n"); );
    // Body
    vlSelf->__PVT__io_out_L = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__35(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__35\n"); );
    // Body
    vlSelf->__PVT___io_pre_L_T_1 = (0U != (IData)(vlSelf->__PVT__io_out_L));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__36(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__36\n"); );
    // Body
    vlSelf->__PVT___io_pre_L_T_3 = ((1U != (IData)(vlSelf->__PVT__io_out_L)) 
                                    & (IData)(vlSelf->__PVT___io_pre_L_T_1));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__37(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__37\n"); );
    // Body
    vlSelf->__PVT__io_pre_L = ((2U == (IData)(vlSelf->__PVT__io_out_L)) 
                               | (IData)(vlSelf->__PVT___io_pre_L_T_3));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__39(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__39\n"); );
    // Body
    vlSelf->__PVT__stage_1_pht_lookup_0 = VL_CONCAT_III(7,3,4, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L), 
                                                        (0xfU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xbU, 4U)));
    vlSelf->__PVT__io_bht_L = VL_EXTEND_II(7,3, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__40(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__40\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L 
        = VL_CONCAT_III(7,3,4, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L), 
                        (0xfU & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xbU, 4U)));
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__44(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__44\n"); );
    // Body
    vlSelf->__PVT__io_btb_hit_0 = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L;
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
