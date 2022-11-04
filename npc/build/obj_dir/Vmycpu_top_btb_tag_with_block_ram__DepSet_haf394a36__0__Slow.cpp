// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_btb_tag_with_block_ram.h"
#include "Vmycpu_top_data_ram_simple_two_ports_32.h"

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__3(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__7(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addrb = vlSelf->__PVT__btb_tag_ram_0_io_addrb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__8(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__8\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__9(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__9\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_tag_ram_0_io_dina;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_tag_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__10(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__10\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__3(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__3\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__7(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addrb = vlSelf->__PVT__btb_tag_ram_0_io_addrb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__8(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__8\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__9(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__9\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_tag_ram_0_io_dina;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_tag_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__10(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__10\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__3(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__3\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__7(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addrb = vlSelf->__PVT__btb_tag_ram_0_io_addrb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__8(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__8\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__9(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__9\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_tag_ram_0_io_dina;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_tag_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__10(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__10\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__reset = vlSelf->__PVT__btb_tag_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__3(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__3\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__7(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addrb = vlSelf->__PVT__btb_tag_ram_0_io_addrb;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__8(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__8\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__9(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__9\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_tag_ram_0_io_dina;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_tag_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__10(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__10\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0_io_doutb = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_doutb;
}
