// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_muldiv.h"

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__1(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__1;
    VlWide<5>/*159:0*/ __Vtemp_heca54db5__0;
    VlWide<5>/*159:0*/ __Vtemp_hd16f635c__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__2;
    VlWide<5>/*159:0*/ __Vtemp_h5681aa02__0;
    VlWide<5>/*159:0*/ __Vtemp_hb4f897f2__0;
    VlWide<5>/*159:0*/ __Vtemp_hb55a541b__0;
    VlWide<5>/*159:0*/ __Vtemp_h07c72a6a__0;
    // Body
    vlSelf->__PVT__mulhu_answer = VL_SEL_QWII(128, vlSelf->__PVT__mulu_answer, 0x40U, 0x40U);
    VL_CONST_W_5X(160,__Vtemp_h0e896d6a__0,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_CONST_W_5X(160,__Vtemp_h0e896d6a__1,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(129,64, __Vtemp_heca54db5__0, vlSelf->__PVT__io_in1);
    VL_AND_W(5, __Vtemp_hd16f635c__0, __Vtemp_h0e896d6a__1, __Vtemp_heca54db5__0);
    VL_CONST_W_5X(160,__Vtemp_h0e896d6a__2,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_EXTENDS_WW(129,65, __Vtemp_h5681aa02__0, vlSelf->__PVT___mulhsu_answer_T_1);
    VL_AND_W(5, __Vtemp_hb4f897f2__0, __Vtemp_h0e896d6a__2, __Vtemp_h5681aa02__0);
    VL_MULS_WWW(129, __Vtemp_hb55a541b__0, __Vtemp_hd16f635c__0, __Vtemp_hb4f897f2__0);
    VL_AND_W(5, __Vtemp_h07c72a6a__0, __Vtemp_h0e896d6a__0, __Vtemp_hb55a541b__0);
    VL_ASSIGN_W(129,vlSelf->__PVT___mulhsu_answer_T_2, __Vtemp_h07c72a6a__0);
    vlSelf->__PVT__mulh_answer = VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0x40U, 0x40U);
    vlSelf->__PVT___io_data_out_T_38 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_18, 0U))
                                         ? VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0U, 0x40U)
                                         : 0ULL);
    vlSelf->__PVT___remuw_answer_T_2 = vlSelf->__PVT___GEN_1;
    vlSelf->__PVT__remu_answer = vlSelf->__PVT___GEN_0;
    vlSelf->__PVT___io_data_out_T_34 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_10, 0U))
                                         ? vlSelf->__PVT__rem_answer
                                         : 0ULL);
    vlSelf->__PVT__divuw_answer = VL_EXTEND_QI(33,32, vlSelf->__PVT___divuw_answer_T_2);
    vlSelf->__PVT___io_data_out_T_30 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T, 0U))
                                         ? VL_SEL_QWII(65, vlSelf->__PVT__div_answer, 0U, 0x40U)
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_31 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT__io_ctrl, 0U))
                                         ? vlSelf->__PVT__divu_answer
                                         : 0ULL);
    vlSelf->__PVT__mulw_answer_lo_lo = VL_CONCAT_III(8,1,7, 
                                                     (1U 
                                                      & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                     VL_CONCAT_III(7,1,6, 
                                                                   (1U 
                                                                    & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                   VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)))))))));
    vlSelf->__PVT___remw_answer_T_5 = VL_MODDIVS_III(32, vlSelf->__PVT___divw_answer_T_1, vlSelf->__PVT___divw_answer_T_3);
    vlSelf->__PVT___divw_answer_T_5 = (0x1ffffffffULL 
                                       & VL_DIVS_QQQ(33, 
                                                     (0x1ffffffffULL 
                                                      & VL_EXTENDS_QI(33,32, vlSelf->__PVT___divw_answer_T_1)), 
                                                     (0x1ffffffffULL 
                                                      & VL_EXTENDS_QI(33,32, vlSelf->__PVT___divw_answer_T_3))));
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__2(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__2\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_36 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_14, 0U))
                                         ? vlSelf->__PVT__remw_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_32 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_6, 0U))
                                         ? vlSelf->__PVT__divw_answer
                                         : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__3(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__3\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_44 = (vlSelf->__PVT___io_data_out_T_43 
                                        | vlSelf->__PVT___io_data_out_T_32);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__4(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__4\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_45 = (vlSelf->__PVT___io_data_out_T_44 
                                        | vlSelf->__PVT___GEN_12);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__5(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__5\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_46 = (vlSelf->__PVT___io_data_out_T_45 
                                        | vlSelf->__PVT___io_data_out_T_34);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__6(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__6\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_47 = (vlSelf->__PVT___io_data_out_T_46 
                                        | vlSelf->__PVT___io_data_out_T_35);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__7(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__7\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_48 = (vlSelf->__PVT___io_data_out_T_47 
                                        | vlSelf->__PVT___io_data_out_T_36);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__8(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__8\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_49 = (vlSelf->__PVT___io_data_out_T_48 
                                        | vlSelf->__PVT___GEN_13);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__9(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__9\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_50 = (vlSelf->__PVT___io_data_out_T_49 
                                        | vlSelf->__PVT___io_data_out_T_38);
}
