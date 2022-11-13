// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_btb_tag_with_block_ram.h"
#include "Vmycpu_top_data_ram_simple_two_ports_32.h"

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__3(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__3\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addrb = vlSelf->__PVT__btb_tag_ram_0_io_addrb;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}
