// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_btb_data_with_block_ram.h"

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__4(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__5(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__6(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__8(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__8\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__13(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__13\n"); );
    // Body
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__4(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__5(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__6(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__6\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__8(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__8\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__13(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__13\n"); );
    // Body
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__4(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__5(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__6(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__6\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__8(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__8\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__13(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__13\n"); );
    // Body
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__4(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__5(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__7(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__11(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___ctor_var_reset(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_wen = 0;
    vlSelf->__PVT__io_raddr = 0;
    vlSelf->__PVT__io_waddr = 0;
    vlSelf->__PVT__io_wdata = 0;
    vlSelf->__PVT__io_rdata = 0;
    vlSelf->__PVT__btb_data_ram_0_clock = 0;
    vlSelf->__PVT__btb_data_ram_0_reset = 0;
    vlSelf->__PVT__btb_data_ram_0_io_wea = 0;
    vlSelf->__PVT__btb_data_ram_0_io_addra = 0;
    vlSelf->__PVT__btb_data_ram_0_io_dina = 0;
    vlSelf->__PVT__btb_data_ram_0_io_addrb = 0;
    vlSelf->__PVT__btb_data_ram_0_io_doutb = 0;
}
