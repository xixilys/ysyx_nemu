// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_alu.h"

VL_ATTR_COLD void Vmycpu_top_alu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___alu__0(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___alu__0\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_38 = VL_EXTEND_II(24,10, 
                                                      (0x3ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xeU, 0xaU)));
    vlSelf->__PVT___normal_result_T_35 = VL_EXTEND_II(24,8, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x10U, 8U)));
    vlSelf->__PVT___normal_result_T_32 = VL_EXTEND_II(24,9, 
                                                      (0x1ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xfU, 9U)));
    vlSelf->__PVT___normal_result_T_30 = VL_EXTEND_II(24,11, 
                                                      (0x7ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xdU, 0xbU)));
    vlSelf->__PVT___normal_result_T_28 = VL_EXTEND_II(24,12, 
                                                      (0xfffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSelf->__PVT___normal_result_T_26 = VL_EXTEND_II(24,17, 
                                                      (0x1ffffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 7U, 0x11U)));
    vlSelf->__PVT___normal_result_T_24 = VL_EXTEND_II(24,4, 
                                                      (0xfU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x14U, 4U)));
    vlSelf->__PVT___normal_result_T_22 = VL_EXTEND_II(24,14, 
                                                      (0x3fffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSelf->__PVT___normal_result_T_20 = VL_EXTEND_II(24,13, 
                                                      (0x1fffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSelf->__PVT___normal_result_T_18 = VL_EXTEND_II(24,20, 
                                                      (0xfffffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 4U, 0x14U)));
    vlSelf->__PVT___normal_result_T_15 = VL_EXTEND_II(24,5, 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x13U, 5U)));
    vlSelf->__PVT___normal_result_T_9 = VL_EXTEND_II(24,7, 
                                                     (0x7fU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x11U, 7U)));
    vlSelf->__PVT___normal_result_T_6 = VL_EXTEND_II(24,21, 
                                                     (0x1fffffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 3U, 0x15U)));
    vlSelf->__PVT___normal_result_T = VL_EXTEND_II(24,23, 
                                                   (0x7fffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 1U, 0x17U)));
    vlSelf->__PVT___normal_result_T_12 = VL_EXTEND_II(24,6, 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x12U, 6U)));
    vlSelf->__PVT___normal_result_T_3 = VL_EXTEND_II(24,22, 
                                                     (0x3fffffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 2U, 0x16U)));
}

VL_ATTR_COLD void Vmycpu_top_alu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___alu__1(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___stl_sequent__TOP__mycpu_top__u_riscv_cpu___alu__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb38bf80e__0;
    VlWide<4>/*127:0*/ __Vtemp_hec452cf4__0;
    VlWide<3>/*95:0*/ __Vtemp_h29fb6bc4__0;
    VlWide<4>/*127:0*/ __Vtemp_h30a05cc0__0;
    VlWide<4>/*127:0*/ __Vtemp_ha40b94ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e6382cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b556160__0;
    VlWide<3>/*95:0*/ __Vtemp_h425be444__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__1;
    VlWide<3>/*95:0*/ __Vtemp_h61040b23__0;
    VlWide<3>/*95:0*/ __Vtemp_hee3fef80__0;
    VlWide<4>/*127:0*/ __Vtemp_h65461713__0;
    VlWide<4>/*127:0*/ __Vtemp_h57096862__0;
    VlWide<4>/*127:0*/ __Vtemp_h9de643ba__0;
    CData/*31:0*/ __Vtemp_h575d01b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h6f5273e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h90dc22c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h276d6b86__0;
    VlWide<4>/*127:0*/ __Vtemp_h8b7378a0__0;
    VlWide<4>/*127:0*/ __Vtemp_h8772b14d__0;
    VlWide<4>/*127:0*/ __Vtemp_hb571f582__0;
    VlWide<4>/*127:0*/ __Vtemp_haba29613__0;
    VlWide<4>/*127:0*/ __Vtemp_hb672da7c__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4a2a408__0;
    VlWide<4>/*127:0*/ __Vtemp_h569cabfe__0;
    VlWide<4>/*127:0*/ __Vtemp_h64721fed__0;
    // Body
    vlSelf->__PVT__sa_for_32bit = (0x1fU & VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 5U));
    vlSelf->__PVT__sa = (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 6U));
    vlSelf->__PVT___answer_lui_T_1 = VL_CONCAT_III(32,20,12, 
                                                   (0xfffffU 
                                                    & VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0xcU, 0x14U)), 0U);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_hb38bf80e__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_in2, 0x3fU)), vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(65,vlSelf->__PVT__in2_extend, __Vtemp_hb38bf80e__0);
    vlSelf->__PVT__answer_sltu = (vlSelf->__PVT__io_in1 
                                  < vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_slt = VL_LTS_IQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    VL_EXTEND_WQ(127,64, __Vtemp_hec452cf4__0, vlSelf->__PVT__io_in1);
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_21, __Vtemp_hec452cf4__0);
    vlSelf->__PVT___answer_sraw_T_1 = VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U);
    vlSelf->__PVT__answer_xor = (vlSelf->__PVT__io_in1 
                                 ^ vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_and = (vlSelf->__PVT__io_in1 
                                 & vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_or = (vlSelf->__PVT__io_in1 
                                | vlSelf->__PVT__io_in2);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h29fb6bc4__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_in1, 0x3fU)), vlSelf->__PVT__io_in1);
    VL_ASSIGN_W(65,vlSelf->__PVT__in1_extend, __Vtemp_h29fb6bc4__0);
    vlSelf->__PVT__answer_srlw = (VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 0x20U) 
                                  >> (IData)(vlSelf->__PVT__sa_for_32bit));
    vlSelf->__PVT__answer_srl = (vlSelf->__PVT__io_in1 
                                 >> (IData)(vlSelf->__PVT__sa));
    vlSelf->__PVT__answer_sra = VL_SHIFTRS_QQI(64,64,6, vlSelf->__PVT__io_in1, (IData)(vlSelf->__PVT__sa));
    vlSelf->__PVT__answer_lui_lo_lo = VL_CONCAT_III(8,1,7, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(7,1,6, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)))))))));
    vlSelf->__PVT___normal_result_T_55 = (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_38, 0U) 
                                          & (IData)(vlSelf->__PVT__answer_sltu));
    vlSelf->__PVT___normal_result_T_52 = (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_30, 0U) 
                                          & (IData)(vlSelf->__PVT__answer_slt));
    VL_CONST_W_4X(128,__Vtemp_h30a05cc0__0,0x7fffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_ha40b94ea__0, vlSelf->__PVT___GEN_21, (IData)(vlSelf->__PVT__sa));
    VL_AND_W(4, __Vtemp_h2e6382cc__0, __Vtemp_h30a05cc0__0, __Vtemp_ha40b94ea__0);
    VL_ASSIGN_W(127,vlSelf->__PVT__answer_sll, __Vtemp_h2e6382cc__0);
    vlSelf->__PVT__answer_sraw = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT___answer_sraw_T_1, (IData)(vlSelf->__PVT__sa_for_32bit));
    vlSelf->__PVT___normal_result_T_49 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_24, 0U))
                                           ? vlSelf->__PVT__answer_xor
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_46 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_18, 0U))
                                           ? vlSelf->__PVT__answer_and
                                           : 0ULL);
    vlSelf->__PVT__answer_nor = (~ vlSelf->__PVT__answer_or);
    vlSelf->__PVT___normal_result_T_47 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_20, 0U))
                                           ? vlSelf->__PVT__answer_or
                                           : 0ULL);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__0,0x00000001,0xffffffff,0xffffffff);
    VL_SUB_W(3, __Vtemp_h5b556160__0, vlSelf->__PVT__in1_extend, vlSelf->__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h425be444__0, __Vtemp_h8535fab8__0, __Vtemp_h5b556160__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__answer_sub, __Vtemp_h425be444__0);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__1,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_h61040b23__0, vlSelf->__PVT__in1_extend, vlSelf->__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_hee3fef80__0, __Vtemp_h8535fab8__1, __Vtemp_h61040b23__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__answer_add, __Vtemp_hee3fef80__0);
    vlSelf->__PVT___normal_result_T_37 = ((IData)(vlSelf->__PVT__io_data_w)
                                           ? VL_EXTEND_QI(64,32, vlSelf->__PVT__answer_srlw)
                                           : vlSelf->__PVT__answer_srl);
    vlSelf->__PVT__answer_lui_lo = VL_CONCAT_III(16,1,15, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                 VL_CONCAT_III(15,1,14, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                               VL_CONCAT_III(14,1,13, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                             VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), (IData)(vlSelf->__PVT__answer_lui_lo_lo)))))))));
    VL_EXTEND_WI(127,1, __Vtemp_h65461713__0, (IData)(vlSelf->__PVT___normal_result_T_55));
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_20, __Vtemp_h65461713__0);
    VL_EXTEND_WI(127,1, __Vtemp_h57096862__0, (IData)(vlSelf->__PVT___normal_result_T_52));
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_17, __Vtemp_h57096862__0);
    VL_CONST_W_1X(127,__Vtemp_h9de643ba__0,0x00000000);
    __Vtemp_h575d01b8__0 = (1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_28, 0U));
    VL_COND_WIWW(127, __Vtemp_h6f5273e9__0, __Vtemp_h575d01b8__0, vlSelf->__PVT__answer_sll, __Vtemp_h9de643ba__0);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_51, __Vtemp_h6f5273e9__0);
    vlSelf->__PVT___normal_result_T_34 = ((IData)(vlSelf->__PVT__io_data_w)
                                           ? VL_EXTEND_QI(64,32, vlSelf->__PVT__answer_sraw)
                                           : vlSelf->__PVT__answer_sra);
    vlSelf->__PVT___normal_result_T_48 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_22, 0U))
                                           ? vlSelf->__PVT__answer_nor
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_45 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_15, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_44 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_12, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_43 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_9, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT__io_overflow = ((VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_3, 0U) 
                                   & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x40U)) 
                                      != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x3fU)))) 
                                  | (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_12, 0U) 
                                     & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x40U)) 
                                        != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x3fU)))));
    vlSelf->__PVT___normal_result_T_42 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_6, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_40 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_41 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_3, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_54 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_35, 0U))
                                           ? vlSelf->__PVT___normal_result_T_37
                                           : 0ULL);
    vlSelf->__PVT___answer_lui_T_34 = VL_CONCAT_III(32,1,31, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                    VL_CONCAT_III(31,1,30, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                  VL_CONCAT_III(30,1,29, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___answer_lui_T_1, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__answer_lui_lo_lo), (IData)(vlSelf->__PVT__answer_lui_lo))))))))));
    vlSelf->__PVT___normal_result_T_53 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_32, 0U))
                                           ? vlSelf->__PVT___normal_result_T_34
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_56 = (vlSelf->__PVT___normal_result_T_40 
                                          | vlSelf->__PVT___normal_result_T_41);
    VL_EXTEND_WQ(127,64, __Vtemp_h90dc22c0__0, vlSelf->__PVT___normal_result_T_54);
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_19, __Vtemp_h90dc22c0__0);
    vlSelf->__PVT__answer_lui = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___answer_lui_T_34, 
                                              VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0xcU, 0x14U)), 0U));
    VL_EXTEND_WQ(127,64, __Vtemp_h276d6b86__0, vlSelf->__PVT___normal_result_T_53);
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_18, __Vtemp_h276d6b86__0);
    vlSelf->__PVT___normal_result_T_57 = (vlSelf->__PVT___normal_result_T_56 
                                          | vlSelf->__PVT___normal_result_T_42);
    vlSelf->__PVT___normal_result_T_50 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_26, 0U))
                                           ? vlSelf->__PVT__answer_lui
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_58 = (vlSelf->__PVT___normal_result_T_57 
                                          | vlSelf->__PVT___normal_result_T_43);
    vlSelf->__PVT___normal_result_T_59 = (vlSelf->__PVT___normal_result_T_58 
                                          | vlSelf->__PVT___normal_result_T_44);
    vlSelf->__PVT___normal_result_T_60 = (vlSelf->__PVT___normal_result_T_59 
                                          | vlSelf->__PVT___normal_result_T_45);
    vlSelf->__PVT___normal_result_T_61 = (vlSelf->__PVT___normal_result_T_60 
                                          | vlSelf->__PVT___normal_result_T_46);
    vlSelf->__PVT___normal_result_T_62 = (vlSelf->__PVT___normal_result_T_61 
                                          | vlSelf->__PVT___normal_result_T_47);
    vlSelf->__PVT___normal_result_T_63 = (vlSelf->__PVT___normal_result_T_62 
                                          | vlSelf->__PVT___normal_result_T_48);
    vlSelf->__PVT___normal_result_T_64 = (vlSelf->__PVT___normal_result_T_63 
                                          | vlSelf->__PVT___normal_result_T_49);
    vlSelf->__PVT___normal_result_T_65 = (vlSelf->__PVT___normal_result_T_64 
                                          | vlSelf->__PVT___normal_result_T_50);
    VL_EXTEND_WQ(127,64, __Vtemp_h8b7378a0__0, vlSelf->__PVT___normal_result_T_65);
    VL_ASSIGN_W(127,vlSelf->__PVT___GEN_16, __Vtemp_h8b7378a0__0);
    VL_OR_W(4, __Vtemp_h8772b14d__0, vlSelf->__PVT___GEN_16, vlSelf->__PVT___normal_result_T_51);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_66, __Vtemp_h8772b14d__0);
    VL_OR_W(4, __Vtemp_hb571f582__0, vlSelf->__PVT___normal_result_T_66, vlSelf->__PVT___GEN_17);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_67, __Vtemp_hb571f582__0);
    VL_OR_W(4, __Vtemp_haba29613__0, vlSelf->__PVT___normal_result_T_67, vlSelf->__PVT___GEN_18);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_68, __Vtemp_haba29613__0);
    VL_OR_W(4, __Vtemp_hb672da7c__0, vlSelf->__PVT___normal_result_T_68, vlSelf->__PVT___GEN_19);
    VL_ASSIGN_W(127,vlSelf->__PVT___normal_result_T_69, __Vtemp_hb672da7c__0);
    VL_OR_W(4, __Vtemp_hb4a2a408__0, vlSelf->__PVT___normal_result_T_69, vlSelf->__PVT___GEN_20);
    VL_ASSIGN_W(127,vlSelf->__PVT__normal_result, __Vtemp_hb4a2a408__0);
    vlSelf->__PVT__io_result_lo_lo = VL_CONCAT_III(8,1,7, 
                                                   (1U 
                                                    & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                   VL_CONCAT_III(7,1,6, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                 VL_CONCAT_III(6,1,5, 
                                                                               (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                               VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)))))))));
    vlSelf->__PVT__io_result_lo = VL_CONCAT_III(16,1,15, 
                                                (1U 
                                                 & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                VL_CONCAT_III(15,1,14, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                              VL_CONCAT_III(14,1,13, 
                                                                            (1U 
                                                                             & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                            VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), (IData)(vlSelf->__PVT__io_result_lo_lo)))))))));
    vlSelf->__PVT___io_result_T_33 = VL_CONCAT_III(32,1,31, 
                                                   (1U 
                                                    & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                   VL_CONCAT_III(31,1,30, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                 VL_CONCAT_III(30,1,29, 
                                                                               (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                               VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(127, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__io_result_lo_lo), (IData)(vlSelf->__PVT__io_result_lo))))))))));
    vlSelf->__PVT___io_result_T_35 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___io_result_T_33, 
                                                   VL_SEL_IWII(127, vlSelf->__PVT__normal_result, 0U, 0x20U));
    VL_EXTEND_WQ(127,64, __Vtemp_h569cabfe__0, vlSelf->__PVT___io_result_T_35);
    VL_COND_WIWW(127, __Vtemp_h64721fed__0, (IData)(vlSelf->__PVT__io_data_w), __Vtemp_h569cabfe__0, vlSelf->__PVT__normal_result);
    VL_ASSIGN_W(127,vlSelf->__PVT___io_result_T_36, __Vtemp_h64721fed__0);
    vlSelf->__PVT__io_result = VL_SEL_QWII(127, vlSelf->__PVT___io_result_T_36, 0U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_alu___ctor_var_reset(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_ctrl = 0;
    vlSelf->__PVT__io_in1 = 0;
    vlSelf->__PVT__io_in2 = 0;
    vlSelf->__PVT__io_result = 0;
    vlSelf->__PVT__io_overflow = 0;
    vlSelf->__PVT__io_data_w = 0;
    vlSelf->__PVT__sa = 0;
    vlSelf->__PVT__sa_for_32bit = 0;
    vlSelf->__PVT__answer_and = 0;
    vlSelf->__PVT__answer_or = 0;
    vlSelf->__PVT__answer_xor = 0;
    vlSelf->__PVT__answer_nor = 0;
    vlSelf->__PVT__answer_slt = 0;
    vlSelf->__PVT__answer_sltu = 0;
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_21);
    VL_ZERO_RESET_W(127, vlSelf->__PVT__answer_sll);
    vlSelf->__PVT__answer_srl = 0;
    vlSelf->__PVT__answer_srlw = 0;
    vlSelf->__PVT__answer_sra = 0;
    vlSelf->__PVT___answer_sraw_T_1 = 0;
    vlSelf->__PVT__answer_sraw = 0;
    vlSelf->__PVT___answer_lui_T_1 = 0;
    vlSelf->__PVT__answer_lui_lo_lo = 0;
    vlSelf->__PVT__answer_lui_lo = 0;
    vlSelf->__PVT___answer_lui_T_34 = 0;
    vlSelf->__PVT__answer_lui = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__in1_extend);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__in2_extend);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__answer_add);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__answer_sub);
    vlSelf->__PVT___normal_result_T = 0;
    vlSelf->__PVT___normal_result_T_3 = 0;
    vlSelf->__PVT___normal_result_T_6 = 0;
    vlSelf->__PVT___normal_result_T_9 = 0;
    vlSelf->__PVT___normal_result_T_12 = 0;
    vlSelf->__PVT___normal_result_T_15 = 0;
    vlSelf->__PVT___normal_result_T_18 = 0;
    vlSelf->__PVT___normal_result_T_20 = 0;
    vlSelf->__PVT___normal_result_T_22 = 0;
    vlSelf->__PVT___normal_result_T_24 = 0;
    vlSelf->__PVT___normal_result_T_26 = 0;
    vlSelf->__PVT___normal_result_T_28 = 0;
    vlSelf->__PVT___normal_result_T_30 = 0;
    vlSelf->__PVT___normal_result_T_32 = 0;
    vlSelf->__PVT___normal_result_T_34 = 0;
    vlSelf->__PVT___normal_result_T_35 = 0;
    vlSelf->__PVT___normal_result_T_37 = 0;
    vlSelf->__PVT___normal_result_T_38 = 0;
    vlSelf->__PVT___normal_result_T_40 = 0;
    vlSelf->__PVT___normal_result_T_41 = 0;
    vlSelf->__PVT___normal_result_T_42 = 0;
    vlSelf->__PVT___normal_result_T_43 = 0;
    vlSelf->__PVT___normal_result_T_44 = 0;
    vlSelf->__PVT___normal_result_T_45 = 0;
    vlSelf->__PVT___normal_result_T_46 = 0;
    vlSelf->__PVT___normal_result_T_47 = 0;
    vlSelf->__PVT___normal_result_T_48 = 0;
    vlSelf->__PVT___normal_result_T_49 = 0;
    vlSelf->__PVT___normal_result_T_50 = 0;
    VL_ZERO_RESET_W(127, vlSelf->__PVT___normal_result_T_51);
    vlSelf->__PVT___normal_result_T_52 = 0;
    vlSelf->__PVT___normal_result_T_53 = 0;
    vlSelf->__PVT___normal_result_T_54 = 0;
    vlSelf->__PVT___normal_result_T_55 = 0;
    vlSelf->__PVT___normal_result_T_56 = 0;
    vlSelf->__PVT___normal_result_T_57 = 0;
    vlSelf->__PVT___normal_result_T_58 = 0;
    vlSelf->__PVT___normal_result_T_59 = 0;
    vlSelf->__PVT___normal_result_T_60 = 0;
    vlSelf->__PVT___normal_result_T_61 = 0;
    vlSelf->__PVT___normal_result_T_62 = 0;
    vlSelf->__PVT___normal_result_T_63 = 0;
    vlSelf->__PVT___normal_result_T_64 = 0;
    vlSelf->__PVT___normal_result_T_65 = 0;
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_16);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___normal_result_T_66);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_17);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___normal_result_T_67);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_18);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___normal_result_T_68);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_19);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___normal_result_T_69);
    VL_ZERO_RESET_W(127, vlSelf->__PVT___GEN_20);
    VL_ZERO_RESET_W(127, vlSelf->__PVT__normal_result);
    vlSelf->__PVT__io_result_lo_lo = 0;
    vlSelf->__PVT__io_result_lo = 0;
    vlSelf->__PVT___io_result_T_33 = 0;
    vlSelf->__PVT___io_result_T_35 = 0;
    VL_ZERO_RESET_W(127, vlSelf->__PVT___io_result_T_36);
}
