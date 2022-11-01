// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_flush) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_stall) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_1_pht_lookup_0;
    }
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSelf->__PVT__stage_2_pht_lookup_0 = vlSelf->__Vdly__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6\n"); );
    // Body
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    vlSelf->__PVT__io_pht_lookup_value_out = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2\n"); );
    // Body
    vlSelf->__PVT__stage_1_pht_lookup_0 = VL_CONCAT_III(7,3,4, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L), 
                                                        (0xfU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xbU, 4U)));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__io_bht_L = VL_EXTEND_II(7,3, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSelf->__PVT__io_pre_target_L = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
}
