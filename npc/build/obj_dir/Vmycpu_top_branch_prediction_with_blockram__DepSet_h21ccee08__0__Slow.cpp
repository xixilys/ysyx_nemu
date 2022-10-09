// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__reset 
        = vlSelf->__PVT__BHT_banks_oneissue_reset;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__5\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock 
        = vlSelf->__PVT__BHT_banks_oneissue_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__reset 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__17(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__17\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__18(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__18\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_in 
        = vlSelf->__PVT__BHT_banks_oneissue_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_write 
        = vlSelf->__PVT__BHT_banks_oneissue_io_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__20(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__20\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__22(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__22\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_in 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_bank_sel 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__24(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__24\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__25(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__25\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__26(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__26\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__28(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__28\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_write 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__29(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__29\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_write 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__30(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__30\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__31(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__31\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__33(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__33\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__38(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__38\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_out_L = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__41(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__41\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__42(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__42\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_out_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__43(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__43\n"); );
    // Body
    vlSelf->__PVT__io_pre_target_L = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_hit_L;
}
