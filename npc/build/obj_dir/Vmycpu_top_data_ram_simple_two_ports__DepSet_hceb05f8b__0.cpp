// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_simple_two_ports.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__io_doutb 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_295 
        = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_39)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_294));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_39 
        = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_39
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_38);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_295 
        = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_39)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_294));
}
