// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cu.h"

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__0(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__0\n"); );
    // Body
    vlSelf->__PVT__io_RegDstD = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U));
    vlSelf->__PVT__io_ebreakD = (0x100073U == vlSelf->__PVT__io1_InstrD);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__1(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__1\n"); );
    // Body
    vlSelf->__PVT__immUJ = VL_CONCAT_III(20,1,19, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                         VL_CONCAT_III(19,8,11, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 8U)), 
                                                       VL_CONCAT_III(11,1,10, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x14U)), 
                                                                     (0x3ffU 
                                                                      & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x15U, 0xaU)))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__2(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__2\n"); );
    // Body
    vlSelf->__PVT__immU = VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 0x14U)), 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__3(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__3\n"); );
    // Body
    vlSelf->__PVT___immSB_T_4 = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 8U, 4U)), 0U))));
    vlSelf->__PVT__immI_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                 VL_CONCAT_III(5,1,4, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                               VL_CONCAT_III(4,1,3, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                             VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__4(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__4\n"); );
    // Body
    vlSelf->__PVT__OpD = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0U, 7U));
    vlSelf->__PVT__Funct6D = (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1aU, 6U));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__5(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__5\n"); );
    // Body
    vlSelf->__PVT__Funct3D = (7U & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 3U));
    vlSelf->__PVT__Funct7D = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__6(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__6\n"); );
    // Body
    vlSelf->__PVT__io_MemToRegD = ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                   & ((3U == (IData)(vlSelf->__PVT__Funct3D)) 
                                      | ((6U == (IData)(vlSelf->__PVT__Funct3D)) 
                                         | ((5U == (IData)(vlSelf->__PVT__Funct3D)) 
                                            | ((4U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((2U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->__PVT__Funct3D)) 
                                                     | (0U 
                                                        == (IData)(vlSelf->__PVT__Funct3D)))))))));
    vlSelf->__PVT__io_MemWriteD = ((0x23U == (IData)(vlSelf->__PVT__OpD)) 
                                   & ((3U == (IData)(vlSelf->__PVT__Funct3D)) 
                                      | ((2U == (IData)(vlSelf->__PVT__Funct3D)) 
                                         | ((1U == (IData)(vlSelf->__PVT__Funct3D)) 
                                            | (0U == (IData)(vlSelf->__PVT__Funct3D))))));
    vlSelf->__PVT__io_LoadUnsignedD = ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                       & ((6U == (IData)(vlSelf->__PVT__Funct3D)) 
                                          | ((5U == (IData)(vlSelf->__PVT__Funct3D)) 
                                             | (4U 
                                                == (IData)(vlSelf->__PVT__Funct3D)))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__7(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__7\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_5 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 2U : VL_EXTEND_II(2,1, 
                                                             (1U 
                                                              == (IData)(vlSelf->__PVT__Funct3D))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__8(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__8\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                  VL_CONCAT_III(5,1,4, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                VL_CONCAT_III(4,1,3, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                              VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__9(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__9\n"); );
    // Body
    vlSelf->__PVT__immI_lo_lo = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                            VL_CONCAT_III(11,1,10, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                          VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), (IData)(vlSelf->__PVT__immI_lo_lo_lo))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__10(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__10\n"); );
    // Body
    vlSelf->__PVT___immS_T_2 = VL_CONCAT_III(12,7,5, (IData)(vlSelf->__PVT__Funct7D), 
                                             (0x1fU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__11(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__11\n"); );
    // Body
    vlSelf->__PVT__io1_dmem_addr_cal = ((0x23U == (IData)(vlSelf->__PVT__OpD))
                                         ? ((3U == (IData)(vlSelf->__PVT__Funct3D)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | (0U 
                                                     == (IData)(vlSelf->__PVT__Funct3D)))))
                                         : ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                            & ((3U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((6U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | ((5U 
                                                      == (IData)(vlSelf->__PVT__Funct3D)) 
                                                     | ((4U 
                                                         == (IData)(vlSelf->__PVT__Funct3D)) 
                                                        | ((2U 
                                                            == (IData)(vlSelf->__PVT__Funct3D)) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->__PVT__Funct3D)) 
                                                              | (0U 
                                                                 == (IData)(vlSelf->__PVT__Funct3D))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__12(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__12\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_117 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x11U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_121 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 5U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__13(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__13\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_134 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x39U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_108 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x18U
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__14(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__14\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_136 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3aU
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__15(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__15\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_128 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3cU
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_93 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 8U : 0U);
    vlSelf->__PVT___inst_code_type_T_57 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x37U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_4 = ((0U == (IData)(vlSelf->__PVT__Funct6D))
                                           ? 0x13U : 0U);
    vlSelf->__PVT___inst_code_type_T_53 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x38U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_2 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                           ? 0xfU : 0U);
    vlSelf->__PVT___inst_code_type_T_76 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1cU
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_43 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x41U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_47 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x32U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_39 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x35U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_35 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2fU
                                            : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__16(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__16\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_8 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                           ? 0xdU : 4U);
    vlSelf->__PVT___inst_code_type_T_31 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x31U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_25 = ((0x20U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x36U
                                            : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__17(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__17\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_21 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 3U : (IData)(vlSelf->__PVT___io_MemWidthD_T_5));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__18(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__18\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_hi = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(12,1,11, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(11,1,10, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo))))))));
    vlSelf->__PVT___io_MemWidthD_T_7 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 0U : (IData)(vlSelf->__PVT___io_MemWidthD_T_5));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__19(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__19\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_lo = VL_CONCAT_III(12,1,11, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(11,1,10, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(10,1,9, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo)))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__20(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__20\n"); );
    // Body
    vlSelf->__PVT__immI_lo = VL_CONCAT_III(26,1,25, 
                                           (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                           VL_CONCAT_III(25,1,24, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                         VL_CONCAT_III(24,1,23, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                       VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSelf->__PVT__immI_lo_lo_lo), (IData)(vlSelf->__PVT__immI_lo_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__21(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__21\n"); );
    // Body
    vlSelf->__PVT__immS_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                 VL_CONCAT_III(5,1,4, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                               VL_CONCAT_III(4,1,3, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                             VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__22(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__22\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_119 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x12U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_117));
    vlSelf->__PVT___inst_code_type_T_123 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x10U
                                             : VL_EXTEND_II(5,3, (IData)(vlSelf->__PVT___inst_code_type_T_121)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__23(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__23\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_110 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x19U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_108));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__24(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__24\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_138 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_136));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__25(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__25\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_130 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3dU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_128));
    vlSelf->__PVT___inst_code_type_T_95 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xaU : (IData)(vlSelf->__PVT___inst_code_type_T_93));
    vlSelf->__PVT___inst_code_type_T_59 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x25U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_57));
    vlSelf->__PVT___inst_code_type_T_6 = ((0x10U == (IData)(vlSelf->__PVT__Funct6D))
                                           ? 0x14U : (IData)(vlSelf->__PVT___inst_code_type_T_4));
    vlSelf->__PVT___inst_code_type_T_55 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x26U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_53));
    vlSelf->__PVT___inst_code_type_T_78 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1dU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_76));
    vlSelf->__PVT___inst_code_type_T_45 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x24U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_43));
    vlSelf->__PVT___inst_code_type_T_49 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x23U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_47));
    vlSelf->__PVT___inst_code_type_T_41 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_39));
    vlSelf->__PVT___inst_code_type_T_37 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x34U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_35));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__26(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__26\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_10 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xeU : (IData)(vlSelf->__PVT___inst_code_type_T_8));
    vlSelf->__PVT___inst_code_type_T_33 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2dU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_31));
    vlSelf->__PVT___inst_code_type_T_27 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x30U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_25));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__27(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__27\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_9 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 1U : (IData)(vlSelf->__PVT___io_MemWidthD_T_7));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__28(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__28\n"); );
    // Body
    vlSelf->__PVT__immSB_lo_1 = VL_CONCAT_III(25,1,24, 
                                              (1U & 
                                               VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                              VL_CONCAT_III(24,1,23, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                            VL_CONCAT_III(23,1,22, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                          VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), (IData)(vlSelf->__PVT__immSB_lo_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__29(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__29\n"); );
    // Body
    vlSelf->__PVT___immI_T_53 = VL_CONCAT_QIQ(52,1,51, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_QIQ(51,1,50, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                            VL_CONCAT_QIQ(50,1,49, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                          VL_CONCAT_QIQ(49,1,48, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSelf->__PVT__immI_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSelf->__PVT__immI_lo_lo), vlSelf->__PVT__immI_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__30(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__30\n"); );
    // Body
    vlSelf->__PVT__immS_lo_lo = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                            VL_CONCAT_III(11,1,10, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                          VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), (IData)(vlSelf->__PVT__immS_lo_lo_lo))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__31(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__31\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_125 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_119)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_123));
    vlSelf->__PVT___inst_code_type_T_112 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_110));
    vlSelf->__PVT___inst_code_type_T_140 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x28U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_138));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__32(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__32\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_132 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x2bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_130));
    vlSelf->__PVT___inst_code_type_T_97 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xcU : (IData)(vlSelf->__PVT___inst_code_type_T_95));
    vlSelf->__PVT___inst_code_type_T_80 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x20U
                                            : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___inst_code_type_T_78)));
    vlSelf->__PVT___inst_code_type_T_51 = ((0x20U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x33U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_49));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__33(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__33\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_12 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x17U
                                            : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_10)));
    vlSelf->__PVT___inst_code_type_T_29 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2cU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_27));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__34(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__34\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_11 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 2U : (IData)(vlSelf->__PVT___io_MemWidthD_T_9));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__35(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__35\n"); );
    // Body
    vlSelf->__PVT___immSB_T_56 = VL_CONCAT_QIQ(51,1,50, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_QIQ(50,1,49, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_QIQ(49,1,48, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(45,1,44, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(44,6,38, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), 
                                                                                VL_CONCAT_QII(38,13,25, (IData)(vlSelf->__PVT__immSB_lo_hi), vlSelf->__PVT__immSB_lo_1)))))))));
    vlSelf->__PVT__immI = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___immI_T_53, 
                                        (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x14U, 0xcU)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__36(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__36\n"); );
    // Body
    vlSelf->__PVT__immS_lo = VL_CONCAT_III(26,1,25, 
                                           (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                           VL_CONCAT_III(25,1,24, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                         VL_CONCAT_III(24,1,23, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                       VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSelf->__PVT__immS_lo_lo_lo), (IData)(vlSelf->__PVT__immS_lo_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__37(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__37\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_126 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_125), 2U);
    vlSelf->__PVT___inst_code_type_T_114 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_112));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__38(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__38\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_142 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_132)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_99 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 7U : (IData)(vlSelf->__PVT___inst_code_type_T_97));
    vlSelf->__PVT___inst_code_type_T_82 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_80));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__39(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__39\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_14 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x16U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_12));
    vlSelf->__PVT___inst_code_type_T_61 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_33)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_29));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__40(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__40\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_13 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 3U : (IData)(vlSelf->__PVT___io_MemWidthD_T_11));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__41(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__41\n"); );
    // Body
    vlSelf->__PVT__immSB = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___immSB_T_56, 
                                         VL_CONCAT_III(13,1,12, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                       VL_CONCAT_III(12,1,11, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U)), 
                                                                     VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 8U, 4U)), 0U)))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__42(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__42\n"); );
    // Body
    vlSelf->__PVT___immS_T_55 = VL_CONCAT_QIQ(52,1,51, 
                                              (1U & 
                                               VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                              VL_CONCAT_QIQ(51,1,50, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                            VL_CONCAT_QIQ(50,1,49, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                          VL_CONCAT_QIQ(49,1,48, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSelf->__PVT__immS_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSelf->__PVT__immS_lo_lo), vlSelf->__PVT__immS_lo)))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__43(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__43\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_115 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_114), 3U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__44(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__44\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_144 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_134)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_142));
    vlSelf->__PVT___inst_code_type_T_101 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_99));
    vlSelf->__PVT___inst_code_type_T_84 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x21U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_82));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__45(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__45\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_16 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x15U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_14));
    vlSelf->__PVT___inst_code_type_T_63 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_37)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_61));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__46(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__46\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_23 = ((3U == (IData)(vlSelf->__PVT__OpD))
                                          ? (IData)(vlSelf->__PVT___io_MemWidthD_T_13)
                                          : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__47(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__47\n"); );
    // Body
    vlSelf->__PVT__immS = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___immS_T_55, 
                                        VL_CONCAT_III(12,7,5, (IData)(vlSelf->__PVT__Funct7D), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__48(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__48\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_146 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_140)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_144));
    vlSelf->__PVT___inst_code_type_T_103 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0xbU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_101));
    vlSelf->__PVT___inst_code_type_T_86 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1fU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_84));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__49(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__49\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_18 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_2))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_16));
    vlSelf->__PVT___inst_code_type_T_65 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_41)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_63));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__50(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__50\n"); );
    // Body
    vlSelf->__PVT__io_MemWidthD = ((0x23U == (IData)(vlSelf->__PVT__OpD))
                                    ? (IData)(vlSelf->__PVT___io_MemWidthD_T_21)
                                    : (IData)(vlSelf->__PVT___io_MemWidthD_T_23));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__51(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__51\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_148 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x29U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_146));
    vlSelf->__PVT___inst_code_type_T_105 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 6U : (IData)(vlSelf->__PVT___inst_code_type_T_103));
    vlSelf->__PVT___inst_code_type_T_87 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_86), 4U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__52(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__52\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_20 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xfU : (IData)(vlSelf->__PVT___inst_code_type_T_18));
    vlSelf->__PVT___inst_code_type_T_67 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_45)
                                            : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_65)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__53(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__53\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_150 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x2aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_148));
    vlSelf->__PVT___inst_code_type_T_106 = VL_CONCAT_III(7,4,3, (IData)(vlSelf->__PVT___inst_code_type_T_105), 2U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__54(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__54\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_22 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_6)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_20));
    vlSelf->__PVT___inst_code_type_T_69 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_51))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_67));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__55(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__55\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_152 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x27U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_150));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__56(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__56\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_23 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_22), 2U);
    vlSelf->__PVT___inst_code_type_T_71 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_55))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_69));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__57(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__57\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_153 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_152), 5U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__58(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__58\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_156 = ((0x13U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_23)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_73 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_59))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_71));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__59(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__59\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_74 = VL_CONCAT_III(10,7,3, (IData)(vlSelf->__PVT___inst_code_type_T_73), 5U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__60(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__60\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_158 = ((0x33U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_74)
                                             : VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_156)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__61(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__61\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_160 = ((0x63U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_87))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_158));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__62(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__62\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_162 = ((0x6fU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x16U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_160));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__63(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__63\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_164 = ((0x67U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_162));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__64(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__64\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_166 = ((0x37U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_164));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__65(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__65\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_168 = ((0x17U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x201U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_166));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__66(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__66\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_170 = ((3U == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,7, (IData)(vlSelf->__PVT___inst_code_type_T_106))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_168));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__67(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__67\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_172 = ((0x23U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_115))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_170));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__68(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__68\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_174 = ((0x1bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_126))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_172));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__69(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__69\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_176 = ((0x3bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_153))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_174));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__70(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__70\n"); );
    // Body
    vlSelf->__PVT__inst_code_type = ((0U == (IData)(vlSelf->__PVT__OpD))
                                      ? 0x282U : (IData)(vlSelf->__PVT___inst_code_type_T_176));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__71(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__71\n"); );
    // Body
    vlSelf->__PVT__inst_type = (7U & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 0U, 3U));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__72(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__72\n"); );
    // Body
    vlSelf->__PVT__ins_code = (0x7fU & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 3U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__73(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__73\n"); );
    // Body
    vlSelf->__PVT__io_ALUSrcD_0 = VL_EXTEND_II(2,1, 
                                               (0x40U 
                                                == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_LinkD = ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                               | (2U == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_data_wD = ((0x12U == (IData)(vlSelf->__PVT__ins_code)) 
                                 | ((0x11U == (IData)(vlSelf->__PVT__ins_code)) 
                                    | ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                       | ((5U == (IData)(vlSelf->__PVT__ins_code)) 
                                          | ((0x3dU 
                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                             | ((0x3cU 
                                                 == (IData)(vlSelf->__PVT__ins_code)) 
                                                | ((0x3bU 
                                                    == (IData)(vlSelf->__PVT__ins_code)) 
                                                   | ((0x3aU 
                                                       == (IData)(vlSelf->__PVT__ins_code)) 
                                                      | ((0x39U 
                                                          == (IData)(vlSelf->__PVT__ins_code)) 
                                                         | ((0x2bU 
                                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                                            | ((0x2bU 
                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                               | ((0x2aU 
                                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                                  | ((0x29U 
                                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                                     | ((0x28U 
                                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                                        | (0x27U 
                                                                           == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__74(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__74\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_3 = (4U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_RegWriteD_T_29 = ((0x30U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x2bU 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x2fU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x2eU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x2dU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x2cU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x2bU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x2aU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x29U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x28U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x27U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x26U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x25U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x24U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (0x23U 
                                                                                == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__75(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__75\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_4 = (6U == (IData)(vlSelf->__PVT__inst_type));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__76(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__76\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_2 = (3U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_1 = (2U == (IData)(vlSelf->__PVT__inst_type));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__77(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__77\n"); );
    // Body
    vlSelf->__PVT__io1_BadInstrD = (0U == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT___io_ImmD_T = (1U == (IData)(vlSelf->__PVT__inst_type));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__78(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__78\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_14 = ((0x24U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 2U
                                               : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__79(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__79\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_33 = ((0x40U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__80(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__80\n"); );
    // Body
    vlSelf->__PVT___io_ALUSrcD_1_T_4 = (((IData)(vlSelf->__PVT___io_ImmD_T_1) 
                                         | (IData)(vlSelf->__PVT___io_ImmD_T_4)) 
                                        | (IData)(vlSelf->__PVT___io_ImmD_T));
    vlSelf->__PVT___io_ImmD_T_9 = ((IData)(vlSelf->__PVT___io_ImmD_T_4)
                                    ? vlSelf->__PVT__immUJ
                                    : 0U);
    vlSelf->__PVT___io_ImmD_T_8 = ((IData)(vlSelf->__PVT___io_ImmD_T_3)
                                    ? vlSelf->__PVT__immSB
                                    : 0ULL);
    vlSelf->__PVT___io_RegWriteD_T_59 = ((2U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x3dU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x3cU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x3bU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x3aU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x39U 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x38U 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x37U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x36U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x35U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x34U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x33U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x32U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((0x31U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_29))))))))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__81(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__81\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_7 = ((IData)(vlSelf->__PVT___io_ImmD_T_2)
                                    ? vlSelf->__PVT__immS
                                    : 0ULL);
    vlSelf->__PVT___io_ImmD_T_6 = ((IData)(vlSelf->__PVT___io_ImmD_T_1)
                                    ? vlSelf->__PVT__immI
                                    : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__82(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__82\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_5 = ((IData)(vlSelf->__PVT___io_ImmD_T)
                                    ? vlSelf->__PVT__immU
                                    : 0U);
    vlSelf->__PVT___io_muldiv_control_T_16 = ((0x23U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 1U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_14));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__83(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__83\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_35 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_33));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__84(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__84\n"); );
    // Body
    vlSelf->__PVT__io_ALUSrcD_1 = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_ALUSrcD_1_T_4));
    vlSelf->__PVT___GEN_1 = VL_EXTEND_QI(64,20, vlSelf->__PVT___io_ImmD_T_9);
    vlSelf->__PVT___io_RegWriteD_T_89 = ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0xfU == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0xeU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0xdU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((9U 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0xbU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0xaU 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((9U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((8U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((7U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((6U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((5U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((4U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_59))))))))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__85(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__85\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = VL_EXTEND_QI(64,32, vlSelf->__PVT___io_ImmD_T_5);
    vlSelf->__PVT___io_muldiv_control_T_18 = ((0x25U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 4U
                                               : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___io_muldiv_control_T_16)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__86(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__86\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_37 = ((5U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_35));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__87(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__87\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteD = ((1U == (IData)(vlSelf->__PVT__ins_code)) 
                                   | ((0x40U == (IData)(vlSelf->__PVT__ins_code)) 
                                      | ((0x41U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x17U 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x16U 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x15U 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x14U 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x13U 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x12U 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x11U 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | (IData)(vlSelf->__PVT___io_RegWriteD_T_89)))))))))));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__88(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__88\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_10 = (vlSelf->__PVT___GEN_0 
                                    | vlSelf->__PVT___io_ImmD_T_6);
    vlSelf->__PVT___io_muldiv_control_T_20 = ((0x26U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 8U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_18));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__89(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__89\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_39 = ((4U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_37));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__90(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__90\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_11 = (vlSelf->__PVT___io_ImmD_T_10 
                                    | vlSelf->__PVT___io_ImmD_T_7);
    vlSelf->__PVT___io_muldiv_control_T_22 = ((0x27U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x10U
                                               : VL_EXTEND_II(8,4, (IData)(vlSelf->__PVT___io_muldiv_control_T_20)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__91(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__91\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_41 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_39));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__92(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__92\n"); );
    // Body
    vlSelf->__PVT___io_ImmD_T_12 = (vlSelf->__PVT___io_ImmD_T_11 
                                    | vlSelf->__PVT___io_ImmD_T_8);
    vlSelf->__PVT___io_muldiv_control_T_24 = ((0x28U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x20U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_22));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__93(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__93\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_43 = ((0xdU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : 
                                        VL_EXTEND_II(16,2, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_41)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__94(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__94\n"); );
    // Body
    vlSelf->__PVT__io_ImmD = (vlSelf->__PVT___io_ImmD_T_12 
                              | vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___io_muldiv_control_T_26 = ((0x29U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x40U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_24));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__95(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__95\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_45 = ((0xeU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_43));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__96(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__96\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_28 = ((0x2aU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x80U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_26));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__97(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__97\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_47 = ((0xfU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_45));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__98(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__98\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_30 = ((0x2bU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x100U
                                               : VL_EXTEND_II(16,8, (IData)(vlSelf->__PVT___io_muldiv_control_T_28)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__99(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__99\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_49 = ((0x10U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_47));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__100(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__100\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_32 = ((0x2cU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x200U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_30));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__101(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__101\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_51 = ((0x11U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : VL_EXTEND_II(32,16, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_49)));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__102(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__102\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_34 = ((0x2dU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x400U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_32));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__103(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__103\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_53 = ((0x12U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_51);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__104(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__104\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_36 = ((0x2fU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x1000U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_34));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__105(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__105\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_55 = ((0x13U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_53);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__106(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__106\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_38 = ((0x2eU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x800U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_36));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__107(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__107\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_57 = ((0x14U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_55);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__108(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__108\n"); );
    // Body
    vlSelf->__PVT__io_muldiv_control = VL_EXTEND_II(24,16, (IData)(vlSelf->__PVT___io_muldiv_control_T_38));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__109(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__109\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_59 = ((0x15U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_57);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__110(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__110\n"); );
    // Body
    vlSelf->__PVT__io_muldiv_cal = (0U != vlSelf->__PVT__io_muldiv_control);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__111(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__111\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_61 = ((0x16U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_59);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__112(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__112\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_63 = ((0x17U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_61);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__113(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__113\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_65 = ((1U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x80U : vlSelf->__PVT___io_ALUCtrlD_T_63);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__114(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__114\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_67 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_65);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__115(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__115\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_69 = ((0x31U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_67);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__116(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__116\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_71 = ((0x32U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_69);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__117(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__117\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_73 = ((0x33U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_71);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__118(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__118\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_75 = ((0x34U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : vlSelf->__PVT___io_ALUCtrlD_T_73);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__119(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__119\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_77 = ((0x35U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : vlSelf->__PVT___io_ALUCtrlD_T_75);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__120(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__120\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_79 = ((0x36U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_77);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__121(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__121\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_81 = ((0x37U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_79);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__122(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__122\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_83 = ((0x38U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_81);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__123(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__123\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_85 = ((0x39U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_83);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__124(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__124\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_87 = ((0x3aU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_85);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__125(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__125\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_89 = ((0x3bU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_87);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__126(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__126\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_91 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_89);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__127(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__127\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_93 = ((0x3dU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_91);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__128(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__128\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_95 = ((0x41U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_93);
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__129(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__129\n"); );
    // Body
    vlSelf->__PVT__io_ALUCtrlD = (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT___io_ALUCtrlD_T_95, 0U, 0x18U));
}

VL_ATTR_COLD void Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__130(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___settle__TOP__mycpu_top__u_riscv_cpu___cu__130\n"); );
    // Body
    vlSelf->__PVT__io_alu_cal = (0U != vlSelf->__PVT__io_ALUCtrlD);
}

VL_ATTR_COLD void Vmycpu_top_cu___ctor_var_reset(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io1_InstrD = 0;
    vlSelf->__PVT__io1_BadInstrD = 0;
    vlSelf->__PVT__io1_dmem_addr_cal = 0;
    vlSelf->__PVT__io_RegWriteD = 0;
    vlSelf->__PVT__io_MemToRegD = 0;
    vlSelf->__PVT__io_MemWriteD = 0;
    vlSelf->__PVT__io_ALUCtrlD = 0;
    vlSelf->__PVT__io_ALUSrcD_0 = 0;
    vlSelf->__PVT__io_ALUSrcD_1 = 0;
    vlSelf->__PVT__io_RegDstD = 0;
    vlSelf->__PVT__io_LinkD = 0;
    vlSelf->__PVT__io_LoadUnsignedD = 0;
    vlSelf->__PVT__io_MemWidthD = 0;
    vlSelf->__PVT__io_ImmD = 0;
    vlSelf->__PVT__io_ebreakD = 0;
    vlSelf->__PVT__io_data_wD = 0;
    vlSelf->__PVT__io_muldiv_control = 0;
    vlSelf->__PVT__io_muldiv_cal = 0;
    vlSelf->__PVT__io_alu_cal = 0;
    vlSelf->__PVT__OpD = 0;
    vlSelf->__PVT__Funct3D = 0;
    vlSelf->__PVT__Funct7D = 0;
    vlSelf->__PVT__Funct6D = 0;
    vlSelf->__PVT__immI_lo_lo_lo = 0;
    vlSelf->__PVT__immI_lo_lo = 0;
    vlSelf->__PVT__immI_lo = 0;
    vlSelf->__PVT___immI_T_53 = 0;
    vlSelf->__PVT__immI = 0;
    vlSelf->__PVT___immS_T_2 = 0;
    vlSelf->__PVT__immS_lo_lo_lo = 0;
    vlSelf->__PVT__immS_lo_lo = 0;
    vlSelf->__PVT__immS_lo = 0;
    vlSelf->__PVT___immS_T_55 = 0;
    vlSelf->__PVT__immS = 0;
    vlSelf->__PVT__immU = 0;
    vlSelf->__PVT___immSB_T_4 = 0;
    vlSelf->__PVT__immSB_lo_lo_lo = 0;
    vlSelf->__PVT__immSB_lo_lo = 0;
    vlSelf->__PVT__immSB_lo_hi = 0;
    vlSelf->__PVT__immSB_lo_1 = 0;
    vlSelf->__PVT___immSB_T_56 = 0;
    vlSelf->__PVT__immSB = 0;
    vlSelf->__PVT__immUJ = 0;
    vlSelf->__PVT___inst_code_type_T_2 = 0;
    vlSelf->__PVT___inst_code_type_T_4 = 0;
    vlSelf->__PVT___inst_code_type_T_6 = 0;
    vlSelf->__PVT___inst_code_type_T_8 = 0;
    vlSelf->__PVT___inst_code_type_T_10 = 0;
    vlSelf->__PVT___inst_code_type_T_12 = 0;
    vlSelf->__PVT___inst_code_type_T_14 = 0;
    vlSelf->__PVT___inst_code_type_T_16 = 0;
    vlSelf->__PVT___inst_code_type_T_18 = 0;
    vlSelf->__PVT___inst_code_type_T_20 = 0;
    vlSelf->__PVT___inst_code_type_T_22 = 0;
    vlSelf->__PVT___inst_code_type_T_23 = 0;
    vlSelf->__PVT___inst_code_type_T_25 = 0;
    vlSelf->__PVT___inst_code_type_T_27 = 0;
    vlSelf->__PVT___inst_code_type_T_29 = 0;
    vlSelf->__PVT___inst_code_type_T_31 = 0;
    vlSelf->__PVT___inst_code_type_T_33 = 0;
    vlSelf->__PVT___inst_code_type_T_35 = 0;
    vlSelf->__PVT___inst_code_type_T_37 = 0;
    vlSelf->__PVT___inst_code_type_T_39 = 0;
    vlSelf->__PVT___inst_code_type_T_41 = 0;
    vlSelf->__PVT___inst_code_type_T_43 = 0;
    vlSelf->__PVT___inst_code_type_T_45 = 0;
    vlSelf->__PVT___inst_code_type_T_47 = 0;
    vlSelf->__PVT___inst_code_type_T_49 = 0;
    vlSelf->__PVT___inst_code_type_T_51 = 0;
    vlSelf->__PVT___inst_code_type_T_53 = 0;
    vlSelf->__PVT___inst_code_type_T_55 = 0;
    vlSelf->__PVT___inst_code_type_T_57 = 0;
    vlSelf->__PVT___inst_code_type_T_59 = 0;
    vlSelf->__PVT___inst_code_type_T_61 = 0;
    vlSelf->__PVT___inst_code_type_T_63 = 0;
    vlSelf->__PVT___inst_code_type_T_65 = 0;
    vlSelf->__PVT___inst_code_type_T_67 = 0;
    vlSelf->__PVT___inst_code_type_T_69 = 0;
    vlSelf->__PVT___inst_code_type_T_71 = 0;
    vlSelf->__PVT___inst_code_type_T_73 = 0;
    vlSelf->__PVT___inst_code_type_T_74 = 0;
    vlSelf->__PVT___inst_code_type_T_76 = 0;
    vlSelf->__PVT___inst_code_type_T_78 = 0;
    vlSelf->__PVT___inst_code_type_T_80 = 0;
    vlSelf->__PVT___inst_code_type_T_82 = 0;
    vlSelf->__PVT___inst_code_type_T_84 = 0;
    vlSelf->__PVT___inst_code_type_T_86 = 0;
    vlSelf->__PVT___inst_code_type_T_87 = 0;
    vlSelf->__PVT___inst_code_type_T_93 = 0;
    vlSelf->__PVT___inst_code_type_T_95 = 0;
    vlSelf->__PVT___inst_code_type_T_97 = 0;
    vlSelf->__PVT___inst_code_type_T_99 = 0;
    vlSelf->__PVT___inst_code_type_T_101 = 0;
    vlSelf->__PVT___inst_code_type_T_103 = 0;
    vlSelf->__PVT___inst_code_type_T_105 = 0;
    vlSelf->__PVT___inst_code_type_T_106 = 0;
    vlSelf->__PVT___inst_code_type_T_108 = 0;
    vlSelf->__PVT___inst_code_type_T_110 = 0;
    vlSelf->__PVT___inst_code_type_T_112 = 0;
    vlSelf->__PVT___inst_code_type_T_114 = 0;
    vlSelf->__PVT___inst_code_type_T_115 = 0;
    vlSelf->__PVT___inst_code_type_T_117 = 0;
    vlSelf->__PVT___inst_code_type_T_119 = 0;
    vlSelf->__PVT___inst_code_type_T_121 = 0;
    vlSelf->__PVT___inst_code_type_T_123 = 0;
    vlSelf->__PVT___inst_code_type_T_125 = 0;
    vlSelf->__PVT___inst_code_type_T_126 = 0;
    vlSelf->__PVT___inst_code_type_T_128 = 0;
    vlSelf->__PVT___inst_code_type_T_130 = 0;
    vlSelf->__PVT___inst_code_type_T_132 = 0;
    vlSelf->__PVT___inst_code_type_T_134 = 0;
    vlSelf->__PVT___inst_code_type_T_136 = 0;
    vlSelf->__PVT___inst_code_type_T_138 = 0;
    vlSelf->__PVT___inst_code_type_T_140 = 0;
    vlSelf->__PVT___inst_code_type_T_142 = 0;
    vlSelf->__PVT___inst_code_type_T_144 = 0;
    vlSelf->__PVT___inst_code_type_T_146 = 0;
    vlSelf->__PVT___inst_code_type_T_148 = 0;
    vlSelf->__PVT___inst_code_type_T_150 = 0;
    vlSelf->__PVT___inst_code_type_T_152 = 0;
    vlSelf->__PVT___inst_code_type_T_153 = 0;
    vlSelf->__PVT___inst_code_type_T_156 = 0;
    vlSelf->__PVT___inst_code_type_T_158 = 0;
    vlSelf->__PVT___inst_code_type_T_160 = 0;
    vlSelf->__PVT___inst_code_type_T_162 = 0;
    vlSelf->__PVT___inst_code_type_T_164 = 0;
    vlSelf->__PVT___inst_code_type_T_166 = 0;
    vlSelf->__PVT___inst_code_type_T_168 = 0;
    vlSelf->__PVT___inst_code_type_T_170 = 0;
    vlSelf->__PVT___inst_code_type_T_172 = 0;
    vlSelf->__PVT___inst_code_type_T_174 = 0;
    vlSelf->__PVT___inst_code_type_T_176 = 0;
    vlSelf->__PVT__inst_code_type = 0;
    vlSelf->__PVT__ins_code = 0;
    vlSelf->__PVT__inst_type = 0;
    vlSelf->__PVT___io_ImmD_T = 0;
    vlSelf->__PVT___io_ImmD_T_1 = 0;
    vlSelf->__PVT___io_ImmD_T_2 = 0;
    vlSelf->__PVT___io_ImmD_T_3 = 0;
    vlSelf->__PVT___io_ImmD_T_4 = 0;
    vlSelf->__PVT___io_ImmD_T_5 = 0;
    vlSelf->__PVT___io_ImmD_T_6 = 0;
    vlSelf->__PVT___io_ImmD_T_7 = 0;
    vlSelf->__PVT___io_ImmD_T_8 = 0;
    vlSelf->__PVT___io_ImmD_T_9 = 0;
    vlSelf->__PVT___GEN_0 = 0;
    vlSelf->__PVT___io_ImmD_T_10 = 0;
    vlSelf->__PVT___io_ImmD_T_11 = 0;
    vlSelf->__PVT___io_ImmD_T_12 = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT___io_RegWriteD_T_29 = 0;
    vlSelf->__PVT___io_RegWriteD_T_59 = 0;
    vlSelf->__PVT___io_RegWriteD_T_89 = 0;
    vlSelf->__PVT___io_ALUSrcD_1_T_4 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_33 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_35 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_37 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_39 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_41 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_43 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_45 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_47 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_49 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_51 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_53 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_55 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_57 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_59 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_61 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_63 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_65 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_67 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_69 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_71 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_73 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_75 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_77 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_79 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_81 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_83 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_85 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_87 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_89 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_91 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_93 = 0;
    vlSelf->__PVT___io_ALUCtrlD_T_95 = 0;
    vlSelf->__PVT___io_MemWidthD_T_5 = 0;
    vlSelf->__PVT___io_MemWidthD_T_7 = 0;
    vlSelf->__PVT___io_MemWidthD_T_9 = 0;
    vlSelf->__PVT___io_MemWidthD_T_11 = 0;
    vlSelf->__PVT___io_MemWidthD_T_13 = 0;
    vlSelf->__PVT___io_MemWidthD_T_21 = 0;
    vlSelf->__PVT___io_MemWidthD_T_23 = 0;
    vlSelf->__PVT___io_muldiv_control_T_14 = 0;
    vlSelf->__PVT___io_muldiv_control_T_16 = 0;
    vlSelf->__PVT___io_muldiv_control_T_18 = 0;
    vlSelf->__PVT___io_muldiv_control_T_20 = 0;
    vlSelf->__PVT___io_muldiv_control_T_22 = 0;
    vlSelf->__PVT___io_muldiv_control_T_24 = 0;
    vlSelf->__PVT___io_muldiv_control_T_26 = 0;
    vlSelf->__PVT___io_muldiv_control_T_28 = 0;
    vlSelf->__PVT___io_muldiv_control_T_30 = 0;
    vlSelf->__PVT___io_muldiv_control_T_32 = 0;
    vlSelf->__PVT___io_muldiv_control_T_34 = 0;
    vlSelf->__PVT___io_muldiv_control_T_36 = 0;
    vlSelf->__PVT___io_muldiv_control_T_38 = 0;
}
