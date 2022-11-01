// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BTB_banks_oneissue_with_block_ram.h"

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__0(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__0\n"); );
    // Body
    vlSelf->__Vdly__ar_addr_reg = vlSelf->__PVT__ar_addr_reg;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1\n"); );
    // Body
    vlSelf->__Vdly__ar_addr_reg = ((IData)(vlSelf->__PVT__reset)
                                    ? 0ULL : vlSelf->__PVT__io_ar_addr_L);
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__2(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__ar_addr_reg = vlSelf->__Vdly__ar_addr_reg;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__2(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_banks_0_rdata = vlSelf->__PVT__btb_data_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__3(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__btb_banks_1_rdata = vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__6(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__btb_data_with_block_ram_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__6(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__6\n"); );
    // Body
    vlSelf->__PVT__tag_banks_0_rdata = vlSelf->__PVT__btb_tag_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__7(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__7\n"); );
    // Body
    vlSelf->__PVT__tag_banks_1_rdata = vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__10(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__10\n"); );
    // Body
    vlSelf->__PVT__btb_data_with_block_ram_io_wen = 
        ((0U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wen 
        = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wen 
        = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wen 
        = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__11(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__btb_data_with_block_ram_3_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__11(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__11\n"); );
    // Body
    vlSelf->__PVT__btb_banks_3_rdata = vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__12(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__12\n"); );
    // Body
    vlSelf->__PVT__btb_banks_2_rdata = vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__13(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__13\n"); );
    // Body
    vlSelf->__PVT__tag_banks_3_rdata = vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__14(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__14\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_1_rdata
                              : vlSelf->__PVT__btb_banks_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__15(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__15\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_1_rdata)
                               : (IData)(vlSelf->__PVT__tag_banks_0_rdata));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__16(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__16\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_2_rdata
                              : vlSelf->__PVT___GEN_1);
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__17(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__17\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_2_rdata)
                               : (IData)(vlSelf->__PVT___GEN_13));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__18(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__18\n"); );
    // Body
    vlSelf->__PVT__io_out_L = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                                ? vlSelf->__PVT__btb_banks_3_rdata
                                : vlSelf->__PVT___GEN_2);
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__19(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__19\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_3_rdata)
                               : (IData)(vlSelf->__PVT___GEN_14));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__20(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__20\n"); );
    // Body
    vlSelf->__PVT__io_hit_L = (((0xfU & VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_15), 0U, 4U)) 
                                == (0xfU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 0xdU, 4U))) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT___GEN_15), 4U));
}
