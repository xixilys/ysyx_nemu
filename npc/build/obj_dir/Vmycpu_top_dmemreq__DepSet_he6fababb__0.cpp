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
    // Body
    vlSelf->__PVT___io_wdata_T_76 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_70
                                      : 0ULL);
    vlSelf->__PVT___io_wstrb_T_1 = ((1U == (IData)(vlSelf->__PVT__ra))
                                     ? 2U : 1U);
    vlSelf->__PVT___io_wdata_T_61 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_47
                                      : 0U);
    vlSelf->__PVT___io_wdata_T_32 = ((1U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_6
                                      : VL_EXTEND_II(17,9, (IData)(vlSelf->__PVT___io_wdata_T_2)));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__1(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf77ba03c__0;
    CData/*31:0*/ __Vtemp_hb9448c64__0;
    VlWide<3>/*95:0*/ __Vtemp_ha0c4c98f__0;
    // Body
    VL_EXTEND_WQ(65,33, __Vtemp_hf77ba03c__0, vlSelf->__PVT___io_wdata_T_76);
    __Vtemp_hb9448c64__0 = (4U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_ha0c4c98f__0, __Vtemp_hb9448c64__0, vlSelf->__PVT___io_wdata_T_74, __Vtemp_hf77ba03c__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_78, __Vtemp_ha0c4c98f__0);
    vlSelf->__PVT___io_wstrb_T_3 = ((2U == (IData)(vlSelf->__PVT__ra))
                                     ? 4U : VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_wstrb_T_1)));
    vlSelf->__PVT___io_wdata_T_63 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_51
                                      : VL_EXTEND_QI(33,17, vlSelf->__PVT___io_wdata_T_61));
    vlSelf->__PVT___io_wdata_T_34 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_10
                                      : VL_EXTEND_II(25,17, vlSelf->__PVT___io_wdata_T_32));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__2(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__2\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_65 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_55
                                      : VL_EXTEND_QQ(49,33, vlSelf->__PVT___io_wdata_T_63));
    vlSelf->__PVT___io_wstrb_T_5 = ((3U == (IData)(vlSelf->__PVT__ra))
                                     ? 8U : VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_wstrb_T_3)));
    vlSelf->__PVT___io_wdata_T_36 = ((3U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_14
                                      : VL_EXTEND_QI(33,25, vlSelf->__PVT___io_wdata_T_34));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__3(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__3\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_11 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x40U : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___io_wstrb_T_9)));
    vlSelf->__PVT___io_wdata_T_42 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_26
                                      : VL_EXTEND_QQ(57,49, vlSelf->__PVT___io_wdata_T_40));
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__4(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__4\n"); );
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

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__5(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__5\n"); );
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

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__6(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__6\n"); );
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

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__7(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__7\n"); );
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

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__8(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__8\n"); );
    // Body
    vlSelf->__PVT__io_wdata = VL_SEL_QWII(65, vlSelf->__PVT___io_wdata_T_86, 0U, 0x40U);
}

VL_INLINE_OPT void Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__9(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___nba_comb__TOP__mycpu_top__u_riscv_cpu___dmemreq__9\n"); );
    // Body
    vlSelf->__PVT__io_req = ((IData)(vlSelf->__PVT__io_en) 
                             & ((IData)(vlSelf->__PVT__io_MemToRegE) 
                                | (IData)(vlSelf->__PVT__io_MemWriteE)));
}
