// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__22\n"); );
    // Body
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_120 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT__io_out_pre_bht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                      : (IData)(vlSelf->__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht 
        = vlSelf->__PVT__io_out_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht 
        = vlSelf->__PVT__io_out_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht;
}
