// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BHT_banks_oneissue.h"
#include "Vmycpu_top__Syms.h"

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__0\n"); );
    // Body
    vlSelf->__PVT__BHT_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__BHT_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BHT_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BHT_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BHT_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__BHT_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_1_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_2_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_3_io_in = vlSelf->__PVT__io_in;
    vlSelf->__PVT__BHT_io_aw_addr = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__BHT_1_io_aw_addr = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__BHT_2_io_aw_addr = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__BHT_3_io_aw_addr = vlSelf->__PVT__io_aw_addr;
    vlSelf->__PVT__BHT_io_write = ((0U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                   & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_1_io_write = ((1U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_2_io_write = ((2U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_3_io_write = ((3U == (IData)(vlSelf->__PVT__io_ar_bank_sel)) 
                                     & (IData)(vlSelf->__PVT__io_write));
    vlSelf->__PVT__BHT_3_io_ar_addr = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__BHT_2_io_ar_addr = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__BHT_io_ar_addr = vlSelf->__PVT__io_ar_addr_L;
    vlSelf->__PVT__BHT_1_io_ar_addr = vlSelf->__PVT__io_ar_addr_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__clock 
        = vlSelf->__PVT__BHT_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__clock 
        = vlSelf->__PVT__BHT_1_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__clock 
        = vlSelf->__PVT__BHT_2_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__clock 
        = vlSelf->__PVT__BHT_3_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__reset 
        = vlSelf->__PVT__BHT_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__reset 
        = vlSelf->__PVT__BHT_1_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__reset 
        = vlSelf->__PVT__BHT_2_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__reset 
        = vlSelf->__PVT__BHT_3_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_in 
        = vlSelf->__PVT__BHT_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_in 
        = vlSelf->__PVT__BHT_1_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_in 
        = vlSelf->__PVT__BHT_2_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_in 
        = vlSelf->__PVT__BHT_3_io_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_2_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_aw_addr 
        = vlSelf->__PVT__BHT_3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_write 
        = vlSelf->__PVT__BHT_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_write 
        = vlSelf->__PVT__BHT_1_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_write 
        = vlSelf->__PVT__BHT_2_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_write 
        = vlSelf->__PVT__BHT_3_io_write;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_io_ar_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_ar_addr 
        = vlSelf->__PVT__BHT_1_io_ar_addr;
}

VL_ATTR_COLD void Vmycpu_top_BHT_banks_oneissue___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__1(Vmycpu_top_BHT_banks_oneissue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BHT_banks_oneissue___stl_sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__1\n"); );
    // Body
    vlSelf->__PVT__BHT_3_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_3.__PVT__io_out;
    vlSelf->__PVT__BHT_2_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_2.__PVT__io_out;
    vlSelf->__PVT__BHT_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT.__PVT__io_out;
    vlSelf->__PVT__BHT_1_io_out = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BHT_banks_oneissue__BHT_1.__PVT__io_out;
    vlSelf->__PVT__bht_banks_3_out = vlSelf->__PVT__BHT_3_io_out;
    vlSelf->__PVT__bht_banks_2_out = vlSelf->__PVT__BHT_2_io_out;
    vlSelf->__PVT__bht_banks_0_out = vlSelf->__PVT__BHT_io_out;
    vlSelf->__PVT__bht_banks_1_out = vlSelf->__PVT__BHT_1_io_out;
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_ar_bank_sel))
                              ? (IData)(vlSelf->__PVT__bht_banks_1_out)
                              : (IData)(vlSelf->__PVT__bht_banks_0_out));
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_ar_bank_sel))
                              ? (IData)(vlSelf->__PVT__bht_banks_2_out)
                              : (IData)(vlSelf->__PVT___GEN_1));
    vlSelf->__PVT__io_out_L = ((3U == (IData)(vlSelf->__PVT__io_ar_bank_sel))
                                ? (IData)(vlSelf->__PVT__bht_banks_3_out)
                                : (IData)(vlSelf->__PVT___GEN_2));
}
