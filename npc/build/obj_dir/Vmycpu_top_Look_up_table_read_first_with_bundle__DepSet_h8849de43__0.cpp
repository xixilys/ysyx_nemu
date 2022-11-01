// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_with_bundle.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0\n"); );
    // Body
    vlSelf->__Vdly__btb_14_true_branch_state = vlSelf->__PVT__btb_14_true_branch_state;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_14_pre_decoder_jr;
    vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_14_pre_hashcode;
    vlSelf->__Vdly__btb_14_pre_lookup_data = vlSelf->__PVT__btb_14_pre_lookup_data;
    vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_14_pre_pc_target;
    vlSelf->__Vdly__btb_13_true_branch_state = vlSelf->__PVT__btb_13_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = vlSelf->__PVT__btb_13_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = vlSelf->__PVT__btb_13_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_true_branch_state = vlSelf->__PVT__btb_12_true_branch_state;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = vlSelf->__PVT__btb_12_pre_decoder_jr;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = vlSelf->__PVT__btb_12_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_13_pre_hashcode = vlSelf->__PVT__btb_13_pre_hashcode;
    vlSelf->__Vdly__btb_13_pre_lookup_data = vlSelf->__PVT__btb_13_pre_lookup_data;
    vlSelf->__Vdly__btb_13_pre_pc_target = vlSelf->__PVT__btb_13_pre_pc_target;
    vlSelf->__Vdly__btb_11_true_branch_state = vlSelf->__PVT__btb_11_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = vlSelf->__PVT__btb_11_pre_decoder_jr;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = vlSelf->__PVT__btb_11_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_pre_lookup_value = vlSelf->__PVT__btb_12_pre_lookup_value;
    vlSelf->__Vdly__btb_12_pre_bht = vlSelf->__PVT__btb_12_pre_bht;
    vlSelf->__Vdly__btb_10_true_branch_state = vlSelf->__PVT__btb_10_true_branch_state;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = vlSelf->__PVT__btb_10_pre_decoder_jr;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = vlSelf->__PVT__btb_10_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_pre_lookup_value = vlSelf->__PVT__btb_11_pre_lookup_value;
    vlSelf->__Vdly__btb_11_pre_bht = vlSelf->__PVT__btb_11_pre_bht;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = vlSelf->__PVT__btb_9_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = vlSelf->__PVT__btb_9_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_lookup_value = vlSelf->__PVT__btb_10_pre_lookup_value;
    vlSelf->__Vdly__btb_10_pre_bht = vlSelf->__PVT__btb_10_pre_bht;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = vlSelf->__PVT__btb_8_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_lookup_value = vlSelf->__PVT__btb_9_pre_lookup_value;
    vlSelf->__Vdly__btb_9_pre_bht = vlSelf->__PVT__btb_9_pre_bht;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = vlSelf->__PVT__btb_7_pre_decoder_jr;
    vlSelf->__Vdly__btb_8_pre_lookup_value = vlSelf->__PVT__btb_8_pre_lookup_value;
    vlSelf->__Vdly__btb_8_pre_bht = vlSelf->__PVT__btb_8_pre_bht;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = vlSelf->__PVT__btb_6_pre_decoder_jr;
    vlSelf->__Vdly__btb_7_pre_lookup_value = vlSelf->__PVT__btb_7_pre_lookup_value;
    vlSelf->__Vdly__btb_7_pre_bht = vlSelf->__PVT__btb_7_pre_bht;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = vlSelf->__PVT__btb_5_pre_decoder_jr;
    vlSelf->__Vdly__btb_6_pre_lookup_value = vlSelf->__PVT__btb_6_pre_lookup_value;
    vlSelf->__Vdly__btb_6_pre_bht = vlSelf->__PVT__btb_6_pre_bht;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = vlSelf->__PVT__btb_4_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = vlSelf->__PVT__btb_4_pre_decoder_jump;
    vlSelf->__Vdly__btb_5_pre_lookup_value = vlSelf->__PVT__btb_5_pre_lookup_value;
    vlSelf->__Vdly__btb_5_pre_bht = vlSelf->__PVT__btb_5_pre_bht;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = vlSelf->__PVT__btb_3_pre_decoder_jr;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = vlSelf->__PVT__btb_3_pre_decoder_jump;
    vlSelf->__Vdly__btb_4_pre_hashcode = vlSelf->__PVT__btb_4_pre_hashcode;
    vlSelf->__Vdly__btb_4_pre_lookup_data = vlSelf->__PVT__btb_4_pre_lookup_data;
    vlSelf->__Vdly__btb_4_pre_pc_target = vlSelf->__PVT__btb_4_pre_pc_target;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = vlSelf->__PVT__btb_2_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = vlSelf->__PVT__btb_2_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = vlSelf->__PVT__btb_2_pre_decoder_jump;
    vlSelf->__Vdly__btb_3_pre_hashcode = vlSelf->__PVT__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_3_pre_lookup_data = vlSelf->__PVT__btb_3_pre_lookup_data;
    vlSelf->__Vdly__btb_3_pre_pc_target = vlSelf->__PVT__btb_3_pre_pc_target;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = vlSelf->__PVT__btb_1_pre_decoder_jr;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = vlSelf->__PVT__btb_1_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = vlSelf->__PVT__btb_1_pre_decoder_jump;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = vlSelf->__PVT__btb_0_pre_decoder_jr;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = vlSelf->__PVT__btb_0_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = vlSelf->__PVT__btb_0_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_lookup_value = vlSelf->__PVT__btb_2_pre_lookup_value;
    vlSelf->__Vdly__btb_2_pre_hashcode = vlSelf->__PVT__btb_2_pre_hashcode;
    vlSelf->__Vdly__btb_2_pre_lookup_data = vlSelf->__PVT__btb_2_pre_lookup_data;
    vlSelf->__Vdly__btb_2_pre_pc_target = vlSelf->__PVT__btb_2_pre_pc_target;
    vlSelf->__Vdly__btb_1_pre_lookup_value = vlSelf->__PVT__btb_1_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_bht = vlSelf->__PVT__btb_1_pre_bht;
    vlSelf->__Vdly__btb_1_pre_lookup_data = vlSelf->__PVT__btb_1_pre_lookup_data;
    vlSelf->__Vdly__btb_1_pre_pc_target = vlSelf->__PVT__btb_1_pre_pc_target;
    vlSelf->__Vdly__btb_0_pre_lookup_value = vlSelf->__PVT__btb_0_pre_lookup_value;
    vlSelf->__Vdly__btb_0_pre_hashcode = vlSelf->__PVT__btb_0_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_lookup_data = vlSelf->__PVT__btb_0_pre_lookup_data;
    vlSelf->__Vdly__btb_0_pre_pc_target = vlSelf->__PVT__btb_0_pre_pc_target;
    vlSelf->__Vdly__btb_1_pc = vlSelf->__PVT__btb_1_pc;
    vlSelf->__Vdly__btb_0_pc = vlSelf->__PVT__btb_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2\n"); );
    // Body
    vlSelf->__PVT__btb_3_pre_decoder_jr = vlSelf->__Vdly__btb_3_pre_decoder_jr;
    vlSelf->__PVT__btb_3_pre_decoder_jump = vlSelf->__Vdly__btb_3_pre_decoder_jump;
    vlSelf->__PVT__btb_2_pre_decoder_jr = vlSelf->__Vdly__btb_2_pre_decoder_jr;
    vlSelf->__PVT__btb_2_pre_decoder_branchdata = vlSelf->__Vdly__btb_2_pre_decoder_branchdata;
    vlSelf->__PVT__btb_2_pre_decoder_jump = vlSelf->__Vdly__btb_2_pre_decoder_jump;
    vlSelf->__PVT__btb_2_pre_lookup_value = vlSelf->__Vdly__btb_2_pre_lookup_value;
    vlSelf->__PVT__btb_2_pre_hashcode = vlSelf->__Vdly__btb_2_pre_hashcode;
    vlSelf->__PVT__btb_2_pre_lookup_data = vlSelf->__Vdly__btb_2_pre_lookup_data;
    vlSelf->__PVT__btb_2_pre_pc_target = vlSelf->__Vdly__btb_2_pre_pc_target;
    vlSelf->__PVT__btb_1_pre_decoder_jr = vlSelf->__Vdly__btb_1_pre_decoder_jr;
    vlSelf->__PVT__btb_1_pre_decoder_branchdata = vlSelf->__Vdly__btb_1_pre_decoder_branchdata;
    vlSelf->__PVT__btb_1_pre_decoder_jump = vlSelf->__Vdly__btb_1_pre_decoder_jump;
    vlSelf->__PVT__btb_0_pre_decoder_jr = vlSelf->__Vdly__btb_0_pre_decoder_jr;
    vlSelf->__PVT__btb_0_pre_decoder_branchdata = vlSelf->__Vdly__btb_0_pre_decoder_branchdata;
    vlSelf->__PVT__btb_0_pre_decoder_jump = vlSelf->__Vdly__btb_0_pre_decoder_jump;
    vlSelf->__PVT__btb_1_pre_lookup_value = vlSelf->__Vdly__btb_1_pre_lookup_value;
    vlSelf->__PVT__btb_1_pre_bht = vlSelf->__Vdly__btb_1_pre_bht;
    vlSelf->__PVT__btb_1_pre_lookup_data = vlSelf->__Vdly__btb_1_pre_lookup_data;
    vlSelf->__PVT__btb_1_pre_pc_target = vlSelf->__Vdly__btb_1_pre_pc_target;
    vlSelf->__PVT__btb_0_pre_lookup_value = vlSelf->__Vdly__btb_0_pre_lookup_value;
    vlSelf->__PVT__btb_0_pre_hashcode = vlSelf->__Vdly__btb_0_pre_hashcode;
    vlSelf->__PVT__btb_0_pre_lookup_data = vlSelf->__Vdly__btb_0_pre_lookup_data;
    vlSelf->__PVT__btb_0_pre_pc_target = vlSelf->__Vdly__btb_0_pre_pc_target;
    vlSelf->__PVT__btb_1_pc = vlSelf->__Vdly__btb_1_pc;
    vlSelf->__PVT__btb_0_pc = vlSelf->__Vdly__btb_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3\n"); );
    // Body
    vlSelf->__Vdly__btb_14_pre_decoder_jump = vlSelf->__PVT__btb_14_pre_decoder_jump;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_14_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_14_pre_lookup_value = vlSelf->__PVT__btb_14_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_14_pre_bht;
    vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_14_pre_pht;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = vlSelf->__PVT__btb_13_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_13_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = vlSelf->__PVT__btb_12_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_12_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pre_lookup_value = vlSelf->__PVT__btb_13_pre_lookup_value;
    vlSelf->__Vdly__btb_13_pre_bht = vlSelf->__PVT__btb_13_pre_bht;
    vlSelf->__Vdly__btb_13_pre_pht = vlSelf->__PVT__btb_13_pre_pht;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_11_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_pht = vlSelf->__PVT__btb_12_pre_pht;
    vlSelf->__Vdly__btb_12_pre_hashcode = vlSelf->__PVT__btb_12_pre_hashcode;
    vlSelf->__Vdly__btb_12_pre_lookup_data = vlSelf->__PVT__btb_12_pre_lookup_data;
    vlSelf->__Vdly__btb_12_pre_pc_target = vlSelf->__PVT__btb_12_pre_pc_target;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_10_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_11_pre_pht = vlSelf->__PVT__btb_11_pre_pht;
    vlSelf->__Vdly__btb_11_pre_hashcode = vlSelf->__PVT__btb_11_pre_hashcode;
    vlSelf->__Vdly__btb_11_pre_lookup_data = vlSelf->__PVT__btb_11_pre_lookup_data;
    vlSelf->__Vdly__btb_11_pre_pc_target = vlSelf->__PVT__btb_11_pre_pc_target;
    vlSelf->__Vdly__btb_9_true_branch_state = vlSelf->__PVT__btb_9_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_9_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_pht = vlSelf->__PVT__btb_10_pre_pht;
    vlSelf->__Vdly__btb_10_pre_hashcode = vlSelf->__PVT__btb_10_pre_hashcode;
    vlSelf->__Vdly__btb_10_pre_lookup_data = vlSelf->__PVT__btb_10_pre_lookup_data;
    vlSelf->__Vdly__btb_10_pre_pc_target = vlSelf->__PVT__btb_10_pre_pc_target;
    vlSelf->__Vdly__btb_13_pc = vlSelf->__PVT__btb_13_pc;
    vlSelf->__Vdly__btb_8_true_branch_state = vlSelf->__PVT__btb_8_true_branch_state;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = vlSelf->__PVT__btb_8_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_8_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_9_pre_pht = vlSelf->__PVT__btb_9_pre_pht;
    vlSelf->__Vdly__btb_9_pre_hashcode = vlSelf->__PVT__btb_9_pre_hashcode;
    vlSelf->__Vdly__btb_9_pre_lookup_data = vlSelf->__PVT__btb_9_pre_lookup_data;
    vlSelf->__Vdly__btb_9_pre_pc_target = vlSelf->__PVT__btb_9_pre_pc_target;
    vlSelf->__Vdly__btb_12_pc = vlSelf->__PVT__btb_12_pc;
    vlSelf->__Vdly__btb_7_true_branch_state = vlSelf->__PVT__btb_7_true_branch_state;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = vlSelf->__PVT__btb_7_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_7_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_8_pre_pht = vlSelf->__PVT__btb_8_pre_pht;
    vlSelf->__Vdly__btb_8_pre_hashcode = vlSelf->__PVT__btb_8_pre_hashcode;
    vlSelf->__Vdly__btb_8_pre_lookup_data = vlSelf->__PVT__btb_8_pre_lookup_data;
    vlSelf->__Vdly__btb_8_pre_pc_target = vlSelf->__PVT__btb_8_pre_pc_target;
    vlSelf->__Vdly__btb_11_pc = vlSelf->__PVT__btb_11_pc;
    vlSelf->__Vdly__btb_6_true_branch_state = vlSelf->__PVT__btb_6_true_branch_state;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = vlSelf->__PVT__btb_6_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_6_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_pre_pht = vlSelf->__PVT__btb_7_pre_pht;
    vlSelf->__Vdly__btb_7_pre_hashcode = vlSelf->__PVT__btb_7_pre_hashcode;
    vlSelf->__Vdly__btb_7_pre_lookup_data = vlSelf->__PVT__btb_7_pre_lookup_data;
    vlSelf->__Vdly__btb_7_pre_pc_target = vlSelf->__PVT__btb_7_pre_pc_target;
    vlSelf->__Vdly__btb_10_pc = vlSelf->__PVT__btb_10_pc;
    vlSelf->__Vdly__btb_5_true_branch_state = vlSelf->__PVT__btb_5_true_branch_state;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = vlSelf->__PVT__btb_5_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_5_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_pre_pht = vlSelf->__PVT__btb_6_pre_pht;
    vlSelf->__Vdly__btb_6_pre_hashcode = vlSelf->__PVT__btb_6_pre_hashcode;
    vlSelf->__Vdly__btb_6_pre_lookup_data = vlSelf->__PVT__btb_6_pre_lookup_data;
    vlSelf->__Vdly__btb_6_pre_pc_target = vlSelf->__PVT__btb_6_pre_pc_target;
    vlSelf->__Vdly__btb_9_pc = vlSelf->__PVT__btb_9_pc;
    vlSelf->__Vdly__btb_4_true_branch_state = vlSelf->__PVT__btb_4_true_branch_state;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = vlSelf->__PVT__btb_4_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_4_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_5_pre_pht = vlSelf->__PVT__btb_5_pre_pht;
    vlSelf->__Vdly__btb_5_pre_hashcode = vlSelf->__PVT__btb_5_pre_hashcode;
    vlSelf->__Vdly__btb_5_pre_lookup_data = vlSelf->__PVT__btb_5_pre_lookup_data;
    vlSelf->__Vdly__btb_5_pre_pc_target = vlSelf->__PVT__btb_5_pre_pc_target;
    vlSelf->__Vdly__btb_8_pc = vlSelf->__PVT__btb_8_pc;
    vlSelf->__Vdly__btb_3_true_branch_state = vlSelf->__PVT__btb_3_true_branch_state;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = vlSelf->__PVT__btb_3_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_3_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_4_pre_lookup_value = vlSelf->__PVT__btb_4_pre_lookup_value;
    vlSelf->__Vdly__btb_4_pre_bht = vlSelf->__PVT__btb_4_pre_bht;
    vlSelf->__Vdly__btb_4_pre_pht = vlSelf->__PVT__btb_4_pre_pht;
    vlSelf->__Vdly__btb_7_pc = vlSelf->__PVT__btb_7_pc;
    vlSelf->__Vdly__btb_2_true_branch_state = vlSelf->__PVT__btb_2_true_branch_state;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_2_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_3_pre_lookup_value = vlSelf->__PVT__btb_3_pre_lookup_value;
    vlSelf->__Vdly__btb_3_pre_bht = vlSelf->__PVT__btb_3_pre_bht;
    vlSelf->__Vdly__btb_3_pre_pht = vlSelf->__PVT__btb_3_pre_pht;
    vlSelf->__Vdly__btb_6_pc = vlSelf->__PVT__btb_6_pc;
    vlSelf->__Vdly__btb_1_true_branch_state = vlSelf->__PVT__btb_1_true_branch_state;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_1_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_0_true_branch_state = vlSelf->__PVT__btb_0_true_branch_state;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_0_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_2_pre_bht = vlSelf->__PVT__btb_2_pre_bht;
    vlSelf->__Vdly__btb_2_pre_pht = vlSelf->__PVT__btb_2_pre_pht;
    vlSelf->__Vdly__btb_5_pc = vlSelf->__PVT__btb_5_pc;
    vlSelf->__Vdly__btb_1_pre_pht = vlSelf->__PVT__btb_1_pre_pht;
    vlSelf->__Vdly__btb_1_pre_hashcode = vlSelf->__PVT__btb_1_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_bht = vlSelf->__PVT__btb_0_pre_bht;
    vlSelf->__Vdly__btb_0_pre_pht = vlSelf->__PVT__btb_0_pre_pht;
    vlSelf->__Vdly__btb_4_pc = vlSelf->__PVT__btb_4_pc;
    vlSelf->__Vdly__btb_3_pc = vlSelf->__PVT__btb_3_pc;
    vlSelf->__Vdly__btb_2_pc = vlSelf->__PVT__btb_2_pc;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT__btb_3_true_branch_state = vlSelf->__Vdly__btb_3_true_branch_state;
    vlSelf->__PVT__btb_3_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_4_pc = vlSelf->__Vdly__btb_4_pc;
    vlSelf->__PVT__btb_2_true_branch_state = vlSelf->__Vdly__btb_2_true_branch_state;
    vlSelf->__PVT__btb_2_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_3_pc = vlSelf->__Vdly__btb_3_pc;
    vlSelf->__PVT__btb_2_pre_bht = vlSelf->__Vdly__btb_2_pre_bht;
    vlSelf->__PVT__btb_2_pre_pht = vlSelf->__Vdly__btb_2_pre_pht;
    vlSelf->__PVT__btb_1_true_branch_state = vlSelf->__Vdly__btb_1_true_branch_state;
    vlSelf->__PVT__btb_1_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_0_true_branch_state = vlSelf->__Vdly__btb_0_true_branch_state;
    vlSelf->__PVT__btb_0_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_2_pc = vlSelf->__Vdly__btb_2_pc;
    vlSelf->__PVT__btb_1_pre_pht = vlSelf->__Vdly__btb_1_pre_pht;
    vlSelf->__PVT__btb_1_pre_hashcode = vlSelf->__Vdly__btb_1_pre_hashcode;
    vlSelf->__PVT__btb_0_pre_bht = vlSelf->__Vdly__btb_0_pre_bht;
    vlSelf->__PVT__btb_0_pre_pht = vlSelf->__Vdly__btb_0_pre_pht;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6\n"); );
    // Body
    vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_14_exception_type;
    vlSelf->__Vdly__btb_13_exception_type = vlSelf->__PVT__btb_13_exception_type;
    vlSelf->__Vdly__btb_12_exception_type = vlSelf->__PVT__btb_12_exception_type;
    vlSelf->__Vdly__btb_11_exception_type = vlSelf->__PVT__btb_11_exception_type;
    vlSelf->__Vdly__btb_10_exception_type = vlSelf->__PVT__btb_10_exception_type;
    vlSelf->__Vdly__btb_9_exception_type = vlSelf->__PVT__btb_9_exception_type;
    vlSelf->__Vdly__btb_8_exception_type = vlSelf->__PVT__btb_8_exception_type;
    vlSelf->__Vdly__btb_7_exception_type = vlSelf->__PVT__btb_7_exception_type;
    vlSelf->__Vdly__btb_6_exception_type = vlSelf->__PVT__btb_6_exception_type;
    vlSelf->__Vdly__btb_5_exception_type = vlSelf->__PVT__btb_5_exception_type;
    vlSelf->__Vdly__btb_4_exception_type = vlSelf->__PVT__btb_4_exception_type;
    vlSelf->__Vdly__btb_3_exception_type = vlSelf->__PVT__btb_3_exception_type;
    vlSelf->__Vdly__btb_2_exception_type = vlSelf->__PVT__btb_2_exception_type;
    vlSelf->__Vdly__btb_1_exception_type = vlSelf->__PVT__btb_1_exception_type;
    vlSelf->__Vdly__btb_0_exception_type = vlSelf->__PVT__btb_0_exception_type;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8\n"); );
    // Body
    vlSelf->__PVT__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_13_exception_type = vlSelf->__Vdly__btb_13_exception_type;
    vlSelf->__PVT__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_12_exception_type = vlSelf->__Vdly__btb_12_exception_type;
    vlSelf->__PVT__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_11_exception_type = vlSelf->__Vdly__btb_11_exception_type;
    vlSelf->__PVT__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_10_exception_type = vlSelf->__Vdly__btb_10_exception_type;
    vlSelf->__PVT__btb_9_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_9_exception_type = vlSelf->__Vdly__btb_9_exception_type;
    vlSelf->__PVT__btb_8_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_8_exception_type = vlSelf->__Vdly__btb_8_exception_type;
    vlSelf->__PVT__btb_7_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_7_exception_type = vlSelf->__Vdly__btb_7_exception_type;
    vlSelf->__PVT__btb_6_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_6_exception_type = vlSelf->__Vdly__btb_6_exception_type;
    vlSelf->__PVT__btb_5_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_5_exception_type = vlSelf->__Vdly__btb_5_exception_type;
    vlSelf->__PVT__btb_4_pre_decoder_branchD_flag = vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_4_exception_type = vlSelf->__Vdly__btb_4_exception_type;
    vlSelf->__PVT__btb_3_exception_type = vlSelf->__Vdly__btb_3_exception_type;
    vlSelf->__PVT__btb_2_exception_type = vlSelf->__Vdly__btb_2_exception_type;
    vlSelf->__PVT__btb_1_exception_type = vlSelf->__Vdly__btb_1_exception_type;
    vlSelf->__PVT__btb_0_exception_type = vlSelf->__Vdly__btb_0_exception_type;
    vlSelf->__Vdly__btb_15_exception_type = vlSelf->__PVT__btb_15_exception_type;
    vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_15_pre_decoder_branchD_flag;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10\n"); );
    // Body
    vlSelf->__PVT__btb_15_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_15_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag;
    vlSelf->__PVT__btb_15_exception_type = vlSelf->__Vdly__btb_15_exception_type;
    vlSelf->__PVT__btb_14_exception_type = vlSelf->__Vdly__btb_14_exception_type;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__0\n"); );
    // Body
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT__btb_0_pre_decoder_branchD_flag));
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__1\n"); );
    // Body
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_65));
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__2\n"); );
    // Body
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_66));
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__3\n"); );
    // Body
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_67));
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__4\n"); );
    // Body
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_5_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_68));
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_6_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_69));
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__6\n"); );
    // Body
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_7_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_70));
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__7\n"); );
    // Body
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_71));
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__8\n"); );
    // Body
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_72));
    vlSelf->__PVT___GEN_185 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_9_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_184));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__9\n"); );
    // Body
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_73));
    vlSelf->__PVT___GEN_186 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_10_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_185));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__10\n"); );
    // Body
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_74));
    vlSelf->__PVT___GEN_187 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_11_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_186));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11\n"); );
    // Body
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_75));
    vlSelf->__PVT___GEN_188 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_12_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_187));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12\n"); );
    // Body
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_76));
    vlSelf->__PVT___GEN_189 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_13_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_188));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13\n"); );
    // Body
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchD_flag)
                               : (IData)(vlSelf->__PVT___GEN_77));
    vlSelf->__PVT___GEN_190 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_14_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_189));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
            ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT__io_out_exception_type = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_exception_type)
                                             : (IData)(vlSelf->__PVT___GEN_190));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__11\n"); );
    // Body
    vlSelf->__PVT__btb_13_pre_lookup_value = vlSelf->__Vdly__btb_13_pre_lookup_value;
    vlSelf->__PVT__btb_13_pre_bht = vlSelf->__Vdly__btb_13_pre_bht;
    vlSelf->__PVT__btb_12_pre_lookup_value = vlSelf->__Vdly__btb_12_pre_lookup_value;
    vlSelf->__PVT__btb_12_pre_bht = vlSelf->__Vdly__btb_12_pre_bht;
    vlSelf->__PVT__btb_11_pre_lookup_value = vlSelf->__Vdly__btb_11_pre_lookup_value;
    vlSelf->__PVT__btb_11_pre_bht = vlSelf->__Vdly__btb_11_pre_bht;
    vlSelf->__PVT__btb_10_pre_lookup_value = vlSelf->__Vdly__btb_10_pre_lookup_value;
    vlSelf->__PVT__btb_10_pre_bht = vlSelf->__Vdly__btb_10_pre_bht;
    vlSelf->__PVT__btb_9_pre_lookup_value = vlSelf->__Vdly__btb_9_pre_lookup_value;
    vlSelf->__PVT__btb_9_pre_bht = vlSelf->__Vdly__btb_9_pre_bht;
    vlSelf->__PVT__btb_8_pre_lookup_value = vlSelf->__Vdly__btb_8_pre_lookup_value;
    vlSelf->__PVT__btb_8_pre_bht = vlSelf->__Vdly__btb_8_pre_bht;
    vlSelf->__PVT__btb_7_pre_lookup_value = vlSelf->__Vdly__btb_7_pre_lookup_value;
    vlSelf->__PVT__btb_7_pre_bht = vlSelf->__Vdly__btb_7_pre_bht;
    vlSelf->__PVT__btb_6_pre_lookup_value = vlSelf->__Vdly__btb_6_pre_lookup_value;
    vlSelf->__PVT__btb_6_pre_bht = vlSelf->__Vdly__btb_6_pre_bht;
    vlSelf->__PVT__btb_5_pre_lookup_value = vlSelf->__Vdly__btb_5_pre_lookup_value;
    vlSelf->__PVT__btb_5_pre_bht = vlSelf->__Vdly__btb_5_pre_bht;
    vlSelf->__Vdly__btb_15_pre_lookup_value = vlSelf->__PVT__btb_15_pre_lookup_value;
    vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__12\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__13\n"); );
    // Body
    vlSelf->__PVT__btb_15_pre_lookup_value = vlSelf->__Vdly__btb_15_pre_lookup_value;
    vlSelf->__PVT__btb_15_pre_bht = vlSelf->__Vdly__btb_15_pre_bht;
    vlSelf->__PVT__btb_14_pre_lookup_value = vlSelf->__Vdly__btb_14_pre_lookup_value;
    vlSelf->__PVT__btb_14_pre_bht = vlSelf->__Vdly__btb_14_pre_bht;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__14\n"); );
    // Body
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = vlSelf->__PVT__btb_14_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_14_pc;
    vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_14_inst;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = vlSelf->__PVT__btb_11_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = vlSelf->__PVT__btb_10_pre_decoder_jump;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = vlSelf->__PVT__btb_9_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = vlSelf->__PVT__btb_8_pre_decoder_jump;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = vlSelf->__PVT__btb_7_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_inst = vlSelf->__PVT__btb_13_inst;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = vlSelf->__PVT__btb_6_pre_decoder_jump;
    vlSelf->__Vdly__btb_12_inst = vlSelf->__PVT__btb_12_inst;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = vlSelf->__PVT__btb_5_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_inst = vlSelf->__PVT__btb_11_inst;
    vlSelf->__Vdly__btb_10_inst = vlSelf->__PVT__btb_10_inst;
    vlSelf->__Vdly__btb_9_inst = vlSelf->__PVT__btb_9_inst;
    vlSelf->__Vdly__btb_8_inst = vlSelf->__PVT__btb_8_inst;
    vlSelf->__Vdly__btb_7_inst = vlSelf->__PVT__btb_7_inst;
    vlSelf->__Vdly__btb_6_inst = vlSelf->__PVT__btb_6_inst;
    vlSelf->__Vdly__btb_5_inst = vlSelf->__PVT__btb_5_inst;
    vlSelf->__Vdly__btb_4_inst = vlSelf->__PVT__btb_4_inst;
    vlSelf->__Vdly__btb_3_inst = vlSelf->__PVT__btb_3_inst;
    vlSelf->__Vdly__btb_2_inst = vlSelf->__PVT__btb_2_inst;
    vlSelf->__Vdly__btb_1_inst = vlSelf->__PVT__btb_1_inst;
    vlSelf->__Vdly__btb_0_inst = vlSelf->__PVT__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16\n"); );
    // Body
    vlSelf->__PVT__btb_13_true_branch_state = vlSelf->__Vdly__btb_13_true_branch_state;
    vlSelf->__PVT__btb_13_pre_decoder_jr = vlSelf->__Vdly__btb_13_pre_decoder_jr;
    vlSelf->__PVT__btb_13_pre_decoder_branchdata = vlSelf->__Vdly__btb_13_pre_decoder_branchdata;
    vlSelf->__PVT__btb_13_pre_decoder_jump = vlSelf->__Vdly__btb_13_pre_decoder_jump;
    vlSelf->__PVT__btb_13_pre_pht = vlSelf->__Vdly__btb_13_pre_pht;
    vlSelf->__PVT__btb_13_pre_hashcode = vlSelf->__Vdly__btb_13_pre_hashcode;
    vlSelf->__PVT__btb_13_pre_lookup_data = vlSelf->__Vdly__btb_13_pre_lookup_data;
    vlSelf->__PVT__btb_13_pre_pc_target = vlSelf->__Vdly__btb_13_pre_pc_target;
    vlSelf->__PVT__btb_12_true_branch_state = vlSelf->__Vdly__btb_12_true_branch_state;
    vlSelf->__PVT__btb_12_pre_decoder_jr = vlSelf->__Vdly__btb_12_pre_decoder_jr;
    vlSelf->__PVT__btb_12_pre_decoder_branchdata = vlSelf->__Vdly__btb_12_pre_decoder_branchdata;
    vlSelf->__PVT__btb_12_pre_decoder_jump = vlSelf->__Vdly__btb_12_pre_decoder_jump;
    vlSelf->__PVT__btb_13_pc = vlSelf->__Vdly__btb_13_pc;
    vlSelf->__PVT__btb_12_pre_pht = vlSelf->__Vdly__btb_12_pre_pht;
    vlSelf->__PVT__btb_12_pre_hashcode = vlSelf->__Vdly__btb_12_pre_hashcode;
    vlSelf->__PVT__btb_12_pre_lookup_data = vlSelf->__Vdly__btb_12_pre_lookup_data;
    vlSelf->__PVT__btb_12_pre_pc_target = vlSelf->__Vdly__btb_12_pre_pc_target;
    vlSelf->__PVT__btb_13_inst = vlSelf->__Vdly__btb_13_inst;
    vlSelf->__PVT__btb_11_true_branch_state = vlSelf->__Vdly__btb_11_true_branch_state;
    vlSelf->__PVT__btb_11_pre_decoder_jr = vlSelf->__Vdly__btb_11_pre_decoder_jr;
    vlSelf->__PVT__btb_11_pre_decoder_branchdata = vlSelf->__Vdly__btb_11_pre_decoder_branchdata;
    vlSelf->__PVT__btb_11_pre_decoder_jump = vlSelf->__Vdly__btb_11_pre_decoder_jump;
    vlSelf->__PVT__btb_12_pc = vlSelf->__Vdly__btb_12_pc;
    vlSelf->__PVT__btb_11_pre_pht = vlSelf->__Vdly__btb_11_pre_pht;
    vlSelf->__PVT__btb_11_pre_hashcode = vlSelf->__Vdly__btb_11_pre_hashcode;
    vlSelf->__PVT__btb_11_pre_lookup_data = vlSelf->__Vdly__btb_11_pre_lookup_data;
    vlSelf->__PVT__btb_11_pre_pc_target = vlSelf->__Vdly__btb_11_pre_pc_target;
    vlSelf->__PVT__btb_12_inst = vlSelf->__Vdly__btb_12_inst;
    vlSelf->__PVT__btb_10_true_branch_state = vlSelf->__Vdly__btb_10_true_branch_state;
    vlSelf->__PVT__btb_10_pre_decoder_jr = vlSelf->__Vdly__btb_10_pre_decoder_jr;
    vlSelf->__PVT__btb_10_pre_decoder_branchdata = vlSelf->__Vdly__btb_10_pre_decoder_branchdata;
    vlSelf->__PVT__btb_10_pre_decoder_jump = vlSelf->__Vdly__btb_10_pre_decoder_jump;
    vlSelf->__PVT__btb_11_pc = vlSelf->__Vdly__btb_11_pc;
    vlSelf->__PVT__btb_10_pre_pht = vlSelf->__Vdly__btb_10_pre_pht;
    vlSelf->__PVT__btb_10_pre_hashcode = vlSelf->__Vdly__btb_10_pre_hashcode;
    vlSelf->__PVT__btb_10_pre_lookup_data = vlSelf->__Vdly__btb_10_pre_lookup_data;
    vlSelf->__PVT__btb_10_pre_pc_target = vlSelf->__Vdly__btb_10_pre_pc_target;
    vlSelf->__PVT__btb_11_inst = vlSelf->__Vdly__btb_11_inst;
    vlSelf->__PVT__btb_9_true_branch_state = vlSelf->__Vdly__btb_9_true_branch_state;
    vlSelf->__PVT__btb_9_pre_decoder_jr = vlSelf->__Vdly__btb_9_pre_decoder_jr;
    vlSelf->__PVT__btb_9_pre_decoder_branchdata = vlSelf->__Vdly__btb_9_pre_decoder_branchdata;
    vlSelf->__PVT__btb_9_pre_decoder_jump = vlSelf->__Vdly__btb_9_pre_decoder_jump;
    vlSelf->__PVT__btb_10_pc = vlSelf->__Vdly__btb_10_pc;
    vlSelf->__PVT__btb_9_pre_pht = vlSelf->__Vdly__btb_9_pre_pht;
    vlSelf->__PVT__btb_9_pre_hashcode = vlSelf->__Vdly__btb_9_pre_hashcode;
    vlSelf->__PVT__btb_9_pre_lookup_data = vlSelf->__Vdly__btb_9_pre_lookup_data;
    vlSelf->__PVT__btb_9_pre_pc_target = vlSelf->__Vdly__btb_9_pre_pc_target;
    vlSelf->__PVT__btb_10_inst = vlSelf->__Vdly__btb_10_inst;
    vlSelf->__PVT__btb_8_true_branch_state = vlSelf->__Vdly__btb_8_true_branch_state;
    vlSelf->__PVT__btb_8_pre_decoder_jr = vlSelf->__Vdly__btb_8_pre_decoder_jr;
    vlSelf->__PVT__btb_8_pre_decoder_branchdata = vlSelf->__Vdly__btb_8_pre_decoder_branchdata;
    vlSelf->__PVT__btb_8_pre_decoder_jump = vlSelf->__Vdly__btb_8_pre_decoder_jump;
    vlSelf->__PVT__btb_9_pc = vlSelf->__Vdly__btb_9_pc;
    vlSelf->__PVT__btb_8_pre_pht = vlSelf->__Vdly__btb_8_pre_pht;
    vlSelf->__PVT__btb_8_pre_hashcode = vlSelf->__Vdly__btb_8_pre_hashcode;
    vlSelf->__PVT__btb_8_pre_lookup_data = vlSelf->__Vdly__btb_8_pre_lookup_data;
    vlSelf->__PVT__btb_8_pre_pc_target = vlSelf->__Vdly__btb_8_pre_pc_target;
    vlSelf->__PVT__btb_9_inst = vlSelf->__Vdly__btb_9_inst;
    vlSelf->__PVT__btb_7_true_branch_state = vlSelf->__Vdly__btb_7_true_branch_state;
    vlSelf->__PVT__btb_7_pre_decoder_jr = vlSelf->__Vdly__btb_7_pre_decoder_jr;
    vlSelf->__PVT__btb_7_pre_decoder_branchdata = vlSelf->__Vdly__btb_7_pre_decoder_branchdata;
    vlSelf->__PVT__btb_7_pre_decoder_jump = vlSelf->__Vdly__btb_7_pre_decoder_jump;
    vlSelf->__PVT__btb_8_pc = vlSelf->__Vdly__btb_8_pc;
    vlSelf->__PVT__btb_7_pre_pht = vlSelf->__Vdly__btb_7_pre_pht;
    vlSelf->__PVT__btb_7_pre_hashcode = vlSelf->__Vdly__btb_7_pre_hashcode;
    vlSelf->__PVT__btb_7_pre_lookup_data = vlSelf->__Vdly__btb_7_pre_lookup_data;
    vlSelf->__PVT__btb_7_pre_pc_target = vlSelf->__Vdly__btb_7_pre_pc_target;
    vlSelf->__PVT__btb_8_inst = vlSelf->__Vdly__btb_8_inst;
    vlSelf->__PVT__btb_6_true_branch_state = vlSelf->__Vdly__btb_6_true_branch_state;
    vlSelf->__PVT__btb_6_pre_decoder_jr = vlSelf->__Vdly__btb_6_pre_decoder_jr;
    vlSelf->__PVT__btb_6_pre_decoder_branchdata = vlSelf->__Vdly__btb_6_pre_decoder_branchdata;
    vlSelf->__PVT__btb_6_pre_decoder_jump = vlSelf->__Vdly__btb_6_pre_decoder_jump;
    vlSelf->__PVT__btb_7_pc = vlSelf->__Vdly__btb_7_pc;
    vlSelf->__PVT__btb_6_pre_pht = vlSelf->__Vdly__btb_6_pre_pht;
    vlSelf->__PVT__btb_6_pre_hashcode = vlSelf->__Vdly__btb_6_pre_hashcode;
    vlSelf->__PVT__btb_6_pre_lookup_data = vlSelf->__Vdly__btb_6_pre_lookup_data;
    vlSelf->__PVT__btb_6_pre_pc_target = vlSelf->__Vdly__btb_6_pre_pc_target;
    vlSelf->__PVT__btb_7_inst = vlSelf->__Vdly__btb_7_inst;
    vlSelf->__PVT__btb_5_true_branch_state = vlSelf->__Vdly__btb_5_true_branch_state;
    vlSelf->__PVT__btb_5_pre_decoder_jr = vlSelf->__Vdly__btb_5_pre_decoder_jr;
    vlSelf->__PVT__btb_5_pre_decoder_branchdata = vlSelf->__Vdly__btb_5_pre_decoder_branchdata;
    vlSelf->__PVT__btb_5_pre_decoder_jump = vlSelf->__Vdly__btb_5_pre_decoder_jump;
    vlSelf->__PVT__btb_6_pc = vlSelf->__Vdly__btb_6_pc;
    vlSelf->__PVT__btb_5_pre_pht = vlSelf->__Vdly__btb_5_pre_pht;
    vlSelf->__PVT__btb_5_pre_hashcode = vlSelf->__Vdly__btb_5_pre_hashcode;
    vlSelf->__PVT__btb_5_pre_lookup_data = vlSelf->__Vdly__btb_5_pre_lookup_data;
    vlSelf->__PVT__btb_5_pre_pc_target = vlSelf->__Vdly__btb_5_pre_pc_target;
    vlSelf->__PVT__btb_6_inst = vlSelf->__Vdly__btb_6_inst;
    vlSelf->__PVT__btb_4_true_branch_state = vlSelf->__Vdly__btb_4_true_branch_state;
    vlSelf->__PVT__btb_4_pre_decoder_jr = vlSelf->__Vdly__btb_4_pre_decoder_jr;
    vlSelf->__PVT__btb_4_pre_decoder_branchdata = vlSelf->__Vdly__btb_4_pre_decoder_branchdata;
    vlSelf->__PVT__btb_4_pre_decoder_jump = vlSelf->__Vdly__btb_4_pre_decoder_jump;
    vlSelf->__PVT__btb_5_pc = vlSelf->__Vdly__btb_5_pc;
    vlSelf->__PVT__btb_4_pre_lookup_value = vlSelf->__Vdly__btb_4_pre_lookup_value;
    vlSelf->__PVT__btb_4_pre_bht = vlSelf->__Vdly__btb_4_pre_bht;
    vlSelf->__PVT__btb_4_pre_pht = vlSelf->__Vdly__btb_4_pre_pht;
    vlSelf->__PVT__btb_4_pre_hashcode = vlSelf->__Vdly__btb_4_pre_hashcode;
    vlSelf->__PVT__btb_4_pre_lookup_data = vlSelf->__Vdly__btb_4_pre_lookup_data;
    vlSelf->__PVT__btb_4_pre_pc_target = vlSelf->__Vdly__btb_4_pre_pc_target;
    vlSelf->__PVT__btb_5_inst = vlSelf->__Vdly__btb_5_inst;
    vlSelf->__PVT__btb_3_pre_decoder_branchdata = vlSelf->__Vdly__btb_3_pre_decoder_branchdata;
    vlSelf->__PVT__btb_3_pre_lookup_value = vlSelf->__Vdly__btb_3_pre_lookup_value;
    vlSelf->__PVT__btb_3_pre_bht = vlSelf->__Vdly__btb_3_pre_bht;
    vlSelf->__PVT__btb_3_pre_pht = vlSelf->__Vdly__btb_3_pre_pht;
    vlSelf->__PVT__btb_3_pre_hashcode = vlSelf->__Vdly__btb_3_pre_hashcode;
    vlSelf->__PVT__btb_3_pre_lookup_data = vlSelf->__Vdly__btb_3_pre_lookup_data;
    vlSelf->__PVT__btb_3_pre_pc_target = vlSelf->__Vdly__btb_3_pre_pc_target;
    vlSelf->__PVT__btb_4_inst = vlSelf->__Vdly__btb_4_inst;
    vlSelf->__PVT__btb_3_inst = vlSelf->__Vdly__btb_3_inst;
    vlSelf->__PVT__btb_2_inst = vlSelf->__Vdly__btb_2_inst;
    vlSelf->__PVT__btb_1_inst = vlSelf->__Vdly__btb_1_inst;
    vlSelf->__PVT__btb_0_inst = vlSelf->__Vdly__btb_0_inst;
    vlSelf->__Vdly__btb_15_true_branch_state = vlSelf->__PVT__btb_15_true_branch_state;
    vlSelf->__Vdly__btb_15_pre_decoder_jr = vlSelf->__PVT__btb_15_pre_decoder_jr;
    vlSelf->__Vdly__btb_15_pre_decoder_branchdata = vlSelf->__PVT__btb_15_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_15_pre_decoder_jump = vlSelf->__PVT__btb_15_pre_decoder_jump;
    vlSelf->__Vdly__btb_15_pre_pht = vlSelf->__PVT__btb_15_pre_pht;
    vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
    vlSelf->__Vdly__btb_15_pre_lookup_data = vlSelf->__PVT__btb_15_pre_lookup_data;
    vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
    vlSelf->__Vdly__btb_15_pc = vlSelf->__PVT__btb_15_pc;
    vlSelf->__Vdly__btb_15_inst = vlSelf->__PVT__btb_15_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18\n"); );
    // Body
    vlSelf->__PVT__btb_15_true_branch_state = vlSelf->__Vdly__btb_15_true_branch_state;
    vlSelf->__PVT__btb_15_pre_decoder_jr = vlSelf->__Vdly__btb_15_pre_decoder_jr;
    vlSelf->__PVT__btb_15_pre_decoder_branchdata = vlSelf->__Vdly__btb_15_pre_decoder_branchdata;
    vlSelf->__PVT__btb_15_pre_decoder_jump = vlSelf->__Vdly__btb_15_pre_decoder_jump;
    vlSelf->__PVT__btb_15_pre_pht = vlSelf->__Vdly__btb_15_pre_pht;
    vlSelf->__PVT__btb_15_pre_hashcode = vlSelf->__Vdly__btb_15_pre_hashcode;
    vlSelf->__PVT__btb_15_pre_lookup_data = vlSelf->__Vdly__btb_15_pre_lookup_data;
    vlSelf->__PVT__btb_15_pre_pc_target = vlSelf->__Vdly__btb_15_pre_pc_target;
    vlSelf->__PVT__btb_14_true_branch_state = vlSelf->__Vdly__btb_14_true_branch_state;
    vlSelf->__PVT__btb_14_pre_decoder_jr = vlSelf->__Vdly__btb_14_pre_decoder_jr;
    vlSelf->__PVT__btb_14_pre_decoder_branchdata = vlSelf->__Vdly__btb_14_pre_decoder_branchdata;
    vlSelf->__PVT__btb_14_pre_decoder_jump = vlSelf->__Vdly__btb_14_pre_decoder_jump;
    vlSelf->__PVT__btb_14_pre_pht = vlSelf->__Vdly__btb_14_pre_pht;
    vlSelf->__PVT__btb_14_pre_hashcode = vlSelf->__Vdly__btb_14_pre_hashcode;
    vlSelf->__PVT__btb_14_pre_lookup_data = vlSelf->__Vdly__btb_14_pre_lookup_data;
    vlSelf->__PVT__btb_14_pre_pc_target = vlSelf->__Vdly__btb_14_pre_pc_target;
    vlSelf->__PVT__btb_15_pc = vlSelf->__Vdly__btb_15_pc;
    vlSelf->__PVT__btb_14_pc = vlSelf->__Vdly__btb_14_pc;
    vlSelf->__PVT__btb_15_inst = vlSelf->__Vdly__btb_15_inst;
    vlSelf->__PVT__btb_14_inst = vlSelf->__Vdly__btb_14_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__15\n"); );
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
    vlSelf->__PVT___GEN_209 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__16\n"); );
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
    vlSelf->__PVT___GEN_210 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_209);
    vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_193);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__17\n"); );
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
    vlSelf->__PVT___GEN_211 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_210);
    vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_194);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__18\n"); );
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
    vlSelf->__PVT___GEN_212 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_211);
    vlSelf->__PVT___GEN_196 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_195);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__19(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__19\n"); );
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
    vlSelf->__PVT___GEN_197 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_196);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__20(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__20\n"); );
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
    vlSelf->__PVT___GEN_198 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_197);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__21(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__21\n"); );
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
    vlSelf->__PVT___GEN_199 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_198);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__22(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__22\n"); );
    // Body
    vlSelf->__PVT___GEN_200 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_199);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__23(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__23\n"); );
    // Body
    vlSelf->__PVT___GEN_201 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_200);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__24(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__24\n"); );
    // Body
    vlSelf->__PVT___GEN_202 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_201);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__25(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__25\n"); );
    // Body
    vlSelf->__PVT___GEN_238 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_pc
                                : vlSelf->__PVT__btb_0_pc);
    vlSelf->__PVT___GEN_239 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_1_inst
                                : vlSelf->__PVT__btb_0_inst);
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__26(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__26\n"); );
    // Body
    vlSelf->__PVT___GEN_252 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_pc
                                : vlSelf->__PVT___GEN_238);
    vlSelf->__PVT___GEN_253 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_2_inst
                                : vlSelf->__PVT___GEN_239);
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__27(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__27\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_pc
                                : vlSelf->__PVT___GEN_252);
    vlSelf->__PVT___GEN_267 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_3_inst
                                : vlSelf->__PVT___GEN_253);
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__28(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__28\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_pc
                                : vlSelf->__PVT___GEN_266);
    vlSelf->__PVT___GEN_281 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_4_inst
                                : vlSelf->__PVT___GEN_267);
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__29(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__29\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_280);
    vlSelf->__PVT___GEN_295 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_5_inst
                                : vlSelf->__PVT___GEN_281);
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
    vlSelf->__PVT___GEN_213 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pc
                                : vlSelf->__PVT___GEN_212);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__30(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__30\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_294);
    vlSelf->__PVT___GEN_309 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_6_inst
                                : vlSelf->__PVT___GEN_295);
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
    vlSelf->__PVT___GEN_214 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pc
                                : vlSelf->__PVT___GEN_213);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__31(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__31\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_308);
    vlSelf->__PVT___GEN_323 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_7_inst
                                : vlSelf->__PVT___GEN_309);
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
    vlSelf->__PVT___GEN_215 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pc
                                : vlSelf->__PVT___GEN_214);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__32(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__32\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_322);
    vlSelf->__PVT___GEN_337 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_8_inst
                                : vlSelf->__PVT___GEN_323);
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
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_39));
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
    vlSelf->__PVT___GEN_216 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pc
                                : vlSelf->__PVT___GEN_215);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__33(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__33\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_336);
    vlSelf->__PVT___GEN_351 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_9_inst
                                : vlSelf->__PVT___GEN_337);
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
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9_true_branch_state)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_40));
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
    vlSelf->__PVT___GEN_217 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_9_pc
                                : vlSelf->__PVT___GEN_216);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__34(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__34\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_350);
    vlSelf->__PVT___GEN_365 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_10_inst
                                : vlSelf->__PVT___GEN_351);
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
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_41));
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
    vlSelf->__PVT___GEN_218 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_10_pc
                                : vlSelf->__PVT___GEN_217);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__35(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__35\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_364);
    vlSelf->__PVT___GEN_379 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_365);
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
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_42));
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
    vlSelf->__PVT___GEN_219 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_pc
                                : vlSelf->__PVT___GEN_218);
    vlSelf->__PVT___GEN_203 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_11_inst
                                : vlSelf->__PVT___GEN_202);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__36(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__36\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_378);
    vlSelf->__PVT___GEN_393 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_379);
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
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_43));
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
    vlSelf->__PVT___GEN_220 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_pc
                                : vlSelf->__PVT___GEN_219);
    vlSelf->__PVT___GEN_204 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_12_inst
                                : vlSelf->__PVT___GEN_203);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__37(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__37\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_407 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_393);
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
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_44));
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
    vlSelf->__PVT___GEN_221 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_pc
                                : vlSelf->__PVT___GEN_220);
    vlSelf->__PVT___GEN_205 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_13_inst
                                : vlSelf->__PVT___GEN_204);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__38(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__38\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_true_branch_state)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_branchdata)
                               : (IData)(vlSelf->__PVT___GEN_45));
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
    vlSelf->__PVT___GEN_222 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_pc
                                : vlSelf->__PVT___GEN_221);
    vlSelf->__PVT___GEN_206 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_14_inst
                                : vlSelf->__PVT___GEN_205);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__39(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__39\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_branchdata = 
        ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
          ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_branchdata)
          : (IData)(vlSelf->__PVT___GEN_46));
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
    vlSelf->__PVT__io_out_pc = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                 ? vlSelf->__PVT__btb_15_pc
                                 : vlSelf->__PVT___GEN_222);
    vlSelf->__PVT__io_out_inst = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                   ? vlSelf->__PVT__btb_15_inst
                                   : vlSelf->__PVT___GEN_206);
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__40(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__40\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_56 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_8_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_55));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__41(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__41\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_57 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_9_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_56));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__42(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__42\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_58 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_57));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__43(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__43\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_59 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_58));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__44(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__44\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_60 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_59));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__45(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__45\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_61 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__46(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__46\n"); );
    // Body
    vlSelf->__PVT___GEN_30 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jr)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_62 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14_pre_decoder_jump)
                               : (IData)(vlSelf->__PVT___GEN_61));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__47(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__47\n"); );
    // Body
    vlSelf->__PVT__io_out_pre_decoder_jump = ((0xfU 
                                               == (IData)(vlSelf->__PVT__io_ar_addr))
                                               ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jump)
                                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT__io_out_pre_decoder_jr = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                                             ? (IData)(vlSelf->__PVT__btb_15_pre_decoder_jr)
                                             : (IData)(vlSelf->__PVT___GEN_30));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__48(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__48\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__49(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__49\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__50(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__50\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__51(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__51\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__52(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__52\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__53(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__53\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__54(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__54\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__55(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__55\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__56(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__56\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__57(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__57\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__58(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__58\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__59(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__59\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__60(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle__60\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0\n"); );
    // Body
    vlSelf->__Vdly__btb_1_pre_pht = vlSelf->__PVT__btb_1_pre_pht;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_1_pre_pht = vlSelf->__Vdly__btb_1_pre_pht;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3\n"); );
    // Body
    vlSelf->__Vdly__btb_14_true_branch_state = vlSelf->__PVT__btb_14_true_branch_state;
    vlSelf->__Vdly__btb_14_pre_decoder_jr = vlSelf->__PVT__btb_14_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_true_branch_state = vlSelf->__PVT__btb_13_true_branch_state;
    vlSelf->__Vdly__btb_13_pre_decoder_jr = vlSelf->__PVT__btb_13_pre_decoder_jr;
    vlSelf->__Vdly__btb_13_pre_decoder_branchdata = vlSelf->__PVT__btb_13_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_true_branch_state = vlSelf->__PVT__btb_12_true_branch_state;
    vlSelf->__Vdly__btb_12_pre_decoder_jr = vlSelf->__PVT__btb_12_pre_decoder_jr;
    vlSelf->__Vdly__btb_12_pre_decoder_branchdata = vlSelf->__PVT__btb_12_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_true_branch_state = vlSelf->__PVT__btb_11_true_branch_state;
    vlSelf->__Vdly__btb_11_pre_decoder_jr = vlSelf->__PVT__btb_11_pre_decoder_jr;
    vlSelf->__Vdly__btb_11_pre_decoder_branchdata = vlSelf->__PVT__btb_11_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_12_pre_pht = vlSelf->__PVT__btb_12_pre_pht;
    vlSelf->__Vdly__btb_10_true_branch_state = vlSelf->__PVT__btb_10_true_branch_state;
    vlSelf->__Vdly__btb_10_pre_decoder_jr = vlSelf->__PVT__btb_10_pre_decoder_jr;
    vlSelf->__Vdly__btb_10_pre_decoder_branchdata = vlSelf->__PVT__btb_10_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_11_pre_pht = vlSelf->__PVT__btb_11_pre_pht;
    vlSelf->__Vdly__btb_9_pre_decoder_jr = vlSelf->__PVT__btb_9_pre_decoder_jr;
    vlSelf->__Vdly__btb_9_pre_decoder_jump = vlSelf->__PVT__btb_9_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_pht = vlSelf->__PVT__btb_10_pre_pht;
    vlSelf->__Vdly__btb_8_pre_decoder_jr = vlSelf->__PVT__btb_8_pre_decoder_jr;
    vlSelf->__Vdly__btb_8_pre_decoder_branchdata = vlSelf->__PVT__btb_8_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_8_pre_decoder_jump = vlSelf->__PVT__btb_8_pre_decoder_jump;
    vlSelf->__Vdly__btb_9_pre_pht = vlSelf->__PVT__btb_9_pre_pht;
    vlSelf->__Vdly__btb_7_pre_decoder_jr = vlSelf->__PVT__btb_7_pre_decoder_jr;
    vlSelf->__Vdly__btb_7_pre_decoder_branchdata = vlSelf->__PVT__btb_7_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_7_pre_decoder_jump = vlSelf->__PVT__btb_7_pre_decoder_jump;
    vlSelf->__Vdly__btb_6_pre_decoder_jr = vlSelf->__PVT__btb_6_pre_decoder_jr;
    vlSelf->__Vdly__btb_6_pre_decoder_branchdata = vlSelf->__PVT__btb_6_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_6_pre_decoder_jump = vlSelf->__PVT__btb_6_pre_decoder_jump;
    vlSelf->__Vdly__btb_5_pre_decoder_jr = vlSelf->__PVT__btb_5_pre_decoder_jr;
    vlSelf->__Vdly__btb_5_pre_decoder_branchdata = vlSelf->__PVT__btb_5_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_5_pre_decoder_jump = vlSelf->__PVT__btb_5_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_inst = vlSelf->__PVT__btb_11_inst;
    vlSelf->__Vdly__btb_4_pre_decoder_jr = vlSelf->__PVT__btb_4_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_decoder_branchdata = vlSelf->__PVT__btb_4_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_4_pre_decoder_jump = vlSelf->__PVT__btb_4_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_inst = vlSelf->__PVT__btb_10_inst;
    vlSelf->__Vdly__btb_3_pre_decoder_branchdata = vlSelf->__PVT__btb_3_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_decoder_jump = vlSelf->__PVT__btb_3_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_decoder_jump = vlSelf->__PVT__btb_2_pre_decoder_jump;
    vlSelf->__Vdly__btb_1_pre_decoder_branchdata = vlSelf->__PVT__btb_1_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_1_pre_decoder_jump = vlSelf->__PVT__btb_1_pre_decoder_jump;
    vlSelf->__Vdly__btb_0_pre_decoder_branchdata = vlSelf->__PVT__btb_0_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_0_pre_decoder_jump = vlSelf->__PVT__btb_0_pre_decoder_jump;
    vlSelf->__Vdly__btb_2_pre_lookup_value = vlSelf->__PVT__btb_2_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_lookup_value = vlSelf->__PVT__btb_1_pre_lookup_value;
    vlSelf->__Vdly__btb_1_pre_bht = vlSelf->__PVT__btb_1_pre_bht;
    vlSelf->__Vdly__btb_0_pre_lookup_value = vlSelf->__PVT__btb_0_pre_lookup_value;
    vlSelf->__Vdly__btb_4_inst = vlSelf->__PVT__btb_4_inst;
    vlSelf->__Vdly__btb_1_inst = vlSelf->__PVT__btb_1_inst;
    vlSelf->__Vdly__btb_0_inst = vlSelf->__PVT__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5\n"); );
    // Body
    vlSelf->__PVT__btb_3_pre_decoder_jump = vlSelf->__Vdly__btb_3_pre_decoder_jump;
    vlSelf->__PVT__btb_4_inst = vlSelf->__Vdly__btb_4_inst;
    vlSelf->__PVT__btb_2_pre_decoder_jump = vlSelf->__Vdly__btb_2_pre_decoder_jump;
    vlSelf->__PVT__btb_2_pre_lookup_value = vlSelf->__Vdly__btb_2_pre_lookup_value;
    vlSelf->__PVT__btb_1_pre_decoder_branchdata = vlSelf->__Vdly__btb_1_pre_decoder_branchdata;
    vlSelf->__PVT__btb_1_pre_decoder_jump = vlSelf->__Vdly__btb_1_pre_decoder_jump;
    vlSelf->__PVT__btb_0_pre_decoder_branchdata = vlSelf->__Vdly__btb_0_pre_decoder_branchdata;
    vlSelf->__PVT__btb_0_pre_decoder_jump = vlSelf->__Vdly__btb_0_pre_decoder_jump;
    vlSelf->__PVT__btb_1_pre_lookup_value = vlSelf->__Vdly__btb_1_pre_lookup_value;
    vlSelf->__PVT__btb_1_pre_bht = vlSelf->__Vdly__btb_1_pre_bht;
    vlSelf->__PVT__btb_0_pre_lookup_value = vlSelf->__Vdly__btb_0_pre_lookup_value;
    vlSelf->__PVT__btb_1_inst = vlSelf->__Vdly__btb_1_inst;
    vlSelf->__PVT__btb_0_inst = vlSelf->__Vdly__btb_0_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6\n"); );
    // Body
    vlSelf->__Vdly__btb_14_exception_type = vlSelf->__PVT__btb_14_exception_type;
    vlSelf->__Vdly__btb_14_pre_decoder_jump = vlSelf->__PVT__btb_14_pre_decoder_jump;
    vlSelf->__Vdly__btb_14_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_14_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_14_pre_lookup_value = vlSelf->__PVT__btb_14_pre_lookup_value;
    vlSelf->__Vdly__btb_14_pre_bht = vlSelf->__PVT__btb_14_pre_bht;
    vlSelf->__Vdly__btb_14_pre_hashcode = vlSelf->__PVT__btb_14_pre_hashcode;
    vlSelf->__Vdly__btb_14_pre_lookup_data = vlSelf->__PVT__btb_14_pre_lookup_data;
    vlSelf->__Vdly__btb_14_pre_pc_target = vlSelf->__PVT__btb_14_pre_pc_target;
    vlSelf->__Vdly__btb_13_exception_type = vlSelf->__PVT__btb_13_exception_type;
    vlSelf->__Vdly__btb_12_exception_type = vlSelf->__PVT__btb_12_exception_type;
    vlSelf->__Vdly__btb_13_pre_decoder_jump = vlSelf->__PVT__btb_13_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_exception_type = vlSelf->__PVT__btb_11_exception_type;
    vlSelf->__Vdly__btb_12_pre_decoder_jump = vlSelf->__PVT__btb_12_pre_decoder_jump;
    vlSelf->__Vdly__btb_13_pre_lookup_value = vlSelf->__PVT__btb_13_pre_lookup_value;
    vlSelf->__Vdly__btb_13_pre_bht = vlSelf->__PVT__btb_13_pre_bht;
    vlSelf->__Vdly__btb_13_pre_hashcode = vlSelf->__PVT__btb_13_pre_hashcode;
    vlSelf->__Vdly__btb_13_pre_lookup_data = vlSelf->__PVT__btb_13_pre_lookup_data;
    vlSelf->__Vdly__btb_13_pre_pc_target = vlSelf->__PVT__btb_13_pre_pc_target;
    vlSelf->__Vdly__btb_10_exception_type = vlSelf->__PVT__btb_10_exception_type;
    vlSelf->__Vdly__btb_12_pre_lookup_value = vlSelf->__PVT__btb_12_pre_lookup_value;
    vlSelf->__Vdly__btb_12_pre_bht = vlSelf->__PVT__btb_12_pre_bht;
    vlSelf->__Vdly__btb_12_pre_hashcode = vlSelf->__PVT__btb_12_pre_hashcode;
    vlSelf->__Vdly__btb_12_pre_lookup_data = vlSelf->__PVT__btb_12_pre_lookup_data;
    vlSelf->__Vdly__btb_12_pre_pc_target = vlSelf->__PVT__btb_12_pre_pc_target;
    vlSelf->__Vdly__btb_9_exception_type = vlSelf->__PVT__btb_9_exception_type;
    vlSelf->__Vdly__btb_11_pre_lookup_value = vlSelf->__PVT__btb_11_pre_lookup_value;
    vlSelf->__Vdly__btb_11_pre_bht = vlSelf->__PVT__btb_11_pre_bht;
    vlSelf->__Vdly__btb_11_pre_hashcode = vlSelf->__PVT__btb_11_pre_hashcode;
    vlSelf->__Vdly__btb_11_pre_lookup_data = vlSelf->__PVT__btb_11_pre_lookup_data;
    vlSelf->__Vdly__btb_11_pre_pc_target = vlSelf->__PVT__btb_11_pre_pc_target;
    vlSelf->__Vdly__btb_8_exception_type = vlSelf->__PVT__btb_8_exception_type;
    vlSelf->__Vdly__btb_9_true_branch_state = vlSelf->__PVT__btb_9_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_decoder_branchdata = vlSelf->__PVT__btb_9_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_9_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_9_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_lookup_value = vlSelf->__PVT__btb_10_pre_lookup_value;
    vlSelf->__Vdly__btb_10_pre_bht = vlSelf->__PVT__btb_10_pre_bht;
    vlSelf->__Vdly__btb_10_pre_hashcode = vlSelf->__PVT__btb_10_pre_hashcode;
    vlSelf->__Vdly__btb_10_pre_lookup_data = vlSelf->__PVT__btb_10_pre_lookup_data;
    vlSelf->__Vdly__btb_10_pre_pc_target = vlSelf->__PVT__btb_10_pre_pc_target;
    vlSelf->__Vdly__btb_7_exception_type = vlSelf->__PVT__btb_7_exception_type;
    vlSelf->__Vdly__btb_8_true_branch_state = vlSelf->__PVT__btb_8_true_branch_state;
    vlSelf->__Vdly__btb_9_pre_lookup_value = vlSelf->__PVT__btb_9_pre_lookup_value;
    vlSelf->__Vdly__btb_9_pre_bht = vlSelf->__PVT__btb_9_pre_bht;
    vlSelf->__Vdly__btb_9_pre_hashcode = vlSelf->__PVT__btb_9_pre_hashcode;
    vlSelf->__Vdly__btb_9_pre_pc_target = vlSelf->__PVT__btb_9_pre_pc_target;
    vlSelf->__Vdly__btb_6_exception_type = vlSelf->__PVT__btb_6_exception_type;
    vlSelf->__Vdly__btb_7_true_branch_state = vlSelf->__PVT__btb_7_true_branch_state;
    vlSelf->__Vdly__btb_8_pre_lookup_value = vlSelf->__PVT__btb_8_pre_lookup_value;
    vlSelf->__Vdly__btb_8_pre_bht = vlSelf->__PVT__btb_8_pre_bht;
    vlSelf->__Vdly__btb_8_pre_hashcode = vlSelf->__PVT__btb_8_pre_hashcode;
    vlSelf->__Vdly__btb_8_pre_lookup_data = vlSelf->__PVT__btb_8_pre_lookup_data;
    vlSelf->__Vdly__btb_8_pre_pc_target = vlSelf->__PVT__btb_8_pre_pc_target;
    vlSelf->__Vdly__btb_5_exception_type = vlSelf->__PVT__btb_5_exception_type;
    vlSelf->__Vdly__btb_6_true_branch_state = vlSelf->__PVT__btb_6_true_branch_state;
    vlSelf->__Vdly__btb_7_pre_lookup_value = vlSelf->__PVT__btb_7_pre_lookup_value;
    vlSelf->__Vdly__btb_7_pre_bht = vlSelf->__PVT__btb_7_pre_bht;
    vlSelf->__Vdly__btb_7_pre_hashcode = vlSelf->__PVT__btb_7_pre_hashcode;
    vlSelf->__Vdly__btb_7_pre_lookup_data = vlSelf->__PVT__btb_7_pre_lookup_data;
    vlSelf->__Vdly__btb_7_pre_pc_target = vlSelf->__PVT__btb_7_pre_pc_target;
    vlSelf->__Vdly__btb_4_exception_type = vlSelf->__PVT__btb_4_exception_type;
    vlSelf->__Vdly__btb_12_inst = vlSelf->__PVT__btb_12_inst;
    vlSelf->__Vdly__btb_5_true_branch_state = vlSelf->__PVT__btb_5_true_branch_state;
    vlSelf->__Vdly__btb_6_pre_lookup_value = vlSelf->__PVT__btb_6_pre_lookup_value;
    vlSelf->__Vdly__btb_6_pre_bht = vlSelf->__PVT__btb_6_pre_bht;
    vlSelf->__Vdly__btb_6_pre_hashcode = vlSelf->__PVT__btb_6_pre_hashcode;
    vlSelf->__Vdly__btb_6_pre_lookup_data = vlSelf->__PVT__btb_6_pre_lookup_data;
    vlSelf->__Vdly__btb_6_pre_pc_target = vlSelf->__PVT__btb_6_pre_pc_target;
    vlSelf->__Vdly__btb_3_exception_type = vlSelf->__PVT__btb_3_exception_type;
    vlSelf->__Vdly__btb_4_true_branch_state = vlSelf->__PVT__btb_4_true_branch_state;
    vlSelf->__Vdly__btb_5_pre_lookup_value = vlSelf->__PVT__btb_5_pre_lookup_value;
    vlSelf->__Vdly__btb_5_pre_bht = vlSelf->__PVT__btb_5_pre_bht;
    vlSelf->__Vdly__btb_5_pre_hashcode = vlSelf->__PVT__btb_5_pre_hashcode;
    vlSelf->__Vdly__btb_5_pre_lookup_data = vlSelf->__PVT__btb_5_pre_lookup_data;
    vlSelf->__Vdly__btb_5_pre_pc_target = vlSelf->__PVT__btb_5_pre_pc_target;
    vlSelf->__Vdly__btb_2_exception_type = vlSelf->__PVT__btb_2_exception_type;
    vlSelf->__Vdly__btb_3_true_branch_state = vlSelf->__PVT__btb_3_true_branch_state;
    vlSelf->__Vdly__btb_3_pre_decoder_jr = vlSelf->__PVT__btb_3_pre_decoder_jr;
    vlSelf->__Vdly__btb_4_pre_lookup_value = vlSelf->__PVT__btb_4_pre_lookup_value;
    vlSelf->__Vdly__btb_4_pre_bht = vlSelf->__PVT__btb_4_pre_bht;
    vlSelf->__Vdly__btb_4_pre_hashcode = vlSelf->__PVT__btb_4_pre_hashcode;
    vlSelf->__Vdly__btb_4_pre_lookup_data = vlSelf->__PVT__btb_4_pre_lookup_data;
    vlSelf->__Vdly__btb_4_pre_pc_target = vlSelf->__PVT__btb_4_pre_pc_target;
    vlSelf->__Vdly__btb_1_exception_type = vlSelf->__PVT__btb_1_exception_type;
    vlSelf->__Vdly__btb_0_exception_type = vlSelf->__PVT__btb_0_exception_type;
    vlSelf->__Vdly__btb_9_inst = vlSelf->__PVT__btb_9_inst;
    vlSelf->__Vdly__btb_2_true_branch_state = vlSelf->__PVT__btb_2_true_branch_state;
    vlSelf->__Vdly__btb_2_pre_decoder_jr = vlSelf->__PVT__btb_2_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_decoder_branchdata = vlSelf->__PVT__btb_2_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_3_pre_lookup_value = vlSelf->__PVT__btb_3_pre_lookup_value;
    vlSelf->__Vdly__btb_3_pre_bht = vlSelf->__PVT__btb_3_pre_bht;
    vlSelf->__Vdly__btb_3_pre_hashcode = vlSelf->__PVT__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_3_pre_lookup_data = vlSelf->__PVT__btb_3_pre_lookup_data;
    vlSelf->__Vdly__btb_3_pre_pc_target = vlSelf->__PVT__btb_3_pre_pc_target;
    vlSelf->__Vdly__btb_8_inst = vlSelf->__PVT__btb_8_inst;
    vlSelf->__Vdly__btb_1_true_branch_state = vlSelf->__PVT__btb_1_true_branch_state;
    vlSelf->__Vdly__btb_1_pre_decoder_jr = vlSelf->__PVT__btb_1_pre_decoder_jr;
    vlSelf->__Vdly__btb_0_true_branch_state = vlSelf->__PVT__btb_0_true_branch_state;
    vlSelf->__Vdly__btb_0_pre_decoder_jr = vlSelf->__PVT__btb_0_pre_decoder_jr;
    vlSelf->__Vdly__btb_2_pre_bht = vlSelf->__PVT__btb_2_pre_bht;
    vlSelf->__Vdly__btb_2_pre_hashcode = vlSelf->__PVT__btb_2_pre_hashcode;
    vlSelf->__Vdly__btb_2_pre_lookup_data = vlSelf->__PVT__btb_2_pre_lookup_data;
    vlSelf->__Vdly__btb_2_pre_pc_target = vlSelf->__PVT__btb_2_pre_pc_target;
    vlSelf->__Vdly__btb_7_inst = vlSelf->__PVT__btb_7_inst;
    vlSelf->__Vdly__btb_1_pre_hashcode = vlSelf->__PVT__btb_1_pre_hashcode;
    vlSelf->__Vdly__btb_1_pre_lookup_data = vlSelf->__PVT__btb_1_pre_lookup_data;
    vlSelf->__Vdly__btb_1_pre_pc_target = vlSelf->__PVT__btb_1_pre_pc_target;
    vlSelf->__Vdly__btb_0_pre_bht = vlSelf->__PVT__btb_0_pre_bht;
    vlSelf->__Vdly__btb_0_pre_hashcode = vlSelf->__PVT__btb_0_pre_hashcode;
    vlSelf->__Vdly__btb_0_pre_lookup_data = vlSelf->__PVT__btb_0_pre_lookup_data;
    vlSelf->__Vdly__btb_0_pre_pc_target = vlSelf->__PVT__btb_0_pre_pc_target;
    vlSelf->__Vdly__btb_6_inst = vlSelf->__PVT__btb_6_inst;
    vlSelf->__Vdly__btb_5_inst = vlSelf->__PVT__btb_5_inst;
    vlSelf->__Vdly__btb_3_inst = vlSelf->__PVT__btb_3_inst;
    vlSelf->__Vdly__btb_2_inst = vlSelf->__PVT__btb_2_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__8\n"); );
    // Body
    vlSelf->__PVT__btb_5_inst = vlSelf->__Vdly__btb_5_inst;
    vlSelf->__PVT__btb_3_true_branch_state = vlSelf->__Vdly__btb_3_true_branch_state;
    vlSelf->__PVT__btb_3_pre_decoder_jr = vlSelf->__Vdly__btb_3_pre_decoder_jr;
    vlSelf->__PVT__btb_3_pre_lookup_data = vlSelf->__Vdly__btb_3_pre_lookup_data;
    vlSelf->__PVT__btb_3_pre_pc_target = vlSelf->__Vdly__btb_3_pre_pc_target;
    vlSelf->__PVT__btb_3_exception_type = vlSelf->__Vdly__btb_3_exception_type;
    vlSelf->__PVT__btb_2_true_branch_state = vlSelf->__Vdly__btb_2_true_branch_state;
    vlSelf->__PVT__btb_2_pre_decoder_jr = vlSelf->__Vdly__btb_2_pre_decoder_jr;
    vlSelf->__PVT__btb_2_pre_decoder_branchdata = vlSelf->__Vdly__btb_2_pre_decoder_branchdata;
    vlSelf->__PVT__btb_2_pre_bht = vlSelf->__Vdly__btb_2_pre_bht;
    vlSelf->__PVT__btb_2_pre_hashcode = vlSelf->__Vdly__btb_2_pre_hashcode;
    vlSelf->__PVT__btb_2_pre_lookup_data = vlSelf->__Vdly__btb_2_pre_lookup_data;
    vlSelf->__PVT__btb_2_pre_pc_target = vlSelf->__Vdly__btb_2_pre_pc_target;
    vlSelf->__PVT__btb_2_exception_type = vlSelf->__Vdly__btb_2_exception_type;
    vlSelf->__PVT__btb_3_inst = vlSelf->__Vdly__btb_3_inst;
    vlSelf->__PVT__btb_1_true_branch_state = vlSelf->__Vdly__btb_1_true_branch_state;
    vlSelf->__PVT__btb_1_pre_decoder_jr = vlSelf->__Vdly__btb_1_pre_decoder_jr;
    vlSelf->__PVT__btb_0_true_branch_state = vlSelf->__Vdly__btb_0_true_branch_state;
    vlSelf->__PVT__btb_0_pre_decoder_jr = vlSelf->__Vdly__btb_0_pre_decoder_jr;
    vlSelf->__PVT__btb_1_pre_hashcode = vlSelf->__Vdly__btb_1_pre_hashcode;
    vlSelf->__PVT__btb_1_pre_lookup_data = vlSelf->__Vdly__btb_1_pre_lookup_data;
    vlSelf->__PVT__btb_1_pre_pc_target = vlSelf->__Vdly__btb_1_pre_pc_target;
    vlSelf->__PVT__btb_0_pre_bht = vlSelf->__Vdly__btb_0_pre_bht;
    vlSelf->__PVT__btb_0_pre_hashcode = vlSelf->__Vdly__btb_0_pre_hashcode;
    vlSelf->__PVT__btb_0_pre_lookup_data = vlSelf->__Vdly__btb_0_pre_lookup_data;
    vlSelf->__PVT__btb_0_pre_pc_target = vlSelf->__Vdly__btb_0_pre_pc_target;
    vlSelf->__PVT__btb_1_exception_type = vlSelf->__Vdly__btb_1_exception_type;
    vlSelf->__PVT__btb_0_exception_type = vlSelf->__Vdly__btb_0_exception_type;
    vlSelf->__PVT__btb_2_inst = vlSelf->__Vdly__btb_2_inst;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__9\n"); );
    // Body
    vlSelf->__Vdly__btb_9_pre_lookup_data = vlSelf->__PVT__btb_9_pre_lookup_data;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__10(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__10\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__11(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__11\n"); );
    // Body
    vlSelf->__PVT__btb_13_pre_lookup_value = vlSelf->__Vdly__btb_13_pre_lookup_value;
    vlSelf->__PVT__btb_13_pre_bht = vlSelf->__Vdly__btb_13_pre_bht;
    vlSelf->__PVT__btb_13_pre_hashcode = vlSelf->__Vdly__btb_13_pre_hashcode;
    vlSelf->__PVT__btb_13_pre_lookup_data = vlSelf->__Vdly__btb_13_pre_lookup_data;
    vlSelf->__PVT__btb_13_pre_pc_target = vlSelf->__Vdly__btb_13_pre_pc_target;
    vlSelf->__PVT__btb_13_exception_type = vlSelf->__Vdly__btb_13_exception_type;
    vlSelf->__PVT__btb_12_pre_lookup_value = vlSelf->__Vdly__btb_12_pre_lookup_value;
    vlSelf->__PVT__btb_12_pre_bht = vlSelf->__Vdly__btb_12_pre_bht;
    vlSelf->__PVT__btb_12_pre_hashcode = vlSelf->__Vdly__btb_12_pre_hashcode;
    vlSelf->__PVT__btb_12_pre_lookup_data = vlSelf->__Vdly__btb_12_pre_lookup_data;
    vlSelf->__PVT__btb_12_pre_pc_target = vlSelf->__Vdly__btb_12_pre_pc_target;
    vlSelf->__PVT__btb_12_exception_type = vlSelf->__Vdly__btb_12_exception_type;
    vlSelf->__PVT__btb_11_pre_lookup_value = vlSelf->__Vdly__btb_11_pre_lookup_value;
    vlSelf->__PVT__btb_11_pre_bht = vlSelf->__Vdly__btb_11_pre_bht;
    vlSelf->__PVT__btb_11_pre_hashcode = vlSelf->__Vdly__btb_11_pre_hashcode;
    vlSelf->__PVT__btb_11_pre_lookup_data = vlSelf->__Vdly__btb_11_pre_lookup_data;
    vlSelf->__PVT__btb_11_pre_pc_target = vlSelf->__Vdly__btb_11_pre_pc_target;
    vlSelf->__PVT__btb_11_exception_type = vlSelf->__Vdly__btb_11_exception_type;
    vlSelf->__PVT__btb_10_pre_lookup_value = vlSelf->__Vdly__btb_10_pre_lookup_value;
    vlSelf->__PVT__btb_10_pre_bht = vlSelf->__Vdly__btb_10_pre_bht;
    vlSelf->__PVT__btb_10_pre_hashcode = vlSelf->__Vdly__btb_10_pre_hashcode;
    vlSelf->__PVT__btb_10_pre_lookup_data = vlSelf->__Vdly__btb_10_pre_lookup_data;
    vlSelf->__PVT__btb_10_pre_pc_target = vlSelf->__Vdly__btb_10_pre_pc_target;
    vlSelf->__PVT__btb_10_exception_type = vlSelf->__Vdly__btb_10_exception_type;
    vlSelf->__PVT__btb_9_pre_lookup_value = vlSelf->__Vdly__btb_9_pre_lookup_value;
    vlSelf->__PVT__btb_9_pre_bht = vlSelf->__Vdly__btb_9_pre_bht;
    vlSelf->__PVT__btb_8_pre_lookup_value = vlSelf->__Vdly__btb_8_pre_lookup_value;
    vlSelf->__PVT__btb_8_pre_bht = vlSelf->__Vdly__btb_8_pre_bht;
    vlSelf->__PVT__btb_8_pre_hashcode = vlSelf->__Vdly__btb_8_pre_hashcode;
    vlSelf->__PVT__btb_8_pre_lookup_data = vlSelf->__Vdly__btb_8_pre_lookup_data;
    vlSelf->__PVT__btb_8_pre_pc_target = vlSelf->__Vdly__btb_8_pre_pc_target;
    vlSelf->__PVT__btb_8_exception_type = vlSelf->__Vdly__btb_8_exception_type;
    vlSelf->__PVT__btb_7_pre_lookup_value = vlSelf->__Vdly__btb_7_pre_lookup_value;
    vlSelf->__PVT__btb_7_pre_bht = vlSelf->__Vdly__btb_7_pre_bht;
    vlSelf->__PVT__btb_7_pre_hashcode = vlSelf->__Vdly__btb_7_pre_hashcode;
    vlSelf->__PVT__btb_7_pre_lookup_data = vlSelf->__Vdly__btb_7_pre_lookup_data;
    vlSelf->__PVT__btb_7_pre_pc_target = vlSelf->__Vdly__btb_7_pre_pc_target;
    vlSelf->__PVT__btb_7_exception_type = vlSelf->__Vdly__btb_7_exception_type;
    vlSelf->__PVT__btb_6_pre_lookup_value = vlSelf->__Vdly__btb_6_pre_lookup_value;
    vlSelf->__PVT__btb_6_pre_bht = vlSelf->__Vdly__btb_6_pre_bht;
    vlSelf->__PVT__btb_6_pre_hashcode = vlSelf->__Vdly__btb_6_pre_hashcode;
    vlSelf->__PVT__btb_6_pre_lookup_data = vlSelf->__Vdly__btb_6_pre_lookup_data;
    vlSelf->__PVT__btb_6_pre_pc_target = vlSelf->__Vdly__btb_6_pre_pc_target;
    vlSelf->__PVT__btb_6_exception_type = vlSelf->__Vdly__btb_6_exception_type;
    vlSelf->__PVT__btb_5_pre_lookup_value = vlSelf->__Vdly__btb_5_pre_lookup_value;
    vlSelf->__PVT__btb_5_pre_bht = vlSelf->__Vdly__btb_5_pre_bht;
    vlSelf->__PVT__btb_5_pre_hashcode = vlSelf->__Vdly__btb_5_pre_hashcode;
    vlSelf->__PVT__btb_5_pre_lookup_data = vlSelf->__Vdly__btb_5_pre_lookup_data;
    vlSelf->__PVT__btb_5_pre_pc_target = vlSelf->__Vdly__btb_5_pre_pc_target;
    vlSelf->__PVT__btb_5_exception_type = vlSelf->__Vdly__btb_5_exception_type;
    vlSelf->__PVT__btb_4_pre_lookup_value = vlSelf->__Vdly__btb_4_pre_lookup_value;
    vlSelf->__PVT__btb_4_pre_bht = vlSelf->__Vdly__btb_4_pre_bht;
    vlSelf->__PVT__btb_4_pre_hashcode = vlSelf->__Vdly__btb_4_pre_hashcode;
    vlSelf->__PVT__btb_4_pre_lookup_data = vlSelf->__Vdly__btb_4_pre_lookup_data;
    vlSelf->__PVT__btb_4_pre_pc_target = vlSelf->__Vdly__btb_4_pre_pc_target;
    vlSelf->__PVT__btb_4_exception_type = vlSelf->__Vdly__btb_4_exception_type;
    vlSelf->__PVT__btb_3_pre_lookup_value = vlSelf->__Vdly__btb_3_pre_lookup_value;
    vlSelf->__PVT__btb_3_pre_bht = vlSelf->__Vdly__btb_3_pre_bht;
    vlSelf->__PVT__btb_3_pre_hashcode = vlSelf->__Vdly__btb_3_pre_hashcode;
    vlSelf->__Vdly__btb_15_exception_type = vlSelf->__PVT__btb_15_exception_type;
    vlSelf->__Vdly__btb_15_pre_lookup_value = vlSelf->__PVT__btb_15_pre_lookup_value;
    vlSelf->__Vdly__btb_15_pre_bht = vlSelf->__PVT__btb_15_pre_bht;
    vlSelf->__Vdly__btb_15_pre_hashcode = vlSelf->__PVT__btb_15_pre_hashcode;
    vlSelf->__Vdly__btb_15_pre_lookup_data = vlSelf->__PVT__btb_15_pre_lookup_data;
    vlSelf->__Vdly__btb_15_pre_pc_target = vlSelf->__PVT__btb_15_pre_pc_target;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__12(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__12\n"); );
    // Body
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
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__13(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__13\n"); );
    // Body
    vlSelf->__PVT__btb_15_pre_lookup_value = vlSelf->__Vdly__btb_15_pre_lookup_value;
    vlSelf->__PVT__btb_15_pre_bht = vlSelf->__Vdly__btb_15_pre_bht;
    vlSelf->__PVT__btb_15_pre_hashcode = vlSelf->__Vdly__btb_15_pre_hashcode;
    vlSelf->__PVT__btb_15_pre_lookup_data = vlSelf->__Vdly__btb_15_pre_lookup_data;
    vlSelf->__PVT__btb_15_pre_pc_target = vlSelf->__Vdly__btb_15_pre_pc_target;
    vlSelf->__PVT__btb_15_exception_type = vlSelf->__Vdly__btb_15_exception_type;
    vlSelf->__PVT__btb_14_pre_lookup_value = vlSelf->__Vdly__btb_14_pre_lookup_value;
    vlSelf->__PVT__btb_14_pre_bht = vlSelf->__Vdly__btb_14_pre_bht;
    vlSelf->__PVT__btb_14_pre_hashcode = vlSelf->__Vdly__btb_14_pre_hashcode;
    vlSelf->__PVT__btb_14_pre_lookup_data = vlSelf->__Vdly__btb_14_pre_lookup_data;
    vlSelf->__PVT__btb_14_pre_pc_target = vlSelf->__Vdly__btb_14_pre_pc_target;
    vlSelf->__PVT__btb_14_exception_type = vlSelf->__Vdly__btb_14_exception_type;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__0\n"); );
    // Body
    vlSelf->__PVT___GEN_81 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_value)
                               : (IData)(vlSelf->__PVT__btb_0_pre_lookup_value));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_1_pre_bht)
                               : (IData)(vlSelf->__PVT__btb_0_pre_bht));
    vlSelf->__PVT___GEN_129 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_hashcode)
                                : (IData)(vlSelf->__PVT__btb_0_pre_hashcode));
    vlSelf->__PVT___GEN_145 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_pre_lookup_data)
                                : (IData)(vlSelf->__PVT__btb_0_pre_lookup_data));
    vlSelf->__PVT___GEN_161 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_1_pre_pc_target
                                : vlSelf->__PVT__btb_0_pre_pc_target);
    vlSelf->__PVT___GEN_177 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_1_exception_type)
                                : (IData)(vlSelf->__PVT__btb_0_exception_type));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__1\n"); );
    // Body
    vlSelf->__PVT___GEN_82 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_2_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_130 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT___GEN_146 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_145));
    vlSelf->__PVT___GEN_162 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_2_pre_pc_target
                                : vlSelf->__PVT___GEN_161);
    vlSelf->__PVT___GEN_178 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_2_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_177));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__2\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_3_pre_bht)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_131 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___GEN_147 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_146));
    vlSelf->__PVT___GEN_163 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_3_pre_pc_target
                                : vlSelf->__PVT___GEN_162);
    vlSelf->__PVT___GEN_179 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_3_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_178));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__3\n"); );
    // Body
    vlSelf->__PVT___GEN_84 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_value)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_bht)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_132 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_131));
    vlSelf->__PVT___GEN_148 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_147));
    vlSelf->__PVT___GEN_164 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_4_pre_pc_target
                                : vlSelf->__PVT___GEN_163);
    vlSelf->__PVT___GEN_180 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_4_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_179));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__4\n"); );
    // Body
    vlSelf->__PVT___GEN_133 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_132));
    vlSelf->__PVT___GEN_149 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_148));
    vlSelf->__PVT___GEN_165 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_5_pre_pc_target
                                : vlSelf->__PVT___GEN_164);
    vlSelf->__PVT___GEN_181 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_5_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_180));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__5\n"); );
    // Body
    vlSelf->__PVT___GEN_134 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_133));
    vlSelf->__PVT___GEN_150 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_149));
    vlSelf->__PVT___GEN_166 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_6_pre_pc_target
                                : vlSelf->__PVT___GEN_165);
    vlSelf->__PVT___GEN_182 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_6_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_181));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__6\n"); );
    // Body
    vlSelf->__PVT___GEN_135 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_134));
    vlSelf->__PVT___GEN_151 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_150));
    vlSelf->__PVT___GEN_167 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_7_pre_pc_target
                                : vlSelf->__PVT___GEN_166);
    vlSelf->__PVT___GEN_183 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_7_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_182));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_comb__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__7\n"); );
    // Body
    vlSelf->__PVT___GEN_136 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_hashcode)
                                : (IData)(vlSelf->__PVT___GEN_135));
    vlSelf->__PVT___GEN_152 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_pre_lookup_data)
                                : (IData)(vlSelf->__PVT___GEN_151));
    vlSelf->__PVT___GEN_168 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? vlSelf->__PVT__btb_8_pre_pc_target
                                : vlSelf->__PVT___GEN_167);
    vlSelf->__PVT___GEN_184 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_8_exception_type)
                                : (IData)(vlSelf->__PVT___GEN_183));
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__14(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__14\n"); );
    // Body
    vlSelf->__Vdly__btb_14_pre_decoder_branchdata = vlSelf->__PVT__btb_14_pre_decoder_branchdata;
    vlSelf->__Vdly__btb_14_pre_pht = vlSelf->__PVT__btb_14_pre_pht;
    vlSelf->__Vdly__btb_14_pc = vlSelf->__PVT__btb_14_pc;
    vlSelf->__Vdly__btb_14_inst = vlSelf->__PVT__btb_14_inst;
    vlSelf->__Vdly__btb_13_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_13_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_12_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pre_pht = vlSelf->__PVT__btb_13_pre_pht;
    vlSelf->__Vdly__btb_11_pre_decoder_jump = vlSelf->__PVT__btb_11_pre_decoder_jump;
    vlSelf->__Vdly__btb_11_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_11_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_10_pre_decoder_jump = vlSelf->__PVT__btb_10_pre_decoder_jump;
    vlSelf->__Vdly__btb_10_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_10_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_13_pc = vlSelf->__PVT__btb_13_pc;
    vlSelf->__Vdly__btb_8_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_8_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_12_pc = vlSelf->__PVT__btb_12_pc;
    vlSelf->__Vdly__btb_7_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_7_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_8_pre_pht = vlSelf->__PVT__btb_8_pre_pht;
    vlSelf->__Vdly__btb_11_pc = vlSelf->__PVT__btb_11_pc;
    vlSelf->__Vdly__btb_13_inst = vlSelf->__PVT__btb_13_inst;
    vlSelf->__Vdly__btb_6_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_6_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_7_pre_pht = vlSelf->__PVT__btb_7_pre_pht;
    vlSelf->__Vdly__btb_10_pc = vlSelf->__PVT__btb_10_pc;
    vlSelf->__Vdly__btb_5_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_5_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_6_pre_pht = vlSelf->__PVT__btb_6_pre_pht;
    vlSelf->__Vdly__btb_9_pc = vlSelf->__PVT__btb_9_pc;
    vlSelf->__Vdly__btb_4_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_4_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_5_pre_pht = vlSelf->__PVT__btb_5_pre_pht;
    vlSelf->__Vdly__btb_8_pc = vlSelf->__PVT__btb_8_pc;
    vlSelf->__Vdly__btb_3_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_3_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_4_pre_pht = vlSelf->__PVT__btb_4_pre_pht;
    vlSelf->__Vdly__btb_7_pc = vlSelf->__PVT__btb_7_pc;
    vlSelf->__Vdly__btb_2_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_2_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_3_pre_pht = vlSelf->__PVT__btb_3_pre_pht;
    vlSelf->__Vdly__btb_6_pc = vlSelf->__PVT__btb_6_pc;
    vlSelf->__Vdly__btb_1_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_1_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_0_pre_decoder_branchD_flag 
        = vlSelf->__PVT__btb_0_pre_decoder_branchD_flag;
    vlSelf->__Vdly__btb_2_pre_pht = vlSelf->__PVT__btb_2_pre_pht;
    vlSelf->__Vdly__btb_5_pc = vlSelf->__PVT__btb_5_pc;
    vlSelf->__Vdly__btb_0_pre_pht = vlSelf->__PVT__btb_0_pre_pht;
    vlSelf->__Vdly__btb_4_pc = vlSelf->__PVT__btb_4_pc;
    vlSelf->__Vdly__btb_3_pc = vlSelf->__PVT__btb_3_pc;
    vlSelf->__Vdly__btb_2_pc = vlSelf->__PVT__btb_2_pc;
    vlSelf->__Vdly__btb_1_pc = vlSelf->__PVT__btb_1_pc;
    vlSelf->__Vdly__btb_0_pc = vlSelf->__PVT__btb_0_pc;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__15(Vmycpu_top_Look_up_table_read_first_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_Look_up_table_read_first_with_bundle___nba_sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1__15\n"); );
    // Body
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
}
