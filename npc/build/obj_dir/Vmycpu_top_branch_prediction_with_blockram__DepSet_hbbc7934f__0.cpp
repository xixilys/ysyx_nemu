// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
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

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
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
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__13\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_in = (7U & 
                                               VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_bht_in), 0U, 3U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr 
        = vlSelf->__PVT__io_aw_target_addr;
}

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__17(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__17\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr = vlSelf->__PVT__io_aw_bht_addr;
}
