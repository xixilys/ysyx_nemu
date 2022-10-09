// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_icache_tag.h"

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__0(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__0\n"); );
    // Body
    vlSelf->__PVT___GEN_288 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_32)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_32 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_32
                               : vlSelf->__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_288 
        = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_32)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_287));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__1(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__1\n"); );
    // Body
    vlSelf->__PVT___GEN_289 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_33)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_33 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_33
                               : vlSelf->__PVT___GEN_32);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_289 
        = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_33)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_288));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__2(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__2\n"); );
    // Body
    vlSelf->__PVT___GEN_290 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_34)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_34 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_34
                               : vlSelf->__PVT___GEN_33);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_290 
        = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_34)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_289));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__3(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__3\n"); );
    // Body
    vlSelf->__PVT___GEN_291 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_35)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_35 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_35
                               : vlSelf->__PVT___GEN_34);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_291 
        = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_35)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_290));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__4(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__4\n"); );
    // Body
    vlSelf->__PVT___GEN_292 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_36)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_36 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_36
                               : vlSelf->__PVT___GEN_35);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_292 
        = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_36)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_291));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__5(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__5\n"); );
    // Body
    vlSelf->__PVT___GEN_293 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_37)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_37 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_37
                               : vlSelf->__PVT___GEN_36);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_293 
        = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_37)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_292));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__6(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__6\n"); );
    // Body
    vlSelf->__PVT___GEN_296 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_40)
                                : (IData)(vlSelf->__PVT___GEN_295));
    vlSelf->__PVT___GEN_40 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_40
                               : vlSelf->__PVT___GEN_39);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_296 
        = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_40)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_295));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__7(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__7\n"); );
    // Body
    vlSelf->__PVT___GEN_299 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_43)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_43 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_43
                               : vlSelf->__PVT___GEN_42);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_299 
        = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_43)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_298));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__8(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__8\n"); );
    // Body
    vlSelf->__PVT___GEN_302 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_46)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_46 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_46
                               : vlSelf->__PVT___GEN_45);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_302 
        = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_46)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_301));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__9(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__9\n"); );
    // Body
    vlSelf->__PVT___GEN_303 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_47)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_47 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_47
                               : vlSelf->__PVT___GEN_46);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_303 
        = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_47)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_302));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__10(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__10\n"); );
    // Body
    vlSelf->__PVT___GEN_304 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_48)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_48 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_48
                               : vlSelf->__PVT___GEN_47);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_304 
        = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_48)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_303));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__11(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__11\n"); );
    // Body
    vlSelf->__PVT___GEN_305 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_49)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_49 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_49
                               : vlSelf->__PVT___GEN_48);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_305 
        = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_49)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_304));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__12(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__12\n"); );
    // Body
    vlSelf->__PVT___GEN_306 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_50)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_50 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_50
                               : vlSelf->__PVT___GEN_49);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_306 
        = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_50)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_305));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__13(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__13\n"); );
    // Body
    vlSelf->__PVT___GEN_307 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_51)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_51 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_51
                               : vlSelf->__PVT___GEN_50);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_307 
        = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_51)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_306));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__14(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__14\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_52)
                                : (IData)(vlSelf->__PVT___GEN_307));
    vlSelf->__PVT___GEN_52 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_52
                               : vlSelf->__PVT___GEN_51);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_308 
        = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_52)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_307));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__15(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__15\n"); );
    // Body
    vlSelf->__PVT___GEN_309 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_53)
                                : (IData)(vlSelf->__PVT___GEN_308));
    vlSelf->__PVT___GEN_53 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_53
                               : vlSelf->__PVT___GEN_52);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_309 
        = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_53)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_308));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__16(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__16\n"); );
    // Body
    vlSelf->__PVT___GEN_310 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_54)
                                : (IData)(vlSelf->__PVT___GEN_309));
    vlSelf->__PVT___GEN_54 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_54
                               : vlSelf->__PVT___GEN_53);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_310 
        = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_54)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_309));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__17(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__17\n"); );
    // Body
    vlSelf->__PVT___GEN_311 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_55)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_55 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_55
                               : vlSelf->__PVT___GEN_54);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_311 
        = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_55)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_310));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__18(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__18\n"); );
    // Body
    vlSelf->__PVT___GEN_312 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_56)
                                : (IData)(vlSelf->__PVT___GEN_311));
    vlSelf->__PVT___GEN_56 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_56
                               : vlSelf->__PVT___GEN_55);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_312 
        = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_56)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_311));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__19(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__19\n"); );
    // Body
    vlSelf->__PVT___GEN_313 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_57)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_57 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_57
                               : vlSelf->__PVT___GEN_56);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_313 
        = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_57)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_312));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__20(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__20\n"); );
    // Body
    vlSelf->__PVT___GEN_314 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_58)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_58 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_58
                               : vlSelf->__PVT___GEN_57);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_314 
        = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_58)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_313));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__21(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__21\n"); );
    // Body
    vlSelf->__PVT___GEN_315 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_59)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_59 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_59
                               : vlSelf->__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_315 
        = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_59)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_314));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__22(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__22\n"); );
    // Body
    vlSelf->__PVT___GEN_316 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_60)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_60 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_60
                               : vlSelf->__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_316 
        = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_60)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_315));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__23(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__23\n"); );
    // Body
    vlSelf->__PVT___GEN_317 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_61)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_61 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_61
                               : vlSelf->__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_317 
        = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_61)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_316));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__24(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__24\n"); );
    // Body
    vlSelf->__PVT___GEN_318 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_62)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_62 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_62
                               : vlSelf->__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_318 
        = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_62)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_317));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__25(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__25\n"); );
    // Body
    vlSelf->__PVT___GEN_319 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_63)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_63 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_63
                               : vlSelf->__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_319 
        = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_63)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_318));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__26(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__26\n"); );
    // Body
    vlSelf->__PVT___GEN_320 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_64)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_64 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_64
                               : vlSelf->__PVT___GEN_63);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_320 
        = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_64)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_319));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__27(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__27\n"); );
    // Body
    vlSelf->__PVT___GEN_321 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_65)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_65 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_65
                               : vlSelf->__PVT___GEN_64);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_321 
        = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_65)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_320));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__28(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__28\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_66)
                                : (IData)(vlSelf->__PVT___GEN_321));
    vlSelf->__PVT___GEN_66 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_66
                               : vlSelf->__PVT___GEN_65);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_322 
        = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_66)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_321));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__29(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__29\n"); );
    // Body
    vlSelf->__PVT___GEN_323 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_67)
                                : (IData)(vlSelf->__PVT___GEN_322));
    vlSelf->__PVT___GEN_67 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_67
                               : vlSelf->__PVT___GEN_66);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_323 
        = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_67)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_322));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__30(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__30\n"); );
    // Body
    vlSelf->__PVT___GEN_324 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_68)
                                : (IData)(vlSelf->__PVT___GEN_323));
    vlSelf->__PVT___GEN_68 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_68
                               : vlSelf->__PVT___GEN_67);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_324 
        = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_68)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_323));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__31(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__31\n"); );
    // Body
    vlSelf->__PVT___GEN_325 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_69)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_69 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_69
                               : vlSelf->__PVT___GEN_68);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_325 
        = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_69)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_324));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__32(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__32\n"); );
    // Body
    vlSelf->__PVT___GEN_326 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_70)
                                : (IData)(vlSelf->__PVT___GEN_325));
    vlSelf->__PVT___GEN_70 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_70
                               : vlSelf->__PVT___GEN_69);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_326 
        = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_70)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_325));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__33(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__33\n"); );
    // Body
    vlSelf->__PVT___GEN_327 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_71)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_71 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_71
                               : vlSelf->__PVT___GEN_70);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_327 
        = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_71)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_326));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__34(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__34\n"); );
    // Body
    vlSelf->__PVT___GEN_328 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_72)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_72 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_72
                               : vlSelf->__PVT___GEN_71);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_328 
        = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_72)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_327));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__35(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__35\n"); );
    // Body
    vlSelf->__PVT___GEN_329 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_73)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_73 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_73
                               : vlSelf->__PVT___GEN_72);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_329 
        = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_73)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_328));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__36(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__36\n"); );
    // Body
    vlSelf->__PVT___GEN_330 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_74)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_74 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_74
                               : vlSelf->__PVT___GEN_73);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_330 
        = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_74)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_329));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__37(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__37\n"); );
    // Body
    vlSelf->__PVT___GEN_331 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_75)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_75 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_75
                               : vlSelf->__PVT___GEN_74);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_331 
        = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_75)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_330));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__38(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__38\n"); );
    // Body
    vlSelf->__PVT___GEN_332 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_76)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_76 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_76
                               : vlSelf->__PVT___GEN_75);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_332 
        = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_76)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_331));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__39(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__39\n"); );
    // Body
    vlSelf->__PVT___GEN_333 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_77)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_77 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_77
                               : vlSelf->__PVT___GEN_76);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_333 
        = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_77)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_332));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__40(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__40\n"); );
    // Body
    vlSelf->__PVT___GEN_334 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_78)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_78 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_78
                               : vlSelf->__PVT___GEN_77);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_334 
        = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_78)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_333));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__41(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__41\n"); );
    // Body
    vlSelf->__PVT___GEN_335 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_79)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_79 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_79
                               : vlSelf->__PVT___GEN_78);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_335 
        = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_79)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_334));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__42(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__42\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_80)
                                : (IData)(vlSelf->__PVT___GEN_335));
    vlSelf->__PVT___GEN_80 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_80
                               : vlSelf->__PVT___GEN_79);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_336 
        = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_80)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_335));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__43(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__43\n"); );
    // Body
    vlSelf->__PVT___GEN_337 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_81)
                                : (IData)(vlSelf->__PVT___GEN_336));
    vlSelf->__PVT___GEN_81 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_81
                               : vlSelf->__PVT___GEN_80);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_337 
        = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_81)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_336));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__44(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__44\n"); );
    // Body
    vlSelf->__PVT___GEN_338 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_82)
                                : (IData)(vlSelf->__PVT___GEN_337));
    vlSelf->__PVT___GEN_82 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_82
                               : vlSelf->__PVT___GEN_81);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_338 
        = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_82)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_337));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__45(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__45\n"); );
    // Body
    vlSelf->__PVT___GEN_339 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_83)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_83 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_83
                               : vlSelf->__PVT___GEN_82);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_339 
        = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_83)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_338));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__46(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__46\n"); );
    // Body
    vlSelf->__PVT___GEN_340 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_84)
                                : (IData)(vlSelf->__PVT___GEN_339));
    vlSelf->__PVT___GEN_84 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_84
                               : vlSelf->__PVT___GEN_83);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_340 
        = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_84)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_339));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__47(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__47\n"); );
    // Body
    vlSelf->__PVT___GEN_341 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_85)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_85 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_85
                               : vlSelf->__PVT___GEN_84);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_341 
        = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_85)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_340));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__48(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__48\n"); );
    // Body
    vlSelf->__PVT___GEN_342 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_86)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_86 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_86
                               : vlSelf->__PVT___GEN_85);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_342 
        = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_86)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_341));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__49(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__49\n"); );
    // Body
    vlSelf->__PVT___GEN_343 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_87)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_87 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_87
                               : vlSelf->__PVT___GEN_86);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_343 
        = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_87)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_342));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__50(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__50\n"); );
    // Body
    vlSelf->__PVT___GEN_344 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_88)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_88 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_88
                               : vlSelf->__PVT___GEN_87);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_344 
        = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_88)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_343));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__51(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__51\n"); );
    // Body
    vlSelf->__PVT___GEN_345 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_89)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_89 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_89
                               : vlSelf->__PVT___GEN_88);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_345 
        = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_89)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_344));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__52(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__52\n"); );
    // Body
    vlSelf->__PVT___GEN_346 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_90)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_90 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_90
                               : vlSelf->__PVT___GEN_89);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_346 
        = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_90)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_345));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__53(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__53\n"); );
    // Body
    vlSelf->__PVT___GEN_347 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_91)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_91 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_91
                               : vlSelf->__PVT___GEN_90);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_347 
        = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_91)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_346));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__54(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__54\n"); );
    // Body
    vlSelf->__PVT___GEN_348 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_92)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_92 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_92
                               : vlSelf->__PVT___GEN_91);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_348 
        = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_92)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_347));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__55(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__55\n"); );
    // Body
    vlSelf->__PVT___GEN_349 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_93)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_93 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_93
                               : vlSelf->__PVT___GEN_92);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_349 
        = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_93)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_348));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__56(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__56\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_94)
                                : (IData)(vlSelf->__PVT___GEN_349));
    vlSelf->__PVT___GEN_94 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_94
                               : vlSelf->__PVT___GEN_93);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_350 
        = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_94)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_349));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__57(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__57\n"); );
    // Body
    vlSelf->__PVT___GEN_351 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_95)
                                : (IData)(vlSelf->__PVT___GEN_350));
    vlSelf->__PVT___GEN_95 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_95
                               : vlSelf->__PVT___GEN_94);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_351 
        = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_95)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_350));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__58(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__58\n"); );
    // Body
    vlSelf->__PVT___GEN_352 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_96)
                                : (IData)(vlSelf->__PVT___GEN_351));
    vlSelf->__PVT___GEN_96 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_96
                               : vlSelf->__PVT___GEN_95);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_352 
        = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_96)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_351));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__59(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__59\n"); );
    // Body
    vlSelf->__PVT___GEN_353 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_97)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_97 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_97
                               : vlSelf->__PVT___GEN_96);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_353 
        = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_97)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_352));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__60(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__60\n"); );
    // Body
    vlSelf->__PVT___GEN_354 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_98)
                                : (IData)(vlSelf->__PVT___GEN_353));
    vlSelf->__PVT___GEN_98 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_98
                               : vlSelf->__PVT___GEN_97);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_354 
        = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_98)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_353));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__61(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__61\n"); );
    // Body
    vlSelf->__PVT___GEN_355 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_99)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_99 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                               ? vlSelf->__PVT__tag_regs_99
                               : vlSelf->__PVT___GEN_98);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_355 
        = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_99)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_354));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__62(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__62\n"); );
    // Body
    vlSelf->__PVT___GEN_356 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_100)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_100 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_100
                                : vlSelf->__PVT___GEN_99);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_356 
        = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_100)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_355));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__63(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__63\n"); );
    // Body
    vlSelf->__PVT___GEN_357 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_101)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_101 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_101
                                : vlSelf->__PVT___GEN_100);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_357 
        = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_101)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_356));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__64(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__64\n"); );
    // Body
    vlSelf->__PVT___GEN_358 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_102)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_102 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_102
                                : vlSelf->__PVT___GEN_101);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_358 
        = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_102)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_357));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__65(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__65\n"); );
    // Body
    vlSelf->__PVT___GEN_359 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_103)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_103 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_103
                                : vlSelf->__PVT___GEN_102);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_359 
        = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_103)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_358));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__66(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__66\n"); );
    // Body
    vlSelf->__PVT___GEN_360 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_104)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_104 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_104
                                : vlSelf->__PVT___GEN_103);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_360 
        = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_104)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_359));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__67(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__67\n"); );
    // Body
    vlSelf->__PVT___GEN_361 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_105)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_105 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_105
                                : vlSelf->__PVT___GEN_104);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_361 
        = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_105)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_360));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__68(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__68\n"); );
    // Body
    vlSelf->__PVT___GEN_362 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_106)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_106 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_106
                                : vlSelf->__PVT___GEN_105);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_362 
        = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_106)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_361));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__69(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__69\n"); );
    // Body
    vlSelf->__PVT___GEN_363 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_107)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_107 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_107
                                : vlSelf->__PVT___GEN_106);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_363 
        = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_107)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_362));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__70(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__70\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_108)
                                : (IData)(vlSelf->__PVT___GEN_363));
    vlSelf->__PVT___GEN_108 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_108
                                : vlSelf->__PVT___GEN_107);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_364 
        = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_108)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_363));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__71(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__71\n"); );
    // Body
    vlSelf->__PVT___GEN_365 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_109)
                                : (IData)(vlSelf->__PVT___GEN_364));
    vlSelf->__PVT___GEN_109 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_109
                                : vlSelf->__PVT___GEN_108);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_365 
        = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_109)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_364));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__72(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__72\n"); );
    // Body
    vlSelf->__PVT___GEN_366 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_110)
                                : (IData)(vlSelf->__PVT___GEN_365));
    vlSelf->__PVT___GEN_110 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_110
                                : vlSelf->__PVT___GEN_109);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_366 
        = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_110)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_365));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__73(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__73\n"); );
    // Body
    vlSelf->__PVT___GEN_367 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_111)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_111 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_111
                                : vlSelf->__PVT___GEN_110);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_367 
        = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_111)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_366));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__74(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__74\n"); );
    // Body
    vlSelf->__PVT___GEN_374 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_118)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_118 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_118
                                : vlSelf->__PVT___GEN_117);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__75(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__75\n"); );
    // Body
    vlSelf->__PVT___GEN_375 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_119)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_119 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_119
                                : vlSelf->__PVT___GEN_118);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_375 
        = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_119)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_374));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_119 
        = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_119
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_118);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__76(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__76\n"); );
    // Body
    vlSelf->__PVT___GEN_376 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_120)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_120 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_120
                                : vlSelf->__PVT___GEN_119);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_376 
        = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_120)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_375));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_120 
        = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_120
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_119);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__77(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__77\n"); );
    // Body
    vlSelf->__PVT___GEN_377 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_121)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_121 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_121
                                : vlSelf->__PVT___GEN_120);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_377 
        = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_121)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_376));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_121 
        = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_121
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_120);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__78(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__78\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_122)
                                : (IData)(vlSelf->__PVT___GEN_377));
    vlSelf->__PVT___GEN_122 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_122
                                : vlSelf->__PVT___GEN_121);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_378 
        = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_122)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_377));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_122 
        = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_122
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_121);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__79(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__79\n"); );
    // Body
    vlSelf->__PVT___GEN_379 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_123)
                                : (IData)(vlSelf->__PVT___GEN_378));
    vlSelf->__PVT___GEN_123 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_123
                                : vlSelf->__PVT___GEN_122);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_379 
        = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_123)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_378));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_123 
        = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_123
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_122);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__80(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__80\n"); );
    // Body
    vlSelf->__PVT___GEN_380 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_124)
                                : (IData)(vlSelf->__PVT___GEN_379));
    vlSelf->__PVT___GEN_124 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_124
                                : vlSelf->__PVT___GEN_123);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_380 
        = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_124)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_379));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_124 
        = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_124
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_123);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__81(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag__81\n"); );
    // Body
    vlSelf->__PVT___GEN_381 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__tag_asid_regs_125)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_125 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_125
                                : vlSelf->__PVT___GEN_124);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_381 
        = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_125)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_380));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_125 
        = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_125
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_124);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__7(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__7\n"); );
    // Body
    vlSelf->__PVT___GEN_107 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_107
                                : vlSelf->__PVT___GEN_106);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_233 
        = ((0x69U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_105)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_232));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_105 
        = ((0x69U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_105)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_104));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_233 
        = ((0x69U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_105)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_232));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_105 
        = ((0x69U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_105)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_104));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__8(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__8\n"); );
    // Body
    vlSelf->__PVT___GEN_108 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_108
                                : vlSelf->__PVT___GEN_107);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_234 
        = ((0x6aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_106)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_233));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_106 
        = ((0x6aU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_106)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_105));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_234 
        = ((0x6aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_106)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_233));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_106 
        = ((0x6aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_106)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_105));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__9(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__9\n"); );
    // Body
    vlSelf->__PVT___GEN_109 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_109
                                : vlSelf->__PVT___GEN_108);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_235 
        = ((0x6bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_107)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_234));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_107 
        = ((0x6bU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_107)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_106));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_235 
        = ((0x6bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_107)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_234));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_107 
        = ((0x6bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_107)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_106));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__10(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__10\n"); );
    // Body
    vlSelf->__PVT___GEN_110 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_110
                                : vlSelf->__PVT___GEN_109);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_236 
        = ((0x6cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_108)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_235));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_108 
        = ((0x6cU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_108)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_107));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_236 
        = ((0x6cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_108)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_235));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_108 
        = ((0x6cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_108)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_107));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__11(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__11\n"); );
    // Body
    vlSelf->__PVT___GEN_111 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_111
                                : vlSelf->__PVT___GEN_110);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_237 
        = ((0x6dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_109)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_236));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_109 
        = ((0x6dU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_109)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_108));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_237 
        = ((0x6dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_109)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_236));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_109 
        = ((0x6dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_109)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_108));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__12(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__12\n"); );
    // Body
    vlSelf->__PVT___GEN_112 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_112
                                : vlSelf->__PVT___GEN_111);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_238 
        = ((0x6eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_110)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_237));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_110 
        = ((0x6eU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_110)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_109));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_238 
        = ((0x6eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_110)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_237));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_110 
        = ((0x6eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_110)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_109));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__13(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__13\n"); );
    // Body
    vlSelf->__PVT___GEN_113 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_113
                                : vlSelf->__PVT___GEN_112);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_239 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_111)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_238));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_111 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_111)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_239 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_111)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_238));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_111 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_111)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_110));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__14(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__14\n"); );
    // Body
    vlSelf->__PVT___GEN_114 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_114
                                : vlSelf->__PVT___GEN_113);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_240 
        = ((0x70U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_112)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_239));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_112 
        = ((0x70U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_112)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_111));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_240 
        = ((0x70U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_112)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_239));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_112 
        = ((0x70U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_112)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_111));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__15(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__15\n"); );
    // Body
    vlSelf->__PVT___GEN_115 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_115
                                : vlSelf->__PVT___GEN_114);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_241 
        = ((0x71U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_113)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_240));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_113 
        = ((0x71U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_113)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_112));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__16(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__16\n"); );
    // Body
    vlSelf->__PVT___GEN_116 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_116
                                : vlSelf->__PVT___GEN_115);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_242 
        = ((0x72U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_114)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_241));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_114 
        = ((0x72U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_114)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_113));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__17(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__17\n"); );
    // Body
    vlSelf->__PVT___GEN_117 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_117
                                : vlSelf->__PVT___GEN_116);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_243 
        = ((0x73U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_115)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_242));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_115 
        = ((0x73U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_115)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_114));
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__18(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___combo__TOP__mycpu_top__inst_cache__icache_tag_1__18\n"); );
    // Body
    vlSelf->__PVT___GEN_118 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                ? vlSelf->__PVT__tag_regs_118
                                : vlSelf->__PVT___GEN_117);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_115));
}
