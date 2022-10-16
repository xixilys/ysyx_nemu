// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cfu.h"

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__0(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__0\n"); );
    // Body
    vlSelf->__PVT___io_Forward1D_T_9 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__1(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__1\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_9 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__2(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__2\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_18 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___io_Forward1E_T_9 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__3(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__3\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_16 = ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_5 = ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                    == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___io_Forward2E_T_9 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__4(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__4\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_10 = ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___io_Forward1D_T_3 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__5(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__5\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_3 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward2E_T_3 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__6(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__6\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_3 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__7(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__7\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_12 = ((((IData)(vlSelf->__PVT__io_R2D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__8(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__8\n"); );
    // Body
    vlSelf->__PVT___io_Forward2E_T_15 = (((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__9(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__9\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_15 = (((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
    vlSelf->__PVT___io_Forward2D_T_5 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM)));
    vlSelf->__PVT___io_Forward2D_T_11 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__10(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__10\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_45 = ((IData)(vlSelf->__PVT___io_Forward1D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__11(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__11\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_39 = ((IData)(vlSelf->__PVT___io_Forward2D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__12(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__12\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_33 = ((IData)(vlSelf->__PVT___io_Forward1E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__13(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__13\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_16));
    vlSelf->__PVT___br_Stall_T_13 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                      & (((IData)(vlSelf->__PVT__io_WriteRegE) 
                                          == (IData)(vlSelf->__PVT__io_R2D)) 
                                         | ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                            == (IData)(vlSelf->__PVT__io_R1D)))) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_12));
    vlSelf->__PVT___mem2regM_Stall_T_27 = ((IData)(vlSelf->__PVT___io_Forward2E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__14(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__14\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_8 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                    & (IData)(vlSelf->__PVT___br_Stall_T_10));
    vlSelf->__PVT___mem2regM_Stall_T_21 = ((IData)(vlSelf->__PVT___io_Forward1D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__15(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__15\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_15 = ((IData)(vlSelf->__PVT___io_Forward2D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__16(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__16\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_9 = ((IData)(vlSelf->__PVT___io_Forward1E_T_3) 
                                          & (IData)(vlSelf->__PVT__io_MemToRegM));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__17(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__17\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_13 = ((IData)(vlSelf->__PVT___io_Forward2D_T_12)
                                          ? 2U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__18(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__18\n"); );
    // Body
    vlSelf->__PVT___io_Forward1D_T_12 = ((((IData)(vlSelf->__PVT__io_R1D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_Forward2E_T_6 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__19(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__19\n"); );
    // Body
    vlSelf->__PVT___io_Forward2E_T_12 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__20(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__20\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_6 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
    vlSelf->__PVT___io_Forward1E_T_12 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__21(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__21\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_19 = ((IData)(vlSelf->__PVT___br_Stall_T_13) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_18));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__22(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__22\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_9 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_5)) 
                                    | (IData)(vlSelf->__PVT___jr_Stall_T_8));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__23(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__23\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_10 = (((IData)(vlSelf->__PVT___io_Forward2E_T_3) 
                                            & (IData)(vlSelf->__PVT__io_MemToRegM)) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_9));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__24(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__24\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_14 = (((((IData)(vlSelf->__PVT__io_R2D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (~ (IData)(vlSelf->__PVT__io_MemToRegM)))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward2D_T_13));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__25(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__25\n"); );
    // Body
    vlSelf->__PVT___io_Forward1D_T_13 = ((IData)(vlSelf->__PVT___io_Forward1D_T_12)
                                          ? 2U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__26(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__26\n"); );
    // Body
    vlSelf->__PVT___io_Forward2E_T_17 = ((IData)(vlSelf->__PVT___io_Forward2E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward2E_T_15)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__27(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__27\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_17 = ((IData)(vlSelf->__PVT___io_Forward1E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward1E_T_15)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__28(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__28\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_20 = (((IData)(vlSelf->__PVT__io_CanBranchD) 
                                      & (IData)(vlSelf->__PVT__io_BranchD_Flag)) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_19));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__29(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__29\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_13 = ((IData)(vlSelf->__PVT___jr_Stall_T_9) 
                                     | (IData)(vlSelf->__PVT___jr_Stall_T_12));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__30(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__30\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_16 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_10) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_15));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__31(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__31\n"); );
    // Body
    vlSelf->__PVT__io_Forward2D = ((0U == (IData)(vlSelf->__PVT__io_R2D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2D_T_14));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__32(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__32\n"); );
    // Body
    vlSelf->__PVT___io_Forward1D_T_14 = (((((IData)(vlSelf->__PVT__io_R1D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (IData)(vlSelf->__PVT___io_Forward2D_T_5))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward1D_T_13));
    vlSelf->__PVT___io_Forward2E_T_18 = ((IData)(vlSelf->__PVT___io_Forward2E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward2E_T_17));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__33(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__33\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_18 = ((IData)(vlSelf->__PVT___io_Forward1E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward1E_T_17));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__34(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__34\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_22 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_16) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_21));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__35(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__35\n"); );
    // Body
    vlSelf->__PVT__io_Forward1D = ((0U == (IData)(vlSelf->__PVT__io_R1D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1D_T_14));
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__36(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__36\n"); );
    // Body
    vlSelf->__PVT__io_Forward1E = ((0U == (IData)(vlSelf->__PVT__io_R1E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1E_T_18));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__37(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__37\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_14 = (((IData)(vlSelf->__PVT__io_JRD) 
                                      | (IData)(vlSelf->__PVT__io_dmem_calD)) 
                                     & (IData)(vlSelf->__PVT___jr_Stall_T_13));
    vlSelf->__PVT___mem2regM_Stall_T_28 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_22) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_27));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__38(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__38\n"); );
    // Body
    vlSelf->__PVT___mem2regM_Stall_T_34 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_28) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_33));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__39(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__39\n"); );
    // Body
    vlSelf->__PVT__io_FlushM2 = ((~ (IData)(vlSelf->__PVT__reset)) 
                                 & (IData)(vlSelf->__PVT__io_InException));
    vlSelf->__PVT__io_FlushD = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (IData)(vlSelf->__PVT__io_InException));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__40(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__40\n"); );
    // Body
    vlSelf->__PVT__br_Stall = ((IData)(vlSelf->__PVT___br_Stall_T_20) 
                               & (~ (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT___mem2regM_Stall_T_40 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_34) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_39));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__41(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__41\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_22 = (1U & (~ (IData)(vlSelf->__PVT__io_InException)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__42(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__42\n"); );
    // Body
    vlSelf->__PVT__mem2regM_Stall = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_40) 
                                     | (IData)(vlSelf->__PVT___mem2regM_Stall_T_45));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__43(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__43\n"); );
    // Body
    vlSelf->__PVT__dmem_addr_cal_Stall = ((IData)(vlSelf->__PVT___jr_Stall_T_14) 
                                          & (IData)(vlSelf->__PVT___br_Stall_T_22));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__44(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__44\n"); );
    // Body
    vlSelf->__PVT___has_Stall_T = ((IData)(vlSelf->__PVT__br_Stall) 
                                   | (IData)(vlSelf->__PVT__dmem_addr_cal_Stall));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__45(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__45\n"); );
    // Body
    vlSelf->__PVT__io_StallM = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT__io_DataPendingM))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__46(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__46\n"); );
    // Body
    vlSelf->__PVT___io_StallM_T_1 = (1U & (~ (IData)(vlSelf->__PVT__io_DataPendingM)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__47(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__47\n"); );
    // Body
    vlSelf->__PVT__io_StallE = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                            | (IData)(vlSelf->__PVT__mem2regM_Stall)))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__48(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__48\n"); );
    // Body
    vlSelf->__PVT___io_StallF_T_5 = (((IData)(vlSelf->__PVT___has_Stall_T) 
                                      | (IData)(vlSelf->__PVT__io_DataPendingM)) 
                                     | (IData)(vlSelf->__PVT__mem2regM_Stall));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__49(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__49\n"); );
    // Body
    vlSelf->__PVT__io_StallM2 = ((IData)(vlSelf->__PVT__reset) 
                                 | (IData)(vlSelf->__PVT___io_StallM_T_1));
    vlSelf->__PVT__io_FlushE = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallE) 
                                    & (IData)(vlSelf->__PVT___has_Stall_T)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__io_FlushM = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallM) 
                                    & (IData)(vlSelf->__PVT__mem2regM_Stall)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__50(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__50\n"); );
    // Body
    vlSelf->__PVT__io_StallW = ((IData)(vlSelf->__PVT__reset) 
                                | (IData)(vlSelf->__PVT___io_StallM_T_1));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__51(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__51\n"); );
    // Body
    vlSelf->__PVT__io_StallD = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT___io_StallF_T_5))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__52(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__52\n"); );
    // Body
    vlSelf->__PVT__io_FlushW = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & ((IData)(vlSelf->__PVT__io_StallW) 
                                   & ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                      | (IData)(vlSelf->__PVT__io_InException))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__53(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___settle__TOP__mycpu_top__u_riscv_cpu___cfu__53\n"); );
    // Body
    vlSelf->__PVT__io_StallF = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ ((((IData)(vlSelf->__PVT___has_Stall_T) 
                                              | (IData)(vlSelf->__PVT__io_DataPendingM)) 
                                             | (IData)(vlSelf->__PVT__mem2regM_Stall)) 
                                            | (IData)(vlSelf->__PVT__io_Inst_Fifo_Empty)))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___ctor_var_reset(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_Inst_Fifo_Empty = 0;
    vlSelf->__PVT__io_dmem_calD = 0;
    vlSelf->__PVT__io_BranchD_Flag = 0;
    vlSelf->__PVT__io_JRD = 0;
    vlSelf->__PVT__io_CanBranchD = 0;
    vlSelf->__PVT__io_DataPendingM = 0;
    vlSelf->__PVT__io_InException = 0;
    vlSelf->__PVT__io_WriteRegE = 0;
    vlSelf->__PVT__io_RegWriteE = 0;
    vlSelf->__PVT__io_WriteRegM = 0;
    vlSelf->__PVT__io_MemToRegM = 0;
    vlSelf->__PVT__io_RegWriteM = 0;
    vlSelf->__PVT__io_WriteRegM2 = 0;
    vlSelf->__PVT__io_MemToRegM2 = 0;
    vlSelf->__PVT__io_RegWriteM2 = 0;
    vlSelf->__PVT__io_WriteRegW = 0;
    vlSelf->__PVT__io_RegWriteW = 0;
    vlSelf->__PVT__io_R2D = 0;
    vlSelf->__PVT__io_R1D = 0;
    vlSelf->__PVT__io_R2E = 0;
    vlSelf->__PVT__io_R1E = 0;
    vlSelf->__PVT__io_StallF = 0;
    vlSelf->__PVT__io_StallD = 0;
    vlSelf->__PVT__io_StallE = 0;
    vlSelf->__PVT__io_StallM = 0;
    vlSelf->__PVT__io_StallM2 = 0;
    vlSelf->__PVT__io_StallW = 0;
    vlSelf->__PVT__io_FlushD = 0;
    vlSelf->__PVT__io_FlushE = 0;
    vlSelf->__PVT__io_FlushM = 0;
    vlSelf->__PVT__io_FlushM2 = 0;
    vlSelf->__PVT__io_FlushW = 0;
    vlSelf->__PVT__io_Forward1E = 0;
    vlSelf->__PVT__io_Forward2E = 0;
    vlSelf->__PVT__io_Forward1D = 0;
    vlSelf->__PVT__io_Forward2D = 0;
    vlSelf->__PVT___io_Forward2D_T_3 = 0;
    vlSelf->__PVT___io_Forward2D_T_5 = 0;
    vlSelf->__PVT___io_Forward2D_T_9 = 0;
    vlSelf->__PVT___io_Forward2D_T_11 = 0;
    vlSelf->__PVT___io_Forward2D_T_12 = 0;
    vlSelf->__PVT___io_Forward2D_T_13 = 0;
    vlSelf->__PVT___io_Forward2D_T_14 = 0;
    vlSelf->__PVT___io_Forward1D_T_3 = 0;
    vlSelf->__PVT___io_Forward1D_T_9 = 0;
    vlSelf->__PVT___io_Forward1D_T_12 = 0;
    vlSelf->__PVT___io_Forward1D_T_13 = 0;
    vlSelf->__PVT___io_Forward1D_T_14 = 0;
    vlSelf->__PVT___io_Forward2E_T_3 = 0;
    vlSelf->__PVT___io_Forward2E_T_6 = 0;
    vlSelf->__PVT___io_Forward2E_T_9 = 0;
    vlSelf->__PVT___io_Forward2E_T_12 = 0;
    vlSelf->__PVT___io_Forward2E_T_15 = 0;
    vlSelf->__PVT___io_Forward2E_T_17 = 0;
    vlSelf->__PVT___io_Forward2E_T_18 = 0;
    vlSelf->__PVT___io_Forward1E_T_3 = 0;
    vlSelf->__PVT___io_Forward1E_T_6 = 0;
    vlSelf->__PVT___io_Forward1E_T_9 = 0;
    vlSelf->__PVT___io_Forward1E_T_12 = 0;
    vlSelf->__PVT___io_Forward1E_T_15 = 0;
    vlSelf->__PVT___io_Forward1E_T_17 = 0;
    vlSelf->__PVT___io_Forward1E_T_18 = 0;
    vlSelf->__PVT___br_Stall_T_5 = 0;
    vlSelf->__PVT___br_Stall_T_10 = 0;
    vlSelf->__PVT___br_Stall_T_12 = 0;
    vlSelf->__PVT___br_Stall_T_13 = 0;
    vlSelf->__PVT___br_Stall_T_16 = 0;
    vlSelf->__PVT___br_Stall_T_18 = 0;
    vlSelf->__PVT___br_Stall_T_19 = 0;
    vlSelf->__PVT___br_Stall_T_20 = 0;
    vlSelf->__PVT___br_Stall_T_22 = 0;
    vlSelf->__PVT__br_Stall = 0;
    vlSelf->__PVT___jr_Stall_T_8 = 0;
    vlSelf->__PVT___jr_Stall_T_9 = 0;
    vlSelf->__PVT___jr_Stall_T_12 = 0;
    vlSelf->__PVT___jr_Stall_T_13 = 0;
    vlSelf->__PVT___jr_Stall_T_14 = 0;
    vlSelf->__PVT__dmem_addr_cal_Stall = 0;
    vlSelf->__PVT___mem2regM_Stall_T_9 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_10 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_15 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_16 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_21 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_22 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_27 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_28 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_33 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_34 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_39 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_40 = 0;
    vlSelf->__PVT___mem2regM_Stall_T_45 = 0;
    vlSelf->__PVT__mem2regM_Stall = 0;
    vlSelf->__PVT___has_Stall_T = 0;
    vlSelf->__PVT___io_StallF_T_5 = 0;
    vlSelf->__PVT___io_StallM_T_1 = 0;
}
