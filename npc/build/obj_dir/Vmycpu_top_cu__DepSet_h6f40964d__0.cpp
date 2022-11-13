// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cu.h"

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__0(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__0\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_117 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x11U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_121 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 5U : 0U);
    vlSelf->__PVT___inst_code_type_T_108 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x18U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_134 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x39U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_156 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x4cU
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_136 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3aU
                                             : 0U);
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
    vlSelf->__PVT___inst_code_type_T_76 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1cU
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_47 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x32U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_43 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x41U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_39 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x35U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_35 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2fU
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_31 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x31U
                                            : 0U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__1(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__1\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_119 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x12U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_117));
    vlSelf->__PVT___inst_code_type_T_123 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x10U
                                             : VL_EXTEND_II(5,3, (IData)(vlSelf->__PVT___inst_code_type_T_121)));
    vlSelf->__PVT___inst_code_type_T_110 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x19U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_108));
    vlSelf->__PVT___inst_code_type_T_158 = ((0x18U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x4dU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_156));
    vlSelf->__PVT___inst_code_type_T_138 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_136));
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
    vlSelf->__PVT___inst_code_type_T_49 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x23U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_47));
    vlSelf->__PVT___inst_code_type_T_45 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x24U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_43));
    vlSelf->__PVT___inst_code_type_T_41 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_39));
    vlSelf->__PVT___inst_code_type_T_10 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xeU : (IData)(vlSelf->__PVT___inst_code_type_T_8));
    vlSelf->__PVT___inst_code_type_T_37 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x34U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_35));
    vlSelf->__PVT___inst_code_type_T_33 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2dU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_31));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__2(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__2\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_125 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_119)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_123));
    vlSelf->__PVT___inst_code_type_T_112 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_110));
    vlSelf->__PVT___inst_code_type_T_159 = VL_CONCAT_III(10,7,3, (IData)(vlSelf->__PVT___inst_code_type_T_158), 0U);
    vlSelf->__PVT___inst_code_type_T_140 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x28U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_138));
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
    vlSelf->__PVT___inst_code_type_T_12 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x17U
                                            : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_10)));
    vlSelf->__PVT___inst_code_type_T_29 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2cU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_27));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__3(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__3\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_126 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_125), 2U);
    vlSelf->__PVT___inst_code_type_T_114 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_112));
    vlSelf->__PVT___inst_code_type_T_167 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_159)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_142 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_132)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_99 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 7U : (IData)(vlSelf->__PVT___inst_code_type_T_97));
    vlSelf->__PVT___inst_code_type_T_82 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_80));
    vlSelf->__PVT___inst_code_type_T_14 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x16U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_12));
    vlSelf->__PVT___inst_code_type_T_61 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_33)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_29));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__4(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__4\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_115 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_114), 3U);
    vlSelf->__PVT___inst_code_type_T_169 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x25aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_167));
    vlSelf->__PVT___inst_code_type_T_144 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_134)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_142));
    vlSelf->__PVT___inst_code_type_T_101 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_99));
    vlSelf->__PVT___inst_code_type_T_84 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x21U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_82));
    vlSelf->__PVT___inst_code_type_T_16 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x15U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_14));
    vlSelf->__PVT___inst_code_type_T_63 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_37)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_61));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__5(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__5\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_171 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x252U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_169));
    vlSelf->__PVT___inst_code_type_T_146 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_140)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_144));
    vlSelf->__PVT___inst_code_type_T_103 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0xbU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_101));
    vlSelf->__PVT___inst_code_type_T_86 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1fU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_84));
    vlSelf->__PVT___inst_code_type_T_18 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_2))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_16));
    vlSelf->__PVT___inst_code_type_T_65 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_41)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_63));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__6(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__6\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_173 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x24aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_171));
    vlSelf->__PVT___inst_code_type_T_148 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x29U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_146));
    vlSelf->__PVT___inst_code_type_T_105 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 6U : (IData)(vlSelf->__PVT___inst_code_type_T_103));
    vlSelf->__PVT___inst_code_type_T_87 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_86), 4U);
    vlSelf->__PVT___inst_code_type_T_20 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xfU : (IData)(vlSelf->__PVT___inst_code_type_T_18));
    vlSelf->__PVT___inst_code_type_T_67 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_45)
                                            : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_65)));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__7(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__7\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_175 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x242U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_173));
    vlSelf->__PVT___inst_code_type_T_150 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x2aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_148));
    vlSelf->__PVT___inst_code_type_T_106 = VL_CONCAT_III(7,4,3, (IData)(vlSelf->__PVT___inst_code_type_T_105), 2U);
    vlSelf->__PVT___inst_code_type_T_22 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_6)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_20));
    vlSelf->__PVT___inst_code_type_T_69 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_51))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_67));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__8(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__8\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_177 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x23aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_175));
    vlSelf->__PVT___inst_code_type_T_152 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x27U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_150));
    vlSelf->__PVT___inst_code_type_T_23 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_22), 2U);
    vlSelf->__PVT___inst_code_type_T_71 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_55))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_69));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__9(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__9\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_179 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x232U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_177));
    vlSelf->__PVT___inst_code_type_T_153 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_152), 5U);
    vlSelf->__PVT___inst_code_type_T_181 = ((0x13U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_23)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_73 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_59))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_71));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__10(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__10\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_74 = VL_CONCAT_III(10,7,3, (IData)(vlSelf->__PVT___inst_code_type_T_73), 5U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__11(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__11\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_183 = ((0x33U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_74)
                                             : VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_181)));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__12(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__12\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_185 = ((0x63U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_87))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_183));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__13(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__13\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_187 = ((0x6fU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x16U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_185));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__14(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__14\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_189 = ((0x67U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_187));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__15(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__15\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_191 = ((0x37U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_189));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__16(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__16\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_193 = ((0x17U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x201U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_191));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__17(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__17\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_195 = ((3U == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,7, (IData)(vlSelf->__PVT___inst_code_type_T_106))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_193));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__18(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__18\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_197 = ((0x23U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_115))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_195));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__19(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__19\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_199 = ((0x1bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_126))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_197));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__20(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__20\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_201 = ((0x3bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_153))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_199));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__21(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__21\n"); );
    // Body
    vlSelf->__PVT___inst_code_type_T_203 = ((0U == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x282U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_201));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__22(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__22\n"); );
    // Body
    vlSelf->__PVT__inst_code_type = ((0x73U == (IData)(vlSelf->__PVT__OpD))
                                      ? (IData)(vlSelf->__PVT___inst_code_type_T_179)
                                      : (IData)(vlSelf->__PVT___inst_code_type_T_203));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__23(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__23\n"); );
    // Body
    vlSelf->__PVT__ins_code = (0x7fU & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 3U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__24(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__24\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_33 = ((0x40U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : 0U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__25(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__25\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_35 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_33));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__26(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__26\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_37 = ((5U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_35));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__27(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__27\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_39 = ((4U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_37));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__28(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__28\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_41 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_39));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__29(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__29\n"); );
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

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__30(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__30\n"); );
    // Body
    vlSelf->__PVT__immS = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___immS_T_55, 
                                        VL_CONCAT_III(12,7,5, (IData)(vlSelf->__PVT__Funct7D), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U))));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__31(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__31\n"); );
    // Body
    vlSelf->__PVT___io_csr_control_T_7 = ((0x4bU == (IData)(vlSelf->__PVT__ins_code))
                                           ? 4U : 0U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__32(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__32\n"); );
    // Body
    vlSelf->__PVT___io_csr_control_T_9 = ((0x48U == (IData)(vlSelf->__PVT__ins_code))
                                           ? 4U : (IData)(vlSelf->__PVT___io_csr_control_T_7));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__33(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__33\n"); );
    // Body
    vlSelf->__PVT___io_csr_control_T_11 = ((0x49U == (IData)(vlSelf->__PVT__ins_code))
                                            ? 2U : (IData)(vlSelf->__PVT___io_csr_control_T_9));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__34(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__34\n"); );
    // Body
    vlSelf->__PVT___io_csr_control_T_13 = ((0x46U == (IData)(vlSelf->__PVT__ins_code))
                                            ? 2U : (IData)(vlSelf->__PVT___io_csr_control_T_11));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__37(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__37\n"); );
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
    vlSelf->__PVT___io_MemWidthD_T_5 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 2U : VL_EXTEND_II(2,1, 
                                                             (1U 
                                                              == (IData)(vlSelf->__PVT__Funct3D))));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__38(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__38\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_21 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 3U : (IData)(vlSelf->__PVT___io_MemWidthD_T_5));
    vlSelf->__PVT___io_MemWidthD_T_7 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 0U : (IData)(vlSelf->__PVT___io_MemWidthD_T_5));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__39(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__39\n"); );
    // Body
    vlSelf->__PVT___io_MemWidthD_T_23 = ((3U == (IData)(vlSelf->__PVT__OpD))
                                          ? (IData)(vlSelf->__PVT___io_MemWidthD_T_13)
                                          : 0U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__40(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__40\n"); );
    // Body
    vlSelf->__PVT__io_MemWidthD = ((0x23U == (IData)(vlSelf->__PVT__OpD))
                                    ? (IData)(vlSelf->__PVT___io_MemWidthD_T_21)
                                    : (IData)(vlSelf->__PVT___io_MemWidthD_T_23));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__41(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__41\n"); );
    // Body
    vlSelf->__PVT__io_csrToRegD = ((0x46U == (IData)(vlSelf->__PVT__ins_code)) 
                                   | ((0x47U == (IData)(vlSelf->__PVT__ins_code)) 
                                      | ((0x48U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x4bU 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x4aU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | (0x49U 
                                                  == (IData)(vlSelf->__PVT__ins_code)))))));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__42(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__42\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_43 = ((0xdU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : 
                                        VL_EXTEND_II(16,2, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_41)));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__43(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__43\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_45 = ((0xeU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_43));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__44(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__44\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_47 = ((0xfU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_45));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__45(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__45\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_49 = ((0x10U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_47));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__46(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__46\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_51 = ((0x11U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : VL_EXTEND_II(32,16, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_49)));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__47(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__47\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_53 = ((0x12U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_51);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__48(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__48\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_55 = ((0x13U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_53);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__49(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__49\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_57 = ((0x14U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_55);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__50(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__50\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_59 = ((0x15U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_57);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__51(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__51\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_61 = ((0x16U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_59);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__52(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__52\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_63 = ((0x17U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_61);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__53(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__53\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_65 = ((1U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x80U : vlSelf->__PVT___io_ALUCtrlD_T_63);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__54(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__54\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_67 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_65);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__55(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__55\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_69 = ((0x31U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_67);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__56(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__56\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_71 = ((0x32U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_69);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__57(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__57\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_73 = ((0x33U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_71);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__58(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__58\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_75 = ((0x34U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : vlSelf->__PVT___io_ALUCtrlD_T_73);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__59(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__59\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_77 = ((0x35U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : vlSelf->__PVT___io_ALUCtrlD_T_75);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__60(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__60\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_79 = ((0x36U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_77);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__61(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__61\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_81 = ((0x37U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_79);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__62(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__62\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_83 = ((0x38U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_81);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__63(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__63\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_85 = ((0x39U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_83);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__64(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__64\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_87 = ((0x3aU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_85);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__65(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__65\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_89 = ((0x3bU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_87);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__66(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__66\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_91 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_89);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__67(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__67\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_93 = ((0x3dU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_91);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__68(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__68\n"); );
    // Body
    vlSelf->__PVT___io_ALUCtrlD_T_95 = ((0x41U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_93);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__69(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__69\n"); );
    // Body
    vlSelf->__PVT__io_ALUCtrlD = (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT___io_ALUCtrlD_T_95, 0U, 0x18U));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__70(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__70\n"); );
    // Body
    vlSelf->__PVT__io_alu_cal = (0U != vlSelf->__PVT__io_ALUCtrlD);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__71(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__71\n"); );
    // Body
    vlSelf->__PVT__io_ebreakD = (0x100073U == vlSelf->__PVT__io1_InstrD);
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

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__73(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__73\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__74(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__74\n"); );
    // Body
    vlSelf->__PVT__io_ALUSrcD_0 = VL_EXTEND_II(2,1, 
                                               (0x40U 
                                                == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_LinkD = ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                               | (2U == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_csrWriteD = ((0x46U == (IData)(vlSelf->__PVT__ins_code)) 
                                   | ((0x47U == (IData)(vlSelf->__PVT__ins_code)) 
                                      | ((0x48U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x4bU 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x4aU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | (0x49U 
                                                  == (IData)(vlSelf->__PVT__ins_code)))))));
    vlSelf->__PVT__io_csr_Imm = (((0x48U == (IData)(vlSelf->__PVT__ins_code)) 
                                  | (0x46U == (IData)(vlSelf->__PVT__ins_code))) 
                                 | (0x47U == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT___io_muldiv_control_T_14 = ((0x24U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 2U
                                               : 0U);
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__75(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__75\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_16 = ((0x23U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 1U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_14));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__76(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__76\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_24 = ((0x28U 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x20U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_22));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__77(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__77\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_34 = ((0x2dU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x400U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_32));
}

VL_INLINE_OPT void Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__78(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___nba_sequent__TOP__mycpu_top__u_riscv_cpu___cu__78\n"); );
    // Body
    vlSelf->__PVT___io_muldiv_control_T_36 = ((0x2fU 
                                               == (IData)(vlSelf->__PVT__ins_code))
                                               ? 0x1000U
                                               : (IData)(vlSelf->__PVT___io_muldiv_control_T_34));
}
