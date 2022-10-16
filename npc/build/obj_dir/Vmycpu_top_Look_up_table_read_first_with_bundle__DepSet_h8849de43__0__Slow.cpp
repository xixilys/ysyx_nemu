// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                              : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_49 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1\n"); );
    // Body
    vlSelf->__PVT___GEN_81 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                               : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_113 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_129 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_145 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_161 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2\n"); );
    // Body
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3\n"); );
    // Body
    vlSelf->__PVT___GEN_209 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4\n"); );
    // Body
    vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_18 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_50 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_65));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6\n"); );
    // Body
    vlSelf->__PVT___GEN_82 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_114 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_130 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT___GEN_146 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_145));
    vlSelf->__PVT___GEN_162 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_161);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7\n"); );
    // Body
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8\n"); );
    // Body
    vlSelf->__PVT___GEN_210 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_209);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9\n"); );
    // Body
    vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_193);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10\n"); );
    // Body
    vlSelf->__PVT___GEN_238 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_239 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
    vlSelf->__PVT___GEN_240 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
    vlSelf->__PVT___GEN_241 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
    vlSelf->__PVT___GEN_242 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_243 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_244 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_245 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_246 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_247 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_248 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_249 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_250 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_251 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                                : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_19 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_115 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_131 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___GEN_147 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_146));
    vlSelf->__PVT___GEN_163 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_162);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13\n"); );
    // Body
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14\n"); );
    // Body
    vlSelf->__PVT___GEN_211 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_210);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15\n"); );
    // Body
    vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_194);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16\n"); );
    // Body
    vlSelf->__PVT___GEN_252 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_238);
    vlSelf->__PVT___GEN_253 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_239);
    vlSelf->__PVT___GEN_254 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_240));
    vlSelf->__PVT___GEN_255 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_241);
    vlSelf->__PVT___GEN_256 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_242));
    vlSelf->__PVT___GEN_257 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_243));
    vlSelf->__PVT___GEN_258 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_244));
    vlSelf->__PVT___GEN_259 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_245));
    vlSelf->__PVT___GEN_260 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_246));
    vlSelf->__PVT___GEN_261 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_247));
    vlSelf->__PVT___GEN_262 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_248));
    vlSelf->__PVT___GEN_263 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_249));
    vlSelf->__PVT___GEN_264 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_250));
    vlSelf->__PVT___GEN_265 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_251));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_20 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_52 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_67));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18\n"); );
    // Body
    vlSelf->__PVT___GEN_84 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_116 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_132 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_131));
    vlSelf->__PVT___GEN_148 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_147));
    vlSelf->__PVT___GEN_164 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_163);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__19(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__19\n"); );
    // Body
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__20(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__20\n"); );
    // Body
    vlSelf->__PVT___GEN_212 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_211);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__21(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__21\n"); );
    // Body
    vlSelf->__PVT___GEN_196 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_195);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__22\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_252);
    vlSelf->__PVT___GEN_267 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_253);
    vlSelf->__PVT___GEN_268 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_254));
    vlSelf->__PVT___GEN_269 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_255);
    vlSelf->__PVT___GEN_270 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_256));
    vlSelf->__PVT___GEN_271 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_257));
    vlSelf->__PVT___GEN_272 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_273 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_274 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_275 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_276 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_277 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_278 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_279 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_265));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__23\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_21 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_53 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_68));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__24(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__24\n"); );
    // Body
    vlSelf->__PVT___GEN_85 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_101 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_117 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_133 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_132));
    vlSelf->__PVT___GEN_149 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_148));
    vlSelf->__PVT___GEN_165 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_164);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__25(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__25\n"); );
    // Body
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__26(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__26\n"); );
    // Body
    vlSelf->__PVT___GEN_213 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_212);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__27(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__27\n"); );
    // Body
    vlSelf->__PVT___GEN_197 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_196);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__28(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__28\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_266);
    vlSelf->__PVT___GEN_281 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_267);
    vlSelf->__PVT___GEN_282 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_283 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_269);
    vlSelf->__PVT___GEN_284 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_285 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_286 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_287 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_288 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_289 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_290 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_291 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_292 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_293 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_279));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__29(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__29\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_22 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_54 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_69));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__30(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__30\n"); );
    // Body
    vlSelf->__PVT___GEN_86 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_102 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_118 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_134 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_133));
    vlSelf->__PVT___GEN_150 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_149));
    vlSelf->__PVT___GEN_166 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_165);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__31(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__31\n"); );
    // Body
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__32(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__32\n"); );
    // Body
    vlSelf->__PVT___GEN_214 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_213);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__33(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__33\n"); );
    // Body
    vlSelf->__PVT___GEN_198 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_197);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__34(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__34\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_280);
    vlSelf->__PVT___GEN_295 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_281);
    vlSelf->__PVT___GEN_296 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_297 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_283);
    vlSelf->__PVT___GEN_298 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_299 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_300 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_301 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_302 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_303 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_304 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_305 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_306 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_307 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_293));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__35(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__35\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_23 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_55 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_70));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__36(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__36\n"); );
    // Body
    vlSelf->__PVT___GEN_87 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_119 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_135 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_134));
    vlSelf->__PVT___GEN_151 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_150));
    vlSelf->__PVT___GEN_167 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_166);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__37(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__37\n"); );
    // Body
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__38(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__38\n"); );
    // Body
    vlSelf->__PVT___GEN_215 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_214);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__39(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__39\n"); );
    // Body
    vlSelf->__PVT___GEN_199 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_198);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__40(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__40\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_294);
    vlSelf->__PVT___GEN_309 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_295);
    vlSelf->__PVT___GEN_310 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_311 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_297);
    vlSelf->__PVT___GEN_312 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_313 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_314 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_315 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_316 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_317 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_318 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_319 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_320 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_321 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_307));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__41(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__41\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_24 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_56 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_71));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__42(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__42\n"); );
    // Body
    vlSelf->__PVT___GEN_88 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_120 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_136 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_135));
    vlSelf->__PVT___GEN_152 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_151));
    vlSelf->__PVT___GEN_168 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_167);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__43(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__43\n"); );
    // Body
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__44(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__44\n"); );
    // Body
    vlSelf->__PVT___GEN_216 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_215);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__45(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__45\n"); );
    // Body
    vlSelf->__PVT___GEN_200 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_199);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__46(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__46\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_308);
    vlSelf->__PVT___GEN_323 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_309);
    vlSelf->__PVT___GEN_324 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_325 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_311);
    vlSelf->__PVT___GEN_326 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_327 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_328 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_329 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_330 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_331 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_332 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_333 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_334 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_335 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_321));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__47(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__47\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_25 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_57 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__48(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__48\n"); );
    // Body
    vlSelf->__PVT___GEN_89 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_137 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_136));
    vlSelf->__PVT___GEN_153 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_152));
    vlSelf->__PVT___GEN_169 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_168);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__49(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__49\n"); );
    // Body
    vlSelf->__PVT___GEN_185 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_184));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__50(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__50\n"); );
    // Body
    vlSelf->__PVT___GEN_217 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_216);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__51(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__51\n"); );
    // Body
    vlSelf->__PVT___GEN_201 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_200);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__52(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__52\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_322);
    vlSelf->__PVT___GEN_337 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_323);
    vlSelf->__PVT___GEN_338 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_339 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_325);
    vlSelf->__PVT___GEN_340 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_341 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_342 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_343 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_344 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_345 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_346 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_347 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_348 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_349 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_335));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__53(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__53\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_26 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_58 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_73));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__54(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__54\n"); );
    // Body
    vlSelf->__PVT___GEN_90 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_138 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_137));
    vlSelf->__PVT___GEN_154 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_153));
    vlSelf->__PVT___GEN_170 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_169);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__55(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__55\n"); );
    // Body
    vlSelf->__PVT___GEN_186 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_185));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__56(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__56\n"); );
    // Body
    vlSelf->__PVT___GEN_218 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_217);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__57(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__57\n"); );
    // Body
    vlSelf->__PVT___GEN_202 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_201);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__58(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__58\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_336);
    vlSelf->__PVT___GEN_351 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_337);
    vlSelf->__PVT___GEN_352 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_353 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_339);
    vlSelf->__PVT___GEN_354 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_355 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_356 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_357 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_358 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_359 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_360 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_361 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_362 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_363 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_349));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__59(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__59\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_27 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_59 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_74));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__60(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__60\n"); );
    // Body
    vlSelf->__PVT___GEN_91 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_139 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_138));
    vlSelf->__PVT___GEN_155 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_154));
    vlSelf->__PVT___GEN_171 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_170);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__61(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__61\n"); );
    // Body
    vlSelf->__PVT___GEN_187 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_186));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__62(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__62\n"); );
    // Body
    vlSelf->__PVT___GEN_219 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_218);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__63(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__63\n"); );
    // Body
    vlSelf->__PVT___GEN_203 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_202);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__64(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__64\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_350);
    vlSelf->__PVT___GEN_365 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_351);
    vlSelf->__PVT___GEN_366 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_367 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_353);
    vlSelf->__PVT___GEN_368 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_369 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_370 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_371 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_372 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_373 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_374 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_375 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_376 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_377 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_363));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__65(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__65\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_28 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_60 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_75));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__66(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__66\n"); );
    // Body
    vlSelf->__PVT___GEN_92 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_140 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_139));
    vlSelf->__PVT___GEN_156 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_155));
    vlSelf->__PVT___GEN_172 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_171);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__67(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__67\n"); );
    // Body
    vlSelf->__PVT___GEN_188 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_187));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__68(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__68\n"); );
    // Body
    vlSelf->__PVT___GEN_220 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_219);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__69(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__69\n"); );
    // Body
    vlSelf->__PVT___GEN_204 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_203);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__70(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__70\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_379 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_365);
    vlSelf->__PVT___GEN_380 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_381 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_367);
    vlSelf->__PVT___GEN_382 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_383 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_384 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_385 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_386 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_387 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_388 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_389 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_390 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_391 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_377));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__71(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__71\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_29 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_61 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_76));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__72(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__72\n"); );
    // Body
    vlSelf->__PVT___GEN_93 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_141 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_140));
    vlSelf->__PVT___GEN_157 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_156));
    vlSelf->__PVT___GEN_173 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_172);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__73(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__73\n"); );
    // Body
    vlSelf->__PVT___GEN_189 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_188));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__74(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__74\n"); );
    // Body
    vlSelf->__PVT___GEN_221 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_220);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__75(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__75\n"); );
    // Body
    vlSelf->__PVT___GEN_205 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_204);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__76(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__76\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_393 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_379);
    vlSelf->__PVT___GEN_394 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_395 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_381);
    vlSelf->__PVT___GEN_396 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_397 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_398 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT___GEN_399 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_385));
    vlSelf->__PVT___GEN_400 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_386));
    vlSelf->__PVT___GEN_401 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_387));
    vlSelf->__PVT___GEN_402 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_388));
    vlSelf->__PVT___GEN_403 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_389));
    vlSelf->__PVT___GEN_404 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_390));
    vlSelf->__PVT___GEN_405 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_391));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__77(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__77\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_30 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_62 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_77));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__78(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__78\n"); );
    // Body
    vlSelf->__PVT___GEN_94 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_142 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_141));
    vlSelf->__PVT___GEN_158 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_157));
    vlSelf->__PVT___GEN_174 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pre_pc_target
                                : vlSelf->__PVT___GEN_173);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__79(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__79\n"); );
    // Body
    vlSelf->__PVT___GEN_190 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_189));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__80(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__80\n"); );
    // Body
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__81(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__81\n"); );
    // Body
    vlSelf->__PVT___GEN_206 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_inst
                                : vlSelf->__PVT___GEN_205);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__82(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__82\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_407 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_408 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_394));
    vlSelf->__PVT___GEN_409 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_410 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_396));
    vlSelf->__PVT___GEN_411 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_397));
    vlSelf->__PVT___GEN_412 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_398));
    vlSelf->__PVT___GEN_413 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_399));
    vlSelf->__PVT___GEN_414 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_400));
    vlSelf->__PVT___GEN_415 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_401));
    vlSelf->__PVT___GEN_416 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_402));
    vlSelf->__PVT___GEN_417 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_403));
    vlSelf->__PVT___GEN_418 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_404));
    vlSelf->__PVT___GEN_419 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_405));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__83(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__83\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
            ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT__io_out_pre_decoder_jump = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 
        ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
          ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
          : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_out_pre_decoder_jr = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                             : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT__io_out_true_branch_state = ((0xfU 
                                                == (IData)(vlSelf->__PVT__io_ar_addr))
                                                ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                : (IData)(vlSelf->__PVT___GEN_14));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__84(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__84\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_pc_target = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                            ? vlSelf->__PVT__btb_15_pre_pc_target
                                            : vlSelf->__PVT___GEN_174);
    vlSelf->__PVT__io_out_pre_lookup_data = ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_ar_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                              : (IData)(vlSelf->__PVT___GEN_158));
    vlSelf->__PVT__io_out_pre_hashcode = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                           ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                           : (IData)(vlSelf->__PVT___GEN_142));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT__io_out_pre_bht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                      : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT__io_out_pre_lookup_value = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__85(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__85\n"); );
    // Body
    vlSelf->__PVT__io_out_exception_type = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                             : (IData)(vlSelf->__PVT___GEN_190));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__86(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__86\n"); );
    // Body
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__87(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__87\n"); );
    // Body
    vlSelf->__PVT__io_out_inst = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                   ? vlSelf->__PVT__btb_15_inst
                                   : vlSelf->__PVT___GEN_206);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                              : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_49 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1\n"); );
    // Body
    vlSelf->__PVT___GEN_81 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                               : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_113 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_129 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_145 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_161 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2\n"); );
    // Body
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3\n"); );
    // Body
    vlSelf->__PVT___GEN_209 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4\n"); );
    // Body
    vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_18 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_50 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_65));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6\n"); );
    // Body
    vlSelf->__PVT___GEN_82 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_114 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_130 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT___GEN_146 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_145));
    vlSelf->__PVT___GEN_162 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_161);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7\n"); );
    // Body
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8\n"); );
    // Body
    vlSelf->__PVT___GEN_210 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_209);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9\n"); );
    // Body
    vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_193);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__10\n"); );
    // Body
    vlSelf->__PVT___GEN_238 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_239 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
    vlSelf->__PVT___GEN_240 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
    vlSelf->__PVT___GEN_241 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
    vlSelf->__PVT___GEN_242 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_243 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_244 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_245 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_246 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_247 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_248 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_249 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_250 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_251 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                                : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__11\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_19 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__12\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_115 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_131 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___GEN_147 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_146));
    vlSelf->__PVT___GEN_163 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_162);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__13\n"); );
    // Body
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__14\n"); );
    // Body
    vlSelf->__PVT___GEN_211 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_210);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__15\n"); );
    // Body
    vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_194);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__16\n"); );
    // Body
    vlSelf->__PVT___GEN_252 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_238);
    vlSelf->__PVT___GEN_253 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_239);
    vlSelf->__PVT___GEN_254 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_240));
    vlSelf->__PVT___GEN_255 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_241);
    vlSelf->__PVT___GEN_256 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_242));
    vlSelf->__PVT___GEN_257 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_243));
    vlSelf->__PVT___GEN_258 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_244));
    vlSelf->__PVT___GEN_259 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_245));
    vlSelf->__PVT___GEN_260 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_246));
    vlSelf->__PVT___GEN_261 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_247));
    vlSelf->__PVT___GEN_262 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_248));
    vlSelf->__PVT___GEN_263 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_249));
    vlSelf->__PVT___GEN_264 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_250));
    vlSelf->__PVT___GEN_265 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_251));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__17\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_20 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_52 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_67));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__18\n"); );
    // Body
    vlSelf->__PVT___GEN_84 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_116 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_132 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_131));
    vlSelf->__PVT___GEN_148 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_147));
    vlSelf->__PVT___GEN_164 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_163);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__19(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__19\n"); );
    // Body
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__20(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__20\n"); );
    // Body
    vlSelf->__PVT___GEN_212 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_211);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__21(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__21\n"); );
    // Body
    vlSelf->__PVT___GEN_196 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_195);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__22\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_252);
    vlSelf->__PVT___GEN_267 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_253);
    vlSelf->__PVT___GEN_268 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_254));
    vlSelf->__PVT___GEN_269 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_255);
    vlSelf->__PVT___GEN_270 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_256));
    vlSelf->__PVT___GEN_271 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_257));
    vlSelf->__PVT___GEN_272 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_273 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_274 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_275 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_276 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_277 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_278 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_279 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_265));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__23\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_21 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_53 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_68));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__24(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__24\n"); );
    // Body
    vlSelf->__PVT___GEN_85 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_101 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_117 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_133 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_132));
    vlSelf->__PVT___GEN_149 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_148));
    vlSelf->__PVT___GEN_165 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_164);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__25(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__25\n"); );
    // Body
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__26(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__26\n"); );
    // Body
    vlSelf->__PVT___GEN_213 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_212);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__27(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__27\n"); );
    // Body
    vlSelf->__PVT___GEN_197 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_196);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__28(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__28\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_266);
    vlSelf->__PVT___GEN_281 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_267);
    vlSelf->__PVT___GEN_282 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_283 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_269);
    vlSelf->__PVT___GEN_284 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_285 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_286 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_287 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_288 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_289 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_290 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_291 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_292 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_293 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_279));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__29(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__29\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_22 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_54 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_69));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__30(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__30\n"); );
    // Body
    vlSelf->__PVT___GEN_86 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_102 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_118 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_134 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_133));
    vlSelf->__PVT___GEN_150 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_149));
    vlSelf->__PVT___GEN_166 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_165);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__31(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__31\n"); );
    // Body
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__32(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__32\n"); );
    // Body
    vlSelf->__PVT___GEN_214 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_213);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__33(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__33\n"); );
    // Body
    vlSelf->__PVT___GEN_198 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_197);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__34(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__34\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_280);
    vlSelf->__PVT___GEN_295 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_281);
    vlSelf->__PVT___GEN_296 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_297 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_283);
    vlSelf->__PVT___GEN_298 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_299 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_300 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_301 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_302 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_303 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_304 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_305 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_306 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_307 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_293));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__35(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__35\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_23 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_55 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_70));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__36(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__36\n"); );
    // Body
    vlSelf->__PVT___GEN_87 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_119 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_135 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_134));
    vlSelf->__PVT___GEN_151 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_150));
    vlSelf->__PVT___GEN_167 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_166);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__37(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__37\n"); );
    // Body
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__38(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__38\n"); );
    // Body
    vlSelf->__PVT___GEN_215 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_214);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__39(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__39\n"); );
    // Body
    vlSelf->__PVT___GEN_199 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_198);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__40(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__40\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_294);
    vlSelf->__PVT___GEN_309 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_295);
    vlSelf->__PVT___GEN_310 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_311 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_297);
    vlSelf->__PVT___GEN_312 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_313 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_314 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_315 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_316 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_317 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_318 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_319 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_320 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_321 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_307));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__41(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__41\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_24 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_56 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_71));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__42(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__42\n"); );
    // Body
    vlSelf->__PVT___GEN_88 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_120 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_136 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_135));
    vlSelf->__PVT___GEN_152 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_151));
    vlSelf->__PVT___GEN_168 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_167);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__43(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__43\n"); );
    // Body
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__44(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__44\n"); );
    // Body
    vlSelf->__PVT___GEN_216 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_215);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__45(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__45\n"); );
    // Body
    vlSelf->__PVT___GEN_200 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_199);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__46(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__46\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_308);
    vlSelf->__PVT___GEN_323 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_309);
    vlSelf->__PVT___GEN_324 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_325 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_311);
    vlSelf->__PVT___GEN_326 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_327 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_328 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_329 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_330 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_331 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_332 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_333 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_334 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_335 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_321));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__47(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__47\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_25 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_57 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__48(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__48\n"); );
    // Body
    vlSelf->__PVT___GEN_89 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_137 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_136));
    vlSelf->__PVT___GEN_153 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_152));
    vlSelf->__PVT___GEN_169 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_168);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__49(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__49\n"); );
    // Body
    vlSelf->__PVT___GEN_185 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_184));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__50(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__50\n"); );
    // Body
    vlSelf->__PVT___GEN_217 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_216);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__51(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__51\n"); );
    // Body
    vlSelf->__PVT___GEN_201 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_200);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__52(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__52\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_322);
    vlSelf->__PVT___GEN_337 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_323);
    vlSelf->__PVT___GEN_338 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_339 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_325);
    vlSelf->__PVT___GEN_340 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_341 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_342 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_343 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_344 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_345 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_346 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_347 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_348 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_349 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_335));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__53(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__53\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_26 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_58 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_73));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__54(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__54\n"); );
    // Body
    vlSelf->__PVT___GEN_90 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_138 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_137));
    vlSelf->__PVT___GEN_154 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_153));
    vlSelf->__PVT___GEN_170 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_169);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__55(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__55\n"); );
    // Body
    vlSelf->__PVT___GEN_186 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_185));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__56(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__56\n"); );
    // Body
    vlSelf->__PVT___GEN_218 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_217);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__57(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__57\n"); );
    // Body
    vlSelf->__PVT___GEN_202 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_201);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__58(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__58\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_336);
    vlSelf->__PVT___GEN_351 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_337);
    vlSelf->__PVT___GEN_352 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_353 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_339);
    vlSelf->__PVT___GEN_354 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_355 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_356 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_357 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_358 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_359 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_360 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_361 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_362 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_363 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_349));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__59(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__59\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_27 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_59 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_74));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__60(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__60\n"); );
    // Body
    vlSelf->__PVT___GEN_91 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_139 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_138));
    vlSelf->__PVT___GEN_155 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_154));
    vlSelf->__PVT___GEN_171 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_170);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__61(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__61\n"); );
    // Body
    vlSelf->__PVT___GEN_187 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_186));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__62(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__62\n"); );
    // Body
    vlSelf->__PVT___GEN_219 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_218);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__63(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__63\n"); );
    // Body
    vlSelf->__PVT___GEN_203 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_202);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__64(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__64\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_350);
    vlSelf->__PVT___GEN_365 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_351);
    vlSelf->__PVT___GEN_366 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_367 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_353);
    vlSelf->__PVT___GEN_368 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_369 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_370 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_371 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_372 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_373 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_374 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_375 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_376 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_377 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_363));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__65(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__65\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_28 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_60 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_75));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__66(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__66\n"); );
    // Body
    vlSelf->__PVT___GEN_92 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_140 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_139));
    vlSelf->__PVT___GEN_156 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_155));
    vlSelf->__PVT___GEN_172 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_171);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__67(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__67\n"); );
    // Body
    vlSelf->__PVT___GEN_188 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_187));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__68(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__68\n"); );
    // Body
    vlSelf->__PVT___GEN_220 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_219);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__69(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__69\n"); );
    // Body
    vlSelf->__PVT___GEN_204 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_203);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__70(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__70\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_379 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_365);
    vlSelf->__PVT___GEN_380 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_381 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_367);
    vlSelf->__PVT___GEN_382 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_383 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_384 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_385 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_386 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_387 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_388 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_389 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_390 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_391 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_377));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__71(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__71\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_29 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_61 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_76));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__72(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__72\n"); );
    // Body
    vlSelf->__PVT___GEN_93 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_141 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_140));
    vlSelf->__PVT___GEN_157 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_156));
    vlSelf->__PVT___GEN_173 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_172);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__73(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__73\n"); );
    // Body
    vlSelf->__PVT___GEN_189 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_188));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__74(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__74\n"); );
    // Body
    vlSelf->__PVT___GEN_221 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_220);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__75(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__75\n"); );
    // Body
    vlSelf->__PVT___GEN_205 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_204);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__76(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__76\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_393 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_379);
    vlSelf->__PVT___GEN_394 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_395 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_381);
    vlSelf->__PVT___GEN_396 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_397 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_398 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT___GEN_399 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_385));
    vlSelf->__PVT___GEN_400 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_386));
    vlSelf->__PVT___GEN_401 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_387));
    vlSelf->__PVT___GEN_402 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_388));
    vlSelf->__PVT___GEN_403 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_389));
    vlSelf->__PVT___GEN_404 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_390));
    vlSelf->__PVT___GEN_405 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_391));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__77(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__77\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_30 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_62 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_77));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__78(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__78\n"); );
    // Body
    vlSelf->__PVT___GEN_94 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_142 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_141));
    vlSelf->__PVT___GEN_158 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_157));
    vlSelf->__PVT___GEN_174 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pre_pc_target
                                : vlSelf->__PVT___GEN_173);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__79(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__79\n"); );
    // Body
    vlSelf->__PVT___GEN_190 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_189));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__80(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__80\n"); );
    // Body
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__81(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__81\n"); );
    // Body
    vlSelf->__PVT___GEN_206 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_inst
                                : vlSelf->__PVT___GEN_205);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__82(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__82\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_407 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_408 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_394));
    vlSelf->__PVT___GEN_409 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_410 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_396));
    vlSelf->__PVT___GEN_411 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_397));
    vlSelf->__PVT___GEN_412 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_398));
    vlSelf->__PVT___GEN_413 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_399));
    vlSelf->__PVT___GEN_414 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_400));
    vlSelf->__PVT___GEN_415 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_401));
    vlSelf->__PVT___GEN_416 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_402));
    vlSelf->__PVT___GEN_417 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_403));
    vlSelf->__PVT___GEN_418 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_404));
    vlSelf->__PVT___GEN_419 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_405));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__83(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__83\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
            ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT__io_out_pre_decoder_jump = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 
        ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
          ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
          : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_out_pre_decoder_jr = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                             : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT__io_out_true_branch_state = ((0xfU 
                                                == (IData)(vlSelf->__PVT__io_ar_addr))
                                                ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                : (IData)(vlSelf->__PVT___GEN_14));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__84(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__84\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_pc_target = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                            ? vlSelf->__PVT__btb_15_pre_pc_target
                                            : vlSelf->__PVT___GEN_174);
    vlSelf->__PVT__io_out_pre_lookup_data = ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_ar_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                              : (IData)(vlSelf->__PVT___GEN_158));
    vlSelf->__PVT__io_out_pre_hashcode = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                           ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                           : (IData)(vlSelf->__PVT___GEN_142));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT__io_out_pre_bht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                      : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT__io_out_pre_lookup_value = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__85(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__85\n"); );
    // Body
    vlSelf->__PVT__io_out_exception_type = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                             : (IData)(vlSelf->__PVT___GEN_190));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__86(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__86\n"); );
    // Body
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__87(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__87\n"); );
    // Body
    vlSelf->__PVT__io_out_inst = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                   ? vlSelf->__PVT__btb_15_inst
                                   : vlSelf->__PVT___GEN_206);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                              : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_49 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__1\n"); );
    // Body
    vlSelf->__PVT___GEN_81 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                               : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_113 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_129 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_145 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_161 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__2\n"); );
    // Body
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__3\n"); );
    // Body
    vlSelf->__PVT___GEN_209 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__4\n"); );
    // Body
    vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__5\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_18 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_50 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_65));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__6\n"); );
    // Body
    vlSelf->__PVT___GEN_82 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_114 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_130 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT___GEN_146 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_145));
    vlSelf->__PVT___GEN_162 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_161);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__7\n"); );
    // Body
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__8\n"); );
    // Body
    vlSelf->__PVT___GEN_210 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_209);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__9\n"); );
    // Body
    vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_193);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__10\n"); );
    // Body
    vlSelf->__PVT___GEN_238 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_239 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
    vlSelf->__PVT___GEN_240 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
    vlSelf->__PVT___GEN_241 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
    vlSelf->__PVT___GEN_242 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_243 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_244 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_245 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_246 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_247 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_248 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_249 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_250 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_251 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                                : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__11\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_19 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__12\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_115 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_131 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___GEN_147 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_146));
    vlSelf->__PVT___GEN_163 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_162);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__13\n"); );
    // Body
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__14\n"); );
    // Body
    vlSelf->__PVT___GEN_211 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_210);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__15\n"); );
    // Body
    vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_194);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__16\n"); );
    // Body
    vlSelf->__PVT___GEN_252 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_238);
    vlSelf->__PVT___GEN_253 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_239);
    vlSelf->__PVT___GEN_254 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_240));
    vlSelf->__PVT___GEN_255 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_241);
    vlSelf->__PVT___GEN_256 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_242));
    vlSelf->__PVT___GEN_257 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_243));
    vlSelf->__PVT___GEN_258 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_244));
    vlSelf->__PVT___GEN_259 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_245));
    vlSelf->__PVT___GEN_260 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_246));
    vlSelf->__PVT___GEN_261 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_247));
    vlSelf->__PVT___GEN_262 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_248));
    vlSelf->__PVT___GEN_263 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_249));
    vlSelf->__PVT___GEN_264 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_250));
    vlSelf->__PVT___GEN_265 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_251));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__17\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_20 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_52 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_67));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__18\n"); );
    // Body
    vlSelf->__PVT___GEN_84 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_116 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_132 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_131));
    vlSelf->__PVT___GEN_148 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_147));
    vlSelf->__PVT___GEN_164 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_163);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__19(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__19\n"); );
    // Body
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__20(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__20\n"); );
    // Body
    vlSelf->__PVT___GEN_212 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_211);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__21(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__21\n"); );
    // Body
    vlSelf->__PVT___GEN_196 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_195);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__22\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_252);
    vlSelf->__PVT___GEN_267 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_253);
    vlSelf->__PVT___GEN_268 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_254));
    vlSelf->__PVT___GEN_269 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_255);
    vlSelf->__PVT___GEN_270 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_256));
    vlSelf->__PVT___GEN_271 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_257));
    vlSelf->__PVT___GEN_272 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_273 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_274 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_275 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_276 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_277 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_278 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_279 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_265));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__23\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_21 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_53 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_68));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__24(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__24\n"); );
    // Body
    vlSelf->__PVT___GEN_85 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_101 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_117 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_133 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_132));
    vlSelf->__PVT___GEN_149 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_148));
    vlSelf->__PVT___GEN_165 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_164);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__25(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__25\n"); );
    // Body
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__26(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__26\n"); );
    // Body
    vlSelf->__PVT___GEN_213 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_212);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__27(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__27\n"); );
    // Body
    vlSelf->__PVT___GEN_197 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_196);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__28(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__28\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_266);
    vlSelf->__PVT___GEN_281 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_267);
    vlSelf->__PVT___GEN_282 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_283 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_269);
    vlSelf->__PVT___GEN_284 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_285 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_286 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_287 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_288 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_289 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_290 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_291 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_292 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_293 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_279));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__29(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__29\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_22 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_54 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_69));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__30(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__30\n"); );
    // Body
    vlSelf->__PVT___GEN_86 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_102 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_118 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_134 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_133));
    vlSelf->__PVT___GEN_150 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_149));
    vlSelf->__PVT___GEN_166 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_165);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__31(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__31\n"); );
    // Body
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__32(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__32\n"); );
    // Body
    vlSelf->__PVT___GEN_214 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_213);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__33(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__33\n"); );
    // Body
    vlSelf->__PVT___GEN_198 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_197);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__34(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__34\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_280);
    vlSelf->__PVT___GEN_295 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_281);
    vlSelf->__PVT___GEN_296 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_297 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_283);
    vlSelf->__PVT___GEN_298 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_299 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_300 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_301 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_302 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_303 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_304 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_305 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_306 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_307 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_293));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__35(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__35\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_23 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_55 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_70));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__36(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__36\n"); );
    // Body
    vlSelf->__PVT___GEN_87 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_119 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_135 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_134));
    vlSelf->__PVT___GEN_151 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_150));
    vlSelf->__PVT___GEN_167 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_166);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__37(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__37\n"); );
    // Body
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__38(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__38\n"); );
    // Body
    vlSelf->__PVT___GEN_215 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_214);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__39(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__39\n"); );
    // Body
    vlSelf->__PVT___GEN_199 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_198);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__40(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__40\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_294);
    vlSelf->__PVT___GEN_309 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_295);
    vlSelf->__PVT___GEN_310 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_311 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_297);
    vlSelf->__PVT___GEN_312 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_313 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_314 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_315 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_316 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_317 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_318 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_319 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_320 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_321 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_307));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__41(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__41\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_24 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_56 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_71));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__42(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__42\n"); );
    // Body
    vlSelf->__PVT___GEN_88 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_120 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_136 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_135));
    vlSelf->__PVT___GEN_152 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_151));
    vlSelf->__PVT___GEN_168 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_167);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__43(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__43\n"); );
    // Body
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__44(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__44\n"); );
    // Body
    vlSelf->__PVT___GEN_216 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_215);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__45(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__45\n"); );
    // Body
    vlSelf->__PVT___GEN_200 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_199);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__46(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__46\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_308);
    vlSelf->__PVT___GEN_323 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_309);
    vlSelf->__PVT___GEN_324 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_325 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_311);
    vlSelf->__PVT___GEN_326 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_327 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_328 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_329 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_330 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_331 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_332 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_333 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_334 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_335 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_321));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__47(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__47\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_25 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_57 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__48(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__48\n"); );
    // Body
    vlSelf->__PVT___GEN_89 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_137 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_136));
    vlSelf->__PVT___GEN_153 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_152));
    vlSelf->__PVT___GEN_169 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_168);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__49(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__49\n"); );
    // Body
    vlSelf->__PVT___GEN_185 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_184));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__50(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__50\n"); );
    // Body
    vlSelf->__PVT___GEN_217 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_216);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__51(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__51\n"); );
    // Body
    vlSelf->__PVT___GEN_201 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_200);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__52(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__52\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_322);
    vlSelf->__PVT___GEN_337 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_323);
    vlSelf->__PVT___GEN_338 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_339 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_325);
    vlSelf->__PVT___GEN_340 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_341 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_342 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_343 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_344 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_345 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_346 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_347 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_348 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_349 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_335));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__53(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__53\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_26 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_58 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_73));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__54(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__54\n"); );
    // Body
    vlSelf->__PVT___GEN_90 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_138 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_137));
    vlSelf->__PVT___GEN_154 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_153));
    vlSelf->__PVT___GEN_170 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_169);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__55(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__55\n"); );
    // Body
    vlSelf->__PVT___GEN_186 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_185));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__56(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__56\n"); );
    // Body
    vlSelf->__PVT___GEN_218 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_217);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__57(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__57\n"); );
    // Body
    vlSelf->__PVT___GEN_202 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_201);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__58(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__58\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_336);
    vlSelf->__PVT___GEN_351 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_337);
    vlSelf->__PVT___GEN_352 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_353 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_339);
    vlSelf->__PVT___GEN_354 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_355 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_356 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_357 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_358 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_359 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_360 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_361 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_362 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_363 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_349));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__59(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__59\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_27 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_59 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_74));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__60(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__60\n"); );
    // Body
    vlSelf->__PVT___GEN_91 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_139 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_138));
    vlSelf->__PVT___GEN_155 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_154));
    vlSelf->__PVT___GEN_171 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_170);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__61(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__61\n"); );
    // Body
    vlSelf->__PVT___GEN_187 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_186));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__62(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__62\n"); );
    // Body
    vlSelf->__PVT___GEN_219 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_218);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__63(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__63\n"); );
    // Body
    vlSelf->__PVT___GEN_203 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_202);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__64(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__64\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_350);
    vlSelf->__PVT___GEN_365 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_351);
    vlSelf->__PVT___GEN_366 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_367 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_353);
    vlSelf->__PVT___GEN_368 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_369 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_370 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_371 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_372 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_373 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_374 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_375 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_376 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_377 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_363));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__65(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__65\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_28 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_60 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_75));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__66(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__66\n"); );
    // Body
    vlSelf->__PVT___GEN_92 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_140 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_139));
    vlSelf->__PVT___GEN_156 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_155));
    vlSelf->__PVT___GEN_172 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_171);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__67(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__67\n"); );
    // Body
    vlSelf->__PVT___GEN_188 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_187));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__68(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__68\n"); );
    // Body
    vlSelf->__PVT___GEN_220 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_219);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__69(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__69\n"); );
    // Body
    vlSelf->__PVT___GEN_204 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_203);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__70(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__70\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_379 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_365);
    vlSelf->__PVT___GEN_380 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_381 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_367);
    vlSelf->__PVT___GEN_382 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_383 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_384 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_385 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_386 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_387 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_388 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_389 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_390 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_391 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_377));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__71(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__71\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_29 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_61 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_76));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__72(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__72\n"); );
    // Body
    vlSelf->__PVT___GEN_93 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_141 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_140));
    vlSelf->__PVT___GEN_157 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_156));
    vlSelf->__PVT___GEN_173 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_172);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__73(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__73\n"); );
    // Body
    vlSelf->__PVT___GEN_189 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_188));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__74(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__74\n"); );
    // Body
    vlSelf->__PVT___GEN_221 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_220);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__75(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__75\n"); );
    // Body
    vlSelf->__PVT___GEN_205 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_204);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__76(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__76\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_393 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_379);
    vlSelf->__PVT___GEN_394 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_395 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_381);
    vlSelf->__PVT___GEN_396 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_397 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_398 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT___GEN_399 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_385));
    vlSelf->__PVT___GEN_400 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_386));
    vlSelf->__PVT___GEN_401 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_387));
    vlSelf->__PVT___GEN_402 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_388));
    vlSelf->__PVT___GEN_403 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_389));
    vlSelf->__PVT___GEN_404 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_390));
    vlSelf->__PVT___GEN_405 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_391));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__77(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__77\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_30 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_62 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_77));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__78(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__78\n"); );
    // Body
    vlSelf->__PVT___GEN_94 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_142 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_141));
    vlSelf->__PVT___GEN_158 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_157));
    vlSelf->__PVT___GEN_174 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pre_pc_target
                                : vlSelf->__PVT___GEN_173);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__79(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__79\n"); );
    // Body
    vlSelf->__PVT___GEN_190 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_189));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__80(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__80\n"); );
    // Body
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__81(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__81\n"); );
    // Body
    vlSelf->__PVT___GEN_206 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_inst
                                : vlSelf->__PVT___GEN_205);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__82(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__82\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_407 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_408 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_394));
    vlSelf->__PVT___GEN_409 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_410 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_396));
    vlSelf->__PVT___GEN_411 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_397));
    vlSelf->__PVT___GEN_412 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_398));
    vlSelf->__PVT___GEN_413 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_399));
    vlSelf->__PVT___GEN_414 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_400));
    vlSelf->__PVT___GEN_415 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_401));
    vlSelf->__PVT___GEN_416 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_402));
    vlSelf->__PVT___GEN_417 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_403));
    vlSelf->__PVT___GEN_418 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_404));
    vlSelf->__PVT___GEN_419 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_405));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__83(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__83\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
            ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT__io_out_pre_decoder_jump = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 
        ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
          ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
          : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_out_pre_decoder_jr = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                             : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT__io_out_true_branch_state = ((0xfU 
                                                == (IData)(vlSelf->__PVT__io_ar_addr))
                                                ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                : (IData)(vlSelf->__PVT___GEN_14));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__84(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__84\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_pc_target = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                            ? vlSelf->__PVT__btb_15_pre_pc_target
                                            : vlSelf->__PVT___GEN_174);
    vlSelf->__PVT__io_out_pre_lookup_data = ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_ar_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                              : (IData)(vlSelf->__PVT___GEN_158));
    vlSelf->__PVT__io_out_pre_hashcode = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                           ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                           : (IData)(vlSelf->__PVT___GEN_142));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT__io_out_pre_bht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                      : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT__io_out_pre_lookup_value = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__85(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__85\n"); );
    // Body
    vlSelf->__PVT__io_out_exception_type = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                             : (IData)(vlSelf->__PVT___GEN_190));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__86(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__86\n"); );
    // Body
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__87(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__87\n"); );
    // Body
    vlSelf->__PVT__io_out_inst = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                   ? vlSelf->__PVT__btb_15_inst
                                   : vlSelf->__PVT___GEN_206);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                              : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_49 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_81 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                               : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_113 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_129 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_145 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_161 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__1\n"); );
    // Body
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__2\n"); );
    // Body
    vlSelf->__PVT___GEN_209 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__3\n"); );
    // Body
    vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__4\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_18 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_50 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_65));
    vlSelf->__PVT___GEN_82 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_114 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_130 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT___GEN_146 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_145));
    vlSelf->__PVT___GEN_162 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_161);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__5\n"); );
    // Body
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__6\n"); );
    // Body
    vlSelf->__PVT___GEN_210 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_209);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__7\n"); );
    // Body
    vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_193);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__8\n"); );
    // Body
    vlSelf->__PVT___GEN_238 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_239 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
    vlSelf->__PVT___GEN_240 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
    vlSelf->__PVT___GEN_241 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
    vlSelf->__PVT___GEN_242 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_243 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_244 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_pht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_pht));
    vlSelf->__PVT___GEN_245 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                                : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_246 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_247 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_248 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jump));
    vlSelf->__PVT___GEN_249 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_250 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT__btb_0_pre_decoder_jr));
    vlSelf->__PVT___GEN_251 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_true_branch_state)
                                : (IData)(vlSelf->__PVT__btb_0_true_branch_state));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__9\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_19 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__10\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_115 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_131 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___GEN_147 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_146));
    vlSelf->__PVT___GEN_163 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_162);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__11\n"); );
    // Body
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__12\n"); );
    // Body
    vlSelf->__PVT___GEN_211 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_210);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__13\n"); );
    // Body
    vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_194);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__14\n"); );
    // Body
    vlSelf->__PVT___GEN_252 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_238);
    vlSelf->__PVT___GEN_253 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_239);
    vlSelf->__PVT___GEN_254 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_240));
    vlSelf->__PVT___GEN_255 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_241);
    vlSelf->__PVT___GEN_256 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_242));
    vlSelf->__PVT___GEN_257 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_243));
    vlSelf->__PVT___GEN_258 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_244));
    vlSelf->__PVT___GEN_259 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_245));
    vlSelf->__PVT___GEN_260 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_246));
    vlSelf->__PVT___GEN_261 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_247));
    vlSelf->__PVT___GEN_262 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_248));
    vlSelf->__PVT___GEN_263 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_249));
    vlSelf->__PVT___GEN_264 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_250));
    vlSelf->__PVT___GEN_265 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_251));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__15\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_20 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_52 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_67));
    vlSelf->__PVT___GEN_84 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_116 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_132 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_131));
    vlSelf->__PVT___GEN_148 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_147));
    vlSelf->__PVT___GEN_164 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_163);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__16\n"); );
    // Body
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__17\n"); );
    // Body
    vlSelf->__PVT___GEN_212 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_211);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__18\n"); );
    // Body
    vlSelf->__PVT___GEN_196 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_195);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__19(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__19\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_252);
    vlSelf->__PVT___GEN_267 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_253);
    vlSelf->__PVT___GEN_268 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_254));
    vlSelf->__PVT___GEN_269 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_255);
    vlSelf->__PVT___GEN_270 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_256));
    vlSelf->__PVT___GEN_271 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_257));
    vlSelf->__PVT___GEN_272 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_273 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_274 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_275 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_276 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_277 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_278 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_279 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_265));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__20(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__20\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_21 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_53 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_68));
    vlSelf->__PVT___GEN_85 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_101 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_117 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_133 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_132));
    vlSelf->__PVT___GEN_149 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_148));
    vlSelf->__PVT___GEN_165 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_164);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__21(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__21\n"); );
    // Body
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__22\n"); );
    // Body
    vlSelf->__PVT___GEN_213 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_212);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__23\n"); );
    // Body
    vlSelf->__PVT___GEN_197 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_196);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__24(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__24\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_266);
    vlSelf->__PVT___GEN_281 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_267);
    vlSelf->__PVT___GEN_282 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_283 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_269);
    vlSelf->__PVT___GEN_284 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_285 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_286 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_287 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_288 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_289 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_290 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_291 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_292 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_293 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_279));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__25(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__25\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_22 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_54 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_69));
    vlSelf->__PVT___GEN_86 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_102 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_118 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_134 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_133));
    vlSelf->__PVT___GEN_150 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_149));
    vlSelf->__PVT___GEN_166 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_165);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__26(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__26\n"); );
    // Body
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__27(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__27\n"); );
    // Body
    vlSelf->__PVT___GEN_214 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_213);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__28(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__28\n"); );
    // Body
    vlSelf->__PVT___GEN_198 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_197);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__29(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__29\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_280);
    vlSelf->__PVT___GEN_295 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_281);
    vlSelf->__PVT___GEN_296 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_297 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_283);
    vlSelf->__PVT___GEN_298 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_299 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_300 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_301 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_302 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_303 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_304 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_305 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_306 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_307 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_293));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__30(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__30\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_23 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_55 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_70));
    vlSelf->__PVT___GEN_87 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_119 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_135 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_134));
    vlSelf->__PVT___GEN_151 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_150));
    vlSelf->__PVT___GEN_167 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_166);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__31(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__31\n"); );
    // Body
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__32(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__32\n"); );
    // Body
    vlSelf->__PVT___GEN_215 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_214);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__33(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__33\n"); );
    // Body
    vlSelf->__PVT___GEN_199 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_198);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__34(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__34\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_294);
    vlSelf->__PVT___GEN_309 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_295);
    vlSelf->__PVT___GEN_310 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_311 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_297);
    vlSelf->__PVT___GEN_312 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_313 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_314 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_315 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_316 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_317 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_318 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_319 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_320 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_321 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_307));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__35(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__35\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_24 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_56 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_71));
    vlSelf->__PVT___GEN_88 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_120 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_136 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_135));
    vlSelf->__PVT___GEN_152 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_151));
    vlSelf->__PVT___GEN_168 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_167);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__36(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__36\n"); );
    // Body
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__37(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__37\n"); );
    // Body
    vlSelf->__PVT___GEN_216 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_215);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__38(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__38\n"); );
    // Body
    vlSelf->__PVT___GEN_200 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_199);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__39(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__39\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_308);
    vlSelf->__PVT___GEN_323 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_309);
    vlSelf->__PVT___GEN_324 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_325 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_311);
    vlSelf->__PVT___GEN_326 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_327 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_328 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_329 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_330 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_331 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_332 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_333 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_334 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_335 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_321));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__40(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__40\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_25 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_57 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_72));
    vlSelf->__PVT___GEN_89 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_121 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_137 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_136));
    vlSelf->__PVT___GEN_153 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_152));
    vlSelf->__PVT___GEN_169 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_168);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__41(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__41\n"); );
    // Body
    vlSelf->__PVT___GEN_185 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_184));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__42(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__42\n"); );
    // Body
    vlSelf->__PVT___GEN_217 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_216);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__43(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__43\n"); );
    // Body
    vlSelf->__PVT___GEN_201 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_200);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__44(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__44\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_322);
    vlSelf->__PVT___GEN_337 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_323);
    vlSelf->__PVT___GEN_338 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_339 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_325);
    vlSelf->__PVT___GEN_340 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_341 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_342 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_343 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_344 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_345 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_346 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_347 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_348 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_349 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_335));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__45(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__45\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_26 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_58 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_73));
    vlSelf->__PVT___GEN_90 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_122 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_138 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_137));
    vlSelf->__PVT___GEN_154 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_153));
    vlSelf->__PVT___GEN_170 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_169);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__46(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__46\n"); );
    // Body
    vlSelf->__PVT___GEN_186 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_185));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__47(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__47\n"); );
    // Body
    vlSelf->__PVT___GEN_218 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_217);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__48(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__48\n"); );
    // Body
    vlSelf->__PVT___GEN_202 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_201);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__49(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__49\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_336);
    vlSelf->__PVT___GEN_351 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_337);
    vlSelf->__PVT___GEN_352 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_353 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pre_pc_target
                                : vlSelf->__PVT___GEN_339);
    vlSelf->__PVT___GEN_354 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_355 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_356 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_357 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_358 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_359 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_360 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_361 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_362 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_363 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_349));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__50(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__50\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_27 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_59 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_74));
    vlSelf->__PVT___GEN_91 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_123 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_139 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_138));
    vlSelf->__PVT___GEN_155 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_154));
    vlSelf->__PVT___GEN_171 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_170);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__51(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__51\n"); );
    // Body
    vlSelf->__PVT___GEN_187 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_186));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__52(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__52\n"); );
    // Body
    vlSelf->__PVT___GEN_219 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_218);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__53(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__53\n"); );
    // Body
    vlSelf->__PVT___GEN_203 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_202);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__54(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__54\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_350);
    vlSelf->__PVT___GEN_365 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_351);
    vlSelf->__PVT___GEN_366 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_367 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pre_pc_target
                                : vlSelf->__PVT___GEN_353);
    vlSelf->__PVT___GEN_368 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_369 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_370 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_371 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_372 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_373 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_374 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_375 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_376 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_377 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_363));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__55(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__55\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_28 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_60 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_75));
    vlSelf->__PVT___GEN_92 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_124 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_140 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_139));
    vlSelf->__PVT___GEN_156 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_155));
    vlSelf->__PVT___GEN_172 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_171);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__56(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__56\n"); );
    // Body
    vlSelf->__PVT___GEN_188 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_187));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__57(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__57\n"); );
    // Body
    vlSelf->__PVT___GEN_220 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_219);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__58(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__58\n"); );
    // Body
    vlSelf->__PVT___GEN_204 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_203);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__59(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__59\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_379 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_365);
    vlSelf->__PVT___GEN_380 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_381 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pre_pc_target
                                : vlSelf->__PVT___GEN_367);
    vlSelf->__PVT___GEN_382 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_383 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_384 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_385 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_386 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_387 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_388 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_389 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_390 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_391 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_377));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__60(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__60\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_29 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_61 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_76));
    vlSelf->__PVT___GEN_93 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_125 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_141 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_140));
    vlSelf->__PVT___GEN_157 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_156));
    vlSelf->__PVT___GEN_173 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_172);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__61(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__61\n"); );
    // Body
    vlSelf->__PVT___GEN_189 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_188));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__62(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__62\n"); );
    // Body
    vlSelf->__PVT___GEN_221 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_220);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__63(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__63\n"); );
    // Body
    vlSelf->__PVT___GEN_205 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_204);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__64(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__64\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_393 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_379);
    vlSelf->__PVT___GEN_394 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_395 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pre_pc_target
                                : vlSelf->__PVT___GEN_381);
    vlSelf->__PVT___GEN_396 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_397 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_398 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT___GEN_399 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_385));
    vlSelf->__PVT___GEN_400 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_386));
    vlSelf->__PVT___GEN_401 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_387));
    vlSelf->__PVT___GEN_402 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_388));
    vlSelf->__PVT___GEN_403 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_389));
    vlSelf->__PVT___GEN_404 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_390));
    vlSelf->__PVT___GEN_405 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_391));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__65(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__65\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_30 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_62 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_77));
    vlSelf->__PVT___GEN_94 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_126 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_142 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_141));
    vlSelf->__PVT___GEN_158 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_157));
    vlSelf->__PVT___GEN_174 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pre_pc_target
                                : vlSelf->__PVT___GEN_173);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__66(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__66\n"); );
    // Body
    vlSelf->__PVT___GEN_190 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_189));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__67(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__67\n"); );
    // Body
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__68(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__68\n"); );
    // Body
    vlSelf->__PVT___GEN_206 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_inst
                                : vlSelf->__PVT___GEN_205);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__69(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__69\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_407 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_408 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_394));
    vlSelf->__PVT___GEN_409 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pre_pc_target
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_410 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_396));
    vlSelf->__PVT___GEN_411 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_397));
    vlSelf->__PVT___GEN_412 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_pht)
                                : (IData)(vlSelf->__PVT___GEN_398));
    vlSelf->__PVT___GEN_413 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_399));
    vlSelf->__PVT___GEN_414 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_lookup_value)
                                : (IData)(vlSelf->__PVT___GEN_400));
    vlSelf->__PVT___GEN_415 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                                : (IData)(vlSelf->__PVT___GEN_401));
    vlSelf->__PVT___GEN_416 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                                : (IData)(vlSelf->__PVT___GEN_402));
    vlSelf->__PVT___GEN_417 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                                : (IData)(vlSelf->__PVT___GEN_403));
    vlSelf->__PVT___GEN_418 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                                : (IData)(vlSelf->__PVT___GEN_404));
    vlSelf->__PVT___GEN_419 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                                : (IData)(vlSelf->__PVT___GEN_405));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__70(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__70\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
            ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT__io_out_pre_decoder_jump = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 
        ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
          ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
          : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_out_pre_decoder_jr = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                             : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT__io_out_true_branch_state = ((0xfU 
                                                == (IData)(vlSelf->__PVT__io_ar_addr))
                                                ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT__io_out_pre_pc_target = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                            ? vlSelf->__PVT__btb_15_pre_pc_target
                                            : vlSelf->__PVT___GEN_174);
    vlSelf->__PVT__io_out_pre_lookup_data = ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_ar_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                              : (IData)(vlSelf->__PVT___GEN_158));
    vlSelf->__PVT__io_out_pre_hashcode = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                           ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                           : (IData)(vlSelf->__PVT___GEN_142));
    vlSelf->__PVT__io_out_pre_pht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                      : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT__io_out_pre_bht = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                      ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                      : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT__io_out_pre_lookup_value = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__71(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__71\n"); );
    // Body
    vlSelf->__PVT__io_out_exception_type = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                             : (IData)(vlSelf->__PVT___GEN_190));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__72(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__72\n"); );
    // Body
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__73(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3__73\n"); );
    // Body
    vlSelf->__PVT__io_out_inst = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                   ? vlSelf->__PVT__btb_15_inst
                                   : vlSelf->__PVT___GEN_206);
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first_with_bundle___ctor_var_reset(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_ar_addr = 0;
    vlSelf->__PVT__io_aw_addr = 0;
    vlSelf->__PVT__io_write = 0;
    vlSelf->__PVT__io_in_pc = 0;
    vlSelf->__PVT__io_in_inst = 0;
    vlSelf->__PVT__io_in_pre_pc_target = 0;
    vlSelf->__PVT__io_in_pre_lookup_data = 0;
    vlSelf->__PVT__io_in_pre_hashcode = 0;
    vlSelf->__PVT__io_in_pre_pht = 0;
    vlSelf->__PVT__io_in_pre_bht = 0;
    vlSelf->__PVT__io_in_pre_lookup_value = 0;
    vlSelf->__PVT__io_in_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__io_in_pre_decoder_jump = 0;
    vlSelf->__PVT__io_in_pre_decoder_branchdata = 0;
    vlSelf->__PVT__io_in_pre_decoder_jr = 0;
    vlSelf->__PVT__io_in_true_branch_state = 0;
    vlSelf->__PVT__io_out_pc = 0;
    vlSelf->__PVT__io_out_inst = 0;
    vlSelf->__PVT__io_out_exception_type = 0;
    vlSelf->__PVT__io_out_pre_pc_target = 0;
    vlSelf->__PVT__io_out_pre_lookup_data = 0;
    vlSelf->__PVT__io_out_pre_hashcode = 0;
    vlSelf->__PVT__io_out_pre_pht = 0;
    vlSelf->__PVT__io_out_pre_bht = 0;
    vlSelf->__PVT__io_out_pre_lookup_value = 0;
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__io_out_pre_decoder_jump = 0;
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__io_out_pre_decoder_jr = 0;
    vlSelf->__PVT__io_out_true_branch_state = 0;
    vlSelf->__PVT__btb_0_pc = 0;
    vlSelf->__PVT__btb_0_inst = 0;
    vlSelf->__PVT__btb_0_exception_type = 0;
    vlSelf->__PVT__btb_0_pre_pc_target = 0;
    vlSelf->__PVT__btb_0_pre_lookup_data = 0;
    vlSelf->__PVT__btb_0_pre_hashcode = 0;
    vlSelf->__PVT__btb_0_pre_pht = 0;
    vlSelf->__PVT__btb_0_pre_bht = 0;
    vlSelf->__PVT__btb_0_pre_lookup_value = 0;
    vlSelf->__PVT__btb_0_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_0_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_0_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_0_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_0_true_branch_state = 0;
    vlSelf->__PVT__btb_1_pc = 0;
    vlSelf->__PVT__btb_1_inst = 0;
    vlSelf->__PVT__btb_1_exception_type = 0;
    vlSelf->__PVT__btb_1_pre_pc_target = 0;
    vlSelf->__PVT__btb_1_pre_lookup_data = 0;
    vlSelf->__PVT__btb_1_pre_hashcode = 0;
    vlSelf->__PVT__btb_1_pre_pht = 0;
    vlSelf->__PVT__btb_1_pre_bht = 0;
    vlSelf->__PVT__btb_1_pre_lookup_value = 0;
    vlSelf->__PVT__btb_1_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_1_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_1_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_1_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_1_true_branch_state = 0;
    vlSelf->__PVT__btb_2_pc = 0;
    vlSelf->__PVT__btb_2_inst = 0;
    vlSelf->__PVT__btb_2_exception_type = 0;
    vlSelf->__PVT__btb_2_pre_pc_target = 0;
    vlSelf->__PVT__btb_2_pre_lookup_data = 0;
    vlSelf->__PVT__btb_2_pre_hashcode = 0;
    vlSelf->__PVT__btb_2_pre_pht = 0;
    vlSelf->__PVT__btb_2_pre_bht = 0;
    vlSelf->__PVT__btb_2_pre_lookup_value = 0;
    vlSelf->__PVT__btb_2_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_2_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_2_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_2_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_2_true_branch_state = 0;
    vlSelf->__PVT__btb_3_pc = 0;
    vlSelf->__PVT__btb_3_inst = 0;
    vlSelf->__PVT__btb_3_exception_type = 0;
    vlSelf->__PVT__btb_3_pre_pc_target = 0;
    vlSelf->__PVT__btb_3_pre_lookup_data = 0;
    vlSelf->__PVT__btb_3_pre_hashcode = 0;
    vlSelf->__PVT__btb_3_pre_pht = 0;
    vlSelf->__PVT__btb_3_pre_bht = 0;
    vlSelf->__PVT__btb_3_pre_lookup_value = 0;
    vlSelf->__PVT__btb_3_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_3_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_3_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_3_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_3_true_branch_state = 0;
    vlSelf->__PVT__btb_4_pc = 0;
    vlSelf->__PVT__btb_4_inst = 0;
    vlSelf->__PVT__btb_4_exception_type = 0;
    vlSelf->__PVT__btb_4_pre_pc_target = 0;
    vlSelf->__PVT__btb_4_pre_lookup_data = 0;
    vlSelf->__PVT__btb_4_pre_hashcode = 0;
    vlSelf->__PVT__btb_4_pre_pht = 0;
    vlSelf->__PVT__btb_4_pre_bht = 0;
    vlSelf->__PVT__btb_4_pre_lookup_value = 0;
    vlSelf->__PVT__btb_4_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_4_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_4_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_4_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_4_true_branch_state = 0;
    vlSelf->__PVT__btb_5_pc = 0;
    vlSelf->__PVT__btb_5_inst = 0;
    vlSelf->__PVT__btb_5_exception_type = 0;
    vlSelf->__PVT__btb_5_pre_pc_target = 0;
    vlSelf->__PVT__btb_5_pre_lookup_data = 0;
    vlSelf->__PVT__btb_5_pre_hashcode = 0;
    vlSelf->__PVT__btb_5_pre_pht = 0;
    vlSelf->__PVT__btb_5_pre_bht = 0;
    vlSelf->__PVT__btb_5_pre_lookup_value = 0;
    vlSelf->__PVT__btb_5_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_5_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_5_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_5_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_5_true_branch_state = 0;
    vlSelf->__PVT__btb_6_pc = 0;
    vlSelf->__PVT__btb_6_inst = 0;
    vlSelf->__PVT__btb_6_exception_type = 0;
    vlSelf->__PVT__btb_6_pre_pc_target = 0;
    vlSelf->__PVT__btb_6_pre_lookup_data = 0;
    vlSelf->__PVT__btb_6_pre_hashcode = 0;
    vlSelf->__PVT__btb_6_pre_pht = 0;
    vlSelf->__PVT__btb_6_pre_bht = 0;
    vlSelf->__PVT__btb_6_pre_lookup_value = 0;
    vlSelf->__PVT__btb_6_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_6_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_6_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_6_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_6_true_branch_state = 0;
    vlSelf->__PVT__btb_7_pc = 0;
    vlSelf->__PVT__btb_7_inst = 0;
    vlSelf->__PVT__btb_7_exception_type = 0;
    vlSelf->__PVT__btb_7_pre_pc_target = 0;
    vlSelf->__PVT__btb_7_pre_lookup_data = 0;
    vlSelf->__PVT__btb_7_pre_hashcode = 0;
    vlSelf->__PVT__btb_7_pre_pht = 0;
    vlSelf->__PVT__btb_7_pre_bht = 0;
    vlSelf->__PVT__btb_7_pre_lookup_value = 0;
    vlSelf->__PVT__btb_7_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_7_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_7_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_7_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_7_true_branch_state = 0;
    vlSelf->__PVT__btb_8_pc = 0;
    vlSelf->__PVT__btb_8_inst = 0;
    vlSelf->__PVT__btb_8_exception_type = 0;
    vlSelf->__PVT__btb_8_pre_pc_target = 0;
    vlSelf->__PVT__btb_8_pre_lookup_data = 0;
    vlSelf->__PVT__btb_8_pre_hashcode = 0;
    vlSelf->__PVT__btb_8_pre_pht = 0;
    vlSelf->__PVT__btb_8_pre_bht = 0;
    vlSelf->__PVT__btb_8_pre_lookup_value = 0;
    vlSelf->__PVT__btb_8_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_8_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_8_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_8_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_8_true_branch_state = 0;
    vlSelf->__PVT__btb_9_pc = 0;
    vlSelf->__PVT__btb_9_inst = 0;
    vlSelf->__PVT__btb_9_exception_type = 0;
    vlSelf->__PVT__btb_9_pre_pc_target = 0;
    vlSelf->__PVT__btb_9_pre_lookup_data = 0;
    vlSelf->__PVT__btb_9_pre_hashcode = 0;
    vlSelf->__PVT__btb_9_pre_pht = 0;
    vlSelf->__PVT__btb_9_pre_bht = 0;
    vlSelf->__PVT__btb_9_pre_lookup_value = 0;
    vlSelf->__PVT__btb_9_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_9_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_9_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_9_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_9_true_branch_state = 0;
    vlSelf->__PVT__btb_10_pc = 0;
    vlSelf->__PVT__btb_10_inst = 0;
    vlSelf->__PVT__btb_10_exception_type = 0;
    vlSelf->__PVT__btb_10_pre_pc_target = 0;
    vlSelf->__PVT__btb_10_pre_lookup_data = 0;
    vlSelf->__PVT__btb_10_pre_hashcode = 0;
    vlSelf->__PVT__btb_10_pre_pht = 0;
    vlSelf->__PVT__btb_10_pre_bht = 0;
    vlSelf->__PVT__btb_10_pre_lookup_value = 0;
    vlSelf->__PVT__btb_10_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_10_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_10_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_10_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_10_true_branch_state = 0;
    vlSelf->__PVT__btb_11_pc = 0;
    vlSelf->__PVT__btb_11_inst = 0;
    vlSelf->__PVT__btb_11_exception_type = 0;
    vlSelf->__PVT__btb_11_pre_pc_target = 0;
    vlSelf->__PVT__btb_11_pre_lookup_data = 0;
    vlSelf->__PVT__btb_11_pre_hashcode = 0;
    vlSelf->__PVT__btb_11_pre_pht = 0;
    vlSelf->__PVT__btb_11_pre_bht = 0;
    vlSelf->__PVT__btb_11_pre_lookup_value = 0;
    vlSelf->__PVT__btb_11_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_11_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_11_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_11_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_11_true_branch_state = 0;
    vlSelf->__PVT__btb_12_pc = 0;
    vlSelf->__PVT__btb_12_inst = 0;
    vlSelf->__PVT__btb_12_exception_type = 0;
    vlSelf->__PVT__btb_12_pre_pc_target = 0;
    vlSelf->__PVT__btb_12_pre_lookup_data = 0;
    vlSelf->__PVT__btb_12_pre_hashcode = 0;
    vlSelf->__PVT__btb_12_pre_pht = 0;
    vlSelf->__PVT__btb_12_pre_bht = 0;
    vlSelf->__PVT__btb_12_pre_lookup_value = 0;
    vlSelf->__PVT__btb_12_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_12_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_12_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_12_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_12_true_branch_state = 0;
    vlSelf->__PVT__btb_13_pc = 0;
    vlSelf->__PVT__btb_13_inst = 0;
    vlSelf->__PVT__btb_13_exception_type = 0;
    vlSelf->__PVT__btb_13_pre_pc_target = 0;
    vlSelf->__PVT__btb_13_pre_lookup_data = 0;
    vlSelf->__PVT__btb_13_pre_hashcode = 0;
    vlSelf->__PVT__btb_13_pre_pht = 0;
    vlSelf->__PVT__btb_13_pre_bht = 0;
    vlSelf->__PVT__btb_13_pre_lookup_value = 0;
    vlSelf->__PVT__btb_13_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_13_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_13_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_13_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_13_true_branch_state = 0;
    vlSelf->__PVT__btb_14_pc = 0;
    vlSelf->__PVT__btb_14_inst = 0;
    vlSelf->__PVT__btb_14_exception_type = 0;
    vlSelf->__PVT__btb_14_pre_pc_target = 0;
    vlSelf->__PVT__btb_14_pre_lookup_data = 0;
    vlSelf->__PVT__btb_14_pre_hashcode = 0;
    vlSelf->__PVT__btb_14_pre_pht = 0;
    vlSelf->__PVT__btb_14_pre_bht = 0;
    vlSelf->__PVT__btb_14_pre_lookup_value = 0;
    vlSelf->__PVT__btb_14_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_14_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_14_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_14_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_14_true_branch_state = 0;
    vlSelf->__PVT__btb_15_pc = 0;
    vlSelf->__PVT__btb_15_inst = 0;
    vlSelf->__PVT__btb_15_exception_type = 0;
    vlSelf->__PVT__btb_15_pre_pc_target = 0;
    vlSelf->__PVT__btb_15_pre_lookup_data = 0;
    vlSelf->__PVT__btb_15_pre_hashcode = 0;
    vlSelf->__PVT__btb_15_pre_pht = 0;
    vlSelf->__PVT__btb_15_pre_bht = 0;
    vlSelf->__PVT__btb_15_pre_lookup_value = 0;
    vlSelf->__PVT__btb_15_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__btb_15_pre_decoder_jump = 0;
    vlSelf->__PVT__btb_15_pre_decoder_branchdata = 0;
    vlSelf->__PVT__btb_15_pre_decoder_jr = 0;
    vlSelf->__PVT__btb_15_true_branch_state = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT___GEN_3 = 0;
    vlSelf->__PVT___GEN_4 = 0;
    vlSelf->__PVT___GEN_5 = 0;
    vlSelf->__PVT___GEN_6 = 0;
    vlSelf->__PVT___GEN_7 = 0;
    vlSelf->__PVT___GEN_8 = 0;
    vlSelf->__PVT___GEN_9 = 0;
    vlSelf->__PVT___GEN_10 = 0;
    vlSelf->__PVT___GEN_11 = 0;
    vlSelf->__PVT___GEN_12 = 0;
    vlSelf->__PVT___GEN_13 = 0;
    vlSelf->__PVT___GEN_14 = 0;
    vlSelf->__PVT___GEN_17 = 0;
    vlSelf->__PVT___GEN_18 = 0;
    vlSelf->__PVT___GEN_19 = 0;
    vlSelf->__PVT___GEN_20 = 0;
    vlSelf->__PVT___GEN_21 = 0;
    vlSelf->__PVT___GEN_22 = 0;
    vlSelf->__PVT___GEN_23 = 0;
    vlSelf->__PVT___GEN_24 = 0;
    vlSelf->__PVT___GEN_25 = 0;
    vlSelf->__PVT___GEN_26 = 0;
    vlSelf->__PVT___GEN_27 = 0;
    vlSelf->__PVT___GEN_28 = 0;
    vlSelf->__PVT___GEN_29 = 0;
    vlSelf->__PVT___GEN_30 = 0;
    vlSelf->__PVT___GEN_33 = 0;
    vlSelf->__PVT___GEN_34 = 0;
    vlSelf->__PVT___GEN_35 = 0;
    vlSelf->__PVT___GEN_36 = 0;
    vlSelf->__PVT___GEN_37 = 0;
    vlSelf->__PVT___GEN_38 = 0;
    vlSelf->__PVT___GEN_39 = 0;
    vlSelf->__PVT___GEN_40 = 0;
    vlSelf->__PVT___GEN_41 = 0;
    vlSelf->__PVT___GEN_42 = 0;
    vlSelf->__PVT___GEN_43 = 0;
    vlSelf->__PVT___GEN_44 = 0;
    vlSelf->__PVT___GEN_45 = 0;
    vlSelf->__PVT___GEN_46 = 0;
    vlSelf->__PVT___GEN_49 = 0;
    vlSelf->__PVT___GEN_50 = 0;
    vlSelf->__PVT___GEN_51 = 0;
    vlSelf->__PVT___GEN_52 = 0;
    vlSelf->__PVT___GEN_53 = 0;
    vlSelf->__PVT___GEN_54 = 0;
    vlSelf->__PVT___GEN_55 = 0;
    vlSelf->__PVT___GEN_56 = 0;
    vlSelf->__PVT___GEN_57 = 0;
    vlSelf->__PVT___GEN_58 = 0;
    vlSelf->__PVT___GEN_59 = 0;
    vlSelf->__PVT___GEN_60 = 0;
    vlSelf->__PVT___GEN_61 = 0;
    vlSelf->__PVT___GEN_62 = 0;
    vlSelf->__PVT___GEN_65 = 0;
    vlSelf->__PVT___GEN_66 = 0;
    vlSelf->__PVT___GEN_67 = 0;
    vlSelf->__PVT___GEN_68 = 0;
    vlSelf->__PVT___GEN_69 = 0;
    vlSelf->__PVT___GEN_70 = 0;
    vlSelf->__PVT___GEN_71 = 0;
    vlSelf->__PVT___GEN_72 = 0;
    vlSelf->__PVT___GEN_73 = 0;
    vlSelf->__PVT___GEN_74 = 0;
    vlSelf->__PVT___GEN_75 = 0;
    vlSelf->__PVT___GEN_76 = 0;
    vlSelf->__PVT___GEN_77 = 0;
    vlSelf->__PVT___GEN_78 = 0;
    vlSelf->__PVT___GEN_81 = 0;
    vlSelf->__PVT___GEN_82 = 0;
    vlSelf->__PVT___GEN_83 = 0;
    vlSelf->__PVT___GEN_84 = 0;
    vlSelf->__PVT___GEN_85 = 0;
    vlSelf->__PVT___GEN_86 = 0;
    vlSelf->__PVT___GEN_87 = 0;
    vlSelf->__PVT___GEN_88 = 0;
    vlSelf->__PVT___GEN_89 = 0;
    vlSelf->__PVT___GEN_90 = 0;
    vlSelf->__PVT___GEN_91 = 0;
    vlSelf->__PVT___GEN_92 = 0;
    vlSelf->__PVT___GEN_93 = 0;
    vlSelf->__PVT___GEN_94 = 0;
    vlSelf->__PVT___GEN_97 = 0;
    vlSelf->__PVT___GEN_98 = 0;
    vlSelf->__PVT___GEN_99 = 0;
    vlSelf->__PVT___GEN_100 = 0;
    vlSelf->__PVT___GEN_101 = 0;
    vlSelf->__PVT___GEN_102 = 0;
    vlSelf->__PVT___GEN_103 = 0;
    vlSelf->__PVT___GEN_104 = 0;
    vlSelf->__PVT___GEN_105 = 0;
    vlSelf->__PVT___GEN_106 = 0;
    vlSelf->__PVT___GEN_107 = 0;
    vlSelf->__PVT___GEN_108 = 0;
    vlSelf->__PVT___GEN_109 = 0;
    vlSelf->__PVT___GEN_110 = 0;
    vlSelf->__PVT___GEN_113 = 0;
    vlSelf->__PVT___GEN_114 = 0;
    vlSelf->__PVT___GEN_115 = 0;
    vlSelf->__PVT___GEN_116 = 0;
    vlSelf->__PVT___GEN_117 = 0;
    vlSelf->__PVT___GEN_118 = 0;
    vlSelf->__PVT___GEN_119 = 0;
    vlSelf->__PVT___GEN_120 = 0;
    vlSelf->__PVT___GEN_121 = 0;
    vlSelf->__PVT___GEN_122 = 0;
    vlSelf->__PVT___GEN_123 = 0;
    vlSelf->__PVT___GEN_124 = 0;
    vlSelf->__PVT___GEN_125 = 0;
    vlSelf->__PVT___GEN_126 = 0;
    vlSelf->__PVT___GEN_129 = 0;
    vlSelf->__PVT___GEN_130 = 0;
    vlSelf->__PVT___GEN_131 = 0;
    vlSelf->__PVT___GEN_132 = 0;
    vlSelf->__PVT___GEN_133 = 0;
    vlSelf->__PVT___GEN_134 = 0;
    vlSelf->__PVT___GEN_135 = 0;
    vlSelf->__PVT___GEN_136 = 0;
    vlSelf->__PVT___GEN_137 = 0;
    vlSelf->__PVT___GEN_138 = 0;
    vlSelf->__PVT___GEN_139 = 0;
    vlSelf->__PVT___GEN_140 = 0;
    vlSelf->__PVT___GEN_141 = 0;
    vlSelf->__PVT___GEN_142 = 0;
    vlSelf->__PVT___GEN_145 = 0;
    vlSelf->__PVT___GEN_146 = 0;
    vlSelf->__PVT___GEN_147 = 0;
    vlSelf->__PVT___GEN_148 = 0;
    vlSelf->__PVT___GEN_149 = 0;
    vlSelf->__PVT___GEN_150 = 0;
    vlSelf->__PVT___GEN_151 = 0;
    vlSelf->__PVT___GEN_152 = 0;
    vlSelf->__PVT___GEN_153 = 0;
    vlSelf->__PVT___GEN_154 = 0;
    vlSelf->__PVT___GEN_155 = 0;
    vlSelf->__PVT___GEN_156 = 0;
    vlSelf->__PVT___GEN_157 = 0;
    vlSelf->__PVT___GEN_158 = 0;
    vlSelf->__PVT___GEN_161 = 0;
    vlSelf->__PVT___GEN_162 = 0;
    vlSelf->__PVT___GEN_163 = 0;
    vlSelf->__PVT___GEN_164 = 0;
    vlSelf->__PVT___GEN_165 = 0;
    vlSelf->__PVT___GEN_166 = 0;
    vlSelf->__PVT___GEN_167 = 0;
    vlSelf->__PVT___GEN_168 = 0;
    vlSelf->__PVT___GEN_169 = 0;
    vlSelf->__PVT___GEN_170 = 0;
    vlSelf->__PVT___GEN_171 = 0;
    vlSelf->__PVT___GEN_172 = 0;
    vlSelf->__PVT___GEN_173 = 0;
    vlSelf->__PVT___GEN_174 = 0;
    vlSelf->__PVT___GEN_177 = 0;
    vlSelf->__PVT___GEN_178 = 0;
    vlSelf->__PVT___GEN_179 = 0;
    vlSelf->__PVT___GEN_180 = 0;
    vlSelf->__PVT___GEN_181 = 0;
    vlSelf->__PVT___GEN_182 = 0;
    vlSelf->__PVT___GEN_183 = 0;
    vlSelf->__PVT___GEN_184 = 0;
    vlSelf->__PVT___GEN_185 = 0;
    vlSelf->__PVT___GEN_186 = 0;
    vlSelf->__PVT___GEN_187 = 0;
    vlSelf->__PVT___GEN_188 = 0;
    vlSelf->__PVT___GEN_189 = 0;
    vlSelf->__PVT___GEN_190 = 0;
    vlSelf->__PVT___GEN_193 = 0;
    vlSelf->__PVT___GEN_194 = 0;
    vlSelf->__PVT___GEN_195 = 0;
    vlSelf->__PVT___GEN_196 = 0;
    vlSelf->__PVT___GEN_197 = 0;
    vlSelf->__PVT___GEN_198 = 0;
    vlSelf->__PVT___GEN_199 = 0;
    vlSelf->__PVT___GEN_200 = 0;
    vlSelf->__PVT___GEN_201 = 0;
    vlSelf->__PVT___GEN_202 = 0;
    vlSelf->__PVT___GEN_203 = 0;
    vlSelf->__PVT___GEN_204 = 0;
    vlSelf->__PVT___GEN_205 = 0;
    vlSelf->__PVT___GEN_206 = 0;
    vlSelf->__PVT___GEN_209 = 0;
    vlSelf->__PVT___GEN_210 = 0;
    vlSelf->__PVT___GEN_211 = 0;
    vlSelf->__PVT___GEN_212 = 0;
    vlSelf->__PVT___GEN_213 = 0;
    vlSelf->__PVT___GEN_214 = 0;
    vlSelf->__PVT___GEN_215 = 0;
    vlSelf->__PVT___GEN_216 = 0;
    vlSelf->__PVT___GEN_217 = 0;
    vlSelf->__PVT___GEN_218 = 0;
    vlSelf->__PVT___GEN_219 = 0;
    vlSelf->__PVT___GEN_220 = 0;
    vlSelf->__PVT___GEN_221 = 0;
    vlSelf->__PVT___GEN_222 = 0;
    vlSelf->__PVT___GEN_238 = 0;
    vlSelf->__PVT___GEN_239 = 0;
    vlSelf->__PVT___GEN_240 = 0;
    vlSelf->__PVT___GEN_241 = 0;
    vlSelf->__PVT___GEN_242 = 0;
    vlSelf->__PVT___GEN_243 = 0;
    vlSelf->__PVT___GEN_244 = 0;
    vlSelf->__PVT___GEN_245 = 0;
    vlSelf->__PVT___GEN_246 = 0;
    vlSelf->__PVT___GEN_247 = 0;
    vlSelf->__PVT___GEN_248 = 0;
    vlSelf->__PVT___GEN_249 = 0;
    vlSelf->__PVT___GEN_250 = 0;
    vlSelf->__PVT___GEN_251 = 0;
    vlSelf->__PVT___GEN_252 = 0;
    vlSelf->__PVT___GEN_253 = 0;
    vlSelf->__PVT___GEN_254 = 0;
    vlSelf->__PVT___GEN_255 = 0;
    vlSelf->__PVT___GEN_256 = 0;
    vlSelf->__PVT___GEN_257 = 0;
    vlSelf->__PVT___GEN_258 = 0;
    vlSelf->__PVT___GEN_259 = 0;
    vlSelf->__PVT___GEN_260 = 0;
    vlSelf->__PVT___GEN_261 = 0;
    vlSelf->__PVT___GEN_262 = 0;
    vlSelf->__PVT___GEN_263 = 0;
    vlSelf->__PVT___GEN_264 = 0;
    vlSelf->__PVT___GEN_265 = 0;
    vlSelf->__PVT___GEN_266 = 0;
    vlSelf->__PVT___GEN_267 = 0;
    vlSelf->__PVT___GEN_268 = 0;
    vlSelf->__PVT___GEN_269 = 0;
    vlSelf->__PVT___GEN_270 = 0;
    vlSelf->__PVT___GEN_271 = 0;
    vlSelf->__PVT___GEN_272 = 0;
    vlSelf->__PVT___GEN_273 = 0;
    vlSelf->__PVT___GEN_274 = 0;
    vlSelf->__PVT___GEN_275 = 0;
    vlSelf->__PVT___GEN_276 = 0;
    vlSelf->__PVT___GEN_277 = 0;
    vlSelf->__PVT___GEN_278 = 0;
    vlSelf->__PVT___GEN_279 = 0;
    vlSelf->__PVT___GEN_280 = 0;
    vlSelf->__PVT___GEN_281 = 0;
    vlSelf->__PVT___GEN_282 = 0;
    vlSelf->__PVT___GEN_283 = 0;
    vlSelf->__PVT___GEN_284 = 0;
    vlSelf->__PVT___GEN_285 = 0;
    vlSelf->__PVT___GEN_286 = 0;
    vlSelf->__PVT___GEN_287 = 0;
    vlSelf->__PVT___GEN_288 = 0;
    vlSelf->__PVT___GEN_289 = 0;
    vlSelf->__PVT___GEN_290 = 0;
    vlSelf->__PVT___GEN_291 = 0;
    vlSelf->__PVT___GEN_292 = 0;
    vlSelf->__PVT___GEN_293 = 0;
    vlSelf->__PVT___GEN_294 = 0;
    vlSelf->__PVT___GEN_295 = 0;
    vlSelf->__PVT___GEN_296 = 0;
    vlSelf->__PVT___GEN_297 = 0;
    vlSelf->__PVT___GEN_298 = 0;
    vlSelf->__PVT___GEN_299 = 0;
    vlSelf->__PVT___GEN_300 = 0;
    vlSelf->__PVT___GEN_301 = 0;
    vlSelf->__PVT___GEN_302 = 0;
    vlSelf->__PVT___GEN_303 = 0;
    vlSelf->__PVT___GEN_304 = 0;
    vlSelf->__PVT___GEN_305 = 0;
    vlSelf->__PVT___GEN_306 = 0;
    vlSelf->__PVT___GEN_307 = 0;
    vlSelf->__PVT___GEN_308 = 0;
    vlSelf->__PVT___GEN_309 = 0;
    vlSelf->__PVT___GEN_310 = 0;
    vlSelf->__PVT___GEN_311 = 0;
    vlSelf->__PVT___GEN_312 = 0;
    vlSelf->__PVT___GEN_313 = 0;
    vlSelf->__PVT___GEN_314 = 0;
    vlSelf->__PVT___GEN_315 = 0;
    vlSelf->__PVT___GEN_316 = 0;
    vlSelf->__PVT___GEN_317 = 0;
    vlSelf->__PVT___GEN_318 = 0;
    vlSelf->__PVT___GEN_319 = 0;
    vlSelf->__PVT___GEN_320 = 0;
    vlSelf->__PVT___GEN_321 = 0;
    vlSelf->__PVT___GEN_322 = 0;
    vlSelf->__PVT___GEN_323 = 0;
    vlSelf->__PVT___GEN_324 = 0;
    vlSelf->__PVT___GEN_325 = 0;
    vlSelf->__PVT___GEN_326 = 0;
    vlSelf->__PVT___GEN_327 = 0;
    vlSelf->__PVT___GEN_328 = 0;
    vlSelf->__PVT___GEN_329 = 0;
    vlSelf->__PVT___GEN_330 = 0;
    vlSelf->__PVT___GEN_331 = 0;
    vlSelf->__PVT___GEN_332 = 0;
    vlSelf->__PVT___GEN_333 = 0;
    vlSelf->__PVT___GEN_334 = 0;
    vlSelf->__PVT___GEN_335 = 0;
    vlSelf->__PVT___GEN_336 = 0;
    vlSelf->__PVT___GEN_337 = 0;
    vlSelf->__PVT___GEN_338 = 0;
    vlSelf->__PVT___GEN_339 = 0;
    vlSelf->__PVT___GEN_340 = 0;
    vlSelf->__PVT___GEN_341 = 0;
    vlSelf->__PVT___GEN_342 = 0;
    vlSelf->__PVT___GEN_343 = 0;
    vlSelf->__PVT___GEN_344 = 0;
    vlSelf->__PVT___GEN_345 = 0;
    vlSelf->__PVT___GEN_346 = 0;
    vlSelf->__PVT___GEN_347 = 0;
    vlSelf->__PVT___GEN_348 = 0;
    vlSelf->__PVT___GEN_349 = 0;
    vlSelf->__PVT___GEN_350 = 0;
    vlSelf->__PVT___GEN_351 = 0;
    vlSelf->__PVT___GEN_352 = 0;
    vlSelf->__PVT___GEN_353 = 0;
    vlSelf->__PVT___GEN_354 = 0;
    vlSelf->__PVT___GEN_355 = 0;
    vlSelf->__PVT___GEN_356 = 0;
    vlSelf->__PVT___GEN_357 = 0;
    vlSelf->__PVT___GEN_358 = 0;
    vlSelf->__PVT___GEN_359 = 0;
    vlSelf->__PVT___GEN_360 = 0;
    vlSelf->__PVT___GEN_361 = 0;
    vlSelf->__PVT___GEN_362 = 0;
    vlSelf->__PVT___GEN_363 = 0;
    vlSelf->__PVT___GEN_364 = 0;
    vlSelf->__PVT___GEN_365 = 0;
    vlSelf->__PVT___GEN_366 = 0;
    vlSelf->__PVT___GEN_367 = 0;
    vlSelf->__PVT___GEN_368 = 0;
    vlSelf->__PVT___GEN_369 = 0;
    vlSelf->__PVT___GEN_370 = 0;
    vlSelf->__PVT___GEN_371 = 0;
    vlSelf->__PVT___GEN_372 = 0;
    vlSelf->__PVT___GEN_373 = 0;
    vlSelf->__PVT___GEN_374 = 0;
    vlSelf->__PVT___GEN_375 = 0;
    vlSelf->__PVT___GEN_376 = 0;
    vlSelf->__PVT___GEN_377 = 0;
    vlSelf->__PVT___GEN_378 = 0;
    vlSelf->__PVT___GEN_379 = 0;
    vlSelf->__PVT___GEN_380 = 0;
    vlSelf->__PVT___GEN_381 = 0;
    vlSelf->__PVT___GEN_382 = 0;
    vlSelf->__PVT___GEN_383 = 0;
    vlSelf->__PVT___GEN_384 = 0;
    vlSelf->__PVT___GEN_385 = 0;
    vlSelf->__PVT___GEN_386 = 0;
    vlSelf->__PVT___GEN_387 = 0;
    vlSelf->__PVT___GEN_388 = 0;
    vlSelf->__PVT___GEN_389 = 0;
    vlSelf->__PVT___GEN_390 = 0;
    vlSelf->__PVT___GEN_391 = 0;
    vlSelf->__PVT___GEN_392 = 0;
    vlSelf->__PVT___GEN_393 = 0;
    vlSelf->__PVT___GEN_394 = 0;
    vlSelf->__PVT___GEN_395 = 0;
    vlSelf->__PVT___GEN_396 = 0;
    vlSelf->__PVT___GEN_397 = 0;
    vlSelf->__PVT___GEN_398 = 0;
    vlSelf->__PVT___GEN_399 = 0;
    vlSelf->__PVT___GEN_400 = 0;
    vlSelf->__PVT___GEN_401 = 0;
    vlSelf->__PVT___GEN_402 = 0;
    vlSelf->__PVT___GEN_403 = 0;
    vlSelf->__PVT___GEN_404 = 0;
    vlSelf->__PVT___GEN_405 = 0;
    vlSelf->__PVT___GEN_406 = 0;
    vlSelf->__PVT___GEN_407 = 0;
    vlSelf->__PVT___GEN_408 = 0;
    vlSelf->__PVT___GEN_409 = 0;
    vlSelf->__PVT___GEN_410 = 0;
    vlSelf->__PVT___GEN_411 = 0;
    vlSelf->__PVT___GEN_412 = 0;
    vlSelf->__PVT___GEN_413 = 0;
    vlSelf->__PVT___GEN_414 = 0;
    vlSelf->__PVT___GEN_415 = 0;
    vlSelf->__PVT___GEN_416 = 0;
    vlSelf->__PVT___GEN_417 = 0;
    vlSelf->__PVT___GEN_418 = 0;
    vlSelf->__PVT___GEN_419 = 0;
    vlSelf->__Vdly__btb_0_pc = 0;
    vlSelf->__Vdly__btb_0_inst = 0;
    vlSelf->__Vdly__btb_0_exception_type = 0;
    vlSelf->__Vdly__btb_0_pre_pc_target = 0;
    vlSelf->__Vdly__btb_0_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_0_pre_hashcode = 0;
    vlSelf->__Vdly__btb_0_pre_pht = 0;
    vlSelf->__Vdly__btb_0_pre_bht = 0;
    vlSelf->__Vdly__btb_0_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_0_true_branch_state = 0;
    vlSelf->__Vdly__btb_1_pc = 0;
    vlSelf->__Vdly__btb_1_inst = 0;
    vlSelf->__Vdly__btb_1_exception_type = 0;
    vlSelf->__Vdly__btb_1_pre_pc_target = 0;
    vlSelf->__Vdly__btb_1_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_1_pre_hashcode = 0;
    vlSelf->__Vdly__btb_1_pre_pht = 0;
    vlSelf->__Vdly__btb_1_pre_bht = 0;
    vlSelf->__Vdly__btb_1_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_1_true_branch_state = 0;
    vlSelf->__Vdly__btb_2_pc = 0;
    vlSelf->__Vdly__btb_2_inst = 0;
    vlSelf->__Vdly__btb_2_exception_type = 0;
    vlSelf->__Vdly__btb_2_pre_pc_target = 0;
    vlSelf->__Vdly__btb_2_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_2_pre_hashcode = 0;
    vlSelf->__Vdly__btb_2_pre_pht = 0;
    vlSelf->__Vdly__btb_2_pre_bht = 0;
    vlSelf->__Vdly__btb_2_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_2_true_branch_state = 0;
    vlSelf->__Vdly__btb_3_pc = 0;
    vlSelf->__Vdly__btb_3_inst = 0;
    vlSelf->__Vdly__btb_3_exception_type = 0;
    vlSelf->__Vdly__btb_3_pre_pc_target = 0;
    vlSelf->__Vdly__btb_3_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_3_pre_hashcode = 0;
    vlSelf->__Vdly__btb_3_pre_pht = 0;
    vlSelf->__Vdly__btb_3_pre_bht = 0;
    vlSelf->__Vdly__btb_3_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_3_true_branch_state = 0;
    vlSelf->__Vdly__btb_4_pc = 0;
    vlSelf->__Vdly__btb_4_inst = 0;
    vlSelf->__Vdly__btb_4_exception_type = 0;
    vlSelf->__Vdly__btb_4_pre_pc_target = 0;
    vlSelf->__Vdly__btb_4_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_4_pre_hashcode = 0;
    vlSelf->__Vdly__btb_4_pre_pht = 0;
    vlSelf->__Vdly__btb_4_pre_bht = 0;
    vlSelf->__Vdly__btb_4_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_4_true_branch_state = 0;
    vlSelf->__Vdly__btb_5_pc = 0;
    vlSelf->__Vdly__btb_5_inst = 0;
    vlSelf->__Vdly__btb_5_exception_type = 0;
    vlSelf->__Vdly__btb_5_pre_pc_target = 0;
    vlSelf->__Vdly__btb_5_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_5_pre_hashcode = 0;
    vlSelf->__Vdly__btb_5_pre_pht = 0;
    vlSelf->__Vdly__btb_5_pre_bht = 0;
    vlSelf->__Vdly__btb_5_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_5_true_branch_state = 0;
    vlSelf->__Vdly__btb_6_pc = 0;
    vlSelf->__Vdly__btb_6_inst = 0;
    vlSelf->__Vdly__btb_6_exception_type = 0;
    vlSelf->__Vdly__btb_6_pre_pc_target = 0;
    vlSelf->__Vdly__btb_6_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_6_pre_hashcode = 0;
    vlSelf->__Vdly__btb_6_pre_pht = 0;
    vlSelf->__Vdly__btb_6_pre_bht = 0;
    vlSelf->__Vdly__btb_6_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_6_true_branch_state = 0;
    vlSelf->__Vdly__btb_7_pc = 0;
    vlSelf->__Vdly__btb_7_inst = 0;
    vlSelf->__Vdly__btb_7_exception_type = 0;
    vlSelf->__Vdly__btb_7_pre_pc_target = 0;
    vlSelf->__Vdly__btb_7_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_7_pre_hashcode = 0;
    vlSelf->__Vdly__btb_7_pre_pht = 0;
    vlSelf->__Vdly__btb_7_pre_bht = 0;
    vlSelf->__Vdly__btb_7_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_7_true_branch_state = 0;
    vlSelf->__Vdly__btb_8_pc = 0;
    vlSelf->__Vdly__btb_8_inst = 0;
    vlSelf->__Vdly__btb_8_exception_type = 0;
    vlSelf->__Vdly__btb_8_pre_pc_target = 0;
    vlSelf->__Vdly__btb_8_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_8_pre_hashcode = 0;
    vlSelf->__Vdly__btb_8_pre_pht = 0;
    vlSelf->__Vdly__btb_8_pre_bht = 0;
    vlSelf->__Vdly__btb_8_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_8_true_branch_state = 0;
    vlSelf->__Vdly__btb_9_pc = 0;
    vlSelf->__Vdly__btb_9_inst = 0;
    vlSelf->__Vdly__btb_9_exception_type = 0;
    vlSelf->__Vdly__btb_9_pre_pc_target = 0;
    vlSelf->__Vdly__btb_9_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_9_pre_hashcode = 0;
    vlSelf->__Vdly__btb_9_pre_pht = 0;
    vlSelf->__Vdly__btb_9_pre_bht = 0;
    vlSelf->__Vdly__btb_9_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_9_true_branch_state = 0;
    vlSelf->__Vdly__btb_10_pc = 0;
    vlSelf->__Vdly__btb_10_inst = 0;
    vlSelf->__Vdly__btb_10_exception_type = 0;
    vlSelf->__Vdly__btb_10_pre_pc_target = 0;
    vlSelf->__Vdly__btb_10_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_10_pre_hashcode = 0;
    vlSelf->__Vdly__btb_10_pre_pht = 0;
    vlSelf->__Vdly__btb_10_pre_bht = 0;
    vlSelf->__Vdly__btb_10_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_10_true_branch_state = 0;
    vlSelf->__Vdly__btb_11_pc = 0;
    vlSelf->__Vdly__btb_11_inst = 0;
    vlSelf->__Vdly__btb_11_exception_type = 0;
    vlSelf->__Vdly__btb_11_pre_pc_target = 0;
    vlSelf->__Vdly__btb_11_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_11_pre_hashcode = 0;
    vlSelf->__Vdly__btb_11_pre_pht = 0;
    vlSelf->__Vdly__btb_11_pre_bht = 0;
    vlSelf->__Vdly__btb_11_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_11_true_branch_state = 0;
    vlSelf->__Vdly__btb_12_pc = 0;
    vlSelf->__Vdly__btb_12_inst = 0;
    vlSelf->__Vdly__btb_12_exception_type = 0;
    vlSelf->__Vdly__btb_12_pre_pc_target = 0;
    vlSelf->__Vdly__btb_12_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_12_pre_hashcode = 0;
    vlSelf->__Vdly__btb_12_pre_pht = 0;
    vlSelf->__Vdly__btb_12_pre_bht = 0;
    vlSelf->__Vdly__btb_12_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_12_true_branch_state = 0;
    vlSelf->__Vdly__btb_13_pc = 0;
    vlSelf->__Vdly__btb_13_inst = 0;
    vlSelf->__Vdly__btb_13_exception_type = 0;
    vlSelf->__Vdly__btb_13_pre_pc_target = 0;
    vlSelf->__Vdly__btb_13_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_13_pre_hashcode = 0;
    vlSelf->__Vdly__btb_13_pre_pht = 0;
    vlSelf->__Vdly__btb_13_pre_bht = 0;
    vlSelf->__Vdly__btb_13_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_13_true_branch_state = 0;
    vlSelf->__Vdly__btb_14_pc = 0;
    vlSelf->__Vdly__btb_14_inst = 0;
    vlSelf->__Vdly__btb_14_exception_type = 0;
    vlSelf->__Vdly__btb_14_pre_pc_target = 0;
    vlSelf->__Vdly__btb_14_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_14_pre_hashcode = 0;
    vlSelf->__Vdly__btb_14_pre_pht = 0;
    vlSelf->__Vdly__btb_14_pre_bht = 0;
    vlSelf->__Vdly__btb_14_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_14_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_14_true_branch_state = 0;
    vlSelf->__Vdly__btb_15_pc = 0;
    vlSelf->__Vdly__btb_15_inst = 0;
    vlSelf->__Vdly__btb_15_exception_type = 0;
    vlSelf->__Vdly__btb_15_pre_pc_target = 0;
    vlSelf->__Vdly__btb_15_pre_lookup_data = 0;
    vlSelf->__Vdly__btb_15_pre_hashcode = 0;
    vlSelf->__Vdly__btb_15_pre_pht = 0;
    vlSelf->__Vdly__btb_15_pre_bht = 0;
    vlSelf->__Vdly__btb_15_pre_lookup_value = 0;
    vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag = 0;
    vlSelf->__Vdly__btb_15_pre_decoder_jump = 0;
    vlSelf->__Vdly__btb_15_pre_decoder_branchdata = 0;
    vlSelf->__Vdly__btb_15_pre_decoder_jr = 0;
    vlSelf->__Vdly__btb_15_true_branch_state = 0;
}
