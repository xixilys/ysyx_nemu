// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first___05F32.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first___481(Vmycpu_top_Look_up_table_read_first___05F32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first___481\n"); );
    // Body
    vlSelf->__PVT___GEN_487 = ((0x1e7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_487)
                                : (IData)(vlSelf->__PVT___GEN_486));
    vlSelf->__PVT___GEN_488 = ((0x1e8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_488)
                                : (IData)(vlSelf->__PVT___GEN_487));
    vlSelf->__PVT___GEN_489 = ((0x1e9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_489)
                                : (IData)(vlSelf->__PVT___GEN_488));
    vlSelf->__PVT___GEN_490 = ((0x1eaU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_490)
                                : (IData)(vlSelf->__PVT___GEN_489));
    vlSelf->__PVT___GEN_491 = ((0x1ebU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_491)
                                : (IData)(vlSelf->__PVT___GEN_490));
    vlSelf->__PVT___GEN_492 = ((0x1ecU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_492)
                                : (IData)(vlSelf->__PVT___GEN_491));
    vlSelf->__PVT___GEN_493 = ((0x1edU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_493)
                                : (IData)(vlSelf->__PVT___GEN_492));
    vlSelf->__PVT___GEN_494 = ((0x1eeU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_494)
                                : (IData)(vlSelf->__PVT___GEN_493));
    vlSelf->__PVT___GEN_495 = ((0x1efU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_495)
                                : (IData)(vlSelf->__PVT___GEN_494));
    vlSelf->__PVT___GEN_496 = ((0x1f0U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_496)
                                : (IData)(vlSelf->__PVT___GEN_495));
    vlSelf->__PVT___GEN_497 = ((0x1f1U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_497)
                                : (IData)(vlSelf->__PVT___GEN_496));
    vlSelf->__PVT___GEN_498 = ((0x1f2U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_498)
                                : (IData)(vlSelf->__PVT___GEN_497));
    vlSelf->__PVT___GEN_499 = ((0x1f3U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_499)
                                : (IData)(vlSelf->__PVT___GEN_498));
    vlSelf->__PVT___GEN_500 = ((0x1f4U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_500)
                                : (IData)(vlSelf->__PVT___GEN_499));
    vlSelf->__PVT___GEN_501 = ((0x1f5U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_501)
                                : (IData)(vlSelf->__PVT___GEN_500));
    vlSelf->__PVT___GEN_502 = ((0x1f6U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_502)
                                : (IData)(vlSelf->__PVT___GEN_501));
    vlSelf->__PVT___GEN_503 = ((0x1f7U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_503)
                                : (IData)(vlSelf->__PVT___GEN_502));
    vlSelf->__PVT___GEN_504 = ((0x1f8U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_504)
                                : (IData)(vlSelf->__PVT___GEN_503));
    vlSelf->__PVT___GEN_505 = ((0x1f9U == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_505)
                                : (IData)(vlSelf->__PVT___GEN_504));
    vlSelf->__PVT___GEN_506 = ((0x1faU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_506)
                                : (IData)(vlSelf->__PVT___GEN_505));
    vlSelf->__PVT___GEN_507 = ((0x1fbU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_507)
                                : (IData)(vlSelf->__PVT___GEN_506));
    vlSelf->__PVT___GEN_508 = ((0x1fcU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_508)
                                : (IData)(vlSelf->__PVT___GEN_507));
    vlSelf->__PVT___GEN_509 = ((0x1fdU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_509)
                                : (IData)(vlSelf->__PVT___GEN_508));
    vlSelf->__PVT___GEN_510 = ((0x1feU == (IData)(vlSelf->__PVT__io_ar_addr))
                                ? (IData)(vlSelf->__PVT__btb_510)
                                : (IData)(vlSelf->__PVT___GEN_509));
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_511)
                              : (IData)(vlSelf->__PVT___GEN_510));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__btb_tag_ram_0_io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0.__PVT__io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__btb_tag_ram_0_io_doutb;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_rdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__tag_banks_0_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_tag_with_block_ram_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__Look_up_table_read_first___510(Vmycpu_top_Look_up_table_read_first___05F32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0__Look_up_table_read_first___510\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_511)
                              : (IData)(vlSelf->__PVT___GEN_510));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first___1010(Vmycpu_top_Look_up_table_read_first___05F32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first___1010\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_511)
                              : (IData)(vlSelf->__PVT___GEN_510));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__Look_up_table_read_first___48(Vmycpu_top_Look_up_table_read_first___05F32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_Look_up_table_read_first___05F32___nba_comb__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0__Look_up_table_read_first___48\n"); );
    // Body
    vlSelf->__PVT__io_out = ((0x1ffU == (IData)(vlSelf->__PVT__io_ar_addr))
                              ? (IData)(vlSelf->__PVT__btb_511)
                              : (IData)(vlSelf->__PVT___GEN_510));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__io_out;
}
