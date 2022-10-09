// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BHT_banks_oneissue.h"
#include "Vmycpu_top__Syms.h"

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__2(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__clock 
        = vlSelf->__PVT__BHT_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__clock 
        = vlSelf->__PVT__BHT_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__clock 
        = vlSelf->__PVT__BHT_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__clock 
        = vlSelf->__PVT__BHT_1_clock;
}

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__3(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__reset 
        = vlSelf->__PVT__BHT_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__reset 
        = vlSelf->__PVT__BHT_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__reset 
        = vlSelf->__PVT__BHT_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__reset 
        = vlSelf->__PVT__BHT_3_reset;
}

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__6(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_in 
        = vlSelf->__PVT__BHT_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_write 
        = vlSelf->__PVT__BHT_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_in 
        = vlSelf->__PVT__BHT_1_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_write 
        = vlSelf->__PVT__BHT_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_in 
        = vlSelf->__PVT__BHT_2_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_write 
        = vlSelf->__PVT__BHT_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_in 
        = vlSelf->__PVT__BHT_3_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_write 
        = vlSelf->__PVT__BHT_3_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_3_io_aw_addr;
}

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__7(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_1_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__8(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__8\n"); );
    // Body
    vlSelf->__PVT__BHT_3_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_out;
    vlSelf->__PVT__BHT_2_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_out;
    vlSelf->__PVT__BHT_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_out;
    vlSelf->__PVT__BHT_1_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_out;
}
