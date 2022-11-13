// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BHT_banks_oneissue.h"

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0\n"); );
    // Body
    vlSelf->__PVT__BHT_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_1_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_2_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_3_io_in = vlSelf->__PVT__io_in;
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0\n"); );
    // Body
    vlSelf->__PVT__bht_banks_2_out = vlSelf->__PVT__BHT_2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__1(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__1\n"); );
    // Body
    vlSelf->__PVT__bht_banks_0_out = vlSelf->__PVT__BHT_io_out;
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__2(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__2\n"); );
    // Body
    vlSelf->__PVT__bht_banks_1_out = vlSelf->__PVT__BHT_1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__3(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__3\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_bank_sel))
                              ? (IData)(vlSelf->__PVT__bht_banks_1_out)
                              : (IData)(vlSelf->__PVT__bht_banks_0_out));
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__4(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__4\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_bank_sel))
                              ? (IData)(vlSelf->__PVT__bht_banks_2_out)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__6(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__6\n"); );
    // Body
    vlSelf->__PVT__BHT_io_write = ((0U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                   & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_1_io_write = ((1U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_2_io_write = ((2U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_3_io_write = ((3U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
}
