// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_PHTS_with_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__pht_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_7_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_6_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_5_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_4_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_3_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__pht_data_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_7_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_6_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_5_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_4_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_3_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__pht_data_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_7_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_6_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_5_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_4_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_3_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__clock;
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__3\n"); );
    // Body
    vlSelf->__PVT__phts_3_rdata = vlSelf->__PVT__pht_data_with_block_ram_3_io_rdata;
    vlSelf->__PVT__phts_0_rdata = vlSelf->__PVT__pht_data_with_block_ram_io_rdata;
    vlSelf->__PVT__phts_1_rdata = vlSelf->__PVT__pht_data_with_block_ram_1_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_2_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_2_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_0_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_1_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_1_io_rdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_301 
        = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_45)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_300));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_45 
        = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_45
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_44);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_301 
        = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_45)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_300));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__4(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT__io_pht_out = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSelf->__PVT__ways_araddr_reg), 0U, 3U)))
                                  ? (IData)(vlSelf->__PVT__phts_7_rdata)
                                  : (IData)(vlSelf->__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_pht_out 
        = vlSelf->__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_3_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_2_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_5 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_pht_out));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_6 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_2_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_3_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_186 
        = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_58
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_185);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_59 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_59 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_187 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_186);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_60 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_60 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_188 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_187);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_61 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_61 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_189 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_188);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_62 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_62 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_190 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_189);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_63 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_63 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_191 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_190);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag 
        = (0x7ffffffffffffULL & ((1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 6U))
                                  ? VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_191, 0U, 0x33U)
                                  : VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_63, 0U, 0x33U)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag 
        = (0x7ffffffffffffULL & ((1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 6U))
                                  ? VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_191, 0U, 0x33U)
                                  : VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_63, 0U, 0x33U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_tag 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_tag 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_113 
        = ((0x71U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_113)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_112));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_114 
        = ((0x72U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_114)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_113));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_115 
        = ((0x73U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_115)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_114));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT___icache_data_way1_0_wen_T_7 
        = (((IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___wait_data_L_T_7) 
            & (IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___GEN_130)) 
           & (IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___wait_data_L_T_3));
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT___icache_data_way1_1_wen_T_7 
        = (((IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___wait_data_L_T_7) 
            & (IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___GEN_130)) 
           & (IData)(vlSymsp->TOP__mycpu_top__inst_cache.__PVT___icache_data_way0_1_wen_T_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124 
        = ((0x7cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_124)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252 
        = ((0x7cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_124)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_124 
        = ((0x7cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_124)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_252 
        = ((0x7cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_124)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_252 
        = ((0x7cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_124)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251));
}

VL_INLINE_OPT void Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1(Vmycpu_top_PHTS_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_PHTS_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__1\n"); );
    // Body
    vlSelf->__PVT__pht_data_with_block_ram_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
    vlSelf->__PVT__pht_data_with_block_ram_1_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_aw_addr), 2U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__pht_data_with_block_ram_7_io_waddr 
        = (0x1fU & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_aw_addr), 2U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_ebase_hi 
        = VL_CONCAT_III(20,2,18, (3U & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_ebase, 0x1eU, 2U)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cp0_ebase_T_6);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cp0_entryhi_T_12 
        = (0xffU & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cp0_entryhi_T_3)
                     ? VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_data, 0U, 8U)
                     : VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_entryhi, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cp0_cause_T_2 
        = (3U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cause_write_en)
                  ? VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_cp0_write_data, 8U, 2U)
                  : VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_cause, 8U, 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__commit_in_delayslot 
        = (1U & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__int_signal) 
                  | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__commit_exception))
                  ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_in_delayslot)
                  : VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_cause, 0x1fU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___timer_int_T_6 
        = (1U & ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cp0_compare_T_2)) 
                 & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__cp0_cause, 0x1eU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___GEN_25 
        = VL_EXTEND_II(4,1, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_25, 0U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_36 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_21, 0U))
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_35 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___return_pc_Wire_T_5, 0U))
            ? 3U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_34 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___return_pc_Wire_T_2, 0U))
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_33 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_15, 0U))
            ? 0xcU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_32 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___return_pc_Wire_T, 0U))
            ? 0xaU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_31 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_11, 0U))
            ? 9U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_30 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_9, 0U))
            ? 8U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_29 
        = ((1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___cause_exccode_Wire_T_7, 0U))
            ? 5U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ebreakD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ebreakD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_RegDstD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_wr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_wr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_size 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_3 
        = ((3U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_3
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_21 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 3U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_7 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo 
        = VL_CONCAT_III(26,1,25, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(25,1,24, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_III(24,1,23, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                    VL_CONCAT_III(23,1,22, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                  VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo_lo), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI_lo_lo)))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS_lo_lo_lo 
        = VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                        VL_CONCAT_III(5,1,4, (1U & 
                                              VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                      VL_CONCAT_III(4,1,3, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                    VL_CONCAT_III(3,1,2, 
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                  VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immS_T_2), 0xbU)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_19 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_13) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_18));
}
