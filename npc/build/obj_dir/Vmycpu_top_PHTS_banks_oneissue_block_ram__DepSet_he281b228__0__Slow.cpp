// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_banks_oneissue_block_ram.h"

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__PHTS_with_block_ram_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__PHTS_with_block_ram_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__PHTS_with_block_ram_3_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__PHTS_with_block_ram_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__PHTS_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__PHTS_with_block_ram_1_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__PHTS_with_block_ram_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_pht_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_addr 
        = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_addr 
        = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__PHTS_with_block_ram_io_aw_addr = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_addr 
        = vlSelf->__PVT__io_aw_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_write = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__io_aw_bank_sel)) 
                                                   & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__PHTS_with_block_ram_1_io_write = 
        ((1U == (IData)(vlSelf->__PVT__io_aw_bank_sel)) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__PHTS_with_block_ram_2_io_write = 
        ((2U == (IData)(vlSelf->__PVT__io_aw_bank_sel)) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__PHTS_with_block_ram_3_io_write = 
        ((3U == (IData)(vlSelf->__PVT__io_aw_bank_sel)) 
         & (IData)(vlSelf->__PVT__io_write));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__9(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__9\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_pht_addr 
        = vlSelf->__PVT__io_ar_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__13(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__13\n"); );
    // Body
    vlSelf->__PVT__phts_banks_3_pht_out = vlSelf->__PVT__PHTS_with_block_ram_3_io_pht_out;
    vlSelf->__PVT__phts_banks_2_pht_out = vlSelf->__PVT__PHTS_with_block_ram_2_io_pht_out;
    vlSelf->__PVT__phts_banks_0_pht_out = vlSelf->__PVT__PHTS_with_block_ram_io_pht_out;
    vlSelf->__PVT__phts_banks_1_pht_out = vlSelf->__PVT__PHTS_with_block_ram_1_io_pht_out;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__14(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__14\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((1U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_1_pht_out)
                              : (IData)(vlSelf->__PVT__phts_banks_0_pht_out));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__15(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__15\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((2U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_2_pht_out)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__17(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__17\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((3U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                                  ? (IData)(vlSelf->__PVT__phts_banks_3_pht_out)
                                  : (IData)(vlSelf->__PVT___GEN_6));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__18(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__18\n"); );
    // Body
    vlSelf->__PVT__phts_banks_3_out = vlSelf->__PVT__PHTS_with_block_ram_3_io_out;
    vlSelf->__PVT__phts_banks_2_out = vlSelf->__PVT__PHTS_with_block_ram_2_io_out;
    vlSelf->__PVT__phts_banks_0_out = vlSelf->__PVT__PHTS_with_block_ram_io_out;
    vlSelf->__PVT__phts_banks_1_out = vlSelf->__PVT__PHTS_with_block_ram_1_io_out;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__19(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__19\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_1_out)
                              : (IData)(vlSelf->__PVT__phts_banks_0_out));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__20(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__20\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                              ? (IData)(vlSelf->__PVT__phts_banks_2_out)
                              : (IData)(vlSelf->__PVT___GEN_1));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__21(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__21\n"); );
    // Body
    vlSelf->__PVT__io_out_L = ((3U == (IData)(vlSelf->__PVT__ar_bank_sel_reg))
                                ? (IData)(vlSelf->__PVT__phts_banks_3_out)
                                : (IData)(vlSelf->__PVT___GEN_2));
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__22(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__22\n"); );
    // Body
    vlSelf->__PVT__PHTS_with_block_ram_io_ar_addr = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_addr 
        = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_addr 
        = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_addr 
        = vlSelf->__PVT__io_ar_addr_L;
}

VL_ATTR_COLD void Vmycpu_top_PHTS_banks_oneissue_block_ram___ctor_var_reset(Vmycpu_top_PHTS_banks_oneissue_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_PHTS_banks_oneissue_block_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_ar_bank_sel = 0;
    vlSelf->__PVT__io_ar_addr_L = 0;
    vlSelf->__PVT__io_ar_pht_addr = 0;
    vlSelf->__PVT__io_aw_addr = 0;
    vlSelf->__PVT__io_aw_pht_addr = 0;
    vlSelf->__PVT__io_aw_bank_sel = 0;
    vlSelf->__PVT__io_write = 0;
    vlSelf->__PVT__io_in = 0;
    vlSelf->__PVT__io_out_L = 0;
    vlSelf->__PVT__io_pht_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_clock = 0;
    vlSelf->__PVT__PHTS_with_block_ram_reset = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_ar_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_ar_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_aw_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_aw_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_write = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_in = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_pht_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_io_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_clock = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_reset = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_ar_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_aw_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_write = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_in = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_pht_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_1_io_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_clock = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_reset = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_ar_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_aw_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_write = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_in = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_pht_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_2_io_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_clock = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_reset = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_ar_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_aw_pht_addr = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_write = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_in = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_pht_out = 0;
    vlSelf->__PVT__PHTS_with_block_ram_3_io_out = 0;
    vlSelf->__PVT__ar_bank_sel_reg = 0;
    vlSelf->__PVT__phts_banks_0_out = 0;
    vlSelf->__PVT__phts_banks_1_out = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT__phts_banks_2_out = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT__phts_banks_3_out = 0;
    vlSelf->__PVT__phts_banks_0_pht_out = 0;
    vlSelf->__PVT__phts_banks_1_pht_out = 0;
    vlSelf->__PVT___GEN_5 = 0;
    vlSelf->__PVT__phts_banks_2_pht_out = 0;
    vlSelf->__PVT___GEN_6 = 0;
    vlSelf->__PVT__phts_banks_3_pht_out = 0;
    vlSelf->__Vdly__ar_bank_sel_reg = 0;
}
