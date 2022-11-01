// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_icache_data.h"

VL_ATTR_COLD void Vmycpu_top_icache_data___ctor_var_reset(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_wen = 0;
    vlSelf->__PVT__io_addr = 0;
    vlSelf->__PVT__io_wdata = 0;
    vlSelf->__PVT__io_rdata = 0;
    vlSelf->__PVT__icache_data_ram_0_clock = 0;
    vlSelf->__PVT__icache_data_ram_0_reset = 0;
    vlSelf->__PVT__icache_data_ram_0_io_wea = 0;
    vlSelf->__PVT__icache_data_ram_0_io_addra = 0;
    vlSelf->__PVT__icache_data_ram_0_io_dina = 0;
    vlSelf->__PVT__icache_data_ram_0_io_douta = 0;
}
