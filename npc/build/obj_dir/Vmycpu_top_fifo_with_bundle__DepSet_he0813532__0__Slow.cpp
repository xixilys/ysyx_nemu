// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_fifo_with_bundle.h"

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0\n"); );
    // Body
    vlSelf->__PVT___io_empty_T_1 = ((IData)(vlSelf->__PVT__write_length_points) 
                                    == (IData)(vlSelf->__PVT__read_length_points));
    vlSelf->__PVT___fifo_banks_3_write_T_1 = (3U == (IData)(vlSelf->__PVT__write_banks_points));
    vlSelf->__PVT___io_full_T_7 = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__write_length_points)));
    vlSelf->__PVT___read_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__read_banks_points));
    vlSelf->__PVT___write_length_points_T_1 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__write_banks_points));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr 
        = vlSelf->__PVT__write_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr 
        = vlSelf->__PVT__read_length_points;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_hashcode 
        = vlSelf->__PVT__io_write_in_0_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_bht 
        = vlSelf->__PVT__io_write_in_0_pre_bht;
    vlSelf->__PVT___io_full_T_12 = (((IData)(vlSelf->__PVT___io_full_T_7) 
                                     == (IData)(vlSelf->__PVT__read_length_points)) 
                                    & ((IData)(vlSelf->__PVT___fifo_banks_3_write_T_1) 
                                       & (0U == (IData)(vlSelf->__PVT__read_banks_points))));
    vlSelf->__PVT___io_full_T_3 = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT___write_length_points_T_1)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_bht;
    vlSelf->__PVT__io_full = ((IData)(vlSelf->__PVT___io_empty_T_1)
                               ? ((IData)(vlSelf->__PVT___io_full_T_3) 
                                  == (IData)(vlSelf->__PVT___read_length_points_T_1))
                               : (IData)(vlSelf->__PVT___io_full_T_12));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_exception_type;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_out_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_exception_type;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_exception_type;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_bht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_hashcode;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_lookup_data;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_exception_type;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_0_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_0_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_0_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_0_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_0_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_0_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_0_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_0_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_pc;
    vlSelf->__PVT__fifo_banks_0_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_out_inst;
    vlSelf->__PVT__fifo_banks_1_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_1_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_1_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_1_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_1_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_1_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_1_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_1_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_pc;
    vlSelf->__PVT__fifo_banks_1_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_out_inst;
    vlSelf->__PVT__fifo_banks_2_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_2_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_2_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_2_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_2_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_2_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_2_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_2_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_pc;
    vlSelf->__PVT__fifo_banks_2_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_out_inst;
    vlSelf->__PVT__fifo_banks_3_out_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_true_branch_state;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jr;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchdata;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_jump;
    vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_decoder_branchD_flag;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_value;
    vlSelf->__PVT__fifo_banks_3_out_pre_bht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_bht;
    vlSelf->__PVT__fifo_banks_3_out_pre_pht = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pht;
    vlSelf->__PVT__fifo_banks_3_out_pre_hashcode = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_hashcode;
    vlSelf->__PVT__fifo_banks_3_out_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_lookup_data;
    vlSelf->__PVT__fifo_banks_3_out_pre_pc_target = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pre_pc_target;
    vlSelf->__PVT__fifo_banks_3_out_exception_type 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_exception_type;
    vlSelf->__PVT__fifo_banks_3_out_pc = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_pc;
    vlSelf->__PVT__fifo_banks_3_out_inst = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst;
    vlSelf->__PVT___GEN_27 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_true_branch_state)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_true_branch_state));
    vlSelf->__PVT___GEN_26 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jr));
    vlSelf->__PVT___GEN_25 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchdata));
    vlSelf->__PVT___GEN_24 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_jump));
    vlSelf->__PVT___GEN_23 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_22 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_lookup_value));
    vlSelf->__PVT___GEN_21 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_bht)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_bht));
    vlSelf->__PVT___GEN_20 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_pht)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_pht));
    vlSelf->__PVT___GEN_19 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_hashcode));
    vlSelf->__PVT___GEN_18 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_pre_lookup_data));
    vlSelf->__PVT___GEN_17 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_pre_pc_target
                               : vlSelf->__PVT__fifo_banks_0_out_pre_pc_target);
    vlSelf->__PVT___GEN_16 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_1_out_exception_type)
                               : (IData)(vlSelf->__PVT__fifo_banks_0_out_exception_type));
    vlSelf->__PVT___GEN_14 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_pc
                               : vlSelf->__PVT__fifo_banks_0_out_pc);
    vlSelf->__PVT___GEN_15 = ((1U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_1_out_inst
                               : vlSelf->__PVT__fifo_banks_0_out_inst);
    vlSelf->__PVT___GEN_41 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_40 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_39 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_38 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_37 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_36 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_35 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_pht)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_33 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_32 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_31 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_pre_pc_target
                               : vlSelf->__PVT___GEN_17);
    vlSelf->__PVT___GEN_30 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_2_out_exception_type)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_28 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_pc
                               : vlSelf->__PVT___GEN_14);
    vlSelf->__PVT___GEN_29 = ((2U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_2_out_inst
                               : vlSelf->__PVT___GEN_15);
    vlSelf->__PVT___GEN_55 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_54 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_53 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_52 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_51 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_50 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_49 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_48 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_pht)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_47 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_hashcode)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_46 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_pre_lookup_data)
                               : (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT___GEN_45 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_pre_pc_target
                               : vlSelf->__PVT___GEN_31);
    vlSelf->__PVT___GEN_44 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? (IData)(vlSelf->__PVT__fifo_banks_3_out_exception_type)
                               : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT___GEN_42 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_pc
                               : vlSelf->__PVT___GEN_28);
    vlSelf->__PVT___GEN_43 = ((3U == (IData)(vlSelf->__PVT__read_banks_points))
                               ? vlSelf->__PVT__fifo_banks_3_out_inst
                               : vlSelf->__PVT___GEN_29);
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2\n"); );
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
    vlSelf->__PVT___GEN_56 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__io_write_en));
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst 
        = vlSelf->__PVT__io_write_in_0_inst;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jump;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr 
        = vlSelf->__PVT__io_write_in_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_write;
    vlSelf->__PVT___write_length_points_T_3 = (7U & 
                                               ((IData)(vlSelf->__PVT___write_length_points_T_1) 
                                                + (IData)(vlSelf->__PVT___GEN_56)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_inst 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_inst 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_inst 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_inst 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchD_flag 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jump 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchdata 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jr;
    vlSelf->__PVT___GEN_57 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___write_length_points_T_3), 2U)));
    vlSelf->__PVT___write_length_points_T_7 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__write_length_points) 
                                                  + (IData)(vlSelf->__PVT___GEN_57)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__4(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target 
        = vlSelf->__PVT__io_write_in_0_pre_pc_target;
    vlSelf->__PVT___read_banks_points_T_2 = (3U & ((IData)(vlSelf->__PVT__read_banks_points) 
                                                   + (IData)(vlSelf->__PVT__io_read_en)));
    vlSelf->__PVT___GEN_58 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__io_read_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_pc_target 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_pc_target 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_pc_target 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_pc_target 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target;
    vlSelf->__PVT___read_length_points_T_3 = (7U & 
                                              ((IData)(vlSelf->__PVT___read_length_points_T_1) 
                                               + (IData)(vlSelf->__PVT___GEN_58)));
    vlSelf->__PVT___GEN_59 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___read_length_points_T_3), 2U)));
    vlSelf->__PVT___read_length_points_T_7 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__read_length_points) 
                                                 + (IData)(vlSelf->__PVT___GEN_59)));
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value 
        = vlSelf->__PVT__io_write_in_0_pre_lookup_value;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht 
        = vlSelf->__PVT__io_write_in_0_pre_pht;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state 
        = vlSelf->__PVT__io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_value 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_pht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_pht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_pht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_pht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_true_branch_state 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state;
}
