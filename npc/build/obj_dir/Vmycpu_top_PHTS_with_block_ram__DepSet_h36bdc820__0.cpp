// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_with_block_ram.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__phts_4_rdata = vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__5(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__phts_5_rdata = vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__6(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__phts_3_rdata = vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__7(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__phts_2_rdata = vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0\n"); );
    // Body
    vlSelf->__Vdly__raddr_reg = vlSelf->__PVT__raddr_reg;
    vlSelf->__Vdly__ways_araddr_reg = vlSelf->__PVT__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__1\n"); );
    // Body
    vlSelf->__Vdly__ways_araddr_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__io_ar_pht_addr)));
    vlSelf->__Vdly__raddr_reg = ((IData)(vlSelf->__PVT__reset)
                                  ? 0U : (IData)(vlSelf->__PVT__io_ar_addr));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__raddr_reg = vlSelf->__Vdly__raddr_reg;
    vlSelf->__PVT__ways_araddr_reg = vlSelf->__Vdly__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__11(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__phts_7_rdata = vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__12(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__phts_6_rdata = vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__13(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__13\n"); );
    // Body
    vlSelf->__PVT__phts_0_rdata = vlSelf->__PVT__pht_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__14(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__14\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_1_rdata)
                              : (IData)(vlSelf->__PVT__phts_0_rdata));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__15(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__15\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_2_rdata)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__16(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__16\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_3_rdata)
                              : (IData)(vlSelf->__PVT___GEN_2));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__17(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__17\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_4_rdata)
                              : (IData)(vlSelf->__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__18(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__18\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_5_rdata)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__19(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__19\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_6_rdata)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__20(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__20\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_7_rdata)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__21(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__21\n"); );
    // Body
    vlSelf->__PVT___io_out_T_10 = (3U & ((0U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 0U, 2U)
                                          : VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 6U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__22(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__22\n"); );
    // Body
    vlSelf->__PVT___io_out_T_12 = (3U & ((1U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 2U, 2U)
                                          : (IData)(vlSelf->__PVT___io_out_T_10)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__3\n"); );
    // Body
    vlSelf->__PVT__phts_4_rdata = vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__phts_3_rdata = vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__5(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__phts_2_rdata = vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__9(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__9\n"); );
    // Body
    vlSelf->__PVT__phts_5_rdata = vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__10(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__10\n"); );
    // Body
    vlSelf->__PVT__phts_0_rdata = vlSelf->__PVT__pht_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__11(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__11\n"); );
    // Body
    vlSelf->__PVT__phts_1_rdata = vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__Vdly__raddr_reg = vlSelf->__PVT__raddr_reg;
    vlSelf->__Vdly__ways_araddr_reg = vlSelf->__PVT__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__1\n"); );
    // Body
    vlSelf->__Vdly__ways_araddr_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__io_ar_pht_addr)));
    vlSelf->__Vdly__raddr_reg = ((IData)(vlSelf->__PVT__reset)
                                  ? 0U : (IData)(vlSelf->__PVT__io_ar_addr));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__raddr_reg = vlSelf->__Vdly__raddr_reg;
    vlSelf->__PVT__ways_araddr_reg = vlSelf->__Vdly__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__14(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__14\n"); );
    // Body
    vlSelf->__PVT__phts_7_rdata = vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__15(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__15\n"); );
    // Body
    vlSelf->__PVT__phts_6_rdata = vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__16(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__16\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_1_rdata)
                              : (IData)(vlSelf->__PVT__phts_0_rdata));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__17(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__17\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_2_rdata)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__18(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__18\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_3_rdata)
                              : (IData)(vlSelf->__PVT___GEN_2));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__19(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__19\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_4_rdata)
                              : (IData)(vlSelf->__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__20(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__20\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_5_rdata)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__21(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__21\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_6_rdata)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__22(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__22\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_7_rdata)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__23(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__23\n"); );
    // Body
    vlSelf->__PVT___io_out_T_10 = (3U & ((0U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 0U, 2U)
                                          : VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 6U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__24(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__24\n"); );
    // Body
    vlSelf->__PVT___io_out_T_12 = (3U & ((1U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 2U, 2U)
                                          : (IData)(vlSelf->__PVT___io_out_T_10)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__phts_7_rdata = vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__5(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__phts_4_rdata = vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__6(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__6\n"); );
    // Body
    vlSelf->__PVT__phts_3_rdata = vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__7(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__phts_1_rdata = vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__10(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__10\n"); );
    // Body
    vlSelf->__PVT__phts_2_rdata = vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__11(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__11\n"); );
    // Body
    vlSelf->__PVT__phts_0_rdata = vlSelf->__PVT__pht_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__Vdly__raddr_reg = vlSelf->__PVT__raddr_reg;
    vlSelf->__Vdly__ways_araddr_reg = vlSelf->__PVT__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1\n"); );
    // Body
    vlSelf->__Vdly__ways_araddr_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__io_ar_pht_addr)));
    vlSelf->__Vdly__raddr_reg = ((IData)(vlSelf->__PVT__reset)
                                  ? 0U : (IData)(vlSelf->__PVT__io_ar_addr));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__raddr_reg = vlSelf->__Vdly__raddr_reg;
    vlSelf->__PVT__ways_araddr_reg = vlSelf->__Vdly__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__14(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__14\n"); );
    // Body
    vlSelf->__PVT__phts_6_rdata = vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__15(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__15\n"); );
    // Body
    vlSelf->__PVT__phts_5_rdata = vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__18(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__18\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_1_rdata)
                              : (IData)(vlSelf->__PVT__phts_0_rdata));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__19(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__19\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_2_rdata)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__20(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__20\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_3_rdata)
                              : (IData)(vlSelf->__PVT___GEN_2));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__21(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__21\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_4_rdata)
                              : (IData)(vlSelf->__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__22(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__22\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_5_rdata)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__23(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__23\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_6_rdata)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__24(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__24\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_7_rdata)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__25(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__25\n"); );
    // Body
    vlSelf->__PVT___io_out_T_10 = (3U & ((0U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 0U, 2U)
                                          : VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 6U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__26(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__26\n"); );
    // Body
    vlSelf->__PVT___io_out_T_12 = (3U & ((1U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 2U, 2U)
                                          : (IData)(vlSelf->__PVT___io_out_T_10)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__phts_7_rdata = vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__5(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__phts_6_rdata = vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__6(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__6\n"); );
    // Body
    vlSelf->__PVT__phts_3_rdata = vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__7(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__phts_2_rdata = vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__Vdly__raddr_reg = vlSelf->__PVT__raddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__3\n"); );
    // Body
    vlSelf->__Vdly__raddr_reg = ((IData)(vlSelf->__PVT__reset)
                                  ? 0U : (IData)(vlSelf->__PVT__io_ar_addr));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__raddr_reg = vlSelf->__Vdly__raddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__5(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
    vlSelf->__PVT__pht_data_with_block_ram_4_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__10(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__10\n"); );
    // Body
    vlSelf->__PVT__phts_5_rdata = vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__11(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__phts_4_rdata = vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__7(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__Vdly__ways_araddr_reg = vlSelf->__PVT__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__8(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__8\n"); );
    // Body
    vlSelf->__Vdly__ways_araddr_reg = ((IData)(vlSelf->__PVT__reset)
                                        ? 0U : VL_EXTEND_II(8,3, (IData)(vlSelf->__PVT__io_ar_pht_addr)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__9(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__9\n"); );
    // Body
    vlSelf->__PVT__ways_araddr_reg = vlSelf->__Vdly__ways_araddr_reg;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__14(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__14\n"); );
    // Body
    vlSelf->__PVT__phts_0_rdata = vlSelf->__PVT__pht_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__15(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__15\n"); );
    // Body
    vlSelf->__PVT__phts_1_rdata = vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__18(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__18\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_1_rdata)
                              : (IData)(vlSelf->__PVT__phts_0_rdata));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__19(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__19\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_2_rdata)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__20(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__20\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_3_rdata)
                              : (IData)(vlSelf->__PVT___GEN_2));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__21(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__21\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_4_rdata)
                              : (IData)(vlSelf->__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__22(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__22\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_5_rdata)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__23(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__23\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_6_rdata)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__24(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__24\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                              ? (IData)(vlSelf->__PVT__phts_7_rdata)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__25(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__25\n"); );
    // Body
    vlSelf->__PVT___io_out_T_10 = (3U & ((0U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 0U, 2U)
                                          : VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 6U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__26(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__26\n"); );
    // Body
    vlSelf->__PVT___io_out_T_12 = (3U & ((1U == (3U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                          ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 2U, 2U)
                                          : (IData)(vlSelf->__PVT___io_out_T_10)));
}
