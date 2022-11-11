// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cfu.h"

VL_INLINE_OPT void Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__4(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__4\n"); );
    // Body
    vlSelf->__PVT___io_Forward1E_T_18 = ((IData)(vlSelf->__PVT___io_Forward1E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward1E_T_17));
    vlSelf->__PVT__io_Forward1E = ((0U == (IData)(vlSelf->__PVT__io_R1E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1E_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E 
        = vlSelf->__PVT__io_Forward1E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1E);
}

VL_INLINE_OPT void Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__32(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__32\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h2247dde8__0;
    VlWide<3>/*95:0*/ __Vtemp_h0840d57c__0;
    VlWide<3>/*95:0*/ __Vtemp_h492b75a6__0;
    VlWide<4>/*127:0*/ __Vtemp_h30a05cc0__0;
    VlWide<4>/*127:0*/ __Vtemp_h24dff22d__0;
    VlWide<4>/*127:0*/ __Vtemp_hea1b99e2__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__0;
    VlWide<3>/*95:0*/ __Vtemp_hb640cb0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h572a1ef1__0;
    VlWide<3>/*95:0*/ __Vtemp_h8535fab8__1;
    VlWide<3>/*95:0*/ __Vtemp_hb6930556__0;
    VlWide<3>/*95:0*/ __Vtemp_h904b3283__0;
    VlWide<4>/*127:0*/ __Vtemp_h4167257b__0;
    VlWide<4>/*127:0*/ __Vtemp_hae7d94dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9de643ba__0;
    CData/*31:0*/ __Vtemp_hbba985a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0b97778f__0;
    // Body
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E 
        = vlSelf->__PVT__io_Forward2E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD2E);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_WriteDataE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock2E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock2E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock1E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in1 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_0)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_PCE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_1)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_0)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_PCE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_1)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE 
           + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_26 
        = VL_CONCAT_QIQ(57,9,48, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_55 
        = VL_CONCAT_QII(49,17,32, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_22 
        = VL_CONCAT_QIQ(49,9,40, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_51 
        = VL_CONCAT_QII(33,17,16, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_47 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_18 
        = VL_CONCAT_QII(41,9,32, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_14 
        = VL_CONCAT_QII(33,9,24, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_10 
        = VL_CONCAT_III(25,9,16, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_2 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_6 
        = VL_CONCAT_III(17,9,8, VL_EXTEND_II(9,8, (0xffU 
                                                   & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in1 
        = VL_CONCAT_QII(64,32,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E, 0x20U, 0x20U), 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in2 
        = VL_CONCAT_QII(64,32,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E, 0x20U, 0x20U), 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sltu 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           < vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_slt 
        = VL_LTS_IQQ(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    VL_EXTEND_WQ(127,64, __Vtemp_h2247dde8__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_21, __Vtemp_h2247dde8__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_xor 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           ^ vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_and 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           & vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_or 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa 
        = (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 6U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_1 
        = VL_CONCAT_III(32,20,12, (0xfffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0xcU, 0x14U)), 0U);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h0840d57c__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, __Vtemp_h0840d57c__0);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h492b75a6__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend, __Vtemp_h492b75a6__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_55 
        = (VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_38, 0U) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sltu));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_52 
        = (VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_30, 0U) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_slt));
    VL_CONST_W_4X(128,__Vtemp_h30a05cc0__0,0x7fffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h24dff22d__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_21, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    VL_AND_W(4, __Vtemp_hea1b99e2__0, __Vtemp_h30a05cc0__0, __Vtemp_h24dff22d__0);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sll, __Vtemp_hea1b99e2__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_49 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_24, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_xor
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_nor 
        = (~ vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_or);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_47 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_20, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_or
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
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__0,0x00000001,0xffffffff,0xffffffff);
    VL_SUB_W(3, __Vtemp_hb640cb0e__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h572a1ef1__0, __Vtemp_h8535fab8__0, __Vtemp_hb640cb0e__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, __Vtemp_h572a1ef1__0);
    VL_CONST_W_3X(96,__Vtemp_h8535fab8__1,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_hb6930556__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h904b3283__0, __Vtemp_h8535fab8__1, __Vtemp_hb6930556__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, __Vtemp_h904b3283__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr;
    VL_EXTEND_WI(127,1, __Vtemp_h4167257b__0, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_55));
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_20, __Vtemp_h4167257b__0);
    VL_EXTEND_WI(127,1, __Vtemp_hae7d94dd__0, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_52));
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_17, __Vtemp_hae7d94dd__0);
    VL_CONST_W_1X(127,__Vtemp_h9de643ba__0,0x00000000);
    __Vtemp_hbba985a2__0 = (1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_28, 0U));
    VL_COND_WIWW(127, __Vtemp_h0b97778f__0, __Vtemp_hbba985a2__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sll, __Vtemp_h9de643ba__0);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_51, __Vtemp_h0b97778f__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_48 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_22, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_nor
            : 0ULL);
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_45 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_15, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_44 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_12, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_43 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_9, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_42 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_6, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_40 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_41 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_3, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra 
        = (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE, 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_27 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xfU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_80 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 3U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui 
        = VL_CONCAT_QII(64,32,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_lui_T_34, 
                        VL_CONCAT_III(32,20,12, (0xfffffU 
                                                 & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0xcU, 0x14U)), 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_25 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xf0U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xcU : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_50 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_26, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_lui
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17)));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_21 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19)));
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr;
}

VL_INLINE_OPT void Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__46(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___nba_comb__TOP__mycpu_top__u_riscv_cpu___cfu__46\n"); );
    // Body
    vlSelf->__PVT___io_ForwardcsrE_T_8 = ((IData)(vlSelf->__PVT___io_ForwardcsrE_T_3)
                                           ? 1U : (IData)(vlSelf->__PVT___io_ForwardcsrE_T_7));
    vlSelf->__PVT__io_ForwardcsrE = ((IData)(vlSelf->__PVT__io_csrToRegE)
                                      ? (IData)(vlSelf->__PVT___io_ForwardcsrE_T_8)
                                      : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_ForwardcsrE 
        = vlSelf->__PVT__io_ForwardcsrE;
}
