// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__1\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_banks_oneissue_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__BHT_banks_oneissue_io_in = (7U & 
                                               VL_SEL_IIII(7, (IData)(vlSelf->__PVT__io_bht_in), 0U, 3U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in 
        = vlSelf->__PVT__io_pht_in;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__io_aw_pht_ways_addr), 0U, 3U));
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_aw_pht_addr;
    vlSelf->__PVT__BHT_banks_oneissue_io_write = vlSelf->__PVT__io_bht_write;
    vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr = vlSelf->__PVT__io_aw_bht_addr;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_write_pc, 2U, 2U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr 
        = vlSelf->__PVT__io_write_pc;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
    vlSelf->__PVT__pc_hash_num_array_0 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 4U, 4U))));
    vlSelf->__PVT__pc_hash_num_array_1 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 8U, 4U))));
    vlSelf->__PVT__pc_hash_num_array_2 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xcU, 4U))));
    vlSelf->__PVT__pc_hash_num_array_3 = (1U & VL_REDXOR_32(
                                                            (0xfU 
                                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0x10U, 4U))));
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel 
        = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 2U, 2U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L 
        = vlSelf->__PVT__io_pc;
    vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L 
        = (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 4U, 7U));
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write 
        = vlSelf->__PVT__io_btb_write;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write 
        = vlSelf->__PVT__io_pht_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__clock 
        = vlSelf->__PVT__BHT_banks_oneissue_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__clock 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__reset 
        = vlSelf->__PVT__BHT_banks_oneissue_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__reset 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_in 
        = vlSelf->__PVT__BHT_banks_oneissue_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_target_addr 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_target_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_in 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_pht_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_pht_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_write 
        = vlSelf->__PVT__BHT_banks_oneissue_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_banks_oneissue_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_aw_bank_sel 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_aw_bank_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_aw_addr 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_bank_sel;
    vlSelf->__PVT__pc_hash = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__pc_hash_num_array_3), 
                                           VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__pc_hash_num_array_2), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__pc_hash_num_array_1), (IData)(vlSelf->__PVT__pc_hash_num_array_0))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_bank_sel 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_bank_sel;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__BHT_banks_oneissue_io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_write 
        = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_write 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_write;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr 
        = (7U & VL_SEL_IIII(4, (IData)(vlSelf->__PVT__pc_hash), 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_pht_addr 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_pht_addr;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__2\n"); );
    // Body
    vlSelf->__PVT__BHT_banks_oneissue_io_out_L = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_out_L;
    vlSelf->__PVT__stage_1_pht_lookup_0 = VL_CONCAT_III(7,3,4, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L), 
                                                        (0xfU 
                                                         & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xbU, 4U)));
    vlSelf->__PVT__io_bht_L = VL_EXTEND_II(7,3, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L));
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L 
        = VL_CONCAT_III(7,3,4, (IData)(vlSelf->__PVT__BHT_banks_oneissue_io_out_L), 
                        (0xfU & VL_SEL_IQII(64, vlSelf->__PVT__io_pc, 0xbU, 4U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_ar_addr_L 
        = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_ar_addr_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__3\n"); );
    // Body
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_out_L;
    vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_hit_L;
    vlSelf->__PVT__io_pre_target_L = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
    vlSelf->__PVT__io_btb_hit_0 = vlSelf->__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L;
}

VL_ATTR_COLD void Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__4\n"); );
    // Body
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out;
    vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_out_L;
    vlSelf->__PVT__io_pht_lookup_value_out = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
    vlSelf->__PVT__io_out_L = vlSelf->__PVT__PHTS_banks_oneissue_block_ram_io_out_L;
    vlSelf->__PVT___io_pre_L_T_1 = (0U != (IData)(vlSelf->__PVT__io_out_L));
    vlSelf->__PVT___io_pre_L_T_3 = ((1U != (IData)(vlSelf->__PVT__io_out_L)) 
                                    & (IData)(vlSelf->__PVT___io_pre_L_T_1));
    vlSelf->__PVT__io_pre_L = ((2U == (IData)(vlSelf->__PVT__io_out_L)) 
                               | (IData)(vlSelf->__PVT___io_pre_L_T_3));
}
