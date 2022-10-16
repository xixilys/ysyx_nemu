// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_clock = vlSelf->__PVT__clock;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__7\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in 
        = vlSelf->__PVT__io_pht_in;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__io_aw_pht_ways_addr), 0U, 3U));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_flush) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_stall) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_1_pht_lookup_0;
    }
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2\n"); );
    // Body
    vlSelf->__PVT__stage_2_pht_lookup_0 = vlSelf->__Vdly__stage_2_pht_lookup_0;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}
