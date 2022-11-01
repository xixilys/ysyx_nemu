// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_ram_simple_two_ports_36.h"

VL_ATTR_COLD void Vmycpu_top_data_ram_simple_two_ports_36___ctor_var_reset(Vmycpu_top_data_ram_simple_two_ports_36* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vmycpu_top_data_ram_simple_two_ports_36___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_wea = 0;
    vlSelf->__PVT__io_addra = 0;
    vlSelf->__PVT__io_dina = 0;
    vlSelf->__PVT__io_addrb = 0;
    vlSelf->__PVT__io_doutb = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fclock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Freset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out = 0;
}
