// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0\n"); );
    // Body
    vlSelf->__Vdly__btb_2_inst = vlSelf->__PVT__btb_2_inst;
    vlSelf->__Vdly__btb_1_inst = vlSelf->__PVT__btb_1_inst;
    vlSelf->__Vdly__btb_0_inst = vlSelf->__PVT__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1\n"); );
    // Body
    vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_14_pre_hashcode;
    vlSelf->__Vdly__btb_14_pre_lookup_data = vlSelf->__PVT__btb_14_pre_lookup_data;
    vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_14_exception_type;
    vlSelf->__Vdly__btb_12_true_branch_state = vlSelf->__PVT__btb_12_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_lookup_value = vlSelf->__PVT__btb_13_pre_lookup_value;
    vlSelf->__Vdly__btb_13_pre_bht = vlSelf->__PVT__btb_13_pre_bht;
    vlSelf->__Vdly__btb_13_pre_pht = vlSelf->__PVT__btb_13_pre_pht;
    vlSelf->__Vdly__btb_13_pre_lookup_data = vlSelf->__PVT__btb_13_pre_lookup_data;
    vlSelf->__Vdly__btb_13_pre_pc_target = vlSelf->__PVT__btb_13_pre_pc_target;
    vlSelf->__Vdly__btb_13_exception_type = vlSelf->__PVT__btb_13_exception_type;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_11_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_lookup_value = vlSelf->__PVT__btb_12_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_14_pc;
    vlSelf->__Vdly__btb_12_exception_type = vlSelf->__PVT__btb_12_exception_type;
    vlSelf->__Vdly__btb_10_true_branch_state = vlSelf->__PVT__btb_10_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_lookup_value = vlSelf->__PVT__btb_11_pre_lookup_value;
    vlSelf->__Vdly__btb_11_pre_bht = vlSelf->__PVT__btb_11_pre_bht;
    vlSelf->__Vdly__btb_11_pre_pht = vlSelf->__PVT__btb_11_pre_pht;
    vlSelf->__Vdly__btb_11_pre_hashcode = vlSelf->__PVT__btb_11_pre_hashcode;
    vlSelf->__Vdly__btb_11_pre_lookup_data = vlSelf->__PVT__btb_11_pre_lookup_data;
    vlSelf->__Vdly__btb_11_pre_pc_target = vlSelf->__PVT__btb_11_pre_pc_target;
    vlSelf->__Vdly__btb_13_pc = vlSelf->__PVT__btb_13_pc;
    vlSelf->__Vdly__btb_11_exception_type = vlSelf->__PVT__btb_11_exception_type;
    vlSelf->__Vdly__btb_12_pc = vlSelf->__PVT__btb_12_pc;
    vlSelf->__Vdly__btb_9_true_branch_state = vlSelf->__PVT__btb_9_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = vlSelf->__PVT__btb_9_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = vlSelf->__PVT__btb_9_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = vlSelf->__PVT__btb_9_pre_decoder_jump;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_9_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_lookup_value = vlSelf->__PVT__btb_10_pre_lookup_value;
    vlSelf->__Vdly__btb_10_pre_bht = vlSelf->__PVT__btb_10_pre_bht;
    vlSelf->__Vdly__btb_10_pre_pht = vlSelf->__PVT__btb_10_pre_pht;
    vlSelf->__Vdly__btb_10_pre_hashcode = vlSelf->__PVT__btb_10_pre_hashcode;
    vlSelf->__Vdly__btb_10_pre_lookup_data = vlSelf->__PVT__btb_10_pre_lookup_data;
    vlSelf->__Vdly__btb_10_pre_pc_target = vlSelf->__PVT__btb_10_pre_pc_target;
    vlSelf->__Vdly__btb_10_exception_type = vlSelf->__PVT__btb_10_exception_type;
    vlSelf->__Vdly__btb_11_pc = vlSelf->__PVT__btb_11_pc;
    vlSelf->__Vdly__btb_9_pre_lookup_value = vlSelf->__PVT__btb_9_pre_lookup_value;
    vlSelf->__Vdly__btb_9_pre_bht = vlSelf->__PVT__btb_9_pre_bht;
    vlSelf->__Vdly__btb_9_pre_pht = vlSelf->__PVT__btb_9_pre_pht;
    vlSelf->__Vdly__btb_9_pre_hashcode = vlSelf->__PVT__btb_9_pre_hashcode;
    vlSelf->__Vdly__btb_9_pre_lookup_data = vlSelf->__PVT__btb_9_pre_lookup_data;
    vlSelf->__Vdly__btb_9_pre_pc_target = vlSelf->__PVT__btb_9_pre_pc_target;
    vlSelf->__Vdly__btb_8_true_branch_state = vlSelf->__PVT__btb_8_true_branch_state;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = vlSelf->__PVT__btb_8_pre_decoder_jr;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = vlSelf->__PVT__btb_8_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = vlSelf->__PVT__btb_8_pre_decoder_jump;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_8_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_9_exception_type = vlSelf->__PVT__btb_9_exception_type;
    vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_14_inst;
    vlSelf->__Vdly__btb_10_pc = vlSelf->__PVT__btb_10_pc;
    vlSelf->__Vdly__btb_8_pre_lookup_value = vlSelf->__PVT__btb_8_pre_lookup_value;
    vlSelf->__Vdly__btb_8_pre_bht = vlSelf->__PVT__btb_8_pre_bht;
    vlSelf->__Vdly__btb_8_pre_pht = vlSelf->__PVT__btb_8_pre_pht;
    vlSelf->__Vdly__btb_8_pre_hashcode = vlSelf->__PVT__btb_8_pre_hashcode;
    vlSelf->__Vdly__btb_8_pre_lookup_data = vlSelf->__PVT__btb_8_pre_lookup_data;
    vlSelf->__Vdly__btb_8_pre_pc_target = vlSelf->__PVT__btb_8_pre_pc_target;
    vlSelf->__Vdly__btb_7_true_branch_state = vlSelf->__PVT__btb_7_true_branch_state;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = vlSelf->__PVT__btb_7_pre_decoder_jr;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = vlSelf->__PVT__btb_7_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = vlSelf->__PVT__btb_7_pre_decoder_jump;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_7_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_inst = vlSelf->__PVT__btb_13_inst;
    vlSelf->__Vdly__btb_8_exception_type = vlSelf->__PVT__btb_8_exception_type;
    vlSelf->__Vdly__btb_9_pc = vlSelf->__PVT__btb_9_pc;
    vlSelf->__Vdly__btb_12_inst = vlSelf->__PVT__btb_12_inst;
    vlSelf->__Vdly__btb_7_pre_lookup_value = vlSelf->__PVT__btb_7_pre_lookup_value;
    vlSelf->__Vdly__btb_7_pre_bht = vlSelf->__PVT__btb_7_pre_bht;
    vlSelf->__Vdly__btb_7_pre_pht = vlSelf->__PVT__btb_7_pre_pht;
    vlSelf->__Vdly__btb_7_pre_hashcode = vlSelf->__PVT__btb_7_pre_hashcode;
    vlSelf->__Vdly__btb_7_pre_lookup_data = vlSelf->__PVT__btb_7_pre_lookup_data;
    vlSelf->__Vdly__btb_7_pre_pc_target = vlSelf->__PVT__btb_7_pre_pc_target;
    vlSelf->__Vdly__btb_6_true_branch_state = vlSelf->__PVT__btb_6_true_branch_state;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = vlSelf->__PVT__btb_6_pre_decoder_jr;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = vlSelf->__PVT__btb_6_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = vlSelf->__PVT__btb_6_pre_decoder_jump;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_6_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_exception_type = vlSelf->__PVT__btb_7_exception_type;
    vlSelf->__Vdly__btb_8_pc = vlSelf->__PVT__btb_8_pc;
    vlSelf->__Vdly__btb_11_inst = vlSelf->__PVT__btb_11_inst;
    vlSelf->__Vdly__btb_6_pre_lookup_value = vlSelf->__PVT__btb_6_pre_lookup_value;
    vlSelf->__Vdly__btb_6_pre_bht = vlSelf->__PVT__btb_6_pre_bht;
    vlSelf->__Vdly__btb_6_pre_pht = vlSelf->__PVT__btb_6_pre_pht;
    vlSelf->__Vdly__btb_6_pre_hashcode = vlSelf->__PVT__btb_6_pre_hashcode;
    vlSelf->__Vdly__btb_6_pre_lookup_data = vlSelf->__PVT__btb_6_pre_lookup_data;
    vlSelf->__Vdly__btb_6_pre_pc_target = vlSelf->__PVT__btb_6_pre_pc_target;
    vlSelf->__Vdly__btb_5_true_branch_state = vlSelf->__PVT__btb_5_true_branch_state;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = vlSelf->__PVT__btb_5_pre_decoder_jr;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = vlSelf->__PVT__btb_5_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = vlSelf->__PVT__btb_5_pre_decoder_jump;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_5_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_exception_type = vlSelf->__PVT__btb_6_exception_type;
    vlSelf->__Vdly__btb_10_inst = vlSelf->__PVT__btb_10_inst;
    vlSelf->__Vdly__btb_7_pc = vlSelf->__PVT__btb_7_pc;
    vlSelf->__Vdly__btb_5_pre_lookup_value = vlSelf->__PVT__btb_5_pre_lookup_value;
    vlSelf->__Vdly__btb_5_pre_bht = vlSelf->__PVT__btb_5_pre_bht;
    vlSelf->__Vdly__btb_5_pre_pht = vlSelf->__PVT__btb_5_pre_pht;
    vlSelf->__Vdly__btb_5_pre_hashcode = vlSelf->__PVT__btb_5_pre_hashcode;
    vlSelf->__Vdly__btb_5_pre_lookup_data = vlSelf->__PVT__btb_5_pre_lookup_data;
    vlSelf->__Vdly__btb_5_pre_pc_target = vlSelf->__PVT__btb_5_pre_pc_target;
    vlSelf->__Vdly__btb_4_true_branch_state = vlSelf->__PVT__btb_4_true_branch_state;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = vlSelf->__PVT__btb_4_pre_decoder_jump;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_4_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_5_exception_type = vlSelf->__PVT__btb_5_exception_type;
    vlSelf->__Vdly__btb_9_inst = vlSelf->__PVT__btb_9_inst;
    vlSelf->__Vdly__btb_6_pc = vlSelf->__PVT__btb_6_pc;
    vlSelf->__Vdly__btb_4_pre_lookup_value = vlSelf->__PVT__btb_4_pre_lookup_value;
    vlSelf->__Vdly__btb_4_pre_hashcode = vlSelf->__PVT__btb_4_pre_hashcode;
    vlSelf->__Vdly__btb_4_pre_lookup_data = vlSelf->__PVT__btb_4_pre_lookup_data;
    vlSelf->__Vdly__btb_4_pre_pc_target = vlSelf->__PVT__btb_4_pre_pc_target;
    vlSelf->__Vdly__btb_3_true_branch_state = vlSelf->__PVT__btb_3_true_branch_state;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = vlSelf->__PVT__btb_3_pre_decoder_jr;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = vlSelf->__PVT__btb_3_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = vlSelf->__PVT__btb_3_pre_decoder_jump;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_3_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_8_inst = vlSelf->__PVT__btb_8_inst;
    vlSelf->__Vdly__btb_4_exception_type = vlSelf->__PVT__btb_4_exception_type;
    vlSelf->__Vdly__btb_5_pc = vlSelf->__PVT__btb_5_pc;
    vlSelf->__Vdly__btb_3_pre_lookup_value = vlSelf->__PVT__btb_3_pre_lookup_value;
    vlSelf->__Vdly__btb_3_pre_bht = vlSelf->__PVT__btb_3_pre_bht;
    vlSelf->__Vdly__btb_3_pre_pht = vlSelf->__PVT__btb_3_pre_pht;
    vlSelf->__Vdly__btb_3_pre_hashcode = vlSelf->__PVT__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_3_pre_lookup_data = vlSelf->__PVT__btb_3_pre_lookup_data;
    vlSelf->__Vdly__btb_3_pre_pc_target = vlSelf->__PVT__btb_3_pre_pc_target;
    vlSelf->__Vdly__btb_2_true_branch_state = vlSelf->__PVT__btb_2_true_branch_state;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = vlSelf->__PVT__btb_2_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = vlSelf->__PVT__btb_2_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_2_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_inst = vlSelf->__PVT__btb_7_inst;
    vlSelf->__Vdly__btb_3_exception_type = vlSelf->__PVT__btb_3_exception_type;
    vlSelf->__Vdly__btb_4_pc = vlSelf->__PVT__btb_4_pc;
    vlSelf->__Vdly__btb_2_pre_lookup_value = vlSelf->__PVT__btb_2_pre_lookup_value;
    vlSelf->__Vdly__btb_2_pre_bht = vlSelf->__PVT__btb_2_pre_bht;
    vlSelf->__Vdly__btb_2_pre_pht = vlSelf->__PVT__btb_2_pre_pht;
    vlSelf->__Vdly__btb_2_pre_hashcode = vlSelf->__PVT__btb_2_pre_hashcode;
    vlSelf->__Vdly__btb_2_pre_lookup_data = vlSelf->__PVT__btb_2_pre_lookup_data;
    vlSelf->__Vdly__btb_2_pre_pc_target = vlSelf->__PVT__btb_2_pre_pc_target;
    vlSelf->__Vdly__btb_1_true_branch_state = vlSelf->__PVT__btb_1_true_branch_state;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = vlSelf->__PVT__btb_1_pre_decoder_jr;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = vlSelf->__PVT__btb_1_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = vlSelf->__PVT__btb_1_pre_decoder_jump;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_1_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_0_true_branch_state = vlSelf->__PVT__btb_0_true_branch_state;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = vlSelf->__PVT__btb_0_pre_decoder_jr;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = vlSelf->__PVT__btb_0_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = vlSelf->__PVT__btb_0_pre_decoder_jump;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_0_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_inst = vlSelf->__PVT__btb_6_inst;
    vlSelf->__Vdly__btb_2_exception_type = vlSelf->__PVT__btb_2_exception_type;
    vlSelf->__Vdly__btb_3_pc = vlSelf->__PVT__btb_3_pc;
    vlSelf->__Vdly__btb_1_pre_lookup_value = vlSelf->__PVT__btb_1_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_bht = vlSelf->__PVT__btb_1_pre_bht;
    vlSelf->__Vdly__btb_1_pre_pht = vlSelf->__PVT__btb_1_pre_pht;
    vlSelf->__Vdly__btb_1_pre_hashcode = vlSelf->__PVT__btb_1_pre_hashcode;
    vlSelf->__Vdly__btb_1_pre_lookup_data = vlSelf->__PVT__btb_1_pre_lookup_data;
    vlSelf->__Vdly__btb_1_pre_pc_target = vlSelf->__PVT__btb_1_pre_pc_target;
    vlSelf->__Vdly__btb_0_pre_lookup_value = vlSelf->__PVT__btb_0_pre_lookup_value;
    vlSelf->__Vdly__btb_0_pre_bht = vlSelf->__PVT__btb_0_pre_bht;
    vlSelf->__Vdly__btb_0_pre_pht = vlSelf->__PVT__btb_0_pre_pht;
    vlSelf->__Vdly__btb_0_pre_hashcode = vlSelf->__PVT__btb_0_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_lookup_data = vlSelf->__PVT__btb_0_pre_lookup_data;
    vlSelf->__Vdly__btb_0_pre_pc_target = vlSelf->__PVT__btb_0_pre_pc_target;
    vlSelf->__Vdly__btb_5_inst = vlSelf->__PVT__btb_5_inst;
    vlSelf->__Vdly__btb_1_exception_type = vlSelf->__PVT__btb_1_exception_type;
    vlSelf->__Vdly__btb_0_exception_type = vlSelf->__PVT__btb_0_exception_type;
    vlSelf->__Vdly__btb_2_pc = vlSelf->__PVT__btb_2_pc;
    vlSelf->__Vdly__btb_4_inst = vlSelf->__PVT__btb_4_inst;
    vlSelf->__Vdly__btb_1_pc = vlSelf->__PVT__btb_1_pc;
    vlSelf->__Vdly__btb_0_pc = vlSelf->__PVT__btb_0_pc;
    vlSelf->__Vdly__btb_3_inst = vlSelf->__PVT__btb_3_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_data = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__io_in_pre_lookup_data;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__btb_15_pre_lookup_data;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT___GEN_410;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_hashcode = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__io_in_pre_hashcode;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT___GEN_411;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_true_branch_state = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_exception_type = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_exception_type = 0U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_15_exception_type;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT___GEN_408;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pc_target = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_bht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_exception_type = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_exception_type = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pc = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__io_in_pc;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_15_pc;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT___GEN_406;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_true_branch_state = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pc_target = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_hashcode = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_bht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_exception_type = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pc = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_true_branch_state = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pc_target = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_hashcode = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_bht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pc = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_exception_type = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pc = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_true_branch_state = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pc_target = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_hashcode = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_bht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_exception_type = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pc = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pc_target = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_hashcode = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_bht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_inst = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__io_in_inst;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_15_inst;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT___GEN_407;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_true_branch_state = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_exception_type = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pc = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_inst = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pc_target = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_hashcode = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_bht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_true_branch_state = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_inst = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_exception_type = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pc = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_inst = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pc_target = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_hashcode = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_bht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_true_branch_state = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_exception_type = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pc = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_inst = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pc_target = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_hashcode = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_bht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_true_branch_state = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_exception_type = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_inst = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pc = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pc_target = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_hashcode = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_true_branch_state = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_exception_type = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_inst = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pc = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pc_target = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_hashcode = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_bht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_true_branch_state = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_inst = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_exception_type = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pc = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pc_target = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_hashcode = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_bht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_true_branch_state = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_true_branch_state = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_inst = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_exception_type = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pc = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pc_target = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_hashcode = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_bht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pc_target = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_hashcode = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_bht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_inst = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_exception_type = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_exception_type = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pc = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_inst = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pc = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pc = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_inst = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_inst = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_inst = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_inst = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3\n"); );
    // Body
    vlSelf->__PVT__btb_4_pre_lookup_value = vlSelf->__Vdly__btb_4_pre_lookup_value;
    vlSelf->__PVT__btb_3_pre_decoder_branchdata = vlSelf->__Vdly__btb_3_pre_decoder_branchdata;
    vlSelf->__PVT__btb_4_exception_type = vlSelf->__Vdly__btb_4_exception_type;
    vlSelf->__PVT__btb_3_pre_lookup_value = vlSelf->__Vdly__btb_3_pre_lookup_value;
    vlSelf->__PVT__btb_3_pre_bht = vlSelf->__Vdly__btb_3_pre_bht;
    vlSelf->__PVT__btb_3_pre_pht = vlSelf->__Vdly__btb_3_pre_pht;
    vlSelf->__PVT__btb_3_pre_hashcode = vlSelf->__Vdly__btb_3_pre_hashcode;
    vlSelf->__PVT__btb_3_pre_lookup_data = vlSelf->__Vdly__btb_3_pre_lookup_data;
    vlSelf->__PVT__btb_3_pre_pc_target = vlSelf->__Vdly__btb_3_pre_pc_target;
    vlSelf->__PVT__btb_2_true_branch_state = vlSelf->__Vdly__btb_2_true_branch_state;
    vlSelf->__PVT__btb_2_pre_decoder_jr = vlSelf->__Vdly__btb_2_pre_decoder_jr;
    vlSelf->__PVT__btb_2_pre_decoder_jump = vlSelf->__Vdly__btb_2_pre_decoder_jump;
    vlSelf->__PVT__btb_2_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_3_exception_type = vlSelf->__Vdly__btb_3_exception_type;
    vlSelf->__PVT__btb_4_pc = vlSelf->__Vdly__btb_4_pc;
    vlSelf->__PVT__btb_2_pre_lookup_value = vlSelf->__Vdly__btb_2_pre_lookup_value;
    vlSelf->__PVT__btb_2_pre_bht = vlSelf->__Vdly__btb_2_pre_bht;
    vlSelf->__PVT__btb_2_pre_pht = vlSelf->__Vdly__btb_2_pre_pht;
    vlSelf->__PVT__btb_2_pre_hashcode = vlSelf->__Vdly__btb_2_pre_hashcode;
    vlSelf->__PVT__btb_2_pre_lookup_data = vlSelf->__Vdly__btb_2_pre_lookup_data;
    vlSelf->__PVT__btb_2_pre_pc_target = vlSelf->__Vdly__btb_2_pre_pc_target;
    vlSelf->__PVT__btb_1_true_branch_state = vlSelf->__Vdly__btb_1_true_branch_state;
    vlSelf->__PVT__btb_1_pre_decoder_jr = vlSelf->__Vdly__btb_1_pre_decoder_jr;
    vlSelf->__PVT__btb_1_pre_decoder_branchdata = vlSelf->__Vdly__btb_1_pre_decoder_branchdata;
    vlSelf->__PVT__btb_1_pre_decoder_jump = vlSelf->__Vdly__btb_1_pre_decoder_jump;
    vlSelf->__PVT__btb_1_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_0_true_branch_state = vlSelf->__Vdly__btb_0_true_branch_state;
    vlSelf->__PVT__btb_0_pre_decoder_jr = vlSelf->__Vdly__btb_0_pre_decoder_jr;
    vlSelf->__PVT__btb_0_pre_decoder_branchdata = vlSelf->__Vdly__btb_0_pre_decoder_branchdata;
    vlSelf->__PVT__btb_0_pre_decoder_jump = vlSelf->__Vdly__btb_0_pre_decoder_jump;
    vlSelf->__PVT__btb_0_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_6_inst = vlSelf->__Vdly__btb_6_inst;
    vlSelf->__PVT__btb_2_exception_type = vlSelf->__Vdly__btb_2_exception_type;
    vlSelf->__PVT__btb_3_pc = vlSelf->__Vdly__btb_3_pc;
    vlSelf->__PVT__btb_1_pre_lookup_value = vlSelf->__Vdly__btb_1_pre_lookup_value;
    vlSelf->__PVT__btb_1_pre_bht = vlSelf->__Vdly__btb_1_pre_bht;
    vlSelf->__PVT__btb_1_pre_pht = vlSelf->__Vdly__btb_1_pre_pht;
    vlSelf->__PVT__btb_1_pre_hashcode = vlSelf->__Vdly__btb_1_pre_hashcode;
    vlSelf->__PVT__btb_1_pre_lookup_data = vlSelf->__Vdly__btb_1_pre_lookup_data;
    vlSelf->__PVT__btb_1_pre_pc_target = vlSelf->__Vdly__btb_1_pre_pc_target;
    vlSelf->__PVT__btb_0_pre_lookup_value = vlSelf->__Vdly__btb_0_pre_lookup_value;
    vlSelf->__PVT__btb_0_pre_bht = vlSelf->__Vdly__btb_0_pre_bht;
    vlSelf->__PVT__btb_0_pre_pht = vlSelf->__Vdly__btb_0_pre_pht;
    vlSelf->__PVT__btb_0_pre_hashcode = vlSelf->__Vdly__btb_0_pre_hashcode;
    vlSelf->__PVT__btb_0_pre_lookup_data = vlSelf->__Vdly__btb_0_pre_lookup_data;
    vlSelf->__PVT__btb_0_pre_pc_target = vlSelf->__Vdly__btb_0_pre_pc_target;
    vlSelf->__PVT__btb_5_inst = vlSelf->__Vdly__btb_5_inst;
    vlSelf->__PVT__btb_1_exception_type = vlSelf->__Vdly__btb_1_exception_type;
    vlSelf->__PVT__btb_0_exception_type = vlSelf->__Vdly__btb_0_exception_type;
    vlSelf->__PVT__btb_2_pc = vlSelf->__Vdly__btb_2_pc;
    vlSelf->__PVT__btb_4_inst = vlSelf->__Vdly__btb_4_inst;
    vlSelf->__PVT__btb_1_pc = vlSelf->__Vdly__btb_1_pc;
    vlSelf->__PVT__btb_0_pc = vlSelf->__Vdly__btb_0_pc;
    vlSelf->__PVT__btb_3_inst = vlSelf->__Vdly__btb_3_inst;
    vlSelf->__PVT__btb_2_inst = vlSelf->__Vdly__btb_2_inst;
    vlSelf->__PVT__btb_1_inst = vlSelf->__Vdly__btb_1_inst;
    vlSelf->__PVT__btb_0_inst = vlSelf->__Vdly__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4\n"); );
    // Body
    vlSelf->__Vdly__btb_14_true_branch_state = vlSelf->__PVT__btb_14_true_branch_state;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_14_pre_decoder_jr;
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = vlSelf->__PVT__btb_14_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_14_pre_decoder_jump = vlSelf->__PVT__btb_14_pre_decoder_jump;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_14_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_true_branch_state = vlSelf->__PVT__btb_13_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = vlSelf->__PVT__btb_13_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = vlSelf->__PVT__btb_13_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = vlSelf->__PVT__btb_13_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_13_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_14_pre_lookup_value = vlSelf->__PVT__btb_14_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_14_pre_bht;
    vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_14_pre_pht;
    vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_14_pre_pc_target;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = vlSelf->__PVT__btb_12_pre_decoder_jr;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = vlSelf->__PVT__btb_12_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = vlSelf->__PVT__btb_12_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_12_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pre_hashcode = vlSelf->__PVT__btb_13_pre_hashcode;
    vlSelf->__Vdly__btb_11_true_branch_state = vlSelf->__PVT__btb_11_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = vlSelf->__PVT__btb_11_pre_decoder_jr;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = vlSelf->__PVT__btb_11_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = vlSelf->__PVT__btb_11_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_pre_bht = vlSelf->__PVT__btb_12_pre_bht;
    vlSelf->__Vdly__btb_12_pre_pht = vlSelf->__PVT__btb_12_pre_pht;
    vlSelf->__Vdly__btb_12_pre_hashcode = vlSelf->__PVT__btb_12_pre_hashcode;
    vlSelf->__Vdly__btb_12_pre_lookup_data = vlSelf->__PVT__btb_12_pre_lookup_data;
    vlSelf->__Vdly__btb_12_pre_pc_target = vlSelf->__PVT__btb_12_pre_pc_target;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = vlSelf->__PVT__btb_10_pre_decoder_jr;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = vlSelf->__PVT__btb_10_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = vlSelf->__PVT__btb_10_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_10_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = vlSelf->__PVT__btb_4_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = vlSelf->__PVT__btb_4_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_4_pre_bht = vlSelf->__PVT__btb_4_pre_bht;
    vlSelf->__Vdly__btb_4_pre_pht = vlSelf->__PVT__btb_4_pre_pht;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = vlSelf->__PVT__btb_2_pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__io_in_pre_decoder_branchD_flag;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT___GEN_415;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jump = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__io_in_pre_decoder_jump;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__btb_15_pre_decoder_jump;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT___GEN_416;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchdata = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__io_in_pre_decoder_branchdata;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT___GEN_417;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jr = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__io_in_pre_decoder_jr;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT___GEN_418;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_true_branch_state = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__io_in_true_branch_state;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__btb_15_true_branch_state;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT___GEN_419;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_true_branch_state = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pc_target = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__io_in_pre_pc_target;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT___GEN_409;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__io_in_pre_pht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT___GEN_412;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_bht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__io_in_pre_bht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT___GEN_413;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_value = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__io_in_pre_lookup_value;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__btb_15_pre_lookup_value;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT___GEN_414;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_hashcode = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_true_branch_state = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pc_target = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_hashcode = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_bht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_bht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6\n"); );
    // Body
    vlSelf->__Vdly__btb_15_true_branch_state = vlSelf->__PVT__btb_15_true_branch_state;
    vlSelf->__Vdly__btb_15_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
    vlSelf->__Vdly__btb_15_pre_decoder_branchdata = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_15_pre_decoder_jump = vlSelf->__PVT__btb_15_pre_decoder_jump;
    vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_15_pre_lookup_value = vlSelf->__PVT__btb_15_pre_lookup_value;
    vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
    vlSelf->__Vdly__btb_15_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
    vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
    vlSelf->__Vdly__btb_15_pre_lookup_data = vlSelf->__PVT__btb_15_pre_lookup_data;
    vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
    vlSelf->__Vdly__btb_15_exception_type = vlSelf->__PVT__btb_15_exception_type;
    vlSelf->__Vdly__btb_15_pc = vlSelf->__PVT__btb_15_pc;
    vlSelf->__Vdly__btb_15_inst = vlSelf->__PVT__btb_15_inst;
    vlSelf->__PVT__btb_4_pre_decoder_jr = vlSelf->__Vdly__btb_4_pre_decoder_jr;
    vlSelf->__PVT__btb_4_pre_decoder_branchdata = vlSelf->__Vdly__btb_4_pre_decoder_branchdata;
    vlSelf->__PVT__btb_6_pc = vlSelf->__Vdly__btb_6_pc;
    vlSelf->__PVT__btb_4_pre_bht = vlSelf->__Vdly__btb_4_pre_bht;
    vlSelf->__PVT__btb_4_pre_pht = vlSelf->__Vdly__btb_4_pre_pht;
    vlSelf->__PVT__btb_4_pre_pc_target = vlSelf->__Vdly__btb_4_pre_pc_target;
    vlSelf->__PVT__btb_3_true_branch_state = vlSelf->__Vdly__btb_3_true_branch_state;
    vlSelf->__PVT__btb_3_pre_decoder_jr = vlSelf->__Vdly__btb_3_pre_decoder_jr;
    vlSelf->__PVT__btb_3_pre_decoder_jump = vlSelf->__Vdly__btb_3_pre_decoder_jump;
    vlSelf->__PVT__btb_3_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_2_pre_decoder_branchdata = vlSelf->__Vdly__btb_2_pre_decoder_branchdata;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
                = vlSelf->__PVT__io_in_pre_decoder_branchD_flag;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                    : (IData)(vlSelf->__PVT___GEN_415));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_jump = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_jump 
                = vlSelf->__PVT__io_in_pre_decoder_jump;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_jump 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                    : (IData)(vlSelf->__PVT___GEN_416));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_branchdata = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchdata 
                = vlSelf->__PVT__io_in_pre_decoder_branchdata;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchdata 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                    : (IData)(vlSelf->__PVT___GEN_417));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_jr = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_jr = vlSelf->__PVT__io_in_pre_decoder_jr;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_jr = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                  : (IData)(vlSelf->__PVT___GEN_418));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_true_branch_state = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_true_branch_state 
                = vlSelf->__PVT__io_in_true_branch_state;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_true_branch_state 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                    : (IData)(vlSelf->__PVT___GEN_419));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_pc_target = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__io_in_pre_pc_target;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_pc_target = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? vlSelf->__PVT__btb_14_pre_pc_target
                  : vlSelf->__PVT___GEN_409);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_lookup_data = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_lookup_data 
                = vlSelf->__PVT__io_in_pre_lookup_data;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_lookup_data 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                    : (IData)(vlSelf->__PVT___GEN_410));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_hashcode = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__io_in_pre_hashcode;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_hashcode = (
                                                   (0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_pht = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_pht = vlSelf->__PVT__io_in_pre_pht;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_pht = ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                               : (IData)(vlSelf->__PVT___GEN_412));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_bht = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__io_in_pre_bht;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_bht = ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                               : (IData)(vlSelf->__PVT___GEN_413));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_lookup_value = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_lookup_value 
                = vlSelf->__PVT__io_in_pre_lookup_value;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_lookup_value 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                    : (IData)(vlSelf->__PVT___GEN_414));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_exception_type = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_exception_type = 0U;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_exception_type = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                  : (IData)(vlSelf->__PVT___GEN_408));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pc = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pc = vlSelf->__PVT__io_in_pc;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pc = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_14_pc
                                          : vlSelf->__PVT___GEN_406);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_inst = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_inst = vlSelf->__PVT__io_in_inst;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_inst = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_14_inst
                                            : vlSelf->__PVT___GEN_407);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8\n"); );
    // Body
    vlSelf->__PVT__btb_13_true_branch_state = vlSelf->__Vdly__btb_13_true_branch_state;
    vlSelf->__PVT__btb_13_pre_decoder_jr = vlSelf->__Vdly__btb_13_pre_decoder_jr;
    vlSelf->__PVT__btb_13_pre_decoder_branchdata = vlSelf->__Vdly__btb_13_pre_decoder_branchdata;
    vlSelf->__PVT__btb_13_pre_decoder_jump = vlSelf->__Vdly__btb_13_pre_decoder_jump;
    vlSelf->__PVT__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_pre_lookup_value = vlSelf->__Vdly__btb_13_pre_lookup_value;
    vlSelf->__PVT__btb_13_pre_bht = vlSelf->__Vdly__btb_13_pre_bht;
    vlSelf->__PVT__btb_13_pre_pht = vlSelf->__Vdly__btb_13_pre_pht;
    vlSelf->__PVT__btb_13_pre_hashcode = vlSelf->__Vdly__btb_13_pre_hashcode;
    vlSelf->__PVT__btb_13_pre_lookup_data = vlSelf->__Vdly__btb_13_pre_lookup_data;
    vlSelf->__PVT__btb_13_pre_pc_target = vlSelf->__Vdly__btb_13_pre_pc_target;
    vlSelf->__PVT__btb_12_true_branch_state = vlSelf->__Vdly__btb_12_true_branch_state;
    vlSelf->__PVT__btb_12_pre_decoder_jr = vlSelf->__Vdly__btb_12_pre_decoder_jr;
    vlSelf->__PVT__btb_12_pre_decoder_branchdata = vlSelf->__Vdly__btb_12_pre_decoder_branchdata;
    vlSelf->__PVT__btb_12_pre_decoder_jump = vlSelf->__Vdly__btb_12_pre_decoder_jump;
    vlSelf->__PVT__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_exception_type = vlSelf->__Vdly__btb_13_exception_type;
    vlSelf->__PVT__btb_12_pre_lookup_value = vlSelf->__Vdly__btb_12_pre_lookup_value;
    vlSelf->__PVT__btb_12_pre_bht = vlSelf->__Vdly__btb_12_pre_bht;
    vlSelf->__PVT__btb_12_pre_pht = vlSelf->__Vdly__btb_12_pre_pht;
    vlSelf->__PVT__btb_12_pre_hashcode = vlSelf->__Vdly__btb_12_pre_hashcode;
    vlSelf->__PVT__btb_12_pre_lookup_data = vlSelf->__Vdly__btb_12_pre_lookup_data;
    vlSelf->__PVT__btb_12_pre_pc_target = vlSelf->__Vdly__btb_12_pre_pc_target;
    vlSelf->__PVT__btb_11_true_branch_state = vlSelf->__Vdly__btb_11_true_branch_state;
    vlSelf->__PVT__btb_11_pre_decoder_jr = vlSelf->__Vdly__btb_11_pre_decoder_jr;
    vlSelf->__PVT__btb_11_pre_decoder_branchdata = vlSelf->__Vdly__btb_11_pre_decoder_branchdata;
    vlSelf->__PVT__btb_11_pre_decoder_jump = vlSelf->__Vdly__btb_11_pre_decoder_jump;
    vlSelf->__PVT__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_12_exception_type = vlSelf->__Vdly__btb_12_exception_type;
    vlSelf->__PVT__btb_13_pc = vlSelf->__Vdly__btb_13_pc;
    vlSelf->__PVT__btb_11_pre_lookup_value = vlSelf->__Vdly__btb_11_pre_lookup_value;
    vlSelf->__PVT__btb_11_pre_bht = vlSelf->__Vdly__btb_11_pre_bht;
    vlSelf->__PVT__btb_11_pre_pht = vlSelf->__Vdly__btb_11_pre_pht;
    vlSelf->__PVT__btb_11_pre_hashcode = vlSelf->__Vdly__btb_11_pre_hashcode;
    vlSelf->__PVT__btb_11_pre_lookup_data = vlSelf->__Vdly__btb_11_pre_lookup_data;
    vlSelf->__PVT__btb_11_pre_pc_target = vlSelf->__Vdly__btb_11_pre_pc_target;
    vlSelf->__PVT__btb_10_true_branch_state = vlSelf->__Vdly__btb_10_true_branch_state;
    vlSelf->__PVT__btb_10_pre_decoder_jr = vlSelf->__Vdly__btb_10_pre_decoder_jr;
    vlSelf->__PVT__btb_10_pre_decoder_branchdata = vlSelf->__Vdly__btb_10_pre_decoder_branchdata;
    vlSelf->__PVT__btb_10_pre_decoder_jump = vlSelf->__Vdly__btb_10_pre_decoder_jump;
    vlSelf->__PVT__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_11_exception_type = vlSelf->__Vdly__btb_11_exception_type;
    vlSelf->__PVT__btb_12_pc = vlSelf->__Vdly__btb_12_pc;
    vlSelf->__PVT__btb_10_pre_lookup_value = vlSelf->__Vdly__btb_10_pre_lookup_value;
    vlSelf->__PVT__btb_10_pre_bht = vlSelf->__Vdly__btb_10_pre_bht;
    vlSelf->__PVT__btb_10_pre_pht = vlSelf->__Vdly__btb_10_pre_pht;
    vlSelf->__PVT__btb_10_pre_hashcode = vlSelf->__Vdly__btb_10_pre_hashcode;
    vlSelf->__PVT__btb_10_pre_lookup_data = vlSelf->__Vdly__btb_10_pre_lookup_data;
    vlSelf->__PVT__btb_10_pre_pc_target = vlSelf->__Vdly__btb_10_pre_pc_target;
    vlSelf->__PVT__btb_9_true_branch_state = vlSelf->__Vdly__btb_9_true_branch_state;
    vlSelf->__PVT__btb_9_pre_decoder_jr = vlSelf->__Vdly__btb_9_pre_decoder_jr;
    vlSelf->__PVT__btb_9_pre_decoder_branchdata = vlSelf->__Vdly__btb_9_pre_decoder_branchdata;
    vlSelf->__PVT__btb_9_pre_decoder_jump = vlSelf->__Vdly__btb_9_pre_decoder_jump;
    vlSelf->__PVT__btb_9_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_10_exception_type = vlSelf->__Vdly__btb_10_exception_type;
    vlSelf->__PVT__btb_11_pc = vlSelf->__Vdly__btb_11_pc;
    vlSelf->__PVT__btb_9_pre_lookup_value = vlSelf->__Vdly__btb_9_pre_lookup_value;
    vlSelf->__PVT__btb_9_pre_bht = vlSelf->__Vdly__btb_9_pre_bht;
    vlSelf->__PVT__btb_9_pre_pht = vlSelf->__Vdly__btb_9_pre_pht;
    vlSelf->__PVT__btb_9_pre_hashcode = vlSelf->__Vdly__btb_9_pre_hashcode;
    vlSelf->__PVT__btb_9_pre_lookup_data = vlSelf->__Vdly__btb_9_pre_lookup_data;
    vlSelf->__PVT__btb_9_pre_pc_target = vlSelf->__Vdly__btb_9_pre_pc_target;
    vlSelf->__PVT__btb_8_true_branch_state = vlSelf->__Vdly__btb_8_true_branch_state;
    vlSelf->__PVT__btb_8_pre_decoder_jr = vlSelf->__Vdly__btb_8_pre_decoder_jr;
    vlSelf->__PVT__btb_8_pre_decoder_branchdata = vlSelf->__Vdly__btb_8_pre_decoder_branchdata;
    vlSelf->__PVT__btb_8_pre_decoder_jump = vlSelf->__Vdly__btb_8_pre_decoder_jump;
    vlSelf->__PVT__btb_8_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_inst = vlSelf->__Vdly__btb_13_inst;
    vlSelf->__PVT__btb_9_exception_type = vlSelf->__Vdly__btb_9_exception_type;
    vlSelf->__PVT__btb_10_pc = vlSelf->__Vdly__btb_10_pc;
    vlSelf->__PVT__btb_8_pre_lookup_value = vlSelf->__Vdly__btb_8_pre_lookup_value;
    vlSelf->__PVT__btb_8_pre_bht = vlSelf->__Vdly__btb_8_pre_bht;
    vlSelf->__PVT__btb_8_pre_pht = vlSelf->__Vdly__btb_8_pre_pht;
    vlSelf->__PVT__btb_8_pre_hashcode = vlSelf->__Vdly__btb_8_pre_hashcode;
    vlSelf->__PVT__btb_8_pre_lookup_data = vlSelf->__Vdly__btb_8_pre_lookup_data;
    vlSelf->__PVT__btb_8_pre_pc_target = vlSelf->__Vdly__btb_8_pre_pc_target;
    vlSelf->__PVT__btb_7_true_branch_state = vlSelf->__Vdly__btb_7_true_branch_state;
    vlSelf->__PVT__btb_7_pre_decoder_jr = vlSelf->__Vdly__btb_7_pre_decoder_jr;
    vlSelf->__PVT__btb_7_pre_decoder_branchdata = vlSelf->__Vdly__btb_7_pre_decoder_branchdata;
    vlSelf->__PVT__btb_7_pre_decoder_jump = vlSelf->__Vdly__btb_7_pre_decoder_jump;
    vlSelf->__PVT__btb_7_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_12_inst = vlSelf->__Vdly__btb_12_inst;
    vlSelf->__PVT__btb_8_exception_type = vlSelf->__Vdly__btb_8_exception_type;
    vlSelf->__PVT__btb_9_pc = vlSelf->__Vdly__btb_9_pc;
    vlSelf->__PVT__btb_7_pre_lookup_value = vlSelf->__Vdly__btb_7_pre_lookup_value;
    vlSelf->__PVT__btb_7_pre_bht = vlSelf->__Vdly__btb_7_pre_bht;
    vlSelf->__PVT__btb_7_pre_pht = vlSelf->__Vdly__btb_7_pre_pht;
    vlSelf->__PVT__btb_7_pre_hashcode = vlSelf->__Vdly__btb_7_pre_hashcode;
    vlSelf->__PVT__btb_7_pre_lookup_data = vlSelf->__Vdly__btb_7_pre_lookup_data;
    vlSelf->__PVT__btb_7_pre_pc_target = vlSelf->__Vdly__btb_7_pre_pc_target;
    vlSelf->__PVT__btb_6_true_branch_state = vlSelf->__Vdly__btb_6_true_branch_state;
    vlSelf->__PVT__btb_6_pre_decoder_jr = vlSelf->__Vdly__btb_6_pre_decoder_jr;
    vlSelf->__PVT__btb_6_pre_decoder_branchdata = vlSelf->__Vdly__btb_6_pre_decoder_branchdata;
    vlSelf->__PVT__btb_6_pre_decoder_jump = vlSelf->__Vdly__btb_6_pre_decoder_jump;
    vlSelf->__PVT__btb_6_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_11_inst = vlSelf->__Vdly__btb_11_inst;
    vlSelf->__PVT__btb_7_exception_type = vlSelf->__Vdly__btb_7_exception_type;
    vlSelf->__PVT__btb_8_pc = vlSelf->__Vdly__btb_8_pc;
    vlSelf->__PVT__btb_6_pre_lookup_value = vlSelf->__Vdly__btb_6_pre_lookup_value;
    vlSelf->__PVT__btb_6_pre_bht = vlSelf->__Vdly__btb_6_pre_bht;
    vlSelf->__PVT__btb_6_pre_pht = vlSelf->__Vdly__btb_6_pre_pht;
    vlSelf->__PVT__btb_6_pre_hashcode = vlSelf->__Vdly__btb_6_pre_hashcode;
    vlSelf->__PVT__btb_6_pre_lookup_data = vlSelf->__Vdly__btb_6_pre_lookup_data;
    vlSelf->__PVT__btb_6_pre_pc_target = vlSelf->__Vdly__btb_6_pre_pc_target;
    vlSelf->__PVT__btb_5_true_branch_state = vlSelf->__Vdly__btb_5_true_branch_state;
    vlSelf->__PVT__btb_5_pre_decoder_jr = vlSelf->__Vdly__btb_5_pre_decoder_jr;
    vlSelf->__PVT__btb_5_pre_decoder_branchdata = vlSelf->__Vdly__btb_5_pre_decoder_branchdata;
    vlSelf->__PVT__btb_5_pre_decoder_jump = vlSelf->__Vdly__btb_5_pre_decoder_jump;
    vlSelf->__PVT__btb_5_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_10_inst = vlSelf->__Vdly__btb_10_inst;
    vlSelf->__PVT__btb_6_exception_type = vlSelf->__Vdly__btb_6_exception_type;
    vlSelf->__PVT__btb_7_pc = vlSelf->__Vdly__btb_7_pc;
    vlSelf->__PVT__btb_5_pre_lookup_value = vlSelf->__Vdly__btb_5_pre_lookup_value;
    vlSelf->__PVT__btb_5_pre_bht = vlSelf->__Vdly__btb_5_pre_bht;
    vlSelf->__PVT__btb_5_pre_pht = vlSelf->__Vdly__btb_5_pre_pht;
    vlSelf->__PVT__btb_5_pre_hashcode = vlSelf->__Vdly__btb_5_pre_hashcode;
    vlSelf->__PVT__btb_5_pre_lookup_data = vlSelf->__Vdly__btb_5_pre_lookup_data;
    vlSelf->__PVT__btb_5_pre_pc_target = vlSelf->__Vdly__btb_5_pre_pc_target;
    vlSelf->__PVT__btb_4_true_branch_state = vlSelf->__Vdly__btb_4_true_branch_state;
    vlSelf->__PVT__btb_4_pre_decoder_jump = vlSelf->__Vdly__btb_4_pre_decoder_jump;
    vlSelf->__PVT__btb_4_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_9_inst = vlSelf->__Vdly__btb_9_inst;
    vlSelf->__PVT__btb_5_exception_type = vlSelf->__Vdly__btb_5_exception_type;
    vlSelf->__PVT__btb_4_pre_hashcode = vlSelf->__Vdly__btb_4_pre_hashcode;
    vlSelf->__PVT__btb_4_pre_lookup_data = vlSelf->__Vdly__btb_4_pre_lookup_data;
    vlSelf->__PVT__btb_8_inst = vlSelf->__Vdly__btb_8_inst;
    vlSelf->__PVT__btb_5_pc = vlSelf->__Vdly__btb_5_pc;
    vlSelf->__PVT__btb_7_inst = vlSelf->__Vdly__btb_7_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9\n"); );
    // Body
    vlSelf->__PVT__btb_15_true_branch_state = vlSelf->__Vdly__btb_15_true_branch_state;
    vlSelf->__PVT__btb_15_pre_decoder_jr = vlSelf->__Vdly__btb_15_pre_decoder_jr;
    vlSelf->__PVT__btb_15_pre_decoder_branchdata = vlSelf->__Vdly__btb_15_pre_decoder_branchdata;
    vlSelf->__PVT__btb_15_pre_decoder_jump = vlSelf->__Vdly__btb_15_pre_decoder_jump;
    vlSelf->__PVT__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_15_pre_lookup_value = vlSelf->__Vdly__btb_15_pre_lookup_value;
    vlSelf->__PVT__btb_15_pre_bht = vlSelf->__Vdly__btb_15_pre_bht;
    vlSelf->__PVT__btb_15_pre_pht = vlSelf->__Vdly__btb_15_pre_pht;
    vlSelf->__PVT__btb_15_pre_hashcode = vlSelf->__Vdly__btb_15_pre_hashcode;
    vlSelf->__PVT__btb_15_pre_lookup_data = vlSelf->__Vdly__btb_15_pre_lookup_data;
    vlSelf->__PVT__btb_15_pre_pc_target = vlSelf->__Vdly__btb_15_pre_pc_target;
    vlSelf->__PVT__btb_14_true_branch_state = vlSelf->__Vdly__btb_14_true_branch_state;
    vlSelf->__PVT__btb_14_pre_decoder_jr = vlSelf->__Vdly__btb_14_pre_decoder_jr;
    vlSelf->__PVT__btb_14_pre_decoder_branchdata = vlSelf->__Vdly__btb_14_pre_decoder_branchdata;
    vlSelf->__PVT__btb_14_pre_decoder_jump = vlSelf->__Vdly__btb_14_pre_decoder_jump;
    vlSelf->__PVT__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_15_exception_type = vlSelf->__Vdly__btb_15_exception_type;
    vlSelf->__PVT__btb_14_pre_lookup_value = vlSelf->__Vdly__btb_14_pre_lookup_value;
    vlSelf->__PVT__btb_14_pre_bht = vlSelf->__Vdly__btb_14_pre_bht;
    vlSelf->__PVT__btb_14_pre_pht = vlSelf->__Vdly__btb_14_pre_pht;
    vlSelf->__PVT__btb_14_pre_hashcode = vlSelf->__Vdly__btb_14_pre_hashcode;
    vlSelf->__PVT__btb_14_pre_lookup_data = vlSelf->__Vdly__btb_14_pre_lookup_data;
    vlSelf->__PVT__btb_14_pre_pc_target = vlSelf->__Vdly__btb_14_pre_pc_target;
    vlSelf->__PVT__btb_14_exception_type = vlSelf->__Vdly__btb_14_exception_type;
    vlSelf->__PVT__btb_15_pc = vlSelf->__Vdly__btb_15_pc;
    vlSelf->__PVT__btb_14_pc = vlSelf->__Vdly__btb_14_pc;
    vlSelf->__PVT__btb_15_inst = vlSelf->__Vdly__btb_15_inst;
    vlSelf->__PVT__btb_14_inst = vlSelf->__Vdly__btb_14_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0\n"); );
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1\n"); );
    // Body
    vlSelf->__Vdly__btb_14_true_branch_state = vlSelf->__PVT__btb_14_true_branch_state;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_14_pre_decoder_jr;
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = vlSelf->__PVT__btb_14_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_14_pre_decoder_jump = vlSelf->__PVT__btb_14_pre_decoder_jump;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_14_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_true_branch_state = vlSelf->__PVT__btb_13_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = vlSelf->__PVT__btb_13_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = vlSelf->__PVT__btb_13_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = vlSelf->__PVT__btb_13_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_13_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_14_pre_lookup_value = vlSelf->__PVT__btb_14_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_14_pre_bht;
    vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_14_pre_pht;
    vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_14_pre_hashcode;
    vlSelf->__Vdly__btb_14_pre_lookup_data = vlSelf->__PVT__btb_14_pre_lookup_data;
    vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_14_pre_pc_target;
    vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_14_exception_type;
    vlSelf->__Vdly__btb_12_true_branch_state = vlSelf->__PVT__btb_12_true_branch_state;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = vlSelf->__PVT__btb_12_pre_decoder_jr;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = vlSelf->__PVT__btb_12_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = vlSelf->__PVT__btb_12_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_12_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pre_lookup_value = vlSelf->__PVT__btb_13_pre_lookup_value;
    vlSelf->__Vdly__btb_13_pre_bht = vlSelf->__PVT__btb_13_pre_bht;
    vlSelf->__Vdly__btb_13_pre_pht = vlSelf->__PVT__btb_13_pre_pht;
    vlSelf->__Vdly__btb_13_pre_hashcode = vlSelf->__PVT__btb_13_pre_hashcode;
    vlSelf->__Vdly__btb_13_pre_lookup_data = vlSelf->__PVT__btb_13_pre_lookup_data;
    vlSelf->__Vdly__btb_13_pre_pc_target = vlSelf->__PVT__btb_13_pre_pc_target;
    vlSelf->__Vdly__btb_13_exception_type = vlSelf->__PVT__btb_13_exception_type;
    vlSelf->__Vdly__btb_11_true_branch_state = vlSelf->__PVT__btb_11_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = vlSelf->__PVT__btb_11_pre_decoder_jr;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = vlSelf->__PVT__btb_11_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = vlSelf->__PVT__btb_11_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_11_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_lookup_value = vlSelf->__PVT__btb_12_pre_lookup_value;
    vlSelf->__Vdly__btb_12_pre_bht = vlSelf->__PVT__btb_12_pre_bht;
    vlSelf->__Vdly__btb_12_pre_pht = vlSelf->__PVT__btb_12_pre_pht;
    vlSelf->__Vdly__btb_12_pre_hashcode = vlSelf->__PVT__btb_12_pre_hashcode;
    vlSelf->__Vdly__btb_12_pre_lookup_data = vlSelf->__PVT__btb_12_pre_lookup_data;
    vlSelf->__Vdly__btb_12_pre_pc_target = vlSelf->__PVT__btb_12_pre_pc_target;
    vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_14_pc;
    vlSelf->__Vdly__btb_12_exception_type = vlSelf->__PVT__btb_12_exception_type;
    vlSelf->__Vdly__btb_10_true_branch_state = vlSelf->__PVT__btb_10_true_branch_state;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = vlSelf->__PVT__btb_10_pre_decoder_jr;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = vlSelf->__PVT__btb_10_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = vlSelf->__PVT__btb_10_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_10_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_11_pre_lookup_value = vlSelf->__PVT__btb_11_pre_lookup_value;
    vlSelf->__Vdly__btb_11_pre_bht = vlSelf->__PVT__btb_11_pre_bht;
    vlSelf->__Vdly__btb_11_pre_pht = vlSelf->__PVT__btb_11_pre_pht;
    vlSelf->__Vdly__btb_11_pre_hashcode = vlSelf->__PVT__btb_11_pre_hashcode;
    vlSelf->__Vdly__btb_11_pre_lookup_data = vlSelf->__PVT__btb_11_pre_lookup_data;
    vlSelf->__Vdly__btb_11_pre_pc_target = vlSelf->__PVT__btb_11_pre_pc_target;
    vlSelf->__Vdly__btb_13_pc = vlSelf->__PVT__btb_13_pc;
    vlSelf->__Vdly__btb_11_exception_type = vlSelf->__PVT__btb_11_exception_type;
    vlSelf->__Vdly__btb_12_pc = vlSelf->__PVT__btb_12_pc;
    vlSelf->__Vdly__btb_9_true_branch_state = vlSelf->__PVT__btb_9_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = vlSelf->__PVT__btb_9_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = vlSelf->__PVT__btb_9_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = vlSelf->__PVT__btb_9_pre_decoder_jump;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_9_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_lookup_value = vlSelf->__PVT__btb_10_pre_lookup_value;
    vlSelf->__Vdly__btb_10_pre_bht = vlSelf->__PVT__btb_10_pre_bht;
    vlSelf->__Vdly__btb_10_pre_pht = vlSelf->__PVT__btb_10_pre_pht;
    vlSelf->__Vdly__btb_10_pre_hashcode = vlSelf->__PVT__btb_10_pre_hashcode;
    vlSelf->__Vdly__btb_10_pre_lookup_data = vlSelf->__PVT__btb_10_pre_lookup_data;
    vlSelf->__Vdly__btb_10_pre_pc_target = vlSelf->__PVT__btb_10_pre_pc_target;
    vlSelf->__Vdly__btb_10_exception_type = vlSelf->__PVT__btb_10_exception_type;
    vlSelf->__Vdly__btb_11_pc = vlSelf->__PVT__btb_11_pc;
    vlSelf->__Vdly__btb_9_pre_lookup_value = vlSelf->__PVT__btb_9_pre_lookup_value;
    vlSelf->__Vdly__btb_9_pre_bht = vlSelf->__PVT__btb_9_pre_bht;
    vlSelf->__Vdly__btb_9_pre_pht = vlSelf->__PVT__btb_9_pre_pht;
    vlSelf->__Vdly__btb_9_pre_hashcode = vlSelf->__PVT__btb_9_pre_hashcode;
    vlSelf->__Vdly__btb_9_pre_lookup_data = vlSelf->__PVT__btb_9_pre_lookup_data;
    vlSelf->__Vdly__btb_9_pre_pc_target = vlSelf->__PVT__btb_9_pre_pc_target;
    vlSelf->__Vdly__btb_8_true_branch_state = vlSelf->__PVT__btb_8_true_branch_state;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = vlSelf->__PVT__btb_8_pre_decoder_jr;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = vlSelf->__PVT__btb_8_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = vlSelf->__PVT__btb_8_pre_decoder_jump;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_8_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_9_exception_type = vlSelf->__PVT__btb_9_exception_type;
    vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_14_inst;
    vlSelf->__Vdly__btb_10_pc = vlSelf->__PVT__btb_10_pc;
    vlSelf->__Vdly__btb_8_pre_lookup_value = vlSelf->__PVT__btb_8_pre_lookup_value;
    vlSelf->__Vdly__btb_8_pre_bht = vlSelf->__PVT__btb_8_pre_bht;
    vlSelf->__Vdly__btb_8_pre_pht = vlSelf->__PVT__btb_8_pre_pht;
    vlSelf->__Vdly__btb_8_pre_hashcode = vlSelf->__PVT__btb_8_pre_hashcode;
    vlSelf->__Vdly__btb_8_pre_lookup_data = vlSelf->__PVT__btb_8_pre_lookup_data;
    vlSelf->__Vdly__btb_8_pre_pc_target = vlSelf->__PVT__btb_8_pre_pc_target;
    vlSelf->__Vdly__btb_7_true_branch_state = vlSelf->__PVT__btb_7_true_branch_state;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = vlSelf->__PVT__btb_7_pre_decoder_jr;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = vlSelf->__PVT__btb_7_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = vlSelf->__PVT__btb_7_pre_decoder_jump;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_7_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_inst = vlSelf->__PVT__btb_13_inst;
    vlSelf->__Vdly__btb_8_exception_type = vlSelf->__PVT__btb_8_exception_type;
    vlSelf->__Vdly__btb_9_pc = vlSelf->__PVT__btb_9_pc;
    vlSelf->__Vdly__btb_12_inst = vlSelf->__PVT__btb_12_inst;
    vlSelf->__Vdly__btb_7_pre_lookup_value = vlSelf->__PVT__btb_7_pre_lookup_value;
    vlSelf->__Vdly__btb_7_pre_bht = vlSelf->__PVT__btb_7_pre_bht;
    vlSelf->__Vdly__btb_7_pre_pht = vlSelf->__PVT__btb_7_pre_pht;
    vlSelf->__Vdly__btb_7_pre_hashcode = vlSelf->__PVT__btb_7_pre_hashcode;
    vlSelf->__Vdly__btb_7_pre_lookup_data = vlSelf->__PVT__btb_7_pre_lookup_data;
    vlSelf->__Vdly__btb_7_pre_pc_target = vlSelf->__PVT__btb_7_pre_pc_target;
    vlSelf->__Vdly__btb_6_true_branch_state = vlSelf->__PVT__btb_6_true_branch_state;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = vlSelf->__PVT__btb_6_pre_decoder_jr;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = vlSelf->__PVT__btb_6_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = vlSelf->__PVT__btb_6_pre_decoder_jump;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_6_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_exception_type = vlSelf->__PVT__btb_7_exception_type;
    vlSelf->__Vdly__btb_8_pc = vlSelf->__PVT__btb_8_pc;
    vlSelf->__Vdly__btb_11_inst = vlSelf->__PVT__btb_11_inst;
    vlSelf->__Vdly__btb_6_pre_lookup_value = vlSelf->__PVT__btb_6_pre_lookup_value;
    vlSelf->__Vdly__btb_6_pre_bht = vlSelf->__PVT__btb_6_pre_bht;
    vlSelf->__Vdly__btb_6_pre_pht = vlSelf->__PVT__btb_6_pre_pht;
    vlSelf->__Vdly__btb_6_pre_hashcode = vlSelf->__PVT__btb_6_pre_hashcode;
    vlSelf->__Vdly__btb_6_pre_lookup_data = vlSelf->__PVT__btb_6_pre_lookup_data;
    vlSelf->__Vdly__btb_6_pre_pc_target = vlSelf->__PVT__btb_6_pre_pc_target;
    vlSelf->__Vdly__btb_5_true_branch_state = vlSelf->__PVT__btb_5_true_branch_state;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = vlSelf->__PVT__btb_5_pre_decoder_jr;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = vlSelf->__PVT__btb_5_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = vlSelf->__PVT__btb_5_pre_decoder_jump;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_5_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_exception_type = vlSelf->__PVT__btb_6_exception_type;
    vlSelf->__Vdly__btb_10_inst = vlSelf->__PVT__btb_10_inst;
    vlSelf->__Vdly__btb_7_pc = vlSelf->__PVT__btb_7_pc;
    vlSelf->__Vdly__btb_5_pre_lookup_value = vlSelf->__PVT__btb_5_pre_lookup_value;
    vlSelf->__Vdly__btb_5_pre_bht = vlSelf->__PVT__btb_5_pre_bht;
    vlSelf->__Vdly__btb_5_pre_pht = vlSelf->__PVT__btb_5_pre_pht;
    vlSelf->__Vdly__btb_5_pre_hashcode = vlSelf->__PVT__btb_5_pre_hashcode;
    vlSelf->__Vdly__btb_5_pre_lookup_data = vlSelf->__PVT__btb_5_pre_lookup_data;
    vlSelf->__Vdly__btb_5_pre_pc_target = vlSelf->__PVT__btb_5_pre_pc_target;
    vlSelf->__Vdly__btb_4_true_branch_state = vlSelf->__PVT__btb_4_true_branch_state;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = vlSelf->__PVT__btb_4_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = vlSelf->__PVT__btb_4_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = vlSelf->__PVT__btb_4_pre_decoder_jump;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_4_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_5_exception_type = vlSelf->__PVT__btb_5_exception_type;
    vlSelf->__Vdly__btb_9_inst = vlSelf->__PVT__btb_9_inst;
    vlSelf->__Vdly__btb_6_pc = vlSelf->__PVT__btb_6_pc;
    vlSelf->__Vdly__btb_4_pre_lookup_value = vlSelf->__PVT__btb_4_pre_lookup_value;
    vlSelf->__Vdly__btb_4_pre_bht = vlSelf->__PVT__btb_4_pre_bht;
    vlSelf->__Vdly__btb_4_pre_pht = vlSelf->__PVT__btb_4_pre_pht;
    vlSelf->__Vdly__btb_4_pre_hashcode = vlSelf->__PVT__btb_4_pre_hashcode;
    vlSelf->__Vdly__btb_4_pre_lookup_data = vlSelf->__PVT__btb_4_pre_lookup_data;
    vlSelf->__Vdly__btb_4_pre_pc_target = vlSelf->__PVT__btb_4_pre_pc_target;
    vlSelf->__Vdly__btb_3_true_branch_state = vlSelf->__PVT__btb_3_true_branch_state;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = vlSelf->__PVT__btb_3_pre_decoder_jr;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = vlSelf->__PVT__btb_3_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = vlSelf->__PVT__btb_3_pre_decoder_jump;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_3_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_8_inst = vlSelf->__PVT__btb_8_inst;
    vlSelf->__Vdly__btb_4_exception_type = vlSelf->__PVT__btb_4_exception_type;
    vlSelf->__Vdly__btb_5_pc = vlSelf->__PVT__btb_5_pc;
    vlSelf->__Vdly__btb_3_pre_lookup_value = vlSelf->__PVT__btb_3_pre_lookup_value;
    vlSelf->__Vdly__btb_3_pre_bht = vlSelf->__PVT__btb_3_pre_bht;
    vlSelf->__Vdly__btb_3_pre_pht = vlSelf->__PVT__btb_3_pre_pht;
    vlSelf->__Vdly__btb_3_pre_hashcode = vlSelf->__PVT__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_3_pre_lookup_data = vlSelf->__PVT__btb_3_pre_lookup_data;
    vlSelf->__Vdly__btb_3_pre_pc_target = vlSelf->__PVT__btb_3_pre_pc_target;
    vlSelf->__Vdly__btb_2_true_branch_state = vlSelf->__PVT__btb_2_true_branch_state;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = vlSelf->__PVT__btb_2_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = vlSelf->__PVT__btb_2_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = vlSelf->__PVT__btb_2_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_2_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_inst = vlSelf->__PVT__btb_7_inst;
    vlSelf->__Vdly__btb_3_exception_type = vlSelf->__PVT__btb_3_exception_type;
    vlSelf->__Vdly__btb_4_pc = vlSelf->__PVT__btb_4_pc;
    vlSelf->__Vdly__btb_2_pre_bht = vlSelf->__PVT__btb_2_pre_bht;
    vlSelf->__Vdly__btb_2_pre_pht = vlSelf->__PVT__btb_2_pre_pht;
    vlSelf->__Vdly__btb_2_pre_hashcode = vlSelf->__PVT__btb_2_pre_hashcode;
    vlSelf->__Vdly__btb_2_pre_lookup_data = vlSelf->__PVT__btb_2_pre_lookup_data;
    vlSelf->__Vdly__btb_2_pre_pc_target = vlSelf->__PVT__btb_2_pre_pc_target;
    vlSelf->__Vdly__btb_1_true_branch_state = vlSelf->__PVT__btb_1_true_branch_state;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = vlSelf->__PVT__btb_1_pre_decoder_jr;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = vlSelf->__PVT__btb_1_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = vlSelf->__PVT__btb_1_pre_decoder_jump;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_1_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_0_true_branch_state = vlSelf->__PVT__btb_0_true_branch_state;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = vlSelf->__PVT__btb_0_pre_decoder_jr;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = vlSelf->__PVT__btb_0_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = vlSelf->__PVT__btb_0_pre_decoder_jump;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_0_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_inst = vlSelf->__PVT__btb_6_inst;
    vlSelf->__Vdly__btb_2_exception_type = vlSelf->__PVT__btb_2_exception_type;
    vlSelf->__Vdly__btb_3_pc = vlSelf->__PVT__btb_3_pc;
    vlSelf->__Vdly__btb_1_pre_lookup_value = vlSelf->__PVT__btb_1_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_bht = vlSelf->__PVT__btb_1_pre_bht;
    vlSelf->__Vdly__btb_1_pre_pht = vlSelf->__PVT__btb_1_pre_pht;
    vlSelf->__Vdly__btb_1_pre_hashcode = vlSelf->__PVT__btb_1_pre_hashcode;
    vlSelf->__Vdly__btb_1_pre_lookup_data = vlSelf->__PVT__btb_1_pre_lookup_data;
    vlSelf->__Vdly__btb_1_pre_pc_target = vlSelf->__PVT__btb_1_pre_pc_target;
    vlSelf->__Vdly__btb_0_pre_lookup_value = vlSelf->__PVT__btb_0_pre_lookup_value;
    vlSelf->__Vdly__btb_0_pre_bht = vlSelf->__PVT__btb_0_pre_bht;
    vlSelf->__Vdly__btb_0_pre_pht = vlSelf->__PVT__btb_0_pre_pht;
    vlSelf->__Vdly__btb_0_pre_hashcode = vlSelf->__PVT__btb_0_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_pc_target = vlSelf->__PVT__btb_0_pre_pc_target;
    vlSelf->__Vdly__btb_5_inst = vlSelf->__PVT__btb_5_inst;
    vlSelf->__Vdly__btb_1_exception_type = vlSelf->__PVT__btb_1_exception_type;
    vlSelf->__Vdly__btb_0_exception_type = vlSelf->__PVT__btb_0_exception_type;
    vlSelf->__Vdly__btb_2_pc = vlSelf->__PVT__btb_2_pc;
    vlSelf->__Vdly__btb_4_inst = vlSelf->__PVT__btb_4_inst;
    vlSelf->__Vdly__btb_1_pc = vlSelf->__PVT__btb_1_pc;
    vlSelf->__Vdly__btb_0_pc = vlSelf->__PVT__btb_0_pc;
    vlSelf->__Vdly__btb_3_inst = vlSelf->__PVT__btb_3_inst;
    vlSelf->__Vdly__btb_2_inst = vlSelf->__PVT__btb_2_inst;
    vlSelf->__Vdly__btb_1_inst = vlSelf->__PVT__btb_1_inst;
    vlSelf->__Vdly__btb_0_inst = vlSelf->__PVT__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__io_in_pre_decoder_branchD_flag;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT___GEN_415;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jump = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__io_in_pre_decoder_jump;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__btb_15_pre_decoder_jump;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT___GEN_416;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchdata = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__io_in_pre_decoder_branchdata;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT___GEN_417;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jr = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__io_in_pre_decoder_jr;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT___GEN_418;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_true_branch_state = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__io_in_true_branch_state;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__btb_15_true_branch_state;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT___GEN_419;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_true_branch_state = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pc_target = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__io_in_pre_pc_target;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT___GEN_409;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_data = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__io_in_pre_lookup_data;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__btb_15_pre_lookup_data;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT___GEN_410;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_hashcode = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__io_in_pre_hashcode;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT___GEN_411;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__io_in_pre_pht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT___GEN_412;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_bht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__io_in_pre_bht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT___GEN_413;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_value = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__io_in_pre_lookup_value;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__btb_15_pre_lookup_value;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT___GEN_414;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_true_branch_state = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_exception_type = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_exception_type = 0U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_15_exception_type;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT___GEN_408;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pc_target = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_hashcode = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_bht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_true_branch_state = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_exception_type = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pc_target = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_hashcode = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_bht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_exception_type = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pc = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__io_in_pc;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_15_pc;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT___GEN_406;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_true_branch_state = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pc_target = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_hashcode = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_bht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_exception_type = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pc = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_true_branch_state = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pc_target = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_hashcode = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_bht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pc = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_exception_type = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pc = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_true_branch_state = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pc_target = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_hashcode = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_bht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_exception_type = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pc = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pc_target = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_hashcode = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_bht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_inst = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__io_in_inst;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_15_inst;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT___GEN_407;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_true_branch_state = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_exception_type = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pc = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_inst = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pc_target = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_hashcode = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_bht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_true_branch_state = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_inst = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_exception_type = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pc = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_inst = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pc_target = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_hashcode = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_bht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_true_branch_state = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_exception_type = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pc = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_inst = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pc_target = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_hashcode = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_bht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_true_branch_state = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_exception_type = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_inst = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pc = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pc_target = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_hashcode = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_bht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_true_branch_state = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_exception_type = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_inst = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pc = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pc_target = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_hashcode = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_bht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_true_branch_state = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_inst = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_exception_type = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pc = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pc_target = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_hashcode = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_bht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_true_branch_state = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_true_branch_state = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_inst = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_exception_type = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pc = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pc_target = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_hashcode = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_bht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pc_target = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_hashcode = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_bht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_inst = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_exception_type = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_exception_type = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pc = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_inst = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pc = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pc = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_inst = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_inst = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_inst = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_inst = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3\n"); );
    // Body
    vlSelf->__PVT__btb_3_pre_decoder_branchdata = vlSelf->__Vdly__btb_3_pre_decoder_branchdata;
    vlSelf->__PVT__btb_4_exception_type = vlSelf->__Vdly__btb_4_exception_type;
    vlSelf->__PVT__btb_3_pre_lookup_value = vlSelf->__Vdly__btb_3_pre_lookup_value;
    vlSelf->__PVT__btb_3_pre_bht = vlSelf->__Vdly__btb_3_pre_bht;
    vlSelf->__PVT__btb_3_pre_pht = vlSelf->__Vdly__btb_3_pre_pht;
    vlSelf->__PVT__btb_3_pre_hashcode = vlSelf->__Vdly__btb_3_pre_hashcode;
    vlSelf->__PVT__btb_3_pre_lookup_data = vlSelf->__Vdly__btb_3_pre_lookup_data;
    vlSelf->__PVT__btb_3_pre_pc_target = vlSelf->__Vdly__btb_3_pre_pc_target;
    vlSelf->__PVT__btb_2_true_branch_state = vlSelf->__Vdly__btb_2_true_branch_state;
    vlSelf->__PVT__btb_2_pre_decoder_jr = vlSelf->__Vdly__btb_2_pre_decoder_jr;
    vlSelf->__PVT__btb_2_pre_decoder_branchdata = vlSelf->__Vdly__btb_2_pre_decoder_branchdata;
    vlSelf->__PVT__btb_2_pre_decoder_jump = vlSelf->__Vdly__btb_2_pre_decoder_jump;
    vlSelf->__PVT__btb_2_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_3_exception_type = vlSelf->__Vdly__btb_3_exception_type;
    vlSelf->__PVT__btb_4_pc = vlSelf->__Vdly__btb_4_pc;
    vlSelf->__PVT__btb_2_pre_bht = vlSelf->__Vdly__btb_2_pre_bht;
    vlSelf->__PVT__btb_2_pre_pht = vlSelf->__Vdly__btb_2_pre_pht;
    vlSelf->__PVT__btb_2_pre_hashcode = vlSelf->__Vdly__btb_2_pre_hashcode;
    vlSelf->__PVT__btb_2_pre_lookup_data = vlSelf->__Vdly__btb_2_pre_lookup_data;
    vlSelf->__PVT__btb_2_pre_pc_target = vlSelf->__Vdly__btb_2_pre_pc_target;
    vlSelf->__PVT__btb_1_true_branch_state = vlSelf->__Vdly__btb_1_true_branch_state;
    vlSelf->__PVT__btb_1_pre_decoder_jr = vlSelf->__Vdly__btb_1_pre_decoder_jr;
    vlSelf->__PVT__btb_1_pre_decoder_branchdata = vlSelf->__Vdly__btb_1_pre_decoder_branchdata;
    vlSelf->__PVT__btb_1_pre_decoder_jump = vlSelf->__Vdly__btb_1_pre_decoder_jump;
    vlSelf->__PVT__btb_1_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_0_true_branch_state = vlSelf->__Vdly__btb_0_true_branch_state;
    vlSelf->__PVT__btb_0_pre_decoder_jr = vlSelf->__Vdly__btb_0_pre_decoder_jr;
    vlSelf->__PVT__btb_0_pre_decoder_branchdata = vlSelf->__Vdly__btb_0_pre_decoder_branchdata;
    vlSelf->__PVT__btb_0_pre_decoder_jump = vlSelf->__Vdly__btb_0_pre_decoder_jump;
    vlSelf->__PVT__btb_0_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_6_inst = vlSelf->__Vdly__btb_6_inst;
    vlSelf->__PVT__btb_2_exception_type = vlSelf->__Vdly__btb_2_exception_type;
    vlSelf->__PVT__btb_3_pc = vlSelf->__Vdly__btb_3_pc;
    vlSelf->__PVT__btb_1_pre_lookup_value = vlSelf->__Vdly__btb_1_pre_lookup_value;
    vlSelf->__PVT__btb_1_pre_bht = vlSelf->__Vdly__btb_1_pre_bht;
    vlSelf->__PVT__btb_1_pre_pht = vlSelf->__Vdly__btb_1_pre_pht;
    vlSelf->__PVT__btb_1_pre_hashcode = vlSelf->__Vdly__btb_1_pre_hashcode;
    vlSelf->__PVT__btb_1_pre_lookup_data = vlSelf->__Vdly__btb_1_pre_lookup_data;
    vlSelf->__PVT__btb_1_pre_pc_target = vlSelf->__Vdly__btb_1_pre_pc_target;
    vlSelf->__PVT__btb_0_pre_lookup_value = vlSelf->__Vdly__btb_0_pre_lookup_value;
    vlSelf->__PVT__btb_0_pre_bht = vlSelf->__Vdly__btb_0_pre_bht;
    vlSelf->__PVT__btb_0_pre_pht = vlSelf->__Vdly__btb_0_pre_pht;
    vlSelf->__PVT__btb_0_pre_hashcode = vlSelf->__Vdly__btb_0_pre_hashcode;
    vlSelf->__PVT__btb_0_pre_pc_target = vlSelf->__Vdly__btb_0_pre_pc_target;
    vlSelf->__PVT__btb_5_inst = vlSelf->__Vdly__btb_5_inst;
    vlSelf->__PVT__btb_1_exception_type = vlSelf->__Vdly__btb_1_exception_type;
    vlSelf->__PVT__btb_0_exception_type = vlSelf->__Vdly__btb_0_exception_type;
    vlSelf->__PVT__btb_2_pc = vlSelf->__Vdly__btb_2_pc;
    vlSelf->__PVT__btb_4_inst = vlSelf->__Vdly__btb_4_inst;
    vlSelf->__PVT__btb_1_pc = vlSelf->__Vdly__btb_1_pc;
    vlSelf->__PVT__btb_0_pc = vlSelf->__Vdly__btb_0_pc;
    vlSelf->__PVT__btb_3_inst = vlSelf->__Vdly__btb_3_inst;
    vlSelf->__PVT__btb_2_inst = vlSelf->__Vdly__btb_2_inst;
    vlSelf->__PVT__btb_1_inst = vlSelf->__Vdly__btb_1_inst;
    vlSelf->__PVT__btb_0_inst = vlSelf->__Vdly__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4\n"); );
    // Body
    vlSelf->__Vdly__btb_2_pre_lookup_value = vlSelf->__PVT__btb_2_pre_lookup_value;
    vlSelf->__Vdly__btb_0_pre_lookup_data = vlSelf->__PVT__btb_0_pre_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6\n"); );
    // Body
    vlSelf->__PVT__btb_12_pre_bht = vlSelf->__Vdly__btb_12_pre_bht;
    vlSelf->__PVT__btb_12_pre_pht = vlSelf->__Vdly__btb_12_pre_pht;
    vlSelf->__PVT__btb_12_pre_hashcode = vlSelf->__Vdly__btb_12_pre_hashcode;
    vlSelf->__PVT__btb_12_pre_lookup_data = vlSelf->__Vdly__btb_12_pre_lookup_data;
    vlSelf->__PVT__btb_12_pre_pc_target = vlSelf->__Vdly__btb_12_pre_pc_target;
    vlSelf->__PVT__btb_11_true_branch_state = vlSelf->__Vdly__btb_11_true_branch_state;
    vlSelf->__PVT__btb_11_pre_decoder_jr = vlSelf->__Vdly__btb_11_pre_decoder_jr;
    vlSelf->__PVT__btb_11_pre_decoder_branchdata = vlSelf->__Vdly__btb_11_pre_decoder_branchdata;
    vlSelf->__PVT__btb_11_pre_decoder_jump = vlSelf->__Vdly__btb_11_pre_decoder_jump;
    vlSelf->__PVT__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_12_exception_type = vlSelf->__Vdly__btb_12_exception_type;
    vlSelf->__PVT__btb_11_pre_lookup_value = vlSelf->__Vdly__btb_11_pre_lookup_value;
    vlSelf->__PVT__btb_11_pre_bht = vlSelf->__Vdly__btb_11_pre_bht;
    vlSelf->__PVT__btb_11_pre_pht = vlSelf->__Vdly__btb_11_pre_pht;
    vlSelf->__PVT__btb_11_pre_hashcode = vlSelf->__Vdly__btb_11_pre_hashcode;
    vlSelf->__PVT__btb_11_pre_lookup_data = vlSelf->__Vdly__btb_11_pre_lookup_data;
    vlSelf->__PVT__btb_11_pre_pc_target = vlSelf->__Vdly__btb_11_pre_pc_target;
    vlSelf->__PVT__btb_10_true_branch_state = vlSelf->__Vdly__btb_10_true_branch_state;
    vlSelf->__PVT__btb_10_pre_decoder_jr = vlSelf->__Vdly__btb_10_pre_decoder_jr;
    vlSelf->__PVT__btb_10_pre_decoder_branchdata = vlSelf->__Vdly__btb_10_pre_decoder_branchdata;
    vlSelf->__PVT__btb_10_pre_decoder_jump = vlSelf->__Vdly__btb_10_pre_decoder_jump;
    vlSelf->__PVT__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_11_exception_type = vlSelf->__Vdly__btb_11_exception_type;
    vlSelf->__PVT__btb_10_pre_lookup_value = vlSelf->__Vdly__btb_10_pre_lookup_value;
    vlSelf->__PVT__btb_10_pre_bht = vlSelf->__Vdly__btb_10_pre_bht;
    vlSelf->__PVT__btb_10_pre_pht = vlSelf->__Vdly__btb_10_pre_pht;
    vlSelf->__PVT__btb_10_pre_hashcode = vlSelf->__Vdly__btb_10_pre_hashcode;
    vlSelf->__PVT__btb_10_pre_lookup_data = vlSelf->__Vdly__btb_10_pre_lookup_data;
    vlSelf->__PVT__btb_10_pre_pc_target = vlSelf->__Vdly__btb_10_pre_pc_target;
    vlSelf->__PVT__btb_9_true_branch_state = vlSelf->__Vdly__btb_9_true_branch_state;
    vlSelf->__PVT__btb_9_pre_decoder_jr = vlSelf->__Vdly__btb_9_pre_decoder_jr;
    vlSelf->__PVT__btb_9_pre_decoder_branchdata = vlSelf->__Vdly__btb_9_pre_decoder_branchdata;
    vlSelf->__PVT__btb_9_pre_decoder_jump = vlSelf->__Vdly__btb_9_pre_decoder_jump;
    vlSelf->__PVT__btb_9_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_10_exception_type = vlSelf->__Vdly__btb_10_exception_type;
    vlSelf->__PVT__btb_9_pre_lookup_value = vlSelf->__Vdly__btb_9_pre_lookup_value;
    vlSelf->__PVT__btb_9_pre_bht = vlSelf->__Vdly__btb_9_pre_bht;
    vlSelf->__PVT__btb_9_pre_pht = vlSelf->__Vdly__btb_9_pre_pht;
    vlSelf->__PVT__btb_9_pre_hashcode = vlSelf->__Vdly__btb_9_pre_hashcode;
    vlSelf->__PVT__btb_9_pre_lookup_data = vlSelf->__Vdly__btb_9_pre_lookup_data;
    vlSelf->__PVT__btb_9_pre_pc_target = vlSelf->__Vdly__btb_9_pre_pc_target;
    vlSelf->__PVT__btb_8_true_branch_state = vlSelf->__Vdly__btb_8_true_branch_state;
    vlSelf->__PVT__btb_8_pre_decoder_jr = vlSelf->__Vdly__btb_8_pre_decoder_jr;
    vlSelf->__PVT__btb_8_pre_decoder_branchdata = vlSelf->__Vdly__btb_8_pre_decoder_branchdata;
    vlSelf->__PVT__btb_8_pre_decoder_jump = vlSelf->__Vdly__btb_8_pre_decoder_jump;
    vlSelf->__PVT__btb_8_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_9_exception_type = vlSelf->__Vdly__btb_9_exception_type;
    vlSelf->__PVT__btb_8_pre_lookup_value = vlSelf->__Vdly__btb_8_pre_lookup_value;
    vlSelf->__PVT__btb_8_pre_bht = vlSelf->__Vdly__btb_8_pre_bht;
    vlSelf->__PVT__btb_8_pre_pht = vlSelf->__Vdly__btb_8_pre_pht;
    vlSelf->__PVT__btb_8_pre_hashcode = vlSelf->__Vdly__btb_8_pre_hashcode;
    vlSelf->__PVT__btb_8_pre_lookup_data = vlSelf->__Vdly__btb_8_pre_lookup_data;
    vlSelf->__PVT__btb_8_pre_pc_target = vlSelf->__Vdly__btb_8_pre_pc_target;
    vlSelf->__PVT__btb_7_true_branch_state = vlSelf->__Vdly__btb_7_true_branch_state;
    vlSelf->__PVT__btb_7_pre_decoder_jr = vlSelf->__Vdly__btb_7_pre_decoder_jr;
    vlSelf->__PVT__btb_7_pre_decoder_branchdata = vlSelf->__Vdly__btb_7_pre_decoder_branchdata;
    vlSelf->__PVT__btb_7_pre_decoder_jump = vlSelf->__Vdly__btb_7_pre_decoder_jump;
    vlSelf->__PVT__btb_7_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_8_exception_type = vlSelf->__Vdly__btb_8_exception_type;
    vlSelf->__PVT__btb_7_pre_lookup_value = vlSelf->__Vdly__btb_7_pre_lookup_value;
    vlSelf->__PVT__btb_7_pre_bht = vlSelf->__Vdly__btb_7_pre_bht;
    vlSelf->__PVT__btb_7_pre_pht = vlSelf->__Vdly__btb_7_pre_pht;
    vlSelf->__PVT__btb_7_pre_hashcode = vlSelf->__Vdly__btb_7_pre_hashcode;
    vlSelf->__PVT__btb_7_pre_lookup_data = vlSelf->__Vdly__btb_7_pre_lookup_data;
    vlSelf->__PVT__btb_7_pre_pc_target = vlSelf->__Vdly__btb_7_pre_pc_target;
    vlSelf->__PVT__btb_6_true_branch_state = vlSelf->__Vdly__btb_6_true_branch_state;
    vlSelf->__PVT__btb_6_pre_decoder_jr = vlSelf->__Vdly__btb_6_pre_decoder_jr;
    vlSelf->__PVT__btb_6_pre_decoder_branchdata = vlSelf->__Vdly__btb_6_pre_decoder_branchdata;
    vlSelf->__PVT__btb_6_pre_decoder_jump = vlSelf->__Vdly__btb_6_pre_decoder_jump;
    vlSelf->__PVT__btb_6_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_7_exception_type = vlSelf->__Vdly__btb_7_exception_type;
    vlSelf->__PVT__btb_6_pre_lookup_value = vlSelf->__Vdly__btb_6_pre_lookup_value;
    vlSelf->__PVT__btb_6_pre_bht = vlSelf->__Vdly__btb_6_pre_bht;
    vlSelf->__PVT__btb_6_pre_pht = vlSelf->__Vdly__btb_6_pre_pht;
    vlSelf->__PVT__btb_6_pre_hashcode = vlSelf->__Vdly__btb_6_pre_hashcode;
    vlSelf->__PVT__btb_6_pre_lookup_data = vlSelf->__Vdly__btb_6_pre_lookup_data;
    vlSelf->__PVT__btb_6_pre_pc_target = vlSelf->__Vdly__btb_6_pre_pc_target;
    vlSelf->__PVT__btb_5_true_branch_state = vlSelf->__Vdly__btb_5_true_branch_state;
    vlSelf->__PVT__btb_5_pre_decoder_jr = vlSelf->__Vdly__btb_5_pre_decoder_jr;
    vlSelf->__PVT__btb_5_pre_decoder_branchdata = vlSelf->__Vdly__btb_5_pre_decoder_branchdata;
    vlSelf->__PVT__btb_5_pre_decoder_jump = vlSelf->__Vdly__btb_5_pre_decoder_jump;
    vlSelf->__PVT__btb_5_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_6_exception_type = vlSelf->__Vdly__btb_6_exception_type;
    vlSelf->__Vdly__btb_15_true_branch_state = vlSelf->__PVT__btb_15_true_branch_state;
    vlSelf->__Vdly__btb_15_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
    vlSelf->__Vdly__btb_15_pre_decoder_branchdata = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_15_pre_decoder_jump = vlSelf->__PVT__btb_15_pre_decoder_jump;
    vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_15_pre_lookup_value = vlSelf->__PVT__btb_15_pre_lookup_value;
    vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
    vlSelf->__Vdly__btb_15_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
    vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
    vlSelf->__Vdly__btb_15_pre_lookup_data = vlSelf->__PVT__btb_15_pre_lookup_data;
    vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
    vlSelf->__Vdly__btb_15_exception_type = vlSelf->__PVT__btb_15_exception_type;
    vlSelf->__Vdly__btb_15_pc = vlSelf->__PVT__btb_15_pc;
    vlSelf->__Vdly__btb_15_inst = vlSelf->__PVT__btb_15_inst;
    vlSelf->__PVT__btb_5_pre_lookup_value = vlSelf->__Vdly__btb_5_pre_lookup_value;
    vlSelf->__PVT__btb_5_pre_bht = vlSelf->__Vdly__btb_5_pre_bht;
    vlSelf->__PVT__btb_5_pre_pht = vlSelf->__Vdly__btb_5_pre_pht;
    vlSelf->__PVT__btb_5_pre_hashcode = vlSelf->__Vdly__btb_5_pre_hashcode;
    vlSelf->__PVT__btb_5_pre_lookup_data = vlSelf->__Vdly__btb_5_pre_lookup_data;
    vlSelf->__PVT__btb_5_pre_pc_target = vlSelf->__Vdly__btb_5_pre_pc_target;
    vlSelf->__PVT__btb_4_true_branch_state = vlSelf->__Vdly__btb_4_true_branch_state;
    vlSelf->__PVT__btb_4_pre_decoder_jr = vlSelf->__Vdly__btb_4_pre_decoder_jr;
    vlSelf->__PVT__btb_4_pre_decoder_branchdata = vlSelf->__Vdly__btb_4_pre_decoder_branchdata;
    vlSelf->__PVT__btb_4_pre_decoder_jump = vlSelf->__Vdly__btb_4_pre_decoder_jump;
    vlSelf->__PVT__btb_4_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_5_exception_type = vlSelf->__Vdly__btb_5_exception_type;
    vlSelf->__PVT__btb_6_pc = vlSelf->__Vdly__btb_6_pc;
    vlSelf->__PVT__btb_4_pre_lookup_value = vlSelf->__Vdly__btb_4_pre_lookup_value;
    vlSelf->__PVT__btb_4_pre_bht = vlSelf->__Vdly__btb_4_pre_bht;
    vlSelf->__PVT__btb_4_pre_pht = vlSelf->__Vdly__btb_4_pre_pht;
    vlSelf->__PVT__btb_4_pre_hashcode = vlSelf->__Vdly__btb_4_pre_hashcode;
    vlSelf->__PVT__btb_4_pre_lookup_data = vlSelf->__Vdly__btb_4_pre_lookup_data;
    vlSelf->__PVT__btb_4_pre_pc_target = vlSelf->__Vdly__btb_4_pre_pc_target;
    vlSelf->__PVT__btb_3_true_branch_state = vlSelf->__Vdly__btb_3_true_branch_state;
    vlSelf->__PVT__btb_3_pre_decoder_jr = vlSelf->__Vdly__btb_3_pre_decoder_jr;
    vlSelf->__PVT__btb_3_pre_decoder_jump = vlSelf->__Vdly__btb_3_pre_decoder_jump;
    vlSelf->__PVT__btb_3_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_2_pre_lookup_value = vlSelf->__Vdly__btb_2_pre_lookup_value;
    vlSelf->__PVT__btb_0_pre_lookup_data = vlSelf->__Vdly__btb_0_pre_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
                = vlSelf->__PVT__io_in_pre_decoder_branchD_flag;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                    : (IData)(vlSelf->__PVT___GEN_415));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_jump = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_jump 
                = vlSelf->__PVT__io_in_pre_decoder_jump;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_jump 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                    : (IData)(vlSelf->__PVT___GEN_416));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_branchdata = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchdata 
                = vlSelf->__PVT__io_in_pre_decoder_branchdata;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_branchdata 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                    : (IData)(vlSelf->__PVT___GEN_417));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_decoder_jr = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_decoder_jr = vlSelf->__PVT__io_in_pre_decoder_jr;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_decoder_jr = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                  : (IData)(vlSelf->__PVT___GEN_418));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_true_branch_state = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_true_branch_state 
                = vlSelf->__PVT__io_in_true_branch_state;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_true_branch_state 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                    : (IData)(vlSelf->__PVT___GEN_419));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_pc_target = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__io_in_pre_pc_target;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_pc_target = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? vlSelf->__PVT__btb_14_pre_pc_target
                  : vlSelf->__PVT___GEN_409);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_lookup_data = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_lookup_data 
                = vlSelf->__PVT__io_in_pre_lookup_data;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_lookup_data 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                    : (IData)(vlSelf->__PVT___GEN_410));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_hashcode = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__io_in_pre_hashcode;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_hashcode = (
                                                   (0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_pht = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_pht = vlSelf->__PVT__io_in_pre_pht;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_pht = ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                               : (IData)(vlSelf->__PVT___GEN_412));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_bht = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__io_in_pre_bht;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_bht = ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                               : (IData)(vlSelf->__PVT___GEN_413));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pre_lookup_value = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pre_lookup_value 
                = vlSelf->__PVT__io_in_pre_lookup_value;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pre_lookup_value 
                = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                    : (IData)(vlSelf->__PVT___GEN_414));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_exception_type = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_exception_type = 0U;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_exception_type = 
                ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                  : (IData)(vlSelf->__PVT___GEN_408));
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_pc = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_pc = vlSelf->__PVT__io_in_pc;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_pc = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_14_pc
                                          : vlSelf->__PVT___GEN_406);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_15_inst = 0U;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_15_inst = vlSelf->__PVT__io_in_inst;
        } else if ((0xfU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_15_inst = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_14_inst
                                            : vlSelf->__PVT___GEN_407);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8\n"); );
    // Body
    vlSelf->__PVT__btb_13_true_branch_state = vlSelf->__Vdly__btb_13_true_branch_state;
    vlSelf->__PVT__btb_13_pre_decoder_jr = vlSelf->__Vdly__btb_13_pre_decoder_jr;
    vlSelf->__PVT__btb_13_pre_decoder_branchdata = vlSelf->__Vdly__btb_13_pre_decoder_branchdata;
    vlSelf->__PVT__btb_13_pre_decoder_jump = vlSelf->__Vdly__btb_13_pre_decoder_jump;
    vlSelf->__PVT__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_pre_lookup_value = vlSelf->__Vdly__btb_13_pre_lookup_value;
    vlSelf->__PVT__btb_13_pre_bht = vlSelf->__Vdly__btb_13_pre_bht;
    vlSelf->__PVT__btb_13_pre_pht = vlSelf->__Vdly__btb_13_pre_pht;
    vlSelf->__PVT__btb_13_pre_hashcode = vlSelf->__Vdly__btb_13_pre_hashcode;
    vlSelf->__PVT__btb_13_pre_lookup_data = vlSelf->__Vdly__btb_13_pre_lookup_data;
    vlSelf->__PVT__btb_13_pre_pc_target = vlSelf->__Vdly__btb_13_pre_pc_target;
    vlSelf->__PVT__btb_12_true_branch_state = vlSelf->__Vdly__btb_12_true_branch_state;
    vlSelf->__PVT__btb_12_pre_decoder_jr = vlSelf->__Vdly__btb_12_pre_decoder_jr;
    vlSelf->__PVT__btb_12_pre_decoder_branchdata = vlSelf->__Vdly__btb_12_pre_decoder_branchdata;
    vlSelf->__PVT__btb_12_pre_decoder_jump = vlSelf->__Vdly__btb_12_pre_decoder_jump;
    vlSelf->__PVT__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_exception_type = vlSelf->__Vdly__btb_13_exception_type;
    vlSelf->__PVT__btb_12_pre_lookup_value = vlSelf->__Vdly__btb_12_pre_lookup_value;
    vlSelf->__PVT__btb_13_pc = vlSelf->__Vdly__btb_13_pc;
    vlSelf->__PVT__btb_12_pc = vlSelf->__Vdly__btb_12_pc;
    vlSelf->__PVT__btb_11_pc = vlSelf->__Vdly__btb_11_pc;
    vlSelf->__PVT__btb_13_inst = vlSelf->__Vdly__btb_13_inst;
    vlSelf->__PVT__btb_10_pc = vlSelf->__Vdly__btb_10_pc;
    vlSelf->__PVT__btb_12_inst = vlSelf->__Vdly__btb_12_inst;
    vlSelf->__PVT__btb_9_pc = vlSelf->__Vdly__btb_9_pc;
    vlSelf->__PVT__btb_11_inst = vlSelf->__Vdly__btb_11_inst;
    vlSelf->__PVT__btb_8_pc = vlSelf->__Vdly__btb_8_pc;
    vlSelf->__PVT__btb_10_inst = vlSelf->__Vdly__btb_10_inst;
    vlSelf->__PVT__btb_7_pc = vlSelf->__Vdly__btb_7_pc;
    vlSelf->__PVT__btb_9_inst = vlSelf->__Vdly__btb_9_inst;
    vlSelf->__PVT__btb_8_inst = vlSelf->__Vdly__btb_8_inst;
    vlSelf->__PVT__btb_5_pc = vlSelf->__Vdly__btb_5_pc;
    vlSelf->__PVT__btb_7_inst = vlSelf->__Vdly__btb_7_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9\n"); );
    // Body
    vlSelf->__PVT__btb_15_true_branch_state = vlSelf->__Vdly__btb_15_true_branch_state;
    vlSelf->__PVT__btb_15_pre_decoder_jr = vlSelf->__Vdly__btb_15_pre_decoder_jr;
    vlSelf->__PVT__btb_15_pre_decoder_branchdata = vlSelf->__Vdly__btb_15_pre_decoder_branchdata;
    vlSelf->__PVT__btb_15_pre_decoder_jump = vlSelf->__Vdly__btb_15_pre_decoder_jump;
    vlSelf->__PVT__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_15_pre_lookup_value = vlSelf->__Vdly__btb_15_pre_lookup_value;
    vlSelf->__PVT__btb_15_pre_bht = vlSelf->__Vdly__btb_15_pre_bht;
    vlSelf->__PVT__btb_15_pre_pht = vlSelf->__Vdly__btb_15_pre_pht;
    vlSelf->__PVT__btb_15_pre_hashcode = vlSelf->__Vdly__btb_15_pre_hashcode;
    vlSelf->__PVT__btb_15_pre_lookup_data = vlSelf->__Vdly__btb_15_pre_lookup_data;
    vlSelf->__PVT__btb_15_pre_pc_target = vlSelf->__Vdly__btb_15_pre_pc_target;
    vlSelf->__PVT__btb_14_true_branch_state = vlSelf->__Vdly__btb_14_true_branch_state;
    vlSelf->__PVT__btb_14_pre_decoder_jr = vlSelf->__Vdly__btb_14_pre_decoder_jr;
    vlSelf->__PVT__btb_14_pre_decoder_branchdata = vlSelf->__Vdly__btb_14_pre_decoder_branchdata;
    vlSelf->__PVT__btb_14_pre_decoder_jump = vlSelf->__Vdly__btb_14_pre_decoder_jump;
    vlSelf->__PVT__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_15_exception_type = vlSelf->__Vdly__btb_15_exception_type;
    vlSelf->__PVT__btb_14_pre_lookup_value = vlSelf->__Vdly__btb_14_pre_lookup_value;
    vlSelf->__PVT__btb_14_pre_bht = vlSelf->__Vdly__btb_14_pre_bht;
    vlSelf->__PVT__btb_14_pre_pht = vlSelf->__Vdly__btb_14_pre_pht;
    vlSelf->__PVT__btb_14_pre_hashcode = vlSelf->__Vdly__btb_14_pre_hashcode;
    vlSelf->__PVT__btb_14_pre_lookup_data = vlSelf->__Vdly__btb_14_pre_lookup_data;
    vlSelf->__PVT__btb_14_pre_pc_target = vlSelf->__Vdly__btb_14_pre_pc_target;
    vlSelf->__PVT__btb_14_exception_type = vlSelf->__Vdly__btb_14_exception_type;
    vlSelf->__PVT__btb_15_pc = vlSelf->__Vdly__btb_15_pc;
    vlSelf->__PVT__btb_14_pc = vlSelf->__Vdly__btb_14_pc;
    vlSelf->__PVT__btb_15_inst = vlSelf->__Vdly__btb_15_inst;
    vlSelf->__PVT__btb_14_inst = vlSelf->__Vdly__btb_14_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__0\n"); );
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__1\n"); );
    // Body
    vlSelf->__Vdly__btb_14_true_branch_state = vlSelf->__PVT__btb_14_true_branch_state;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_14_pre_decoder_jr;
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = vlSelf->__PVT__btb_14_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_14_pre_decoder_jump = vlSelf->__PVT__btb_14_pre_decoder_jump;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_14_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_true_branch_state = vlSelf->__PVT__btb_13_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = vlSelf->__PVT__btb_13_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = vlSelf->__PVT__btb_13_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = vlSelf->__PVT__btb_13_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_13_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_14_pre_lookup_value = vlSelf->__PVT__btb_14_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_14_pre_bht;
    vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_14_pre_pht;
    vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_14_pre_hashcode;
    vlSelf->__Vdly__btb_14_pre_lookup_data = vlSelf->__PVT__btb_14_pre_lookup_data;
    vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_14_pre_pc_target;
    vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_14_exception_type;
    vlSelf->__Vdly__btb_12_true_branch_state = vlSelf->__PVT__btb_12_true_branch_state;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = vlSelf->__PVT__btb_12_pre_decoder_jr;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = vlSelf->__PVT__btb_12_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = vlSelf->__PVT__btb_12_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_12_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pre_lookup_value = vlSelf->__PVT__btb_13_pre_lookup_value;
    vlSelf->__Vdly__btb_13_pre_bht = vlSelf->__PVT__btb_13_pre_bht;
    vlSelf->__Vdly__btb_13_pre_pht = vlSelf->__PVT__btb_13_pre_pht;
    vlSelf->__Vdly__btb_13_pre_hashcode = vlSelf->__PVT__btb_13_pre_hashcode;
    vlSelf->__Vdly__btb_13_pre_lookup_data = vlSelf->__PVT__btb_13_pre_lookup_data;
    vlSelf->__Vdly__btb_13_pre_pc_target = vlSelf->__PVT__btb_13_pre_pc_target;
    vlSelf->__Vdly__btb_13_exception_type = vlSelf->__PVT__btb_13_exception_type;
    vlSelf->__Vdly__btb_11_true_branch_state = vlSelf->__PVT__btb_11_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = vlSelf->__PVT__btb_11_pre_decoder_jr;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = vlSelf->__PVT__btb_11_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = vlSelf->__PVT__btb_11_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_11_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_lookup_value = vlSelf->__PVT__btb_12_pre_lookup_value;
    vlSelf->__Vdly__btb_12_pre_bht = vlSelf->__PVT__btb_12_pre_bht;
    vlSelf->__Vdly__btb_12_pre_pht = vlSelf->__PVT__btb_12_pre_pht;
    vlSelf->__Vdly__btb_12_pre_hashcode = vlSelf->__PVT__btb_12_pre_hashcode;
    vlSelf->__Vdly__btb_12_pre_lookup_data = vlSelf->__PVT__btb_12_pre_lookup_data;
    vlSelf->__Vdly__btb_12_pre_pc_target = vlSelf->__PVT__btb_12_pre_pc_target;
    vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_14_pc;
    vlSelf->__Vdly__btb_12_exception_type = vlSelf->__PVT__btb_12_exception_type;
    vlSelf->__Vdly__btb_10_true_branch_state = vlSelf->__PVT__btb_10_true_branch_state;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = vlSelf->__PVT__btb_10_pre_decoder_jr;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = vlSelf->__PVT__btb_10_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = vlSelf->__PVT__btb_10_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_10_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_11_pre_lookup_value = vlSelf->__PVT__btb_11_pre_lookup_value;
    vlSelf->__Vdly__btb_11_pre_bht = vlSelf->__PVT__btb_11_pre_bht;
    vlSelf->__Vdly__btb_11_pre_pht = vlSelf->__PVT__btb_11_pre_pht;
    vlSelf->__Vdly__btb_11_pre_hashcode = vlSelf->__PVT__btb_11_pre_hashcode;
    vlSelf->__Vdly__btb_11_pre_lookup_data = vlSelf->__PVT__btb_11_pre_lookup_data;
    vlSelf->__Vdly__btb_11_pre_pc_target = vlSelf->__PVT__btb_11_pre_pc_target;
    vlSelf->__Vdly__btb_13_pc = vlSelf->__PVT__btb_13_pc;
    vlSelf->__Vdly__btb_11_exception_type = vlSelf->__PVT__btb_11_exception_type;
    vlSelf->__Vdly__btb_12_pc = vlSelf->__PVT__btb_12_pc;
    vlSelf->__Vdly__btb_9_true_branch_state = vlSelf->__PVT__btb_9_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = vlSelf->__PVT__btb_9_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = vlSelf->__PVT__btb_9_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = vlSelf->__PVT__btb_9_pre_decoder_jump;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_9_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_lookup_value = vlSelf->__PVT__btb_10_pre_lookup_value;
    vlSelf->__Vdly__btb_10_pre_bht = vlSelf->__PVT__btb_10_pre_bht;
    vlSelf->__Vdly__btb_10_pre_pht = vlSelf->__PVT__btb_10_pre_pht;
    vlSelf->__Vdly__btb_10_pre_hashcode = vlSelf->__PVT__btb_10_pre_hashcode;
    vlSelf->__Vdly__btb_10_pre_lookup_data = vlSelf->__PVT__btb_10_pre_lookup_data;
    vlSelf->__Vdly__btb_10_pre_pc_target = vlSelf->__PVT__btb_10_pre_pc_target;
    vlSelf->__Vdly__btb_10_exception_type = vlSelf->__PVT__btb_10_exception_type;
    vlSelf->__Vdly__btb_11_pc = vlSelf->__PVT__btb_11_pc;
    vlSelf->__Vdly__btb_9_pre_lookup_value = vlSelf->__PVT__btb_9_pre_lookup_value;
    vlSelf->__Vdly__btb_9_pre_bht = vlSelf->__PVT__btb_9_pre_bht;
    vlSelf->__Vdly__btb_9_pre_pht = vlSelf->__PVT__btb_9_pre_pht;
    vlSelf->__Vdly__btb_9_pre_hashcode = vlSelf->__PVT__btb_9_pre_hashcode;
    vlSelf->__Vdly__btb_9_pre_lookup_data = vlSelf->__PVT__btb_9_pre_lookup_data;
    vlSelf->__Vdly__btb_9_pre_pc_target = vlSelf->__PVT__btb_9_pre_pc_target;
    vlSelf->__Vdly__btb_8_true_branch_state = vlSelf->__PVT__btb_8_true_branch_state;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = vlSelf->__PVT__btb_8_pre_decoder_jr;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = vlSelf->__PVT__btb_8_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = vlSelf->__PVT__btb_8_pre_decoder_jump;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_8_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_9_exception_type = vlSelf->__PVT__btb_9_exception_type;
    vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_14_inst;
    vlSelf->__Vdly__btb_10_pc = vlSelf->__PVT__btb_10_pc;
    vlSelf->__Vdly__btb_8_pre_lookup_value = vlSelf->__PVT__btb_8_pre_lookup_value;
    vlSelf->__Vdly__btb_8_pre_bht = vlSelf->__PVT__btb_8_pre_bht;
    vlSelf->__Vdly__btb_8_pre_pht = vlSelf->__PVT__btb_8_pre_pht;
    vlSelf->__Vdly__btb_8_pre_hashcode = vlSelf->__PVT__btb_8_pre_hashcode;
    vlSelf->__Vdly__btb_8_pre_lookup_data = vlSelf->__PVT__btb_8_pre_lookup_data;
    vlSelf->__Vdly__btb_8_pre_pc_target = vlSelf->__PVT__btb_8_pre_pc_target;
    vlSelf->__Vdly__btb_7_true_branch_state = vlSelf->__PVT__btb_7_true_branch_state;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = vlSelf->__PVT__btb_7_pre_decoder_jr;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = vlSelf->__PVT__btb_7_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = vlSelf->__PVT__btb_7_pre_decoder_jump;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_7_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_inst = vlSelf->__PVT__btb_13_inst;
    vlSelf->__Vdly__btb_8_exception_type = vlSelf->__PVT__btb_8_exception_type;
    vlSelf->__Vdly__btb_9_pc = vlSelf->__PVT__btb_9_pc;
    vlSelf->__Vdly__btb_12_inst = vlSelf->__PVT__btb_12_inst;
    vlSelf->__Vdly__btb_7_pre_lookup_value = vlSelf->__PVT__btb_7_pre_lookup_value;
    vlSelf->__Vdly__btb_7_pre_bht = vlSelf->__PVT__btb_7_pre_bht;
    vlSelf->__Vdly__btb_7_pre_pht = vlSelf->__PVT__btb_7_pre_pht;
    vlSelf->__Vdly__btb_7_pre_hashcode = vlSelf->__PVT__btb_7_pre_hashcode;
    vlSelf->__Vdly__btb_7_pre_lookup_data = vlSelf->__PVT__btb_7_pre_lookup_data;
    vlSelf->__Vdly__btb_7_pre_pc_target = vlSelf->__PVT__btb_7_pre_pc_target;
    vlSelf->__Vdly__btb_6_true_branch_state = vlSelf->__PVT__btb_6_true_branch_state;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = vlSelf->__PVT__btb_6_pre_decoder_jr;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = vlSelf->__PVT__btb_6_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = vlSelf->__PVT__btb_6_pre_decoder_jump;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_6_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_exception_type = vlSelf->__PVT__btb_7_exception_type;
    vlSelf->__Vdly__btb_8_pc = vlSelf->__PVT__btb_8_pc;
    vlSelf->__Vdly__btb_11_inst = vlSelf->__PVT__btb_11_inst;
    vlSelf->__Vdly__btb_6_pre_lookup_value = vlSelf->__PVT__btb_6_pre_lookup_value;
    vlSelf->__Vdly__btb_6_pre_bht = vlSelf->__PVT__btb_6_pre_bht;
    vlSelf->__Vdly__btb_6_pre_pht = vlSelf->__PVT__btb_6_pre_pht;
    vlSelf->__Vdly__btb_6_pre_hashcode = vlSelf->__PVT__btb_6_pre_hashcode;
    vlSelf->__Vdly__btb_6_pre_lookup_data = vlSelf->__PVT__btb_6_pre_lookup_data;
    vlSelf->__Vdly__btb_6_pre_pc_target = vlSelf->__PVT__btb_6_pre_pc_target;
    vlSelf->__Vdly__btb_5_true_branch_state = vlSelf->__PVT__btb_5_true_branch_state;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = vlSelf->__PVT__btb_5_pre_decoder_jr;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = vlSelf->__PVT__btb_5_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = vlSelf->__PVT__btb_5_pre_decoder_jump;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_5_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_exception_type = vlSelf->__PVT__btb_6_exception_type;
    vlSelf->__Vdly__btb_10_inst = vlSelf->__PVT__btb_10_inst;
    vlSelf->__Vdly__btb_7_pc = vlSelf->__PVT__btb_7_pc;
    vlSelf->__Vdly__btb_5_pre_lookup_value = vlSelf->__PVT__btb_5_pre_lookup_value;
    vlSelf->__Vdly__btb_5_pre_bht = vlSelf->__PVT__btb_5_pre_bht;
    vlSelf->__Vdly__btb_5_pre_pht = vlSelf->__PVT__btb_5_pre_pht;
    vlSelf->__Vdly__btb_5_pre_hashcode = vlSelf->__PVT__btb_5_pre_hashcode;
    vlSelf->__Vdly__btb_5_pre_lookup_data = vlSelf->__PVT__btb_5_pre_lookup_data;
    vlSelf->__Vdly__btb_5_pre_pc_target = vlSelf->__PVT__btb_5_pre_pc_target;
    vlSelf->__Vdly__btb_4_true_branch_state = vlSelf->__PVT__btb_4_true_branch_state;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = vlSelf->__PVT__btb_4_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = vlSelf->__PVT__btb_4_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = vlSelf->__PVT__btb_4_pre_decoder_jump;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_4_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_5_exception_type = vlSelf->__PVT__btb_5_exception_type;
    vlSelf->__Vdly__btb_9_inst = vlSelf->__PVT__btb_9_inst;
    vlSelf->__Vdly__btb_6_pc = vlSelf->__PVT__btb_6_pc;
    vlSelf->__Vdly__btb_4_pre_lookup_value = vlSelf->__PVT__btb_4_pre_lookup_value;
    vlSelf->__Vdly__btb_4_pre_bht = vlSelf->__PVT__btb_4_pre_bht;
    vlSelf->__Vdly__btb_4_pre_pht = vlSelf->__PVT__btb_4_pre_pht;
    vlSelf->__Vdly__btb_4_pre_hashcode = vlSelf->__PVT__btb_4_pre_hashcode;
    vlSelf->__Vdly__btb_4_pre_lookup_data = vlSelf->__PVT__btb_4_pre_lookup_data;
    vlSelf->__Vdly__btb_4_pre_pc_target = vlSelf->__PVT__btb_4_pre_pc_target;
    vlSelf->__Vdly__btb_3_true_branch_state = vlSelf->__PVT__btb_3_true_branch_state;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = vlSelf->__PVT__btb_3_pre_decoder_jr;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = vlSelf->__PVT__btb_3_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = vlSelf->__PVT__btb_3_pre_decoder_jump;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_3_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_4_exception_type = vlSelf->__PVT__btb_4_exception_type;
    vlSelf->__Vdly__btb_8_inst = vlSelf->__PVT__btb_8_inst;
    vlSelf->__Vdly__btb_5_pc = vlSelf->__PVT__btb_5_pc;
    vlSelf->__Vdly__btb_3_pre_lookup_value = vlSelf->__PVT__btb_3_pre_lookup_value;
    vlSelf->__Vdly__btb_3_pre_bht = vlSelf->__PVT__btb_3_pre_bht;
    vlSelf->__Vdly__btb_3_pre_pht = vlSelf->__PVT__btb_3_pre_pht;
    vlSelf->__Vdly__btb_3_pre_hashcode = vlSelf->__PVT__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_3_pre_lookup_data = vlSelf->__PVT__btb_3_pre_lookup_data;
    vlSelf->__Vdly__btb_3_pre_pc_target = vlSelf->__PVT__btb_3_pre_pc_target;
    vlSelf->__Vdly__btb_2_true_branch_state = vlSelf->__PVT__btb_2_true_branch_state;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = vlSelf->__PVT__btb_2_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = vlSelf->__PVT__btb_2_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = vlSelf->__PVT__btb_2_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_2_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_inst = vlSelf->__PVT__btb_7_inst;
    vlSelf->__Vdly__btb_3_exception_type = vlSelf->__PVT__btb_3_exception_type;
    vlSelf->__Vdly__btb_4_pc = vlSelf->__PVT__btb_4_pc;
    vlSelf->__Vdly__btb_2_pre_lookup_value = vlSelf->__PVT__btb_2_pre_lookup_value;
    vlSelf->__Vdly__btb_2_pre_bht = vlSelf->__PVT__btb_2_pre_bht;
    vlSelf->__Vdly__btb_2_pre_pht = vlSelf->__PVT__btb_2_pre_pht;
    vlSelf->__Vdly__btb_2_pre_hashcode = vlSelf->__PVT__btb_2_pre_hashcode;
    vlSelf->__Vdly__btb_2_pre_lookup_data = vlSelf->__PVT__btb_2_pre_lookup_data;
    vlSelf->__Vdly__btb_2_pre_pc_target = vlSelf->__PVT__btb_2_pre_pc_target;
    vlSelf->__Vdly__btb_1_true_branch_state = vlSelf->__PVT__btb_1_true_branch_state;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = vlSelf->__PVT__btb_1_pre_decoder_jr;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = vlSelf->__PVT__btb_1_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = vlSelf->__PVT__btb_1_pre_decoder_jump;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_1_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_0_true_branch_state = vlSelf->__PVT__btb_0_true_branch_state;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = vlSelf->__PVT__btb_0_pre_decoder_jr;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = vlSelf->__PVT__btb_0_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = vlSelf->__PVT__btb_0_pre_decoder_jump;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_0_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_inst = vlSelf->__PVT__btb_6_inst;
    vlSelf->__Vdly__btb_2_exception_type = vlSelf->__PVT__btb_2_exception_type;
    vlSelf->__Vdly__btb_3_pc = vlSelf->__PVT__btb_3_pc;
    vlSelf->__Vdly__btb_1_pre_lookup_value = vlSelf->__PVT__btb_1_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_bht = vlSelf->__PVT__btb_1_pre_bht;
    vlSelf->__Vdly__btb_1_pre_pht = vlSelf->__PVT__btb_1_pre_pht;
    vlSelf->__Vdly__btb_1_pre_hashcode = vlSelf->__PVT__btb_1_pre_hashcode;
    vlSelf->__Vdly__btb_1_pre_lookup_data = vlSelf->__PVT__btb_1_pre_lookup_data;
    vlSelf->__Vdly__btb_1_pre_pc_target = vlSelf->__PVT__btb_1_pre_pc_target;
    vlSelf->__Vdly__btb_0_pre_lookup_value = vlSelf->__PVT__btb_0_pre_lookup_value;
    vlSelf->__Vdly__btb_0_pre_bht = vlSelf->__PVT__btb_0_pre_bht;
    vlSelf->__Vdly__btb_0_pre_pht = vlSelf->__PVT__btb_0_pre_pht;
    vlSelf->__Vdly__btb_0_pre_hashcode = vlSelf->__PVT__btb_0_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_lookup_data = vlSelf->__PVT__btb_0_pre_lookup_data;
    vlSelf->__Vdly__btb_0_pre_pc_target = vlSelf->__PVT__btb_0_pre_pc_target;
    vlSelf->__Vdly__btb_5_inst = vlSelf->__PVT__btb_5_inst;
    vlSelf->__Vdly__btb_1_exception_type = vlSelf->__PVT__btb_1_exception_type;
    vlSelf->__Vdly__btb_0_exception_type = vlSelf->__PVT__btb_0_exception_type;
    vlSelf->__Vdly__btb_2_pc = vlSelf->__PVT__btb_2_pc;
    vlSelf->__Vdly__btb_4_inst = vlSelf->__PVT__btb_4_inst;
    vlSelf->__Vdly__btb_1_pc = vlSelf->__PVT__btb_1_pc;
    vlSelf->__Vdly__btb_0_pc = vlSelf->__PVT__btb_0_pc;
    vlSelf->__Vdly__btb_3_inst = vlSelf->__PVT__btb_3_inst;
    vlSelf->__Vdly__btb_2_inst = vlSelf->__PVT__btb_2_inst;
    vlSelf->__Vdly__btb_1_inst = vlSelf->__PVT__btb_1_inst;
    vlSelf->__Vdly__btb_0_inst = vlSelf->__PVT__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2__2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__io_in_pre_decoder_branchD_flag;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
                = vlSelf->__PVT___GEN_415;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jump = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__io_in_pre_decoder_jump;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT__btb_15_pre_decoder_jump;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jump 
                = vlSelf->__PVT___GEN_416;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_branchdata = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__io_in_pre_decoder_branchdata;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_branchdata 
                = vlSelf->__PVT___GEN_417;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_decoder_jr = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__io_in_pre_decoder_jr;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT___GEN_418;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_true_branch_state = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__io_in_true_branch_state;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT__btb_15_true_branch_state;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_true_branch_state 
                = vlSelf->__PVT___GEN_419;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_true_branch_state = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pc_target = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__io_in_pre_pc_target;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT___GEN_409;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_data = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__io_in_pre_lookup_data;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT__btb_15_pre_lookup_data;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_data 
                = vlSelf->__PVT___GEN_410;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_hashcode = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__io_in_pre_hashcode;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT___GEN_411;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_pht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__io_in_pre_pht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT___GEN_412;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_bht = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__io_in_pre_bht;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT___GEN_413;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pre_lookup_value = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__io_in_pre_lookup_value;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT__btb_15_pre_lookup_value;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pre_lookup_value 
                = vlSelf->__PVT___GEN_414;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_true_branch_state = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_exception_type = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_exception_type = 0U;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_15_exception_type;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT___GEN_408;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pc_target = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_hashcode = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_pht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_bht = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_true_branch_state = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_exception_type = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pc_target = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_hashcode = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_pht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_bht = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_exception_type = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_pc = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__io_in_pc;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_15_pc;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT___GEN_406;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                      : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                    : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_true_branch_state = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_true_branch_state = 
            ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
              : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                  ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                  : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pc_target = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_hashcode = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_pht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_bht = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_exception_type = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_pc = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_true_branch_state = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pc_target = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                 ? vlSelf->__PVT__io_in_pre_pc_target
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? vlSelf->__PVT__btb_15_pre_pc_target
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? vlSelf->__PVT__btb_14_pre_pc_target
                                                   : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                     : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_hashcode = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                                ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                     : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_pht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                   : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_bht = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                           ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                           : ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                   : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                      : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_pc = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_exception_type = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                  ? 0U
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                    : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_pc = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_true_branch_state = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pc_target = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_hashcode = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_pht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_bht = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_exception_type = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_pc = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_pc = ((IData)(vlSelf->__PVT__io_write)
                                      ? vlSelf->__PVT__io_in_pc
                                      : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                          ? vlSelf->__PVT__btb_15_pc
                                          : ((0xeU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? vlSelf->__PVT__btb_14_pc
                                              : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pc_target = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_hashcode = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_pht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_bht = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_14_inst = 0U;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__io_in_inst;
        } else if ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_15_inst;
        } else if ((0xeU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT___GEN_407;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_true_branch_state = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_exception_type = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_pc = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_13_inst = 0U;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_13_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pc_target = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_hashcode = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_pht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_bht = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_true_branch_state = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_12_inst = 0U;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_12_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_exception_type = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_pc = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_11_inst = 0U;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_11_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pc_target = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_hashcode = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_pht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_bht = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_true_branch_state = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_exception_type = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_pc = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_10_inst = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_10_inst = ((IData)(vlSelf->__PVT__io_write)
                                        ? vlSelf->__PVT__io_in_inst
                                        : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                            ? vlSelf->__PVT__btb_15_inst
                                            : ((0xeU 
                                                == (IData)(vlSelf->__PVT__io_aw_addr))
                                                ? vlSelf->__PVT__btb_14_inst
                                                : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pc_target = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_hashcode = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_pht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_bht = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_true_branch_state = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_exception_type = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_9_inst = 0U;
    } else if ((9U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_9_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_pc = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pc_target = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_hashcode = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_pht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_bht = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_true_branch_state = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_exception_type = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_8_inst = 0U;
    } else if ((8U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_8_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_pc = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pc_target = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_hashcode = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_pht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_bht = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_true_branch_state = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_exception_type = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_7_inst = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_7_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_pc = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pc_target = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_hashcode = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_pht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_bht = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_true_branch_state = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchD_flag)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                        : (IData)(vlSelf->__PVT___GEN_415))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jump = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jump)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                                                     : (IData)(vlSelf->__PVT___GEN_416))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_branchdata 
            = ((IData)(vlSelf->__PVT__io_write) ? (IData)(vlSelf->__PVT__io_in_pre_decoder_branchdata)
                : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                    ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
                    : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                        ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                        : (IData)(vlSelf->__PVT___GEN_417))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_decoder_jr = ((IData)(vlSelf->__PVT__io_write)
                                                 ? (IData)(vlSelf->__PVT__io_in_pre_decoder_jr)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                                                   : (IData)(vlSelf->__PVT___GEN_418))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_true_branch_state = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_true_branch_state = ((IData)(vlSelf->__PVT__io_write)
                                                    ? (IData)(vlSelf->__PVT__io_in_true_branch_state)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_15_true_branch_state)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->__PVT__io_aw_addr))
                                                      ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                                                      : (IData)(vlSelf->__PVT___GEN_419))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_6_inst = 0U;
    } else if ((6U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_6_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_exception_type = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_pc = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pc_target = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_hashcode = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_pht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_bht = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pc_target = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pc_target = ((IData)(vlSelf->__PVT__io_write)
                                                ? vlSelf->__PVT__io_in_pre_pc_target
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? vlSelf->__PVT__btb_15_pre_pc_target
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? vlSelf->__PVT__btb_14_pre_pc_target
                                                     : vlSelf->__PVT___GEN_409)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_data = ((IData)(vlSelf->__PVT__io_write)
                                                  ? (IData)(vlSelf->__PVT__io_in_pre_lookup_data)
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_data)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_data)
                                                    : (IData)(vlSelf->__PVT___GEN_410))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_hashcode = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_hashcode = ((IData)(vlSelf->__PVT__io_write)
                                               ? (IData)(vlSelf->__PVT__io_in_pre_hashcode)
                                               : ((0xfU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_15_pre_hashcode)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_14_pre_hashcode)
                                                    : (IData)(vlSelf->__PVT___GEN_411))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_pht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_pht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_pht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_pht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_pht)
                                                  : (IData)(vlSelf->__PVT___GEN_412))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_bht = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_bht = ((IData)(vlSelf->__PVT__io_write)
                                          ? (IData)(vlSelf->__PVT__io_in_pre_bht)
                                          : ((0xfU 
                                              == (IData)(vlSelf->__PVT__io_aw_addr))
                                              ? (IData)(vlSelf->__PVT__btb_15_pre_bht)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_14_pre_bht)
                                                  : (IData)(vlSelf->__PVT___GEN_413))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pre_lookup_value = ((IData)(vlSelf->__PVT__io_write)
                                                   ? (IData)(vlSelf->__PVT__io_in_pre_lookup_value)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->__PVT__io_aw_addr))
                                                    ? (IData)(vlSelf->__PVT__btb_15_pre_lookup_value)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__io_aw_addr))
                                                     ? (IData)(vlSelf->__PVT__btb_14_pre_lookup_value)
                                                     : (IData)(vlSelf->__PVT___GEN_414))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_5_inst = 0U;
    } else if ((5U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_5_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_exception_type = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_exception_type = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_exception_type = ((IData)(vlSelf->__PVT__io_write)
                                                 ? 0U
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->__PVT__io_aw_addr))
                                                  ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->__PVT__io_aw_addr))
                                                   ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                                   : (IData)(vlSelf->__PVT___GEN_408))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_pc = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_4_inst = 0U;
    } else if ((4U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_4_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_pc = 0ULL;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_pc = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_pc = ((IData)(vlSelf->__PVT__io_write)
                                     ? vlSelf->__PVT__io_in_pc
                                     : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                         ? vlSelf->__PVT__btb_15_pc
                                         : ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                                             ? vlSelf->__PVT__btb_14_pc
                                             : vlSelf->__PVT___GEN_406)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_3_inst = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_3_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_2_inst = 0U;
    } else if ((2U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_2_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_0_inst = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_0_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_1_inst = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__io_aw_addr))) {
        vlSelf->__Vdly__btb_1_inst = ((IData)(vlSelf->__PVT__io_write)
                                       ? vlSelf->__PVT__io_in_inst
                                       : ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                                           ? vlSelf->__PVT__btb_15_inst
                                           : ((0xeU 
                                               == (IData)(vlSelf->__PVT__io_aw_addr))
                                               ? vlSelf->__PVT__btb_14_inst
                                               : vlSelf->__PVT___GEN_407)));
    }
}
