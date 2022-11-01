// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_fifo_with_bundle.h"

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___eval_initial__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___eval_initial__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle\n"); );
}

VL_ATTR_COLD void Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__3(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___stl_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__3\n"); );
    // Body
    vlSelf->__PVT___write_banks_points_T = ((IData)(vlSelf->__PVT__io_point_flush) 
                                            | (IData)(vlSelf->__PVT__io_point_write_en));
    vlSelf->__PVT__io_empty = ((((IData)(vlSelf->__PVT__write_banks_points) 
                                 == (IData)(vlSelf->__PVT__read_banks_points)) 
                                & ((IData)(vlSelf->__PVT__write_length_points) 
                                   == (IData)(vlSelf->__PVT__read_length_points))) 
                               | (IData)(vlSelf->__PVT__io_point_write_en));
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
