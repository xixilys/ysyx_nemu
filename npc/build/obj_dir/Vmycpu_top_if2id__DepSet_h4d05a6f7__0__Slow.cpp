// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_if2id.h"

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__0(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__0\n"); );
    // Body
    vlSelf->__PVT__io_InDelaySlotD = vlSelf->__PVT__InDelaySlotD_Reg;
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__1(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__1\n"); );
    // Body
    vlSelf->__PVT__io_ExceptionTypeD_Out = vlSelf->__PVT__ExceptionTypeD_Reg;
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__2(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__2\n"); );
    // Body
    vlSelf->__PVT__io_PCPlus4D = vlSelf->__PVT__PCPlus4D_Reg;
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__3(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__3\n"); );
    // Body
    vlSelf->__PVT__io_PCD = vlSelf->__PVT__PCD_Reg;
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__4(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__4\n"); );
    // Body
    vlSelf->__PVT__io_InstrD = vlSelf->__PVT__InstrD_Reg;
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__5(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__5\n"); );
    // Body
    vlSelf->__PVT___InstrD_Reg_T_2 = ((IData)(vlSelf->__PVT__io_en)
                                       ? vlSelf->__PVT__io_InstrF
                                       : VL_EXTEND_QI(64,32, vlSelf->__PVT__InstrD_Reg));
}

VL_ATTR_COLD void Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__6(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___settle__TOP__mycpu_top__u_riscv_cpu___if2id__6\n"); );
    // Body
    vlSelf->__PVT___InstrD_Reg_T_3 = ((IData)(vlSelf->__PVT__io_clr)
                                       ? 0ULL : vlSelf->__PVT___InstrD_Reg_T_2);
}

VL_ATTR_COLD void Vmycpu_top_if2id___ctor_var_reset(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_clr = 0;
    vlSelf->__PVT__io_InstrF = 0;
    vlSelf->__PVT__io_PCPlus4F = 0;
    vlSelf->__PVT__io_PCF = 0;
    vlSelf->__PVT__io_ExceptionTypeF = 0;
    vlSelf->__PVT__io_NextDelaySlotD = 0;
    vlSelf->__PVT__io_InstrD = 0;
    vlSelf->__PVT__io_PCPlus4D = 0;
    vlSelf->__PVT__io_InDelaySlotD = 0;
    vlSelf->__PVT__io_PCD = 0;
    vlSelf->__PVT__io_ExceptionTypeD_Out = 0;
    vlSelf->__PVT__InstrD_Reg = 0;
    vlSelf->__PVT__PCPlus4D_Reg = 0;
    vlSelf->__PVT__PCD_Reg = 0;
    vlSelf->__PVT__ExceptionTypeD_Reg = 0;
    vlSelf->__PVT__InDelaySlotD_Reg = 0;
    vlSelf->__PVT___InstrD_Reg_T_2 = 0;
    vlSelf->__PVT___InstrD_Reg_T_3 = 0;
    vlSelf->__Vdly__InstrD_Reg = 0;
    vlSelf->__Vdly__PCPlus4D_Reg = 0;
    vlSelf->__Vdly__PCD_Reg = 0;
    vlSelf->__Vdly__ExceptionTypeD_Reg = 0;
    vlSelf->__Vdly__InDelaySlotD_Reg = 0;
}
