// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__23\n"); );
    // Body
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_137 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_136));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_138 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_137));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_139 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_138));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_140 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_139));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_141 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_140));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_142 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_141));
    vlSelf->__PVT__io_out_pre_hashcode = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                           ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                           : (IData)(vlSelf->__PVT___GEN_142));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht 
        = vlSelf->__PVT__io_out_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode 
        = vlSelf->__PVT__io_out_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht;
}
