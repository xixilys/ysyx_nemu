// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_muldiv.h"

VL_ATTR_COLD void Vmycpu_top_muldiv___stl_sequent__TOP__mycpu_top__u_riscv_cpu___muldiv__0(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___stl_sequent__TOP__mycpu_top__u_riscv_cpu___muldiv__0\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_28 = VL_EXTEND_II(24,12, 
                                                    (0xfffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSelf->__PVT___io_data_out_T_26 = VL_EXTEND_II(24,13, 
                                                    (0x1fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSelf->__PVT___io_data_out_T_24 = VL_EXTEND_II(24,14, 
                                                    (0x3fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSelf->__PVT___io_data_out_T_21 = VL_EXTEND_II(24,16, 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 8U, 0x10U)));
    vlSelf->__PVT___io_data_out_T_18 = VL_EXTEND_II(24,15, 
                                                    (0x7fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 9U, 0xfU)));
    vlSelf->__PVT___io_data_out_T_16 = VL_EXTEND_II(24,17, 
                                                    (0x1ffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 7U, 0x11U)));
    vlSelf->__PVT___io_data_out_T_14 = VL_EXTEND_II(24,18, 
                                                    (0x3ffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 6U, 0x12U)));
    vlSelf->__PVT___io_data_out_T_12 = VL_EXTEND_II(24,22, 
                                                    (0x3fffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 2U, 0x16U)));
    vlSelf->__PVT___io_data_out_T_10 = VL_EXTEND_II(24,21, 
                                                    (0x1fffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 3U, 0x15U)));
    vlSelf->__PVT___io_data_out_T_8 = VL_EXTEND_II(24,19, 
                                                   (0x7ffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 5U, 0x13U)));
    vlSelf->__PVT___io_data_out_T_6 = VL_EXTEND_II(24,20, 
                                                   (0xfffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 4U, 0x14U)));
    vlSelf->__PVT___io_data_out_T = VL_EXTEND_II(24,23, 
                                                 (0x7fffffU 
                                                  & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 1U, 0x17U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___stl_sequent__TOP__mycpu_top__u_riscv_cpu___muldiv__1(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___stl_sequent__TOP__mycpu_top__u_riscv_cpu___muldiv__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hef50358f__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__1;
    VlWide<3>/*95:0*/ __Vtemp_hec3b1cc1__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3809078__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__2;
    VlWide<3>/*95:0*/ __Vtemp_hef502200__0;
    VlWide<3>/*95:0*/ __Vtemp_he76f726f__0;
    VlWide<3>/*95:0*/ __Vtemp_h53710020__0;
    VlWide<3>/*95:0*/ __Vtemp_hff7a9af4__0;
    VlWide<4>/*127:0*/ __Vtemp_hec451ce3__0;
    VlWide<4>/*127:0*/ __Vtemp_hef523222__0;
    VlWide<4>/*127:0*/ __Vtemp_h497d3a1f__0;
    VlWide<4>/*127:0*/ __Vtemp_hec452cf4__0;
    VlWide<4>/*127:0*/ __Vtemp_hef5205b1__0;
    VlWide<4>/*127:0*/ __Vtemp_h689363fa__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__1;
    VlWide<5>/*159:0*/ __Vtemp_heca54db5__0;
    VlWide<5>/*159:0*/ __Vtemp_hd16f635c__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e896d6a__2;
    VlWide<5>/*159:0*/ __Vtemp_h5681aa02__0;
    VlWide<5>/*159:0*/ __Vtemp_hb4f897f2__0;
    VlWide<5>/*159:0*/ __Vtemp_hb55a541b__0;
    VlWide<5>/*159:0*/ __Vtemp_h07c72a6a__0;
    VlWide<4>/*127:0*/ __Vtemp_he49eb378__0;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_hef50358f__0, vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(65,vlSelf->__PVT___mulhsu_answer_T_1, __Vtemp_hef50358f__0);
    vlSelf->__PVT___divw_answer_T_3 = VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U);
    vlSelf->__PVT___GEN_1 = VL_MODDIV_III(32, VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U), 
                                          VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U));
    vlSelf->__PVT___GEN_0 = VL_MODDIV_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT__rem_answer = VL_MODDIVS_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT___divuw_answer_T_2 = VL_DIV_III(32, 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U), 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U));
    vlSelf->__PVT__divu_answer = VL_DIV_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__0,0x00000001,0xffffffff,0xffffffff);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__1,0x00000001,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(65,64, __Vtemp_hec3b1cc1__0, vlSelf->__PVT__io_in1);
    VL_AND_W(3, __Vtemp_hc3809078__0, __Vtemp_h8535fab8__1, __Vtemp_hec3b1cc1__0);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__2,0x00000001,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(65,64, __Vtemp_hef502200__0, vlSelf->__PVT__io_in2);
    VL_AND_W(3, __Vtemp_he76f726f__0, __Vtemp_h8535fab8__2, __Vtemp_hef502200__0);
    VL_DIVS_WWW(65, __Vtemp_h53710020__0, __Vtemp_hc3809078__0, __Vtemp_he76f726f__0);
    VL_AND_W(3, __Vtemp_hff7a9af4__0, __Vtemp_h8535fab8__0, __Vtemp_h53710020__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__div_answer, __Vtemp_hff7a9af4__0);
    VL_EXTENDS_WQ(128,64, __Vtemp_hec451ce3__0, vlSelf->__PVT__io_in1);
    VL_EXTENDS_WQ(128,64, __Vtemp_hef523222__0, vlSelf->__PVT__io_in2);
    VL_MULS_WWW(128, __Vtemp_h497d3a1f__0, __Vtemp_hec451ce3__0, __Vtemp_hef523222__0);
    VL_ASSIGN_W(128,vlSelf->__PVT__mul_answer, __Vtemp_h497d3a1f__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hec452cf4__0, vlSelf->__PVT__io_in1);
    VL_EXTEND_WQ(128,64, __Vtemp_hef5205b1__0, vlSelf->__PVT__io_in2);
    VL_MUL_W(4, __Vtemp_h689363fa__0, __Vtemp_hec452cf4__0, __Vtemp_hef5205b1__0);
    VL_ASSIGN_W(128,vlSelf->__PVT__mulu_answer, __Vtemp_h689363fa__0);
    vlSelf->__PVT___divw_answer_T_1 = VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U);
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
    vlSelf->__PVT___remuw_answer_T_2 = vlSelf->__PVT___GEN_1;
    vlSelf->__PVT__remu_answer = vlSelf->__PVT___GEN_0;
    vlSelf->__PVT___io_data_out_T_34 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_10, 0U))
                                         ? vlSelf->__PVT__rem_answer
                                         : 0ULL);
    vlSelf->__PVT__divuw_answer = VL_EXTEND_QI(33,32, vlSelf->__PVT___divuw_answer_T_2);
    vlSelf->__PVT___io_data_out_T_31 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT__io_ctrl, 0U))
                                         ? vlSelf->__PVT__divu_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_30 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T, 0U))
                                         ? VL_SEL_QWII(65, vlSelf->__PVT__div_answer, 0U, 0x40U)
                                         : 0ULL);
    vlSelf->__PVT__mulh_answer = VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0x40U, 0x40U);
    vlSelf->__PVT___io_data_out_T_38 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_18, 0U))
                                         ? VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0U, 0x40U)
                                         : 0ULL);
    vlSelf->__PVT__mulhu_answer = VL_SEL_QWII(128, vlSelf->__PVT__mulu_answer, 0x40U, 0x40U);
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
    VL_SEL_WWII(128,129, __Vtemp_he49eb378__0, vlSelf->__PVT___mulhsu_answer_T_2, 0U, 0x80U);
    VL_ASSIGN_W(128,vlSelf->__PVT___mulhsu_answer_T_4, __Vtemp_he49eb378__0);
    vlSelf->__PVT__remuw_answer = VL_EXTEND_QI(33,32, vlSelf->__PVT___remuw_answer_T_2);
    vlSelf->__PVT___io_data_out_T_35 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_12, 0U))
                                         ? vlSelf->__PVT__remu_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_33 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_8, 0U))
                                         ? vlSelf->__PVT__divuw_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_43 = (vlSelf->__PVT___io_data_out_T_30 
                                        | vlSelf->__PVT___io_data_out_T_31);
    vlSelf->__PVT___io_data_out_T_40 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_24, 0U))
                                         ? vlSelf->__PVT__mulh_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_41 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_26, 0U))
                                         ? vlSelf->__PVT__mulhu_answer
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
    vlSelf->__PVT__mulhsu_answer = VL_SEL_QWII(128, vlSelf->__PVT___mulhsu_answer_T_4, 0x40U, 0x40U);
    vlSelf->__PVT___io_data_out_T_37 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_16, 0U))
                                         ? vlSelf->__PVT__remuw_answer
                                         : 0ULL);
    vlSelf->__PVT___GEN_12 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_33);
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
    vlSelf->__PVT___io_data_out_T_42 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_28, 0U))
                                         ? vlSelf->__PVT__mulhsu_answer
                                         : 0ULL);
    vlSelf->__PVT___GEN_13 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_37);
    vlSelf->__PVT__mulw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___mulw_answer_T_33, 
                                               VL_SEL_IWII(128, vlSelf->__PVT__mulu_answer, 0U, 0x20U));
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
    vlSelf->__PVT___io_data_out_T_39 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_21, 0U))
                                         ? vlSelf->__PVT__mulw_answer
                                         : 0ULL);
    vlSelf->__PVT__remw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___remw_answer_T_38, vlSelf->__PVT___remw_answer_T_5);
    vlSelf->__PVT__divw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___divw_answer_T_38, 
                                               VL_SEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0U, 0x20U));
    vlSelf->__PVT___io_data_out_T_36 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_14, 0U))
                                         ? vlSelf->__PVT__remw_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_32 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_6, 0U))
                                         ? vlSelf->__PVT__divw_answer
                                         : 0ULL);
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
}

VL_ATTR_COLD void Vmycpu_top_muldiv___ctor_var_reset(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_ctrl = 0;
    vlSelf->__PVT__io_in1 = 0;
    vlSelf->__PVT__io_in2 = 0;
    vlSelf->__PVT__io_data_out = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__mulu_answer);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__mul_answer);
    vlSelf->__PVT__mulh_answer = 0;
    vlSelf->__PVT__mulhu_answer = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___mulhsu_answer_T_1);
    VL_ZERO_RESET_W(129, vlSelf->__PVT___mulhsu_answer_T_2);
    VL_ZERO_RESET_W(128, vlSelf->__PVT___mulhsu_answer_T_4);
    vlSelf->__PVT__mulhsu_answer = 0;
    vlSelf->__PVT__mulw_answer_lo_lo = 0;
    vlSelf->__PVT__mulw_answer_lo = 0;
    vlSelf->__PVT___mulw_answer_T_33 = 0;
    vlSelf->__PVT__mulw_answer = 0;
    vlSelf->__PVT__divu_answer = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__div_answer);
    vlSelf->__PVT___divw_answer_T_1 = 0;
    vlSelf->__PVT___divw_answer_T_3 = 0;
    vlSelf->__PVT___divw_answer_T_5 = 0;
    vlSelf->__PVT__divw_answer_lo_lo = 0;
    vlSelf->__PVT__divw_answer_lo = 0;
    vlSelf->__PVT___divw_answer_T_38 = 0;
    vlSelf->__PVT__divw_answer = 0;
    vlSelf->__PVT___divuw_answer_T_2 = 0;
    vlSelf->__PVT__divuw_answer = 0;
    vlSelf->__PVT___GEN_0 = 0;
    vlSelf->__PVT__remu_answer = 0;
    vlSelf->__PVT__rem_answer = 0;
    vlSelf->__PVT___remw_answer_T_5 = 0;
    vlSelf->__PVT__remw_answer_lo_lo = 0;
    vlSelf->__PVT__remw_answer_lo = 0;
    vlSelf->__PVT___remw_answer_T_38 = 0;
    vlSelf->__PVT__remw_answer = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT___remuw_answer_T_2 = 0;
    vlSelf->__PVT__remuw_answer = 0;
    vlSelf->__PVT___io_data_out_T = 0;
    vlSelf->__PVT___io_data_out_T_6 = 0;
    vlSelf->__PVT___io_data_out_T_8 = 0;
    vlSelf->__PVT___io_data_out_T_10 = 0;
    vlSelf->__PVT___io_data_out_T_12 = 0;
    vlSelf->__PVT___io_data_out_T_14 = 0;
    vlSelf->__PVT___io_data_out_T_16 = 0;
    vlSelf->__PVT___io_data_out_T_18 = 0;
    vlSelf->__PVT___io_data_out_T_21 = 0;
    vlSelf->__PVT___io_data_out_T_24 = 0;
    vlSelf->__PVT___io_data_out_T_26 = 0;
    vlSelf->__PVT___io_data_out_T_28 = 0;
    vlSelf->__PVT___io_data_out_T_30 = 0;
    vlSelf->__PVT___io_data_out_T_31 = 0;
    vlSelf->__PVT___io_data_out_T_32 = 0;
    vlSelf->__PVT___io_data_out_T_33 = 0;
    vlSelf->__PVT___io_data_out_T_34 = 0;
    vlSelf->__PVT___io_data_out_T_35 = 0;
    vlSelf->__PVT___io_data_out_T_36 = 0;
    vlSelf->__PVT___io_data_out_T_37 = 0;
    vlSelf->__PVT___io_data_out_T_38 = 0;
    vlSelf->__PVT___io_data_out_T_39 = 0;
    vlSelf->__PVT___io_data_out_T_40 = 0;
    vlSelf->__PVT___io_data_out_T_41 = 0;
    vlSelf->__PVT___io_data_out_T_42 = 0;
    vlSelf->__PVT___io_data_out_T_43 = 0;
    vlSelf->__PVT___io_data_out_T_44 = 0;
    vlSelf->__PVT___GEN_12 = 0;
    vlSelf->__PVT___io_data_out_T_45 = 0;
    vlSelf->__PVT___io_data_out_T_46 = 0;
    vlSelf->__PVT___io_data_out_T_47 = 0;
    vlSelf->__PVT___io_data_out_T_48 = 0;
    vlSelf->__PVT___GEN_13 = 0;
    vlSelf->__PVT___io_data_out_T_49 = 0;
    vlSelf->__PVT___io_data_out_T_50 = 0;
    vlSelf->__PVT___io_data_out_T_51 = 0;
    vlSelf->__PVT___io_data_out_T_52 = 0;
    vlSelf->__PVT___io_data_out_T_53 = 0;
}
