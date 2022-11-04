// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_fifo_with_bundle.h"

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_data_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_3_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_2_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_1_clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__clock;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__11(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___sequent__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__11\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__4(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_bht 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_hashcode 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_99 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_3_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_98));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_115 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_3_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_114));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc 
        = vlSelf->__PVT__io_write_in_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_20 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_100 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_116 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_12 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D)) 
              | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM) 
                 == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D))));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pc 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_io_in_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_21 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_101 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_117 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_MemWidthD_T_5 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))
            ? 2U : VL_EXTEND_II(2,1, (1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_13 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteE) 
            & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE) 
                == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D)) 
               | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegE) 
                  == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D)))) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_12));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__reset = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_reset;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__8(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_2 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__9(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_data 
        = vlSelf->__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_239 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_inst);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_241 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_pc_target);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_242 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_lookup_data));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_248 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_decoder_jump));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_249 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_pre_decoder_branchdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_251 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_1_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_0_true_branch_state));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_239 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_1_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_0_inst);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_RegDstD 
        = (0x1fU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U, 5U));
}
