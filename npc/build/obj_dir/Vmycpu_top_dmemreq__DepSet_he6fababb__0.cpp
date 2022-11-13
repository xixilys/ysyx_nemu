// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dmemreq.h"

VL_INLINE_OPT void Vmycpu_top_dmemreq___ico_sequent__TOP__mycpu_top__u_riscv_cpu___dmemreq__0(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___ico_sequent__TOP__mycpu_top__u_riscv_cpu___dmemreq__0\n"); );
    // Body
    vlSelf->__PVT__io_req = ((IData)(vlSelf->__PVT__io_en) 
                             & ((IData)(vlSelf->__PVT__io_MemToRegE) 
                                | (IData)(vlSelf->__PVT__io_MemWriteE)));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__0(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h16b017d8__0;
    VlWide<3>/*95:0*/ __Vtemp_heebaf942__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fe2ee25__0;
    // Body
    VL_CONCAT_WQI(65,33,32, __Vtemp_h16b017d8__0, VL_EXTEND_QI(33,32, 
                                                               VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x20U)), 0U);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_74, __Vtemp_h16b017d8__0);
    vlSelf->__PVT___io_wdata_T_70 = VL_EXTEND_QI(33,32, 
                                                 VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x20U));
    VL_CONCAT_WIQ(65,9,56, __Vtemp_heebaf942__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_30, __Vtemp_heebaf942__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h3fe2ee25__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_59, __Vtemp_h3fe2ee25__0);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__1(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__1\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_27 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xffU : 0U);
    vlSelf->__PVT___io_wstrb_T_23 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xfU : 0U);
    vlSelf->__PVT___io_wdata_T_80 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT__io_WriteDataE
                                      : 0ULL);
    vlSelf->__PVT___io_wdata_T_76 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_70
                                      : 0ULL);
    vlSelf->__PVT___io_wstrb_T_15 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 3U : 0U);
    vlSelf->__PVT___io_wstrb_T_1 = ((1U == (IData)(vlSelf->__PVT__ra))
                                     ? 2U : 1U);
    vlSelf->__PVT___io_wdata_T_61 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_47
                                      : 0U);
    vlSelf->__PVT___io_wdata_T_32 = ((1U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_6
                                      : VL_EXTEND_II(17,9, (IData)(vlSelf->__PVT___io_wdata_T_2)));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__2(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf77ba03c__0;
    CData/*31:0*/ __Vtemp_hb9448c64__0;
    VlWide<3>/*95:0*/ __Vtemp_ha0c4c98f__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_25 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xf0U : VL_EXTEND_II(8,4, (IData)(vlSelf->__PVT___io_wstrb_T_23)));
    VL_EXTEND_WQ(65,33, __Vtemp_hf77ba03c__0, vlSelf->__PVT___io_wdata_T_76);
    __Vtemp_hb9448c64__0 = (4U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_ha0c4c98f__0, __Vtemp_hb9448c64__0, vlSelf->__PVT___io_wdata_T_74, __Vtemp_hf77ba03c__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_78, __Vtemp_ha0c4c98f__0);
    vlSelf->__PVT___io_wstrb_T_17 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xcU : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___io_wstrb_T_15)));
    vlSelf->__PVT___io_wstrb_T_3 = ((2U == (IData)(vlSelf->__PVT__ra))
                                     ? 4U : VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_wstrb_T_1)));
    vlSelf->__PVT___io_wdata_T_63 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_51
                                      : VL_EXTEND_QI(33,17, vlSelf->__PVT___io_wdata_T_61));
    vlSelf->__PVT___io_wdata_T_34 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_10
                                      : VL_EXTEND_II(25,17, vlSelf->__PVT___io_wdata_T_32));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__3(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__3\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_19 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSelf->__PVT___io_wstrb_T_17)));
    vlSelf->__PVT___io_wdata_T_65 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_55
                                      : VL_EXTEND_QQ(49,33, vlSelf->__PVT___io_wdata_T_63));
    vlSelf->__PVT___io_wstrb_T_5 = ((3U == (IData)(vlSelf->__PVT__ra))
                                     ? 8U : VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_wstrb_T_3)));
    vlSelf->__PVT___io_wdata_T_36 = ((3U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_14
                                      : VL_EXTEND_QI(33,25, vlSelf->__PVT___io_wdata_T_34));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__4(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hcee76e61__0;
    CData/*31:0*/ __Vtemp_hb944aebc__0;
    VlWide<3>/*95:0*/ __Vtemp_h0efd9eeb__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_21 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSelf->__PVT___io_wstrb_T_19)));
    VL_EXTEND_WQ(65,49, __Vtemp_hcee76e61__0, vlSelf->__PVT___io_wdata_T_65);
    __Vtemp_hb944aebc__0 = (6U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h0efd9eeb__0, __Vtemp_hb944aebc__0, vlSelf->__PVT___io_wdata_T_59, __Vtemp_hcee76e61__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_67, __Vtemp_h0efd9eeb__0);
    vlSelf->__PVT___io_wstrb_T_7 = ((4U == (IData)(vlSelf->__PVT__ra))
                                     ? 0x10U : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___io_wstrb_T_5)));
    vlSelf->__PVT___io_wdata_T_38 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_18
                                      : VL_EXTEND_QQ(41,33, vlSelf->__PVT___io_wdata_T_36));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__5(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__5\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_9 = ((5U == (IData)(vlSelf->__PVT__ra))
                                     ? 0x20U : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___io_wstrb_T_7)));
    vlSelf->__PVT___io_wdata_T_40 = ((5U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_22
                                      : VL_EXTEND_QQ(49,41, vlSelf->__PVT___io_wdata_T_38));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__6(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__6\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_11 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x40U : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___io_wstrb_T_9)));
    vlSelf->__PVT___io_wdata_T_42 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_26
                                      : VL_EXTEND_QQ(57,49, vlSelf->__PVT___io_wdata_T_40));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__7(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__7\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5a2c892c__0;
    CData/*31:0*/ __Vtemp_hb9aaa68c__0;
    VlWide<3>/*95:0*/ __Vtemp_hf603489e__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_13 = ((7U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x80U : VL_EXTEND_II(8,7, (IData)(vlSelf->__PVT___io_wstrb_T_11)));
    VL_EXTEND_WQ(65,57, __Vtemp_h5a2c892c__0, vlSelf->__PVT___io_wdata_T_42);
    __Vtemp_hb9aaa68c__0 = (7U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_hf603489e__0, __Vtemp_hb9aaa68c__0, vlSelf->__PVT___io_wdata_T_30, __Vtemp_h5a2c892c__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_44, __Vtemp_hf603489e__0);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__8(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__8\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h19ba4817__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f080432__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_29 = ((1U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                      ? (IData)(vlSelf->__PVT___io_wstrb_T_21)
                                      : (IData)(vlSelf->__PVT___io_wstrb_T_13));
    __Vtemp_h19ba4817__0 = (1U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h2f080432__0, __Vtemp_h19ba4817__0, vlSelf->__PVT___io_wdata_T_67, vlSelf->__PVT___io_wdata_T_44);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_82, __Vtemp_h2f080432__0);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__9(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__9\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h19bd6205__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2d4a5e3__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_31 = ((2U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                      ? (IData)(vlSelf->__PVT___io_wstrb_T_25)
                                      : (IData)(vlSelf->__PVT___io_wstrb_T_29));
    __Vtemp_h19bd6205__0 = (2U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_hc2d4a5e3__0, __Vtemp_h19bd6205__0, vlSelf->__PVT___io_wdata_T_78, vlSelf->__PVT___io_wdata_T_82);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_84, __Vtemp_hc2d4a5e3__0);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__10(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__10\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc01e325d__0;
    CData/*31:0*/ __Vtemp_h19bcef2d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e01f16f__0;
    // Body
    vlSelf->__PVT__io_wstrb = ((3U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                ? (IData)(vlSelf->__PVT___io_wstrb_T_27)
                                : (IData)(vlSelf->__PVT___io_wstrb_T_31));
    VL_EXTEND_WQ(65,64, __Vtemp_hc01e325d__0, vlSelf->__PVT___io_wdata_T_80);
    __Vtemp_h19bcef2d__0 = (3U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h7e01f16f__0, __Vtemp_h19bcef2d__0, __Vtemp_hc01e325d__0, vlSelf->__PVT___io_wdata_T_84);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_86, __Vtemp_h7e01f16f__0);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__11(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__11\n"); );
    // Body
    vlSelf->__PVT__io_wdata = VL_SEL_QWII(65, vlSelf->__PVT___io_wdata_T_86, 0U, 0x40U);
}
