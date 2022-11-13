// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_flush) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_stall) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_1_pht_lookup_0;
    }
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7\n"); );
    // Body
    vlSelf->__PVT__stage_2_pht_lookup_0 = vlSelf->__Vdly__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8\n"); );
    // Body
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__11(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__11\n"); );
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

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__12(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__12\n"); );
    // Body
    vlSelf->__PVT__pc_hash = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__pc_hash_num_array_3), 
                                           VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__pc_hash_num_array_2), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__pc_hash_num_array_1), (IData)(vlSelf->__PVT__pc_hash_num_array_0))));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__pc_hash), 0U, 3U));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4\n"); );
    // Body
    vlSelf->__PVT__io_pre_target_L = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
}
