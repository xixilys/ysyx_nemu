// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mycpu_top.h"

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_inst_buffer_full = vlSelf->__PVT__u_riscv_cpu_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__0(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__0\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_rdata = vlSelf->__PVT__data_cache_io_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->axi_mem_port_0_arlen = vlSelf->__PVT__inst_cache_io_port_arlen;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_sram_rdata_L = vlSelf->__PVT__inst_cache_io_sram_rdata_L;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_sequent__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_wr = vlSelf->__PVT__u_riscv_cpu_data_sram_wen;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__6(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__6\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_inst_write_en = vlSelf->__PVT__inst_cache_io_sram_write_en;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__8(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__8\n"); );
    // Body
    vlSelf->axi_mem_port_1_wdata = vlSelf->__PVT__data_cache_io_port_wdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__9(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__9\n"); );
    // Body
    vlSelf->axi_mem_port_1_awaddr = vlSelf->__PVT__data_cache_io_port_awaddr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__10(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___nba_comb__TOP__mycpu_top__10\n"); );
    // Body
    vlSelf->__PVT__data_cache_io_sram_req = vlSelf->__PVT__u_riscv_cpu_data_sram_en;
}
