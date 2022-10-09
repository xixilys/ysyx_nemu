// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_if2id.h"

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__0(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__0\n"); );
    // Body
    vlSelf->__Vdly__InstrD_Reg = vlSelf->__PVT__InstrD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__1(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__1\n"); );
    // Body
    vlSelf->__Vdly__InstrD_Reg = ((IData)(vlSelf->__PVT__reset)
                                   ? 0x13U : VL_SEL_IQII(64, vlSelf->__PVT___InstrD_Reg_T_3, 0U, 0x20U));
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__2(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__2\n"); );
    // Body
    vlSelf->__PVT__InstrD_Reg = vlSelf->__Vdly__InstrD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__3(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__3\n"); );
    // Body
    vlSelf->__PVT__io_InstrD = vlSelf->__PVT__InstrD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__4(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__4\n"); );
    // Body
    vlSelf->__Vdly__ExceptionTypeD_Reg = vlSelf->__PVT__ExceptionTypeD_Reg;
    vlSelf->__Vdly__PCPlus4D_Reg = vlSelf->__PVT__PCPlus4D_Reg;
    vlSelf->__Vdly__PCD_Reg = vlSelf->__PVT__PCD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__5(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionTypeD_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionTypeD_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionTypeD_Reg = vlSelf->__PVT__io_ExceptionTypeF;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCPlus4D_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCPlus4D_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCPlus4D_Reg = vlSelf->__PVT__io_PCPlus4F;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCD_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCD_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCD_Reg = vlSelf->__PVT__io_PCF;
    }
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__6(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__6\n"); );
    // Body
    vlSelf->__PVT__ExceptionTypeD_Reg = vlSelf->__Vdly__ExceptionTypeD_Reg;
    vlSelf->__PVT__PCPlus4D_Reg = vlSelf->__Vdly__PCPlus4D_Reg;
    vlSelf->__PVT__PCD_Reg = vlSelf->__Vdly__PCD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__7(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__7\n"); );
    // Body
    vlSelf->__PVT__io_ExceptionTypeD_Out = vlSelf->__PVT__ExceptionTypeD_Reg;
    vlSelf->__PVT__io_PCPlus4D = vlSelf->__PVT__PCPlus4D_Reg;
    vlSelf->__PVT__io_PCD = vlSelf->__PVT__PCD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__8(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__8\n"); );
    // Body
    vlSelf->__Vdly__InDelaySlotD_Reg = vlSelf->__PVT__InDelaySlotD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__9(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__InDelaySlotD_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__InDelaySlotD_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__InDelaySlotD_Reg = vlSelf->__PVT__io_NextDelaySlotD;
    }
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__10(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__10\n"); );
    // Body
    vlSelf->__PVT__InDelaySlotD_Reg = vlSelf->__Vdly__InDelaySlotD_Reg;
}

VL_INLINE_OPT void Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__11(Vmycpu_top_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_if2id___sequent__TOP__mycpu_top__u_riscv_cpu___if2id__11\n"); );
    // Body
    vlSelf->__PVT__io_InDelaySlotD = vlSelf->__PVT__InDelaySlotD_Reg;
}
