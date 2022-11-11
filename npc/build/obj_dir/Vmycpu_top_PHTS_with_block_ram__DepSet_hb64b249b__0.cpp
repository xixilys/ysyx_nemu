// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_with_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
    vlSelf->__PVT__pht_data_with_block_ram_1_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__btb_data_ram_0_io_dina;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__23(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__23\n"); );
    // Body
    vlSelf->__PVT__io_out = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                    ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 4U, 2U)
                                    : (IData)(vlSelf->__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__24(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__24\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                                  ? (IData)(vlSelf->__PVT__phts_7_rdata)
                                  : (IData)(vlSelf->__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_pht_out 
        = vlSelf->__PVT__io_pht_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__25(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__25\n"); );
    // Body
    vlSelf->__PVT__io_out = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                    ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 4U, 2U)
                                    : (IData)(vlSelf->__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__26(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__26\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                                  ? (IData)(vlSelf->__PVT__phts_7_rdata)
                                  : (IData)(vlSelf->__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_pht_out 
        = vlSelf->__PVT__io_pht_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__16(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__16\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_wen = 
        ((0U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_1_io_wen 
        = ((1U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_2_io_wen 
        = ((2U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_3_io_wen 
        = ((3U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_4_io_wen 
        = ((4U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_6_io_wen 
        = ((6U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_7_io_wen 
        = ((7U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_io_wen 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_io_wen 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_3_io_wen 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_io_wen 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_1_io_wen 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_2_io_wen 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_3_io_wen 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_4_io_wen 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_5_io_wen 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_6_io_wen 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_7_io_wen 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_write));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__27(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__27\n"); );
    // Body
    vlSelf->__PVT__io_out = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                    ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 4U, 2U)
                                    : (IData)(vlSelf->__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__28(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__28\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                                  ? (IData)(vlSelf->__PVT__phts_7_rdata)
                                  : (IData)(vlSelf->__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_pht_out 
        = vlSelf->__PVT__io_pht_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__10(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__10\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_4_io_wdata 
        = vlSelf->__PVT__io_in;
    vlSelf->__PVT__pht_data_with_block_ram_5_io_wdata 
        = vlSelf->__PVT__io_in;
    vlSelf->__PVT__pht_data_with_block_ram_6_io_wdata 
        = vlSelf->__PVT__io_in;
    vlSelf->__PVT__pht_data_with_block_ram_7_io_wdata 
        = vlSelf->__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_3_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_4_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_5_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_6_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_7_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_1_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_6_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_7_io_wdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_in;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__16(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__16\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_wen = 
        ((0U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_1_io_wen 
        = ((1U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_2_io_wen 
        = ((2U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_3_io_wen 
        = ((3U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_4_io_wen 
        = ((4U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_5_io_wen 
        = ((5U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_6_io_wen 
        = ((6U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__pht_data_with_block_ram_7_io_wen 
        = ((7U == (IData)(vlSelf->__PVT__io_aw_pht_addr)) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_5_io_wen 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_1_io_wen 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_4_io_wen 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_5_io_wen 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_6_io_wen 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_7_io_wen 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_aw_pht_addr)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_write));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__27(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__27\n"); );
    // Body
    vlSelf->__PVT__io_out = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__raddr_reg), 0U, 2U)))
                                    ? VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_7), 4U, 2U)
                                    : (IData)(vlSelf->__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__29(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__29\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                                  ? (IData)(vlSelf->__PVT__phts_7_rdata)
                                  : (IData)(vlSelf->__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_pht_out 
        = vlSelf->__PVT__io_pht_out;
}
