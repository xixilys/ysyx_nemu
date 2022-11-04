// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_banks_oneissue_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock 
        = vlSelf->__PVT__PHTS_with_block_ram_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock 
        = vlSelf->__PVT__PHTS_with_block_ram_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__PHTS_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock 
        = vlSelf->__PVT__PHTS_with_block_ram_1_clock;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__3(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__PHTS_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__reset 
        = vlSelf->__PVT__PHTS_with_block_ram_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__reset 
        = vlSelf->__PVT__PHTS_with_block_ram_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__reset 
        = vlSelf->__PVT__PHTS_with_block_ram_3_reset;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in 
        = vlSelf->__PVT__PHTS_with_block_ram_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_in 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_in 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_in 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__8(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__10(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__10\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write 
        = vlSelf->__PVT__PHTS_with_block_ram_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_write 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_write 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_write;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__11(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__11\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_io_ar_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__12(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_3_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_pht_out;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_pht_out;
    vlSelf->__PVT__PHTS_with_block_ram_io_pht_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_pht_out;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_pht_out;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__16(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__16\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_3_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_out;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_out;
    vlSelf->__PVT__PHTS_with_block_ram_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_out;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_out;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__23(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__23\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_ar_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_ar_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_ar_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_ar_addr 
        = vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_addr;
}
