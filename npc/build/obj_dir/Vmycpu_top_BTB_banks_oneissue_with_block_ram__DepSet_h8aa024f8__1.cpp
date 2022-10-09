// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BTB_banks_oneissue_with_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__4(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__4\n"); );
    // Body
    vlSelf->__PVT___btb_banks_0_wen_T_1 = (0U == (3U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_io_write 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_bank_sel)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_1_io_write 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_ar_bank_sel)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__io_write));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_2
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_98 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_2
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_97);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_66 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_2
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_65);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_258 
        = ((2U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_257));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_2 
        = ((2U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_2
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_258 
        = ((2U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_257));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_21 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_37 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_53 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_69 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_85 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_101 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_117 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_149 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_165 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_164);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_181 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_5_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_21 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_37 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_53 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_69 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_85 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_101 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_117 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_149 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_165 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_164);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_181 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_5_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_69 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_85 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_101 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_117 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_149 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_165 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_164);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_181 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_213 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_212);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_197 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_5_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_196);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
               | ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                  | ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                     | (0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)))))
            : ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD)) 
               & ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                  | ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                     | ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                        | ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                           | ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                              | ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D)) 
                                 | (0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__Funct3D))))))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___jr_Stall_T_12 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_16));
}

VL_INLINE_OPT void Vmycpu_top_BTB_banks_oneissue_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__5(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__5\n"); );
    // Body
    vlSelf->__PVT__btb_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_3_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_4_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_5_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_4_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__pht_data_with_block_ram_5_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5.__PVT__btb_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0.__PVT__reset;
}
