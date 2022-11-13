// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
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
    VlWide<4>/*127:0*/ __Vtemp_h2247dde8__0;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sltu 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           < vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_slt 
        = VL_LTS_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    VL_EXTEND_WQ(127,64, __Vtemp_h2247dde8__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_21, __Vtemp_h2247dde8__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_sraw_T_1 
        = VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_xor 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           ^ vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_and 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           & vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit 
        = (0x1fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa 
        = (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 6U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1 
        = VL_CONCAT_III(32,20,12, (0xfffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0xcU, 0x14U)), 0U);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__2(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__2\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he49eb378__0;
    VlWide<4>/*127:0*/ __Vtemp_h30a05cc0__0;
    VlWide<4>/*127:0*/ __Vtemp_h24dff22d__0;
    VlWide<4>/*127:0*/ __Vtemp_hea1b99e2__0;
    // Body
    vlSelf->__PVT___io_data_out_T_41 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_26, 0U))
                                         ? vlSelf->__PVT__mulhu_answer
                                         : 0ULL);
    VL_SEL_WWII(128,129, __Vtemp_he49eb378__0, vlSelf->__PVT___mulhsu_answer_T_2, 0U, 0x80U);
    VL_ASSIGN_W(128,vlSelf->__PVT___mulhsu_answer_T_4, __Vtemp_he49eb378__0);
    vlSelf->__PVT___io_data_out_T_40 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_24, 0U))
                                         ? vlSelf->__PVT__mulh_answer
                                         : 0ULL);
    vlSelf->__PVT__mulw_answer_lo = VL_CONCAT_III(16,1,15, 
                                                  (1U 
                                                   & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                  VL_CONCAT_III(15,1,14, 
                                                                (1U 
                                                                 & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                VL_CONCAT_III(14,1,13, 
                                                                              (1U 
                                                                               & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                              VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), (IData)(vlSelf->__PVT__mulw_answer_lo_lo)))))))));
    vlSelf->__PVT__remuw_answer = VL_EXTEND_QI(33,32, vlSelf->__PVT___remuw_answer_T_2);
    vlSelf->__PVT___io_data_out_T_35 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_12, 0U))
                                         ? vlSelf->__PVT__remu_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_33 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_8, 0U))
                                         ? vlSelf->__PVT__divuw_answer
                                         : 0ULL);
    vlSelf->__PVT__remw_answer_lo_lo = VL_CONCAT_III(8,1,7, 
                                                     (1U 
                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                     VL_CONCAT_III(7,1,6, 
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                   VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)))))))));
    vlSelf->__PVT__divw_answer_lo_lo = VL_CONCAT_III(8,1,7, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                     VL_CONCAT_III(7,1,6, 
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                   VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_55 
        = (VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_38, 0U) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sltu));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_52 
        = (VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_30, 0U) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_slt));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srl 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           >> (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srlw 
        = (VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0U, 0x20U) 
           >> (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit));
    VL_CONST_W_4X(128,__Vtemp_h30a05cc0__0,0x7fffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h24dff22d__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_21, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    VL_AND_W(4, __Vtemp_hea1b99e2__0, __Vtemp_h30a05cc0__0, __Vtemp_h24dff22d__0);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sll, __Vtemp_hea1b99e2__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sraw 
        = VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_sraw_T_1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_49 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_24, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_xor
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_46 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_18, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_and
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui_lo_lo 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)))))))));
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__3(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h4167257b__0;
    VlWide<4>/*127:0*/ __Vtemp_hae7d94dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9de643ba__0;
    CData/*31:0*/ __Vtemp_hbba985a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0b97778f__0;
    // Body
    vlSelf->__PVT__mulhsu_answer = VL_SEL_QWII(128, vlSelf->__PVT___mulhsu_answer_T_4, 0x40U, 0x40U);
    vlSelf->__PVT___mulw_answer_T_33 = VL_CONCAT_III(32,1,31, 
                                                     (1U 
                                                      & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                     VL_CONCAT_III(31,1,30, 
                                                                   (1U 
                                                                    & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                   VL_CONCAT_III(30,1,29, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(128, vlSelf->__PVT__mulu_answer, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__mulw_answer_lo_lo), (IData)(vlSelf->__PVT__mulw_answer_lo))))))))));
    vlSelf->__PVT___io_data_out_T_37 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_16, 0U))
                                         ? vlSelf->__PVT__remuw_answer
                                         : 0ULL);
    vlSelf->__PVT___GEN_12 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_33);
    vlSelf->__PVT__remw_answer_lo = VL_CONCAT_III(16,1,15, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                  VL_CONCAT_III(15,1,14, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                VL_CONCAT_III(14,1,13, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                              VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), (IData)(vlSelf->__PVT__remw_answer_lo_lo)))))))));
    vlSelf->__PVT__divw_answer_lo = VL_CONCAT_III(16,1,15, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                  VL_CONCAT_III(15,1,14, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                VL_CONCAT_III(14,1,13, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                              VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), (IData)(vlSelf->__PVT__divw_answer_lo_lo)))))))));
    VL_EXTEND_WI(127,1, __Vtemp_h4167257b__0, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_55));
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_20, __Vtemp_h4167257b__0);
    VL_EXTEND_WI(127,1, __Vtemp_hae7d94dd__0, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_52));
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_17, __Vtemp_hae7d94dd__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_37 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srlw)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srl);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_34 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sraw)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sra);
    VL_CONST_W_1X(127,__Vtemp_h9de643ba__0,0x00000000);
    __Vtemp_hbba985a2__0 = (1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_28, 0U));
    VL_COND_WIWW(127, __Vtemp_h0b97778f__0, __Vtemp_hbba985a2__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sll, __Vtemp_h9de643ba__0);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_51, __Vtemp_h0b97778f__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui_lo_lo)))))))));
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__4(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__4\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_42 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_28, 0U))
                                         ? vlSelf->__PVT__mulhsu_answer
                                         : 0ULL);
    vlSelf->__PVT__mulw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___mulw_answer_T_33, 
                                               VL_SEL_IWII(128, vlSelf->__PVT__mulu_answer, 0U, 0x20U));
    vlSelf->__PVT___GEN_13 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_37);
    vlSelf->__PVT___remw_answer_T_38 = VL_CONCAT_III(32,1,31, 
                                                     (1U 
                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                     VL_CONCAT_III(31,1,30, 
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                   VL_CONCAT_III(30,1,29, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__remw_answer_lo_lo), (IData)(vlSelf->__PVT__remw_answer_lo))))))))));
    vlSelf->__PVT___divw_answer_T_38 = VL_CONCAT_III(32,1,31, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                     VL_CONCAT_III(31,1,30, 
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                   VL_CONCAT_III(30,1,29, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__divw_answer_lo_lo), (IData)(vlSelf->__PVT__divw_answer_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_54 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_35, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_37
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_53 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_32, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_34
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_34 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_56 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_40 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_41);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__5(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__5\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hbe41855d__0;
    VlWide<4>/*127:0*/ __Vtemp_h520921ad__0;
    // Body
    vlSelf->__PVT___io_data_out_T_39 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_21, 0U))
                                         ? vlSelf->__PVT__mulw_answer
                                         : 0ULL);
    vlSelf->__PVT__remw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___remw_answer_T_38, vlSelf->__PVT___remw_answer_T_5);
    vlSelf->__PVT__divw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___divw_answer_T_38, 
                                               VL_SEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0U, 0x20U));
    VL_EXTEND_WQ(127,64, __Vtemp_hbe41855d__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_54);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_19, __Vtemp_hbe41855d__0);
    VL_EXTEND_WQ(127,64, __Vtemp_h520921ad__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_53);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_18, __Vtemp_h520921ad__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_34, 
                        VL_CONCAT_III(32,20,12, (0xfffffU 
                                                 & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0xcU, 0x14U)), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_57 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_56 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_42);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__6(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__6\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_36 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_14, 0U))
                                         ? vlSelf->__PVT__remw_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_32 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_6, 0U))
                                         ? vlSelf->__PVT__divw_answer
                                         : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_50 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_26, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_58 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_57 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_43);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__9(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__9\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he911211d__0;
    VlWide<4>/*127:0*/ __Vtemp_hfc7ded72__0;
    VlWide<4>/*127:0*/ __Vtemp_h163497ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h23b17801__0;
    VlWide<4>/*127:0*/ __Vtemp_hf37f66f6__0;
    // Body
    vlSelf->__PVT___io_data_out_T_44 = (vlSelf->__PVT___io_data_out_T_43 
                                        | vlSelf->__PVT___io_data_out_T_32);
    vlSelf->__PVT___io_data_out_T_45 = (vlSelf->__PVT___io_data_out_T_44 
                                        | vlSelf->__PVT___GEN_12);
    vlSelf->__PVT___io_data_out_T_46 = (vlSelf->__PVT___io_data_out_T_45 
                                        | vlSelf->__PVT___io_data_out_T_34);
    vlSelf->__PVT___io_data_out_T_47 = (vlSelf->__PVT___io_data_out_T_46 
                                        | vlSelf->__PVT___io_data_out_T_35);
    vlSelf->__PVT___io_data_out_T_48 = (vlSelf->__PVT___io_data_out_T_47 
                                        | vlSelf->__PVT___io_data_out_T_36);
    vlSelf->__PVT___io_data_out_T_49 = (vlSelf->__PVT___io_data_out_T_48 
                                        | vlSelf->__PVT___GEN_13);
    vlSelf->__PVT___io_data_out_T_50 = (vlSelf->__PVT___io_data_out_T_49 
                                        | vlSelf->__PVT___io_data_out_T_38);
    vlSelf->__PVT___io_data_out_T_51 = (vlSelf->__PVT___io_data_out_T_50 
                                        | vlSelf->__PVT___io_data_out_T_39);
    vlSelf->__PVT___io_data_out_T_52 = (vlSelf->__PVT___io_data_out_T_51 
                                        | vlSelf->__PVT___io_data_out_T_40);
    vlSelf->__PVT___io_data_out_T_53 = (vlSelf->__PVT___io_data_out_T_52 
                                        | vlSelf->__PVT___io_data_out_T_41);
    vlSelf->__PVT__io_data_out = (vlSelf->__PVT___io_data_out_T_53 
                                  | vlSelf->__PVT___io_data_out_T_42);
    VL_OR_W(4, __Vtemp_he911211d__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_67, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_18);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_68, __Vtemp_he911211d__0);
    VL_OR_W(4, __Vtemp_hfc7ded72__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_68, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_19);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_69, __Vtemp_hfc7ded72__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_data_out 
        = vlSelf->__PVT__io_data_out;
    VL_OR_W(4, __Vtemp_h163497ea__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_69, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_20);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, __Vtemp_h163497ea__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_5 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_muldiv_calE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_data_out
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result_lo_lo 
        = VL_CONCAT_III(8,1,7, (1U & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                        VL_CONCAT_III(7,1,6, (1U & 
                                              VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                      VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result_lo 
        = VL_CONCAT_III(16,1,15, (1U & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                        VL_CONCAT_III(15,1,14, (1U 
                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                      VL_CONCAT_III(14,1,13, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                    VL_CONCAT_III(13,1,12, 
                                                                  (1U 
                                                                   & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                  VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_33 
        = VL_CONCAT_III(32,1,31, (1U & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                        VL_CONCAT_III(31,1,30, (1U 
                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                      VL_CONCAT_III(30,1,29, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                    VL_CONCAT_III(29,1,28, 
                                                                  (1U 
                                                                   & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                  VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result_lo))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_35 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_33, 
                        VL_SEL_IWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result, 0U, 0x20U));
    VL_EXTEND_WQ(127,64, __Vtemp_h23b17801__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_35);
    VL_COND_WIWW(127, __Vtemp_hf37f66f6__0, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w), __Vtemp_h23b17801__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__normal_result);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_36, __Vtemp_hf37f66f6__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result 
        = VL_SEL_QWII(127, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___io_result_T_36, 0U, 0x40U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_alu_calE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result
            : 0ULL);
}
