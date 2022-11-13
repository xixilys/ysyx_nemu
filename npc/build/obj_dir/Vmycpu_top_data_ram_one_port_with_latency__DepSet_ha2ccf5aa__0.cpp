// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_one_port_with_latency.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_wea;
}
