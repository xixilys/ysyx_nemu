// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cfu.h"

VL_ATTR_COLD void Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__0(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__0\n"); );
    // Body
    vlSelf->__PVT___io_Forward2D_T_5 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM)));
    vlSelf->__PVT___io_Forward2D_T_11 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
    vlSelf->__PVT___io_ForwardcsrE_T_3 = (((IData)(vlSelf->__PVT__io_ReadcsrAddrE) 
                                           == (IData)(vlSelf->__PVT__io_WritecsrAddrM)) 
                                          & (IData)(vlSelf->__PVT__io_csrWriteM));
    vlSelf->__PVT___io_ForwardcsrE_T_6 = (((IData)(vlSelf->__PVT__io_ReadcsrAddrE) 
                                           == (IData)(vlSelf->__PVT__io_WritecsrAddrM2)) 
                                          & (IData)(vlSelf->__PVT__io_csrWriteM2));
    vlSelf->__PVT___io_Forward2E_T_9 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward2E_T_3 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward1E_T_9 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward1E_T_3 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward2E_T_15 = (((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
    vlSelf->__PVT___io_Forward1E_T_15 = (((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
    vlSelf->__PVT___io_Forward2D_T_9 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward2D_T_3 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward2D_T_12 = ((((IData)(vlSelf->__PVT__io_R2D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
    vlSelf->__PVT___br_Stall_T_18 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___br_Stall_T_16 = ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_5 = ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                    == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_10 = ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___io_Forward1D_T_9 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward1D_T_3 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward2E_T_6 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
    vlSelf->__PVT___io_Forward1E_T_6 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
    vlSelf->__PVT___io_Forward1D_T_12 = ((((IData)(vlSelf->__PVT__io_R1D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_Forward2E_T_12 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_Forward1E_T_12 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_ForwardcsrE_T_7 = ((IData)(vlSelf->__PVT___io_ForwardcsrE_T_6)
                                           ? 2U : 0U);
    vlSelf->__PVT___mem2regM_Stall_T_27 = ((IData)(vlSelf->__PVT___io_Forward2E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_33 = ((IData)(vlSelf->__PVT___io_Forward1E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_9 = ((IData)(vlSelf->__PVT___io_Forward1E_T_3) 
                                          & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___mem2regM_Stall_T_39 = ((IData)(vlSelf->__PVT___io_Forward2D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_15 = ((IData)(vlSelf->__PVT___io_Forward2D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___io_Forward2D_T_13 = ((IData)(vlSelf->__PVT___io_Forward2D_T_12)
                                          ? 2U : 0U);
    vlSelf->__PVT___jr_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_16));
    vlSelf->__PVT___jr_Stall_T_8 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                    & (IData)(vlSelf->__PVT___br_Stall_T_10));
    vlSelf->__PVT___br_Stall_T_13 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                      & (((IData)(vlSelf->__PVT__io_WriteRegE) 
                                          == (IData)(vlSelf->__PVT__io_R2D)) 
                                         | ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                            == (IData)(vlSelf->__PVT__io_R1D)))) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_12));
    vlSelf->__PVT___mem2regM_Stall_T_45 = ((IData)(vlSelf->__PVT___io_Forward1D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_21 = ((IData)(vlSelf->__PVT___io_Forward1D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___io_Forward1D_T_13 = ((IData)(vlSelf->__PVT___io_Forward1D_T_12)
                                          ? 2U : 0U);
    vlSelf->__PVT___io_Forward2E_T_17 = ((IData)(vlSelf->__PVT___io_Forward2E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward2E_T_15)));
    vlSelf->__PVT___io_Forward1E_T_17 = ((IData)(vlSelf->__PVT___io_Forward1E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward1E_T_15)));
    vlSelf->__PVT___io_ForwardcsrE_T_8 = ((IData)(vlSelf->__PVT___io_ForwardcsrE_T_3)
                                           ? 1U : (IData)(vlSelf->__PVT___io_ForwardcsrE_T_7));
    vlSelf->__PVT___mem2regM_Stall_T_10 = (((IData)(vlSelf->__PVT___io_Forward2E_T_3) 
                                            & (IData)(vlSelf->__PVT__io_MemToRegM)) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_9));
    vlSelf->__PVT___io_Forward2D_T_14 = (((((IData)(vlSelf->__PVT__io_R2D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (~ (IData)(vlSelf->__PVT__io_MemToRegM)))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward2D_T_13));
    vlSelf->__PVT___jr_Stall_T_9 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_5)) 
                                    | (IData)(vlSelf->__PVT___jr_Stall_T_8));
    vlSelf->__PVT___br_Stall_T_19 = ((IData)(vlSelf->__PVT___br_Stall_T_13) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_18));
    vlSelf->__PVT___io_Forward1D_T_14 = (((((IData)(vlSelf->__PVT__io_R1D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (IData)(vlSelf->__PVT___io_Forward2D_T_5))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward1D_T_13));
    vlSelf->__PVT___io_Forward2E_T_18 = ((IData)(vlSelf->__PVT___io_Forward2E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward2E_T_17));
    vlSelf->__PVT___io_Forward1E_T_18 = ((IData)(vlSelf->__PVT___io_Forward1E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward1E_T_17));
    vlSelf->__PVT__io_ForwardcsrE = ((IData)(vlSelf->__PVT__io_csrToRegE)
                                      ? (IData)(vlSelf->__PVT___io_ForwardcsrE_T_8)
                                      : 0U);
    vlSelf->__PVT___mem2regM_Stall_T_16 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_10) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_15));
    vlSelf->__PVT__io_Forward2D = ((0U == (IData)(vlSelf->__PVT__io_R2D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2D_T_14));
    vlSelf->__PVT___jr_Stall_T_13 = ((IData)(vlSelf->__PVT___jr_Stall_T_9) 
                                     | (IData)(vlSelf->__PVT___jr_Stall_T_12));
    vlSelf->__PVT___br_Stall_T_20 = (((IData)(vlSelf->__PVT__io_CanBranchD) 
                                      & (IData)(vlSelf->__PVT__io_BranchD_Flag)) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_19));
    vlSelf->__PVT__io_Forward1D = ((0U == (IData)(vlSelf->__PVT__io_R1D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1D_T_14));
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
    vlSelf->__PVT__io_Forward1E = ((0U == (IData)(vlSelf->__PVT__io_R1E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1E_T_18));
    vlSelf->__PVT___mem2regM_Stall_T_22 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_16) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_21));
    vlSelf->__PVT___mem2regM_Stall_T_28 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_22) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_27));
    vlSelf->__PVT___mem2regM_Stall_T_34 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_28) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_33));
    vlSelf->__PVT___mem2regM_Stall_T_40 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_34) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_39));
    vlSelf->__PVT__mem2regM_Stall = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_40) 
                                     | (IData)(vlSelf->__PVT___mem2regM_Stall_T_45));
}

VL_ATTR_COLD void Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__1(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__1\n"); );
    // Body
    vlSelf->__PVT__io_FlushM2 = ((~ (IData)(vlSelf->__PVT__reset)) 
                                 & (IData)(vlSelf->__PVT__io_InException));
    vlSelf->__PVT__io_FlushD = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (IData)(vlSelf->__PVT__io_InException));
    vlSelf->__PVT__br_Stall = ((IData)(vlSelf->__PVT___br_Stall_T_20) 
                               & (~ (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT___br_Stall_T_22 = (1U & (~ (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT___jr_Stall_T_14 = (((IData)(vlSelf->__PVT__io_JRD) 
                                      | (IData)(vlSelf->__PVT__io_dmem_calD)) 
                                     & (IData)(vlSelf->__PVT___jr_Stall_T_13));
    vlSelf->__PVT__dmem_addr_cal_Stall = ((IData)(vlSelf->__PVT___jr_Stall_T_14) 
                                          & (IData)(vlSelf->__PVT___br_Stall_T_22));
    vlSelf->__PVT___has_Stall_T = ((IData)(vlSelf->__PVT__br_Stall) 
                                   | (IData)(vlSelf->__PVT__dmem_addr_cal_Stall));
}

VL_ATTR_COLD void Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__2(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__2\n"); );
    // Body
    vlSelf->__PVT__io_StallM = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT__io_DataPendingM))));
    vlSelf->__PVT___io_StallM_T_1 = (1U & (~ (IData)(vlSelf->__PVT__io_DataPendingM)));
    vlSelf->__PVT__io_StallE = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                            | (IData)(vlSelf->__PVT__mem2regM_Stall)))));
    vlSelf->__PVT___io_StallF_T_5 = (((IData)(vlSelf->__PVT___has_Stall_T) 
                                      | (IData)(vlSelf->__PVT__io_DataPendingM)) 
                                     | (IData)(vlSelf->__PVT__mem2regM_Stall));
    vlSelf->__PVT__io_FlushM = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallM) 
                                    & (IData)(vlSelf->__PVT__mem2regM_Stall)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__io_StallM2 = ((IData)(vlSelf->__PVT__reset) 
                                 | (IData)(vlSelf->__PVT___io_StallM_T_1));
    vlSelf->__PVT__io_StallW = ((IData)(vlSelf->__PVT__reset) 
                                | (IData)(vlSelf->__PVT___io_StallM_T_1));
    vlSelf->__PVT__io_FlushE = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallE) 
                                    & (IData)(vlSelf->__PVT___has_Stall_T)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__io_StallD = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT___io_StallF_T_5))));
    vlSelf->__PVT__io_FlushW = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & ((IData)(vlSelf->__PVT__io_StallW) 
                                   & ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                      | (IData)(vlSelf->__PVT__io_InException))));
}

VL_ATTR_COLD void Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__3(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___cfu__3\n"); );
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
    vlSelf->__PVT__io_csrToRegE = 0;
    vlSelf->__PVT__io_WriteRegM = 0;
    vlSelf->__PVT__io_MemToRegM = 0;
    vlSelf->__PVT__io_RegWriteM = 0;
    vlSelf->__PVT__io_csrWriteM = 0;
    vlSelf->__PVT__io_WriteRegM2 = 0;
    vlSelf->__PVT__io_MemToRegM2 = 0;
    vlSelf->__PVT__io_RegWriteM2 = 0;
    vlSelf->__PVT__io_csrWriteM2 = 0;
    vlSelf->__PVT__io_WriteRegW = 0;
    vlSelf->__PVT__io_RegWriteW = 0;
    vlSelf->__PVT__io_ReadcsrAddrE = 0;
    vlSelf->__PVT__io_WritecsrAddrM = 0;
    vlSelf->__PVT__io_WritecsrAddrM2 = 0;
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
    vlSelf->__PVT__io_ForwardcsrE = 0;
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
    vlSelf->__PVT___io_ForwardcsrE_T_3 = 0;
    vlSelf->__PVT___io_ForwardcsrE_T_6 = 0;
    vlSelf->__PVT___io_ForwardcsrE_T_7 = 0;
    vlSelf->__PVT___io_ForwardcsrE_T_8 = 0;
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
