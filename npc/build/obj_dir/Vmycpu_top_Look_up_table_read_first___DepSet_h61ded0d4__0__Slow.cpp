// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_.h"

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__Look_up_table_read_first___1\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((1U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_1)
                               : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_34 = ((2U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_2)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((3U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_3)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((4U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_4)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((5U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_5)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((6U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_6)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((7U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_7)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((8U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_8)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((9U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_9)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0xaU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0xbU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0xcU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0xdU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0xeU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0xfU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x10U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x11U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x12U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x13U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x14U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x15U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x16U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x17U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x18U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x19U == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x1aU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x1bU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x1cU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x1dU == (IData)(vlSelf->__PVT__io_aw_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first_\n"); );
}

VL_ATTR_COLD void Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__Look_up_table_read_first___0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_1)
                              : (IData)(vlSelf->__PVT__btb_0));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_2)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_3)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_4)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_5)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_6)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_7)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_8)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_9)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_10)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_11)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_12)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_13)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_14)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_15)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_16)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_17)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_18)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_19)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_20)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_21)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_22)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_23)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_24)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_25)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_26)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_27)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_28)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_29)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1eU == (IData)(vlSelf->__PVT__io_ar_addr))
                               ? (IData)(vlSelf->__PVT__btb_30)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT__io_out = ((0x1fU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_31)
                              : (IData)(vlSelf->__PVT___GEN_30));
}
