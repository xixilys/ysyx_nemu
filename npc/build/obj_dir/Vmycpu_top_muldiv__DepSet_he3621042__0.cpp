// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_muldiv.h"

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__0(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__0\n"); );
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
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_hef50358f__0, vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(65,vlSelf->__PVT___mulhsu_answer_T_1, __Vtemp_hef50358f__0);
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
    vlSelf->__PVT___divw_answer_T_3 = VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__7(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__7\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_30 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T, 0U))
                                         ? VL_SEL_QWII(65, vlSelf->__PVT__div_answer, 0U, 0x40U)
                                         : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__8(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___nba_comb__TOP__mycpu_top__u_riscv_cpu___muldiv__8\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_43 = (vlSelf->__PVT___io_data_out_T_30 
                                        | vlSelf->__PVT___io_data_out_T_31);
}
