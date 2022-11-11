// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_with_block_ram.h"
#include "Vmycpu_top_pht_data_with_block_ram.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_clock;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_1_clock;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_2_clock;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_3_clock;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_4_clock;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_5_clock;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_6_clock;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_7_clock;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_reset;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_1_reset;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_2_reset;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_3_reset;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_4_reset;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_5_reset;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_6_reset;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_7_reset;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__8(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__8\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__9(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__9\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__10(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__10\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_clock;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_1_clock;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_2_clock;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_3_clock;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_4_clock;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_5_clock;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_6_clock;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_7_clock;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_reset;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_1_reset;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_2_reset;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_3_reset;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_4_reset;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_5_reset;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_6_reset;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_7_reset;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__1\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__6(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__6\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__7(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__7\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__8(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__8\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__12(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__12\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__13(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__13\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_clock;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_1_clock;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_2_clock;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_3_clock;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_4_clock;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_5_clock;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_6_clock;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_7_clock;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_reset;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_1_reset;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_2_reset;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_3_reset;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_4_reset;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_5_reset;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_6_reset;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_7_reset;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__3\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__8(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__8\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__9(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__9\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__12(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__12\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__13(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__13\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___ico_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram_7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_clock;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_1_clock;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_2_clock;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_3_clock;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_4_clock;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_5_clock;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_6_clock;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__clock 
        = vlSelf->__PVT__pht_data_with_block_ram_7_clock;
    vlSelf->__PVT__pht_data_with_block_ram->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_reset;
    vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_1_reset;
    vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_2_reset;
    vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_3_reset;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_4_reset;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_5_reset;
    vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_6_reset;
    vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__reset 
        = vlSelf->__PVT__pht_data_with_block_ram_7_reset;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_7->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__1\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_6->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_3->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__3\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_2->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__6(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__6\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_waddr 
        = vlSelf->__PVT__pht_data_with_block_ram_5_io_waddr;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_waddr 
        = vlSelf->__PVT__pht_data_with_block_ram_4_io_waddr;
    vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__btb_data_ram_0_io_addra 
        = vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_waddr;
    vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__btb_data_ram_0_io_addra 
        = vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_waddr;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__8(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__8\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_5->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__9(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__9\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_4->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__12(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__12\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram->__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__13(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__13\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata 
        = vlSelf->__PVT__pht_data_with_block_ram_1->__PVT__io_rdata;
}
