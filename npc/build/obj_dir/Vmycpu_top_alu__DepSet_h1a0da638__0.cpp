// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_alu.h"

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__0(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__0\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_59 = (vlSelf->__PVT___normal_result_T_58 
                                          | vlSelf->__PVT___normal_result_T_44);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__1(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__1\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_60 = (vlSelf->__PVT___normal_result_T_59 
                                          | vlSelf->__PVT___normal_result_T_45);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__2(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__2\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_61 = (vlSelf->__PVT___normal_result_T_60 
                                          | vlSelf->__PVT___normal_result_T_46);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__3(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__3\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_62 = (vlSelf->__PVT___normal_result_T_61 
                                          | vlSelf->__PVT___normal_result_T_47);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__4(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__4\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_63 = (vlSelf->__PVT___normal_result_T_62 
                                          | vlSelf->__PVT___normal_result_T_48);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__5(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__5\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_64 = (vlSelf->__PVT___normal_result_T_63 
                                          | vlSelf->__PVT___normal_result_T_49);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__6(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__6\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_65 = (vlSelf->__PVT___normal_result_T_64 
                                          | vlSelf->__PVT___normal_result_T_50);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__7(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__7\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8b7378a0__0;
    // Body
    VL_EXTEND_WQ(127,64, __Vtemp_h8b7378a0__0, vlSelf->__PVT___normal_result_T_65);
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_16, __Vtemp_h8b7378a0__0);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__8(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__8\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8772b14d__0;
    // Body
    VL_OR_W(4, __Vtemp_h8772b14d__0, vlSelf->__PVT___GEN_16, vlSelf->__PVT___normal_result_T_51);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_66, __Vtemp_h8772b14d__0);
}

VL_INLINE_OPT void Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__9(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___nba_comb__TOP__mycpu_top__u_riscv_cpu___alu__9\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb571f582__0;
    // Body
    VL_OR_W(4, __Vtemp_hb571f582__0, vlSelf->__PVT___normal_result_T_66, vlSelf->__PVT___GEN_17);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_67, __Vtemp_hb571f582__0);
}
