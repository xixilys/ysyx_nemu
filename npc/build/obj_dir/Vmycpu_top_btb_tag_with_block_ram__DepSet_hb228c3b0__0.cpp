// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_btb_tag_with_block_ram.h"
#include "Vmycpu_top_data_ram_simple_two_ports_32.h"

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__0(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__clock = vlSelf->__PVT__btb_tag_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__btb_tag_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__btb_tag_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__btb_tag_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__btb_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__btb_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__btb_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__btb_data_ram_0_clock;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__btb_tag_ram_0->__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1__btb_tag_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3__btb_tag_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__btb_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__btb_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__btb_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__btb_data_ram_0.__PVT__clock;
}

VL_INLINE_OPT void Vmycpu_top_btb_tag_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__1(Vmycpu_top_btb_tag_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_tag_with_block_ram___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra = vlSelf->__PVT__btb_tag_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__btb_tag_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_dmem_addr_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_dmem_addr_cal;
    vlSelf->__PVT__btb_tag_ram_0->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__btb_tag_ram_0->__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_4
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_100 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_4
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_99);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_68 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_4
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_67);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__bht_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__bht_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2D 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_dmem_calD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io1_dmem_addr_cal;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSelf->__PVT__btb_tag_ram_0->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A3))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_5
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_4);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_101 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A2))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_5
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_100);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_69 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__io_A1))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__regs_5
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT___GEN_68);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__bht_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__bht_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram__btb_tag_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2__btb_tag_ram_0__Look_up_table_read_first_.__PVT__btb_0));
}
