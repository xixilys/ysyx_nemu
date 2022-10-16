// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_muldiv.h"

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__0(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__0\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_28 = VL_EXTEND_II(24,12, 
                                                    (0xfffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xcU, 0xcU)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__1(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__1\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_26 = VL_EXTEND_II(24,13, 
                                                    (0x1fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xbU, 0xdU)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__2(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__2\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_24 = VL_EXTEND_II(24,14, 
                                                    (0x3fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xaU, 0xeU)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__3(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__3\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_21 = VL_EXTEND_II(24,16, 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 8U, 0x10U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__4(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__4\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_18 = VL_EXTEND_II(24,15, 
                                                    (0x7fffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 9U, 0xfU)));
    vlSelf->__PVT___io_data_out_T_16 = VL_EXTEND_II(24,17, 
                                                    (0x1ffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 7U, 0x11U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__5(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__5\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_14 = VL_EXTEND_II(24,18, 
                                                    (0x3ffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 6U, 0x12U)));
    vlSelf->__PVT___io_data_out_T_12 = VL_EXTEND_II(24,22, 
                                                    (0x3fffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 2U, 0x16U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__6(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__6\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_10 = VL_EXTEND_II(24,21, 
                                                    (0x1fffffU 
                                                     & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 3U, 0x15U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__7(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__7\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_8 = VL_EXTEND_II(24,19, 
                                                   (0x7ffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 5U, 0x13U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__8(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__8\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_6 = VL_EXTEND_II(24,20, 
                                                   (0xfffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 4U, 0x14U)));
    vlSelf->__PVT___io_data_out_T = VL_EXTEND_II(24,23, 
                                                 (0x7fffffU 
                                                  & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 1U, 0x17U)));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__9(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__9\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h74bd6d88__0;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h74bd6d88__0, vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(65,vlSelf->__PVT___mulhsu_answer_T_1, __Vtemp_h74bd6d88__0);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__10(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__10\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h4f664a8c__0;
    VlWide<4>/*127:0*/ __Vtemp_h74e07853__0;
    VlWide<4>/*127:0*/ __Vtemp_h3f8667ac__0;
    // Body
    VL_EXTENDS_WQ(128,64, __Vtemp_h4f664a8c__0, vlSelf->__PVT__io_in1);
    VL_EXTENDS_WQ(128,64, __Vtemp_h74e07853__0, vlSelf->__PVT__io_in2);
    VL_MULS_WWW(128, __Vtemp_h3f8667ac__0, __Vtemp_h4f664a8c__0, __Vtemp_h74e07853__0);
    VL_ASSIGN_W(128,vlSelf->__PVT__mul_answer, __Vtemp_h3f8667ac__0);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__11(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__11\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = VL_MODDIV_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT__rem_answer = VL_MODDIVS_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__12(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__12\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h4f6659bf__0;
    VlWide<4>/*127:0*/ __Vtemp_h74e00806__0;
    VlWide<4>/*127:0*/ __Vtemp_h7a60c672__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__1;
    VlWide<3>/*95:0*/ __Vtemp_h4f3f03fa__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f829263__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__2;
    VlWide<3>/*95:0*/ __Vtemp_h74bd5eb1__0;
    VlWide<3>/*95:0*/ __Vtemp_h8cff302d__0;
    VlWide<3>/*95:0*/ __Vtemp_hcaa9eb4c__0;
    VlWide<3>/*95:0*/ __Vtemp_h70c2d881__0;
    // Body
    VL_EXTEND_WQ(128,64, __Vtemp_h4f6659bf__0, vlSelf->__PVT__io_in1);
    VL_EXTEND_WQ(128,64, __Vtemp_h74e00806__0, vlSelf->__PVT__io_in2);
    VL_MUL_W(4, __Vtemp_h7a60c672__0, __Vtemp_h4f6659bf__0, __Vtemp_h74e00806__0);
    VL_ASSIGN_W(128,vlSelf->__PVT__mulu_answer, __Vtemp_h7a60c672__0);
    vlSelf->__PVT___divuw_answer_T_2 = VL_DIV_III(32, 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U), 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U));
    vlSelf->__PVT__divu_answer = VL_DIV_QQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__0,0x00000001,0xffffffff,0xffffffff);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__1,0x00000001,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(65,64, __Vtemp_h4f3f03fa__0, vlSelf->__PVT__io_in1);
    VL_AND_W(3, __Vtemp_h4f829263__0, __Vtemp_h83e9204a__1, __Vtemp_h4f3f03fa__0);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__2,0x00000001,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(65,64, __Vtemp_h74bd5eb1__0, vlSelf->__PVT__io_in2);
    VL_AND_W(3, __Vtemp_h8cff302d__0, __Vtemp_h83e9204a__2, __Vtemp_h74bd5eb1__0);
    VL_DIVS_WWW(65, __Vtemp_hcaa9eb4c__0, __Vtemp_h4f829263__0, __Vtemp_h8cff302d__0);
    VL_AND_W(3, __Vtemp_h70c2d881__0, __Vtemp_h83e9204a__0, __Vtemp_hcaa9eb4c__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__div_answer, __Vtemp_h70c2d881__0);
    vlSelf->__PVT___GEN_1 = VL_MODDIV_III(32, VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U), 
                                          VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__13(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__13\n"); );
    // Body
    vlSelf->__PVT___divw_answer_T_1 = VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U);
    vlSelf->__PVT___divw_answer_T_3 = VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x20U);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__14(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__14\n"); );
    // Body
    vlSelf->__PVT__mulhu_answer = VL_SEL_QWII(128, vlSelf->__PVT__mulu_answer, 0x40U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__15(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__15\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h12d3ec54__0;
    VlWide<5>/*159:0*/ __Vtemp_h12d3ec54__1;
    VlWide<5>/*159:0*/ __Vtemp_h4f64723e__0;
    VlWide<5>/*159:0*/ __Vtemp_h4cd01693__0;
    VlWide<5>/*159:0*/ __Vtemp_h12d3ec54__2;
    VlWide<5>/*159:0*/ __Vtemp_h01d0b319__0;
    VlWide<5>/*159:0*/ __Vtemp_h8d0f4ce2__0;
    VlWide<5>/*159:0*/ __Vtemp_h65c0294b__0;
    VlWide<5>/*159:0*/ __Vtemp_hd2000538__0;
    // Body
    VL_CONST_W_5X(160,__Vtemp_h12d3ec54__0,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_CONST_W_5X(160,__Vtemp_h12d3ec54__1,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_EXTENDS_WQ(129,64, __Vtemp_h4f64723e__0, vlSelf->__PVT__io_in1);
    VL_AND_W(5, __Vtemp_h4cd01693__0, __Vtemp_h12d3ec54__1, __Vtemp_h4f64723e__0);
    VL_CONST_W_5X(160,__Vtemp_h12d3ec54__2,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_EXTENDS_WW(129,65, __Vtemp_h01d0b319__0, vlSelf->__PVT___mulhsu_answer_T_1);
    VL_AND_W(5, __Vtemp_h8d0f4ce2__0, __Vtemp_h12d3ec54__2, __Vtemp_h01d0b319__0);
    VL_MULS_WWW(129, __Vtemp_h65c0294b__0, __Vtemp_h4cd01693__0, __Vtemp_h8d0f4ce2__0);
    VL_AND_W(5, __Vtemp_hd2000538__0, __Vtemp_h12d3ec54__0, __Vtemp_h65c0294b__0);
    VL_ASSIGN_W(129,vlSelf->__PVT___mulhsu_answer_T_2, __Vtemp_hd2000538__0);
    vlSelf->__PVT__mulh_answer = VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0x40U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__16(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__16\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_38 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_18, 0U))
                                         ? VL_SEL_QWII(128, vlSelf->__PVT__mul_answer, 0U, 0x40U)
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__17(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__17\n"); );
    // Body
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
    vlSelf->__PVT__remu_answer = vlSelf->__PVT___GEN_0;
    vlSelf->__PVT___io_data_out_T_34 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_10, 0U))
                                         ? vlSelf->__PVT__rem_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__18(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__18\n"); );
    // Body
    vlSelf->__PVT__divuw_answer = VL_EXTEND_QI(33,32, vlSelf->__PVT___divuw_answer_T_2);
    vlSelf->__PVT___io_data_out_T_30 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T, 0U))
                                         ? VL_SEL_QWII(65, vlSelf->__PVT__div_answer, 0U, 0x40U)
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_31 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT__io_ctrl, 0U))
                                         ? vlSelf->__PVT__divu_answer
                                         : 0ULL);
    vlSelf->__PVT___remuw_answer_T_2 = vlSelf->__PVT___GEN_1;
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__19(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__19\n"); );
    // Body
    vlSelf->__PVT___remw_answer_T_5 = VL_MODDIVS_III(32, vlSelf->__PVT___divw_answer_T_1, vlSelf->__PVT___divw_answer_T_3);
    vlSelf->__PVT___divw_answer_T_5 = (0x1ffffffffULL 
                                       & VL_DIVS_QQQ(33, 
                                                     (0x1ffffffffULL 
                                                      & VL_EXTENDS_QI(33,32, vlSelf->__PVT___divw_answer_T_1)), 
                                                     (0x1ffffffffULL 
                                                      & VL_EXTENDS_QI(33,32, vlSelf->__PVT___divw_answer_T_3))));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__20(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__20\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_41 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_26, 0U))
                                         ? vlSelf->__PVT__mulhu_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__21(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__21\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8402ae53__0;
    // Body
    VL_SEL_WWII(128,129, __Vtemp_h8402ae53__0, vlSelf->__PVT___mulhsu_answer_T_2, 0U, 0x80U);
    VL_ASSIGN_W(128,vlSelf->__PVT___mulhsu_answer_T_4, __Vtemp_h8402ae53__0);
    vlSelf->__PVT___io_data_out_T_40 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_24, 0U))
                                         ? vlSelf->__PVT__mulh_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__22(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__22\n"); );
    // Body
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
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__23(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__23\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_35 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_12, 0U))
                                         ? vlSelf->__PVT__remu_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__24(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__24\n"); );
    // Body
    vlSelf->__PVT__remuw_answer_lo_lo = VL_CONCAT_III(8,1,7, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                      VL_CONCAT_III(7,1,6, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                    VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)))))))));
    vlSelf->__PVT___io_data_out_T_33 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_8, 0U))
                                         ? vlSelf->__PVT__divuw_answer
                                         : 0ULL);
    vlSelf->__PVT___io_data_out_T_43 = (vlSelf->__PVT___io_data_out_T_30 
                                        | vlSelf->__PVT___io_data_out_T_31);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__25(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__25\n"); );
    // Body
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
    vlSelf->__PVT__divw_answer = VL_EXTEND_QI(33,32, 
                                              VL_SEL_IQII(33, vlSelf->__PVT___divw_answer_T_5, 0U, 0x20U));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__26(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__26\n"); );
    // Body
    vlSelf->__PVT__mulhsu_answer = VL_SEL_QWII(128, vlSelf->__PVT___mulhsu_answer_T_4, 0x40U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__27(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__27\n"); );
    // Body
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
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__28(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__28\n"); );
    // Body
    vlSelf->__PVT__remuw_answer_lo = VL_CONCAT_III(16,1,15, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                   VL_CONCAT_III(15,1,14, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                 VL_CONCAT_III(14,1,13, 
                                                                               (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                               VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), (IData)(vlSelf->__PVT__remuw_answer_lo_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__29(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__29\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_33);
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
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__30(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__30\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_32 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_6, 0U))
                                         ? vlSelf->__PVT__divw_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__31(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__31\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_42 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_28, 0U))
                                         ? vlSelf->__PVT__mulhsu_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__32(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__32\n"); );
    // Body
    vlSelf->__PVT__mulw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___mulw_answer_T_33, 
                                               VL_SEL_IWII(128, vlSelf->__PVT__mulu_answer, 0U, 0x20U));
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__33(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__33\n"); );
    // Body
    vlSelf->__PVT___remuw_answer_T_35 = VL_CONCAT_III(32,1,31, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                      VL_CONCAT_III(31,1,30, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                    VL_CONCAT_III(30,1,29, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___remuw_answer_T_2, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__remuw_answer_lo_lo), (IData)(vlSelf->__PVT__remuw_answer_lo))))))))));
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
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__34(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__34\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = VL_EXTEND_QQ(64,33, vlSelf->__PVT___io_data_out_T_32);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__35(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__35\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_39 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_21, 0U))
                                         ? vlSelf->__PVT__mulw_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__36(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__36\n"); );
    // Body
    vlSelf->__PVT__remuw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___remuw_answer_T_35, vlSelf->__PVT___remuw_answer_T_2);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__37(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__37\n"); );
    // Body
    vlSelf->__PVT__remw_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___remw_answer_T_38, vlSelf->__PVT___remw_answer_T_5);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__38(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__38\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_44 = (vlSelf->__PVT___io_data_out_T_43 
                                        | vlSelf->__PVT___GEN_12);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__39(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__39\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_37 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_16, 0U))
                                         ? vlSelf->__PVT__remuw_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__40(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__40\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_36 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___io_data_out_T_14, 0U))
                                         ? vlSelf->__PVT__remw_answer
                                         : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__41(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__41\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_45 = (vlSelf->__PVT___io_data_out_T_44 
                                        | vlSelf->__PVT___GEN_13);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__42(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__42\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_46 = (vlSelf->__PVT___io_data_out_T_45 
                                        | vlSelf->__PVT___io_data_out_T_34);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__43(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__43\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_47 = (vlSelf->__PVT___io_data_out_T_46 
                                        | vlSelf->__PVT___io_data_out_T_35);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__44(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__44\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_48 = (vlSelf->__PVT___io_data_out_T_47 
                                        | vlSelf->__PVT___io_data_out_T_36);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__45(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__45\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_49 = (vlSelf->__PVT___io_data_out_T_48 
                                        | vlSelf->__PVT___io_data_out_T_37);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__46(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__46\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_50 = (vlSelf->__PVT___io_data_out_T_49 
                                        | vlSelf->__PVT___io_data_out_T_38);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__47(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__47\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_51 = (vlSelf->__PVT___io_data_out_T_50 
                                        | vlSelf->__PVT___io_data_out_T_39);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__48(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__48\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_52 = (vlSelf->__PVT___io_data_out_T_51 
                                        | vlSelf->__PVT___io_data_out_T_40);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__49(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__49\n"); );
    // Body
    vlSelf->__PVT___io_data_out_T_53 = (vlSelf->__PVT___io_data_out_T_52 
                                        | vlSelf->__PVT___io_data_out_T_41);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__50(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__50\n"); );
    // Body
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
    vlSelf->__PVT__remuw_answer_lo_lo = 0;
    vlSelf->__PVT__remuw_answer_lo = 0;
    vlSelf->__PVT___remuw_answer_T_35 = 0;
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
    vlSelf->__PVT___GEN_12 = 0;
    vlSelf->__PVT___io_data_out_T_44 = 0;
    vlSelf->__PVT___GEN_13 = 0;
    vlSelf->__PVT___io_data_out_T_45 = 0;
    vlSelf->__PVT___io_data_out_T_46 = 0;
    vlSelf->__PVT___io_data_out_T_47 = 0;
    vlSelf->__PVT___io_data_out_T_48 = 0;
    vlSelf->__PVT___io_data_out_T_49 = 0;
    vlSelf->__PVT___io_data_out_T_50 = 0;
    vlSelf->__PVT___io_data_out_T_51 = 0;
    vlSelf->__PVT___io_data_out_T_52 = 0;
    vlSelf->__PVT___io_data_out_T_53 = 0;
}
