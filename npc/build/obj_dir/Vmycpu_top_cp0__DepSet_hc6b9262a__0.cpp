// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cp0.h"

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__4(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__4\n"); );
    // Body
    vlSelf->__PVT__cp0_status = vlSelf->__Vdly__cp0_status;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_asid 
        = vlSelf->__PVT__io_asid;
}

VL_INLINE_OPT void Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__14(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___sequent__TOP__mycpu_top__u_riscv_cpu___cp0__14\n"); );
    // Body
    vlSelf->__PVT__int_signal = (((0U != (IData)(vlSelf->__PVT___int_signal_T_2)) 
                                  & (IData)(vlSelf->__PVT___io_Int_able_T_1)) 
                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_Int_able 
        = vlSelf->__PVT__io_Int_able;
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__0(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__0\n"); );
    // Body
    vlSelf->__PVT__io_exception = ((IData)(vlSelf->__PVT__commit_exception) 
                                   | (IData)(vlSelf->__PVT__commit_eret));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__btb_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__io_dina;
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__1(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__1\n"); );
    // Body
    vlSelf->__PVT___cause_exccode_Wire_T_35 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_5, 0U))
                                                ? 3U
                                                : 0U);
    vlSelf->__PVT___cause_exccode_Wire_T_34 = ((1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT___return_pc_Wire_T_2, 0U))
                                                ? 2U
                                                : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_1_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_2_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_3_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_3_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue.__PVT__BHT_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_3 
        = ((3U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_3
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_3 
        = ((3U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_3
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_198 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_6_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_197);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_22 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_38 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_54 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_70 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_69));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_150 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_166 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_165);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_182 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_198 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_6_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_197);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__bht_1)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__bht_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__bht_1)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__bht_0));
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__2(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__2\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_35));
    vlSelf->__PVT___GEN_21 = VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_34));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_4 
        = ((4U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_4
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_4 
        = ((4U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_regs_4
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_183 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_7_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__bht_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__bht_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__3(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__3\n"); );
    // Body
    vlSelf->__PVT___cp0_epc_T_3 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                   & (0x1cU == (IData)(vlSelf->__PVT__write_addr_sel)));
    vlSelf->__PVT___commit_next_pc_T_7 = ((0U != (IData)(vlSelf->__PVT__io_in_branchjump_jr))
                                           ? vlSelf->__PVT__io_pc
                                           : vlSelf->__PVT___commit_next_pc_T_6);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra;
}

VL_INLINE_OPT void Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__4(Vmycpu_top_cp0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cp0___combo__TOP__mycpu_top__u_riscv_cpu___cp0__4\n"); );
    // Body
    vlSelf->__PVT___cp0_status_T_7 = ((IData)(vlSelf->__PVT__io_cp0_write_en) 
                                      & (0x18U == (IData)(vlSelf->__PVT__write_addr_sel)));
    vlSelf->__PVT___cp0_status_T_4 = VL_CONCAT_III(32,30,2, 
                                                   (0x3fffffffU 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__cp0_status, 2U, 0x1eU)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__commit_exception), 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 0U))));
    vlSelf->__PVT__commit_in_delayslot = (1U & (((IData)(vlSelf->__PVT__int_signal) 
                                                 | (IData)(vlSelf->__PVT__commit_exception))
                                                 ? (IData)(vlSelf->__PVT__io_in_delayslot)
                                                 : 
                                                VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_cause, 0x1fU)));
    vlSelf->__PVT___cp0_entryhi_T_13 = VL_CONCAT_III(32,19,13, vlSelf->__PVT___cp0_entryhi_T_6, 
                                                     VL_EXTEND_II(13,8, (IData)(vlSelf->__PVT___cp0_entryhi_T_12)));
    vlSelf->__PVT__cp0_cause_hi = VL_CONCAT_III(22,1,21, (IData)(vlSelf->__PVT__commit_in_delayslot), 
                                                VL_CONCAT_III(21,1,20, (IData)(vlSelf->__PVT__timer_int), 
                                                              VL_EXTEND_II(20,6, (IData)(vlSelf->__PVT__io_int_i))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_203 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_202);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_204 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_203);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_205 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_204);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_206 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_205);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_inst 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_206);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_out_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_23 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_branchD_flag));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_24 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_jump));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_25 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_branchdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_26 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_decoder_jr));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_27 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_true_branch_state));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_17 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_pc_target);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_18 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_lookup_data));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_21 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_bht));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_22 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_lookup_value));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_16 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_exception_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_15 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_inst);
    vlSelf->__PVT__cause_exccode_Wire = VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___cause_exccode_Wire_T_49));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_37 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_38 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_39 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_40 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_41 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_31 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_32 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_35 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_36 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_30 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_29 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_15);
    vlSelf->__PVT___cp0_cause_T_5 = (0x1fU & ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__cp0_status, 1U))
                                               ? VL_SEL_IIII(32, vlSelf->__PVT__cp0_cause, 2U, 5U)
                                               : (IData)(vlSelf->__PVT__cause_exccode_Wire)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_51 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_52 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_53 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_54 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_55 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_45 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_46 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_49 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_50 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_44 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_43 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_29);
    vlSelf->__PVT__cp0_cause_lo = VL_CONCAT_III(10,2,8, (IData)(vlSelf->__PVT___cp0_cause_T_2), 
                                                VL_EXTEND_II(8,7, 
                                                             VL_CONCAT_III(7,5,2, (IData)(vlSelf->__PVT___cp0_cause_T_5), 0U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___wb_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_44 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_43 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___wb_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem2_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem2_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushW;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_45 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_44 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___GEN_13);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem22wb.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem22wb_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__wb_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_46 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_45 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_34);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_47 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_46 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_35);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_48 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_47 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_36);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_49 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_48 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_37);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_50 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_49 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_38);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_51 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_50 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_39);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_52 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_51 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_40);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_53 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_52 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_41);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_data_out 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_53 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_42);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_data_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_data_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_7 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_muldiv_calE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_data_out
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_13 
        = ((0ULL == vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ExceptionTypeD_Out)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_12)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ExceptionTypeD_Out);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_14 
        = (((0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_Int_able))
            ? 1ULL : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_13);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ExceptionTypeD 
        = VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fid2ex_io_ExceptionTypeD_T_14, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ExceptionTypeD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ExceptionTypeD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_result;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_3 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_alu_calE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_result
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_10 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_3 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_6);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_10 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_7);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchD_flag 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jump 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchdata 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jr 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_true_branch_state 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pc_target 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0ULL : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_45);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_data 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_bht 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_value 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_exception_type 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_inst 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_43);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_exception_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_data_valid_T 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_empty)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_pre_decoder_branchD_flag 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchD_flag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_pre_decoder_jr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_decoder_jr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_exception_type 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_ExceptionTypeF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_exception_type;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_data_valid_T)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_inst 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_inst;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_ExceptionTypeF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_ExceptionTypeF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_lookup_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_lookup_data;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_bht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_bht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_stage2_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_L_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_M_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_R_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_5 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_BadInstrD)
            ? 0U : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_inst);
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_R_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_InstrF 
        = VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT_____05Fif2id_io_InstrF_T_5);
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_InstrF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT___InstrD_Reg_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_en)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_InstrF
            : VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__InstrD_Reg));
    vlSymsp->TOP__mycpu_top__inst_cache.__PVT__io_stage2_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT___InstrD_Reg_T_3 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_clr)
            ? 0ULL : vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT___InstrD_Reg_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_alu_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_alu_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT___alu_mul_cal_Reg_T_2 
        = VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal), (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__table_0_out));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_4_out))));
}
