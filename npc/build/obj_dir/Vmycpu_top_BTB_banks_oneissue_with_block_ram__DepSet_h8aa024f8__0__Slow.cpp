// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BTB_banks_oneissue_with_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__btb_tag_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__reset 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__reset 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__reset 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__reset 
        = vlSelf->__PVT__btb_data_with_block_ram_3_reset;
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__3(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__3\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_clock;
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__7(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_wdata;
    vlSelf->__PVT__btb_tag_with_block_ram_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_io_wen = 
        ((IData)(vlSelf->__PVT___btb_banks_0_wen_T_1) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_wen 
        = ((IData)(vlSelf->__PVT___btb_banks_1_wen_T_1) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_wen 
        = ((IData)(vlSelf->__PVT___btb_banks_2_wen_T_1) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_wen 
        = ((IData)(vlSelf->__PVT___btb_banks_3_wen_T_1) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_io_wen = 
        ((0U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
         & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wen 
        = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wen 
        = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wen 
        = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U))) 
           & (IData)(vlSelf->__PVT__io_write));
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__8(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__8\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_raddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_raddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_raddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_raddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_raddr 
        = vlSelf->__PVT__btb_data_with_block_ram_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_raddr 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_raddr 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_raddr 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_raddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_waddr;
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__9(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__10(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__10\n"); );
    // Body
    vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_rdata;
    vlSelf->__PVT__btb_banks_3_rdata = vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata;
    vlSelf->__PVT__btb_banks_2_rdata = vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata;
    vlSelf->__PVT__tag_banks_3_rdata = vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata;
    vlSelf->__PVT__btb_banks_0_rdata = vlSelf->__PVT__btb_data_with_block_ram_io_rdata;
    vlSelf->__PVT__btb_banks_1_rdata = vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata;
    vlSelf->__PVT__tag_banks_2_rdata = vlSelf->__PVT__btb_tag_with_block_ram_2_io_rdata;
    vlSelf->__PVT__tag_banks_0_rdata = vlSelf->__PVT__btb_tag_with_block_ram_io_rdata;
    vlSelf->__PVT__tag_banks_1_rdata = vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata;
    vlSelf->__PVT___GEN_1 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_1_rdata
                              : vlSelf->__PVT__btb_banks_0_rdata);
    vlSelf->__PVT___GEN_13 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_1_rdata)
                               : (IData)(vlSelf->__PVT__tag_banks_0_rdata));
    vlSelf->__PVT___GEN_2 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_2_rdata
                              : vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___GEN_14 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_2_rdata)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT__io_out_L = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                                ? vlSelf->__PVT__btb_banks_3_rdata
                                : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT___GEN_15 = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_3_rdata)
                               : (IData)(vlSelf->__PVT___GEN_14));
}
