// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dmemreq.h"

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__0(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__0\n"); );
    // Body
    vlSelf->__PVT__io_wr = vlSelf->__PVT__io_MemWriteE;
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__1(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__1\n"); );
    // Body
    vlSelf->__PVT__io_size = vlSelf->__PVT__io_MemWidthE;
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__2(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he06a2135__0;
    // Body
    VL_CONCAT_WQI(65,33,32, __Vtemp_he06a2135__0, VL_EXTEND_QI(33,32, 
                                                               VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x20U)), 0U);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_74, __Vtemp_he06a2135__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__3(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha45a56ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h60f393bc__0;
    // Body
    vlSelf->__PVT___io_wdata_T_70 = VL_EXTEND_QI(33,32, 
                                                 VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x20U));
    VL_CONCAT_WIQ(65,9,56, __Vtemp_ha45a56ed__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_30, __Vtemp_ha45a56ed__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h60f393bc__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_59, __Vtemp_h60f393bc__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__4(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__4\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_26 = VL_CONCAT_QIQ(57,9,48, 
                                                  VL_EXTEND_II(9,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSelf->__PVT___io_wdata_T_55 = VL_CONCAT_QII(49,17,32, 
                                                  VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__5(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__5\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_22 = VL_CONCAT_QIQ(49,9,40, 
                                                  VL_EXTEND_II(9,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSelf->__PVT___io_wdata_T_51 = VL_CONCAT_QII(33,17,16, 
                                                  VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__6(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__6\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_47 = VL_EXTEND_II(17,16, 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U)));
    vlSelf->__PVT___io_wdata_T_18 = VL_CONCAT_QII(41,9,32, 
                                                  VL_EXTEND_II(9,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__7(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__7\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_14 = VL_CONCAT_QII(33,9,24, 
                                                  VL_EXTEND_II(9,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSelf->__PVT___io_wdata_T_10 = VL_CONCAT_III(25,9,16, 
                                                  VL_EXTEND_II(9,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSelf->__PVT___io_wdata_T_2 = VL_EXTEND_II(9,8, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U)));
    vlSelf->__PVT___io_wdata_T_6 = VL_CONCAT_III(17,9,8, 
                                                 VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__8(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__8\n"); );
    // Body
    vlSelf->__PVT__ra = (7U & VL_SEL_IQII(64, vlSelf->__PVT__io_VAddrE, 0U, 3U));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__9(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__9\n"); );
    // Body
    vlSelf->__PVT__io_addr = vlSelf->__PVT__io_VAddrE;
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__10(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__10\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_27 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xffU : 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__11(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__11\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_80 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT__io_WriteDataE
                                      : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__12(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__12\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_23 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xfU : 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__13(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__13\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_76 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_70
                                      : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__14(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__14\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_15 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? 3U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__15(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__15\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_61 = ((0U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_47
                                      : 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__16(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__16\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_1 = ((1U == (IData)(vlSelf->__PVT__ra))
                                     ? 2U : 1U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__17(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__17\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_32 = ((1U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_6
                                      : VL_EXTEND_II(17,9, (IData)(vlSelf->__PVT___io_wdata_T_2)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__18(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__18\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_25 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xf0U : VL_EXTEND_II(8,4, (IData)(vlSelf->__PVT___io_wstrb_T_23)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__19(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__19\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hdb25e534__0;
    CData/*31:0*/ __Vtemp_h7842ca58__0;
    VlWide<3>/*95:0*/ __Vtemp_h1fcbfa4a__0;
    // Body
    VL_EXTEND_WQ(65,33, __Vtemp_hdb25e534__0, vlSelf->__PVT___io_wdata_T_76);
    __Vtemp_h7842ca58__0 = (4U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h1fcbfa4a__0, __Vtemp_h7842ca58__0, vlSelf->__PVT___io_wdata_T_74, __Vtemp_hdb25e534__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_78, __Vtemp_h1fcbfa4a__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__20(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__20\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_17 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xcU : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___io_wstrb_T_15)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__21(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__21\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_63 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_51
                                      : VL_EXTEND_QI(33,17, vlSelf->__PVT___io_wdata_T_61));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__22(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__22\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_3 = ((2U == (IData)(vlSelf->__PVT__ra))
                                     ? 4U : VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_wstrb_T_1)));
    vlSelf->__PVT___io_wdata_T_34 = ((2U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_10
                                      : VL_EXTEND_II(25,17, vlSelf->__PVT___io_wdata_T_32));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__23(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__23\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_19 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSelf->__PVT___io_wstrb_T_17)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__24(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__24\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_65 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_55
                                      : VL_EXTEND_QQ(49,33, vlSelf->__PVT___io_wdata_T_63));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__25(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__25\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_5 = ((3U == (IData)(vlSelf->__PVT__ra))
                                     ? 8U : VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_wstrb_T_3)));
    vlSelf->__PVT___io_wdata_T_36 = ((3U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_14
                                      : VL_EXTEND_QI(33,25, vlSelf->__PVT___io_wdata_T_34));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__26(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__26\n"); );
    // Body
    vlSelf->__PVT__io_req = ((IData)(vlSelf->__PVT__io_en) 
                             & ((IData)(vlSelf->__PVT__io_MemToRegE) 
                                | (IData)(vlSelf->__PVT__io_MemWriteE)));
    vlSelf->__PVT___io_wstrb_T_21 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSelf->__PVT___io_wstrb_T_19)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__27(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__27\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h862ab597__0;
    CData/*31:0*/ __Vtemp_h78436963__0;
    VlWide<3>/*95:0*/ __Vtemp_h148de16c__0;
    // Body
    VL_EXTEND_WQ(65,49, __Vtemp_h862ab597__0, vlSelf->__PVT___io_wdata_T_65);
    __Vtemp_h78436963__0 = (6U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h148de16c__0, __Vtemp_h78436963__0, vlSelf->__PVT___io_wdata_T_59, __Vtemp_h862ab597__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_67, __Vtemp_h148de16c__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__28(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__28\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_7 = ((4U == (IData)(vlSelf->__PVT__ra))
                                     ? 0x10U : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___io_wstrb_T_5)));
    vlSelf->__PVT___io_wdata_T_38 = ((4U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_18
                                      : VL_EXTEND_QQ(41,33, vlSelf->__PVT___io_wdata_T_36));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__29(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__29\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_9 = ((5U == (IData)(vlSelf->__PVT__ra))
                                     ? 0x20U : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___io_wstrb_T_7)));
    vlSelf->__PVT___io_wdata_T_40 = ((5U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_22
                                      : VL_EXTEND_QQ(49,41, vlSelf->__PVT___io_wdata_T_38));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__30(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__30\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_11 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x40U : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___io_wstrb_T_9)));
    vlSelf->__PVT___io_wdata_T_42 = ((6U == (IData)(vlSelf->__PVT__ra))
                                      ? vlSelf->__PVT___io_wdata_T_26
                                      : VL_EXTEND_QQ(57,49, vlSelf->__PVT___io_wdata_T_40));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__31(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__31\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6aeba0e3__0;
    CData/*31:0*/ __Vtemp_h784338ad__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a023590__0;
    // Body
    vlSelf->__PVT___io_wstrb_T_13 = ((7U == (IData)(vlSelf->__PVT__ra))
                                      ? 0x80U : VL_EXTEND_II(8,7, (IData)(vlSelf->__PVT___io_wstrb_T_11)));
    VL_EXTEND_WQ(65,57, __Vtemp_h6aeba0e3__0, vlSelf->__PVT___io_wdata_T_42);
    __Vtemp_h784338ad__0 = (7U == (IData)(vlSelf->__PVT__ra));
    VL_COND_WIWW(65, __Vtemp_h0a023590__0, __Vtemp_h784338ad__0, vlSelf->__PVT___io_wdata_T_30, __Vtemp_h6aeba0e3__0);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_44, __Vtemp_h0a023590__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__32(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__32\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_29 = ((1U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                      ? (IData)(vlSelf->__PVT___io_wstrb_T_21)
                                      : (IData)(vlSelf->__PVT___io_wstrb_T_13));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__33(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__33\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hdb987acd__0;
    VlWide<3>/*95:0*/ __Vtemp_h4eaa7f13__0;
    // Body
    __Vtemp_hdb987acd__0 = (1U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h4eaa7f13__0, __Vtemp_hdb987acd__0, vlSelf->__PVT___io_wdata_T_67, vlSelf->__PVT___io_wdata_T_44);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_82, __Vtemp_h4eaa7f13__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__34(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__34\n"); );
    // Body
    vlSelf->__PVT___io_wstrb_T_31 = ((2U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                      ? (IData)(vlSelf->__PVT___io_wstrb_T_25)
                                      : (IData)(vlSelf->__PVT___io_wstrb_T_29));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__35(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__35\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hdb98eac5__0;
    VlWide<3>/*95:0*/ __Vtemp_h78ba62f2__0;
    // Body
    __Vtemp_hdb98eac5__0 = (2U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_h78ba62f2__0, __Vtemp_hdb98eac5__0, vlSelf->__PVT___io_wdata_T_78, vlSelf->__PVT___io_wdata_T_82);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_84, __Vtemp_h78ba62f2__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__36(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__36\n"); );
    // Body
    vlSelf->__PVT__io_wstrb = ((3U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                ? (IData)(vlSelf->__PVT___io_wstrb_T_27)
                                : (IData)(vlSelf->__PVT___io_wstrb_T_31));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__37(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__37\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h33e32bf2__0;
    CData/*31:0*/ __Vtemp_hdb989b33__0;
    VlWide<3>/*95:0*/ __Vtemp_hb472da81__0;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h33e32bf2__0, vlSelf->__PVT___io_wdata_T_80);
    __Vtemp_hdb989b33__0 = (3U == (IData)(vlSelf->__PVT__io_MemWidthE));
    VL_COND_WIWW(65, __Vtemp_hb472da81__0, __Vtemp_hdb989b33__0, __Vtemp_h33e32bf2__0, vlSelf->__PVT___io_wdata_T_84);
    VL_ASSIGN_W(65,vlSelf->__PVT___io_wdata_T_86, __Vtemp_hb472da81__0);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__38(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__38\n"); );
    // Body
    vlSelf->__PVT__io_wdata = VL_SEL_QWII(65, vlSelf->__PVT___io_wdata_T_86, 0U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___ctor_var_reset(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_MemWriteE = 0;
    vlSelf->__PVT__io_MemToRegE = 0;
    vlSelf->__PVT__io_MemWidthE = 0;
    vlSelf->__PVT__io_VAddrE = 0;
    vlSelf->__PVT__io_WriteDataE = 0;
    vlSelf->__PVT__io_req = 0;
    vlSelf->__PVT__io_wr = 0;
    vlSelf->__PVT__io_size = 0;
    vlSelf->__PVT__io_addr = 0;
    vlSelf->__PVT__io_wdata = 0;
    vlSelf->__PVT__io_wstrb = 0;
    vlSelf->__PVT__ra = 0;
    vlSelf->__PVT___io_wstrb_T_1 = 0;
    vlSelf->__PVT___io_wstrb_T_3 = 0;
    vlSelf->__PVT___io_wstrb_T_5 = 0;
    vlSelf->__PVT___io_wstrb_T_7 = 0;
    vlSelf->__PVT___io_wstrb_T_9 = 0;
    vlSelf->__PVT___io_wstrb_T_11 = 0;
    vlSelf->__PVT___io_wstrb_T_13 = 0;
    vlSelf->__PVT___io_wstrb_T_15 = 0;
    vlSelf->__PVT___io_wstrb_T_17 = 0;
    vlSelf->__PVT___io_wstrb_T_19 = 0;
    vlSelf->__PVT___io_wstrb_T_21 = 0;
    vlSelf->__PVT___io_wstrb_T_23 = 0;
    vlSelf->__PVT___io_wstrb_T_25 = 0;
    vlSelf->__PVT___io_wstrb_T_27 = 0;
    vlSelf->__PVT___io_wstrb_T_29 = 0;
    vlSelf->__PVT___io_wstrb_T_31 = 0;
    vlSelf->__PVT___io_wdata_T_2 = 0;
    vlSelf->__PVT___io_wdata_T_6 = 0;
    vlSelf->__PVT___io_wdata_T_10 = 0;
    vlSelf->__PVT___io_wdata_T_14 = 0;
    vlSelf->__PVT___io_wdata_T_18 = 0;
    vlSelf->__PVT___io_wdata_T_22 = 0;
    vlSelf->__PVT___io_wdata_T_26 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_30);
    vlSelf->__PVT___io_wdata_T_32 = 0;
    vlSelf->__PVT___io_wdata_T_34 = 0;
    vlSelf->__PVT___io_wdata_T_36 = 0;
    vlSelf->__PVT___io_wdata_T_38 = 0;
    vlSelf->__PVT___io_wdata_T_40 = 0;
    vlSelf->__PVT___io_wdata_T_42 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_44);
    vlSelf->__PVT___io_wdata_T_47 = 0;
    vlSelf->__PVT___io_wdata_T_51 = 0;
    vlSelf->__PVT___io_wdata_T_55 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_59);
    vlSelf->__PVT___io_wdata_T_61 = 0;
    vlSelf->__PVT___io_wdata_T_63 = 0;
    vlSelf->__PVT___io_wdata_T_65 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_67);
    vlSelf->__PVT___io_wdata_T_70 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_74);
    vlSelf->__PVT___io_wdata_T_76 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_78);
    vlSelf->__PVT___io_wdata_T_80 = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_82);
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_84);
    VL_ZERO_RESET_W(65, vlSelf->__PVT___io_wdata_T_86);
}
