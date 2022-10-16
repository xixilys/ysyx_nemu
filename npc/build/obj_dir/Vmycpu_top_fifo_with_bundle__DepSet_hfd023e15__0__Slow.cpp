// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_fifo_with_bundle.h"

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset 
        = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_clock 
        = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_clock 
        = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7\n"); );
    // Body
    vlSelf->__PVT___io_empty_T_1 = ((IData)(vlSelf->__PVT__write_length_points) 
                                    == (IData)(vlSelf->__PVT__read_length_points));
    vlSelf->__PVT___read_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__read_banks_points));
    vlSelf->__PVT___fifo_banks_3_write_T_1 = (3U == (IData)(vlSelf->__PVT__write_banks_points));
    vlSelf->__PVT___io_full_T_7 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__write_length_points)));
    vlSelf->__PVT___write_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__write_banks_points));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__8(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__8\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__9(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__9\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__10(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__10\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__11(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__11\n"); );
    // Body
    vlSelf->__PVT___io_full_T_3 = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT___write_length_points_T_1)));
    vlSelf->__PVT___io_full_T_12 = (((IData)(vlSelf->__PVT___io_full_T_7) 
                                     == (IData)(vlSelf->__PVT__read_length_points)) 
                                    & ((IData)(vlSelf->__PVT___fifo_banks_3_write_T_1) 
                                       & (0U == (IData)(vlSelf->__PVT__read_banks_points))));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__15(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__15\n"); );
    // Body
    vlSelf->__PVT__io_full = ((IData)(vlSelf->__PVT___io_empty_T_1)
                               ? ((IData)(vlSelf->__PVT___io_full_T_3) 
                                  == (IData)(vlSelf->__PVT___read_length_points_T_1))
                               : (IData)(vlSelf->__PVT___io_full_T_12));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__19(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__19\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__21(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__21\n"); );
    // Body
    vlSelf->__PVT___write_banks_points_T_2 = (3U & 
                                              ((IData)(vlSelf->__PVT__write_banks_points) 
                                               + (IData)(vlSelf->__PVT__io_write_en)));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_write 
        = ((0U == (IData)(vlSelf->__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__io_write_en), 0U));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_write 
        = ((1U == (IData)(vlSelf->__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__io_write_en), 0U));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_write 
        = ((2U == (IData)(vlSelf->__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__io_write_en), 0U));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_write 
        = ((3U == (IData)(vlSelf->__PVT__write_banks_points)) 
           & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__io_write_en), 0U));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__22(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__22\n"); );
    // Body
    vlSelf->__PVT___GEN_56 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__io_write_en));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__24(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__24\n"); );
    // Body
    vlSelf->__PVT___write_length_points_T_3 = (7U & 
                                               ((IData)(vlSelf->__PVT___write_length_points_T_1) 
                                                + (IData)(vlSelf->__PVT___GEN_56)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__25(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__25\n"); );
    // Body
    vlSelf->__PVT___GEN_57 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___write_length_points_T_3), 2U)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__26(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__26\n"); );
    // Body
    vlSelf->__PVT___write_length_points_T_7 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__write_length_points) 
                                                  + (IData)(vlSelf->__PVT___GEN_57)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__32(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__32\n"); );
    // Body
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_3_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_3_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_3_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_3_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_3_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_2_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_true_branch_state;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__33(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__33\n"); );
    // Body
    vlSelf->__PVT__fifo_banks_3_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_2_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_2_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_2_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_2_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_0_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_1_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_true_branch_state;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__34(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__34\n"); );
    // Body
    vlSelf->__PVT__fifo_banks_2_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_3_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pc;
    vlSelf->__PVT__fifo_banks_0_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_0_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_0_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_0_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_1_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_1_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_1_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_1_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_0_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_1_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_2_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pc;
    vlSelf->__PVT__fifo_banks_0_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pc;
    vlSelf->__PVT__fifo_banks_1_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pc;
    vlSelf->__PVT__fifo_banks_3_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__35(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__35\n"); );
    // Body
    vlSelf->__PVT__fifo_banks_2_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_inst;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__36(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__36\n"); );
    // Body
    vlSelf->__PVT__fifo_banks_0_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_inst;
    vlSelf->__PVT__fifo_banks_1_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_inst;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__37(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__37\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_24 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jump));
    vlSelf->__PVT___GEN_25 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_26 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jr));
    vlSelf->__PVT___GEN_27 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_true_branch_state)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_true_branch_state));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__38(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__38\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_pre_pc_target
                               : vlSelf->__PVT__fifo_banks_0_out_pre_pc_target);
    vlSelf->__PVT___GEN_18 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_lookup_data));
    vlSelf->__PVT___GEN_19 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_hashcode));
    vlSelf->__PVT___GEN_20 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_pht)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_pht));
    vlSelf->__PVT___GEN_21 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_bht)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_bht));
    vlSelf->__PVT___GEN_22 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_lookup_value));
    vlSelf->__PVT___GEN_16 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_exception_type)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_exception_type));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__39(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__39\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_pc
                               : vlSelf->__PVT__fifo_banks_0_out_pc);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__40(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__40\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_inst
                               : vlSelf->__PVT__fifo_banks_0_out_inst);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__41(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__41\n"); );
    // Body
    vlSelf->__PVT___GEN_37 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_38 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_39 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_40 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_41 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_27));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__42(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__42\n"); );
    // Body
    vlSelf->__PVT___GEN_31 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_pre_pc_target
                               : vlSelf->__PVT___GEN_17);
    vlSelf->__PVT___GEN_32 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_33 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_pht)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_35 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_36 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_30 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_exception_type)
                               : (IData)(vlSelf->__PVT___GEN_16));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__43(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__43\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_pc
                               : vlSelf->__PVT___GEN_14);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__44(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__44\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_inst
                               : vlSelf->__PVT___GEN_15);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__45(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__45\n"); );
    // Body
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_52 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_53 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_54 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_55 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_41));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__46(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__46\n"); );
    // Body
    vlSelf->__PVT___GEN_45 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_pre_pc_target
                               : vlSelf->__PVT___GEN_31);
    vlSelf->__PVT___GEN_46 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT___GEN_47 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_48 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_pht)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_49 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_50 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_44 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_exception_type)
                               : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__47(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__47\n"); );
    // Body
    vlSelf->__PVT___GEN_42 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_pc
                               : vlSelf->__PVT___GEN_28);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__48(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__48\n"); );
    // Body
    vlSelf->__PVT___GEN_43 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_inst
                               : vlSelf->__PVT___GEN_29);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__49(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__49\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__51(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__51\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__53(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__53\n"); );
    // Body
    vlSelf->__PVT___write_banks_points_T = ((IData)(vlSelf->__PVT__io_point_flush) 
                                            | (IData)(vlSelf->__PVT__io_point_write_en));
    vlSelf->__PVT__io_empty = ((((IData)(vlSelf->__PVT__write_banks_points) 
                                 == (IData)(vlSelf->__PVT__read_banks_points)) 
                                & ((IData)(vlSelf->__PVT__write_length_points) 
                                   == (IData)(vlSelf->__PVT__read_length_points))) 
                               | (IData)(vlSelf->__PVT__io_point_write_en));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__54(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__54\n"); );
    // Body
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchD_flag 
        = ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__io_read_out_0_pre_decoder_jump = 
        ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchdata 
        = ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT__io_read_out_0_pre_decoder_jr = (
                                                   (~ (IData)(vlSelf->__PVT__io_empty)) 
                                                   & (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT__io_read_out_0_true_branch_state 
        = ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT__io_read_out_0_pre_pc_target = ((IData)(vlSelf->__PVT__io_empty)
                                                   ? 0ULL
                                                   : vlSelf->__PVT___GEN_45);
    vlSelf->__PVT__io_read_out_0_pre_lookup_data = 
        ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_read_out_0_pre_hashcode = ((IData)(vlSelf->__PVT__io_empty)
                                                  ? 0U
                                                  : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT__io_read_out_0_pre_pht = ((IData)(vlSelf->__PVT__io_empty)
                                             ? 0U : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT__io_read_out_0_pre_bht = ((IData)(vlSelf->__PVT__io_empty)
                                             ? 0U : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__io_read_out_0_pre_lookup_value = 
        ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT__io_read_out_0_exception_type = ((IData)(vlSelf->__PVT__io_empty)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT__io_read_out_0_pc = ((IData)(vlSelf->__PVT__io_empty)
                                        ? 0ULL : vlSelf->__PVT___GEN_42);
    vlSelf->__PVT__io_read_out_0_inst = ((IData)(vlSelf->__PVT__io_empty)
                                          ? 0U : vlSelf->__PVT___GEN_43);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__55(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__55\n"); );
    // Body
    vlSelf->__PVT___read_banks_points_T_2 = (3U & ((IData)(vlSelf->__PVT__read_banks_points) 
                                                   + (IData)(vlSelf->__PVT__io_read_en)));
    vlSelf->__PVT___GEN_58 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__io_read_en));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__56(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__56\n"); );
    // Body
    vlSelf->__PVT___read_length_points_T_3 = (7U & 
                                              ((IData)(vlSelf->__PVT___read_length_points_T_1) 
                                               + (IData)(vlSelf->__PVT___GEN_58)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__57(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__57\n"); );
    // Body
    vlSelf->__PVT___GEN_59 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___read_length_points_T_3), 2U)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__58(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__58\n"); );
    // Body
    vlSelf->__PVT___read_length_points_T_7 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__read_length_points) 
                                                 + (IData)(vlSelf->__PVT___GEN_59)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__59(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__59\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__61(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__61\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__63(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__63\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__65(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___settle__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__65\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___ctor_var_reset(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_read_en = 0;
    vlSelf->__PVT__io_write_en = 0;
    vlSelf->__PVT__io_read_out_0_pc = 0;
    vlSelf->__PVT__io_read_out_0_inst = 0;
    vlSelf->__PVT__io_read_out_0_exception_type = 0;
    vlSelf->__PVT__io_read_out_0_pre_pc_target = 0;
    vlSelf->__PVT__io_read_out_0_pre_lookup_data = 0;
    vlSelf->__PVT__io_read_out_0_pre_hashcode = 0;
    vlSelf->__PVT__io_read_out_0_pre_pht = 0;
    vlSelf->__PVT__io_read_out_0_pre_bht = 0;
    vlSelf->__PVT__io_read_out_0_pre_lookup_value = 0;
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__io_read_out_0_pre_decoder_jump = 0;
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchdata = 0;
    vlSelf->__PVT__io_read_out_0_pre_decoder_jr = 0;
    vlSelf->__PVT__io_read_out_0_true_branch_state = 0;
    vlSelf->__PVT__io_write_in_0_pc = 0;
    vlSelf->__PVT__io_write_in_0_inst = 0;
    vlSelf->__PVT__io_write_in_0_pre_pc_target = 0;
    vlSelf->__PVT__io_write_in_0_pre_lookup_data = 0;
    vlSelf->__PVT__io_write_in_0_pre_hashcode = 0;
    vlSelf->__PVT__io_write_in_0_pre_pht = 0;
    vlSelf->__PVT__io_write_in_0_pre_bht = 0;
    vlSelf->__PVT__io_write_in_0_pre_lookup_value = 0;
    vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__io_write_in_0_pre_decoder_jump = 0;
    vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata = 0;
    vlSelf->__PVT__io_write_in_0_pre_decoder_jr = 0;
    vlSelf->__PVT__io_write_in_0_true_branch_state = 0;
    vlSelf->__PVT__io_full = 0;
    vlSelf->__PVT__io_empty = 0;
    vlSelf->__PVT__io_point_write_en = 0;
    vlSelf->__PVT__io_point_flush = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_exception_type = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_exception_type = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_exception_type = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pc = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_exception_type = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pc_target = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_data = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_hashcode = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_bht = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_value = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jump = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jr = 0;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_true_branch_state = 0;
    vlSelf->__PVT__write_banks_points = 0;
    vlSelf->__PVT__write_length_points = 0;
    vlSelf->__PVT__read_banks_points = 0;
    vlSelf->__PVT__read_length_points = 0;
    vlSelf->__PVT___fifo_banks_3_write_T_1 = 0;
    vlSelf->__PVT___write_banks_points_T = 0;
    vlSelf->__PVT___write_banks_points_T_2 = 0;
    vlSelf->__PVT___write_length_points_T_1 = 0;
    vlSelf->__PVT___GEN_56 = 0;
    vlSelf->__PVT___write_length_points_T_3 = 0;
    vlSelf->__PVT___GEN_57 = 0;
    vlSelf->__PVT___write_length_points_T_7 = 0;
    vlSelf->__PVT___read_banks_points_T_2 = 0;
    vlSelf->__PVT___read_length_points_T_1 = 0;
    vlSelf->__PVT___GEN_58 = 0;
    vlSelf->__PVT___read_length_points_T_3 = 0;
    vlSelf->__PVT___GEN_59 = 0;
    vlSelf->__PVT___read_length_points_T_7 = 0;
    vlSelf->__PVT__fifo_banks_0_out_pc = 0;
    vlSelf->__PVT__fifo_banks_0_out_inst = 0;
    vlSelf->__PVT__fifo_banks_0_out_exception_type = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_pc_target = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_data = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_hashcode = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_pht = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_bht = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_value = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jump = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jr = 0;
    vlSelf->__PVT__fifo_banks_0_out_true_branch_state = 0;
    vlSelf->__PVT__fifo_banks_1_out_pc = 0;
    vlSelf->__PVT___GEN_14 = 0;
    vlSelf->__PVT__fifo_banks_1_out_inst = 0;
    vlSelf->__PVT___GEN_15 = 0;
    vlSelf->__PVT__fifo_banks_1_out_exception_type = 0;
    vlSelf->__PVT___GEN_16 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_pc_target = 0;
    vlSelf->__PVT___GEN_17 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_data = 0;
    vlSelf->__PVT___GEN_18 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_hashcode = 0;
    vlSelf->__PVT___GEN_19 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_pht = 0;
    vlSelf->__PVT___GEN_20 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_bht = 0;
    vlSelf->__PVT___GEN_21 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_value = 0;
    vlSelf->__PVT___GEN_22 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT___GEN_23 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jump = 0;
    vlSelf->__PVT___GEN_24 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT___GEN_25 = 0;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jr = 0;
    vlSelf->__PVT___GEN_26 = 0;
    vlSelf->__PVT__fifo_banks_1_out_true_branch_state = 0;
    vlSelf->__PVT___GEN_27 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pc = 0;
    vlSelf->__PVT___GEN_28 = 0;
    vlSelf->__PVT__fifo_banks_2_out_inst = 0;
    vlSelf->__PVT___GEN_29 = 0;
    vlSelf->__PVT__fifo_banks_2_out_exception_type = 0;
    vlSelf->__PVT___GEN_30 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_pc_target = 0;
    vlSelf->__PVT___GEN_31 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_data = 0;
    vlSelf->__PVT___GEN_32 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_hashcode = 0;
    vlSelf->__PVT___GEN_33 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_pht = 0;
    vlSelf->__PVT___GEN_34 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_bht = 0;
    vlSelf->__PVT___GEN_35 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_value = 0;
    vlSelf->__PVT___GEN_36 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT___GEN_37 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jump = 0;
    vlSelf->__PVT___GEN_38 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT___GEN_39 = 0;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jr = 0;
    vlSelf->__PVT___GEN_40 = 0;
    vlSelf->__PVT__fifo_banks_2_out_true_branch_state = 0;
    vlSelf->__PVT___GEN_41 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pc = 0;
    vlSelf->__PVT___GEN_42 = 0;
    vlSelf->__PVT__fifo_banks_3_out_inst = 0;
    vlSelf->__PVT___GEN_43 = 0;
    vlSelf->__PVT__fifo_banks_3_out_exception_type = 0;
    vlSelf->__PVT___GEN_44 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_pc_target = 0;
    vlSelf->__PVT___GEN_45 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_data = 0;
    vlSelf->__PVT___GEN_46 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_hashcode = 0;
    vlSelf->__PVT___GEN_47 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_pht = 0;
    vlSelf->__PVT___GEN_48 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_bht = 0;
    vlSelf->__PVT___GEN_49 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_value = 0;
    vlSelf->__PVT___GEN_50 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchD_flag = 0;
    vlSelf->__PVT___GEN_51 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jump = 0;
    vlSelf->__PVT___GEN_52 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchdata = 0;
    vlSelf->__PVT___GEN_53 = 0;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jr = 0;
    vlSelf->__PVT___GEN_54 = 0;
    vlSelf->__PVT__fifo_banks_3_out_true_branch_state = 0;
    vlSelf->__PVT___GEN_55 = 0;
    vlSelf->__PVT___io_empty_T_1 = 0;
    vlSelf->__PVT___io_full_T_3 = 0;
    vlSelf->__PVT___io_full_T_7 = 0;
    vlSelf->__PVT___io_full_T_12 = 0;
    vlSelf->__Vdly__write_banks_points = 0;
    vlSelf->__Vdly__write_length_points = 0;
    vlSelf->__Vdly__read_banks_points = 0;
    vlSelf->__Vdly__read_length_points = 0;
}
