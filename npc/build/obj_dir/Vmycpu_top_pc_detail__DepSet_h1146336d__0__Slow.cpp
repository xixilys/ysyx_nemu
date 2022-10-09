// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_pc_detail.h"

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___settle__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__0\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_ATTR_COLD void Vmycpu_top_pc_detail___ctor_var_reset(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_stall = 0;
    vlSelf->__PVT__io_flush = 0;
    vlSelf->__PVT__io_in_pc_value_in = 0;
    vlSelf->__PVT__io_out_pc_value_out = 0;
    vlSelf->__PVT__pc_value = 0;
    vlSelf->__Vdly__pc_value = 0;
}
