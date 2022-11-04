// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mycpu_top.h"

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__1(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__1\n"); );
    // Body
    vlSelf->debug_wb_rf_wnum = vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wnum;
    vlSelf->debug_wb_rf_wdata = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_rf_wdata, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->axi_mem_port_0_arlen = vlSelf->__PVT__inst_cache_io_port_arlen;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__4(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__4\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_inst_buffer_full = vlSelf->__PVT__u_riscv_cpu_inst_buffer_full;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__2(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__2\n"); );
    // Body
    vlSelf->__PVT__u_riscv_cpu_data_sram_rdata = vlSelf->__PVT__data_cache_io_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__11(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__11\n"); );
    // Body
    vlSelf->axi_mem_port_0_araddr = vlSelf->__PVT__inst_cache_io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__13(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__13\n"); );
    // Body
    vlSelf->debug_wb_pc = VL_SEL_IQII(64, vlSelf->__PVT__u_riscv_cpu_debug_wb_pc, 0U, 0x20U);
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__15(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___sequent__TOP__mycpu_top__15\n"); );
    // Body
    vlSelf->__PVT__inst_cache_io_p_addr_for_tlb = vlSelf->__PVT__inst_cache_io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5(Vmycpu_top_mycpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmycpu_top_mycpu_top___multiclk__TOP__mycpu_top__5\n"); );
    // Body
    vlSelf->axi_mem_port_1_wdata = vlSelf->__PVT__data_cache_io_port_wdata;
}
