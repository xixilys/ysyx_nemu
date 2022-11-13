// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_banks_oneissue_block_ram.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4\n"); );
    // Body
    vlSelf->__Vdly__ar_bank_sel_reg = vlSelf->__PVT__ar_bank_sel_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5\n"); );
    // Body
    vlSelf->__Vdly__ar_bank_sel_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : (IData)(vlSelf->__PVT__io_ar_bank_sel));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__ar_bank_sel_reg = vlSelf->__Vdly__ar_bank_sel_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((1U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_1_pht_out)
                              : (IData)(vlSelf->__PVT__phts_banks_0_pht_out));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((2U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_2_pht_out)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__phts_banks_3_out = vlSelf->__PVT__PHTS_with_block_ram_3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__3(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__phts_banks_2_out = vlSelf->__PVT__PHTS_with_block_ram_2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__phts_banks_0_out = vlSelf->__PVT__PHTS_with_block_ram_io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__phts_banks_1_out = vlSelf->__PVT__PHTS_with_block_ram_1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((3U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                                  ? (IData)(vlSelf->__PVT__phts_banks_3_pht_out)
                                  : (IData)(vlSelf->__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_1_out)
                              : (IData)(vlSelf->__PVT__phts_banks_0_out));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__8(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__8\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_2_out)
                              : (IData)(vlSelf->__PVT___GEN_1));
}
