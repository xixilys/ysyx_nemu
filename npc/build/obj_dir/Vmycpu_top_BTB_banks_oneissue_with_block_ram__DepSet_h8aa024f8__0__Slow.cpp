// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BTB_banks_oneissue_with_block_ram.h"
#include "Vmycpu_top__Syms.h"

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__0(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_tag_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_with_block_ram_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_with_block_ram_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_with_block_ram_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_with_block_ram_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_with_block_ram_1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_with_block_ram_2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_with_block_ram_3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_tag_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_with_block_ram_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_with_block_ram_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_tag_with_block_ram_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_with_block_ram_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wdata 
        = vlSelf->__PVT__io_aw_target_addr;
    vlSelf->__PVT___btb_banks_0_wen_T_1 = (0U == (3U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U)));
    vlSelf->__PVT___btb_banks_1_wen_T_1 = (1U == (3U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U)));
    vlSelf->__PVT___btb_banks_2_wen_T_1 = (2U == (3U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U)));
    vlSelf->__PVT___btb_banks_3_wen_T_1 = (3U == (3U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 2U, 2U)));
    vlSelf->__PVT___tag_banks_0_wdata_T_1 = VL_CONCAT_III(5,1,4, 1U, 
                                                          (0xfU 
                                                           & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 0xdU, 4U)));
    vlSelf->__PVT__btb_data_with_block_ram_3_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_2_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_1_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_waddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_aw_addr, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_1_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_2_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
    vlSelf->__PVT__btb_data_with_block_ram_3_io_raddr 
        = (0x1ffU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 4U, 9U));
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__clock 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__clock 
        = vlSelf->__PVT__btb_data_with_block_ram_3_clock;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_wdata 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_wdata;
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
    vlSelf->__PVT__btb_tag_with_block_ram_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_wdata 
        = VL_EXTEND_II(8,5, (IData)(vlSelf->__PVT___tag_banks_0_wdata_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_waddr 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_waddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_waddr 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_waddr;
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_1_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_2_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_wen 
        = vlSelf->__PVT__btb_data_with_block_ram_3_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_wen 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_wen;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_1_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_2_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_wdata 
        = vlSelf->__PVT__btb_tag_with_block_ram_3_io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__btb_tag_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_1.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_2.__PVT__io_rdata;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_tag_with_block_ram_3.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2.__PVT__io_rdata;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3.__PVT__io_rdata;
    vlSelf->__PVT__tag_banks_0_rdata = vlSelf->__PVT__btb_tag_with_block_ram_io_rdata;
    vlSelf->__PVT__tag_banks_1_rdata = vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata;
    vlSelf->__PVT__tag_banks_2_rdata = vlSelf->__PVT__btb_tag_with_block_ram_2_io_rdata;
    vlSelf->__PVT__tag_banks_3_rdata = vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata;
    vlSelf->__PVT__btb_banks_0_rdata = vlSelf->__PVT__btb_data_with_block_ram_io_rdata;
    vlSelf->__PVT__btb_banks_1_rdata = vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata;
    vlSelf->__PVT__btb_banks_2_rdata = vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata;
    vlSelf->__PVT__btb_banks_3_rdata = vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata;
    vlSelf->__PVT___GEN_13 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_1_rdata)
                               : (IData)(vlSelf->__PVT__tag_banks_0_rdata));
    vlSelf->__PVT___GEN_1 = ((1U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_1_rdata
                              : vlSelf->__PVT__btb_banks_0_rdata);
    vlSelf->__PVT___GEN_14 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_2_rdata)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_2 = ((2U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                              ? vlSelf->__PVT__btb_banks_2_rdata
                              : vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___GEN_15 = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                               ? (IData)(vlSelf->__PVT__tag_banks_3_rdata)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT__io_out_L = ((3U == (3U & VL_SEL_IQII(64, vlSelf->__PVT__ar_addr_reg, 2U, 2U)))
                                ? vlSelf->__PVT__btb_banks_3_rdata
                                : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT__io_hit_L = (((0xfU & VL_SEL_IIII(8, (IData)(vlSelf->__PVT___GEN_15), 0U, 4U)) 
                                == (0xfU & VL_SEL_IQII(64, vlSelf->__PVT__io_ar_addr_L, 0xdU, 4U))) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT___GEN_15), 4U));
}
