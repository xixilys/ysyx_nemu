// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_with_block_ram.h"

VL_ATTR_COLD void Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram\n"); );
}

VL_ATTR_COLD void Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1\n"); );
}

VL_ATTR_COLD void Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2\n"); );
}

VL_ATTR_COLD void Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___eval_initial__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3\n"); );
}

VL_ATTR_COLD void Vmycpu_top_PHTS_with_block_ram___ctor_var_reset(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_ar_addr = 0;
    vlSelf->__PVT__io_ar_pht_addr = 0;
    vlSelf->__PVT__io_aw_addr = 0;
    vlSelf->__PVT__io_aw_pht_addr = 0;
    vlSelf->__PVT__io_write = 0;
    vlSelf->__PVT__io_in = 0;
    vlSelf->__PVT__io_pht_out = 0;
    vlSelf->__PVT__io_out = 0;
    vlSelf->__PVT__pht_data_with_block_ram_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_2_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_4_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_rdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_clock = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_reset = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_wen = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_raddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_waddr = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_wdata = 0;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_rdata = 0;
    vlSelf->__PVT__raddr_reg = 0;
    vlSelf->__PVT__ways_araddr_reg = 0;
    vlSelf->__PVT__phts_0_rdata = 0;
    vlSelf->__PVT__phts_1_rdata = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT__phts_2_rdata = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT__phts_3_rdata = 0;
    vlSelf->__PVT___GEN_3 = 0;
    vlSelf->__PVT__phts_4_rdata = 0;
    vlSelf->__PVT___GEN_4 = 0;
    vlSelf->__PVT__phts_5_rdata = 0;
    vlSelf->__PVT___GEN_5 = 0;
    vlSelf->__PVT__phts_6_rdata = 0;
    vlSelf->__PVT___GEN_6 = 0;
    vlSelf->__PVT__phts_7_rdata = 0;
    vlSelf->__PVT___GEN_7 = 0;
    vlSelf->__PVT___io_out_T_10 = 0;
    vlSelf->__PVT___io_out_T_12 = 0;
    vlSelf->__Vdly__raddr_reg = 0;
    vlSelf->__Vdly__ways_araddr_reg = 0;
}
