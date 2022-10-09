// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_pht_data_with_block_ram.h"

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__0(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__2(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__4(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__4\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__5(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__7(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__7\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__11(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__11\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__btb_data_ram_0_io_doutb;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__12(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__12\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_pht_data_with_block_ram___ctor_var_reset(Vmycpu_top_pht_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_pht_data_with_block_ram___ctor_var_reset\n"); );
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
