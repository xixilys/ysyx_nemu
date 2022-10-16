// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_one_port_with_latency_16.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___combo__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___combo__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra;
}
