// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_ram_one_port_with_latency.h"
#include "Vmycpu_top_icache_data.h"

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_1__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_2__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_3__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_4__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_5__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_6__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_7__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_8__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_9__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_10__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_11__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_12__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_13__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_14__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__0(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__0\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U));
    vlSelf->__PVT__icache_data_ram_0_io_douta = vlSelf->__PVT__icache_data_ram_0->__PVT__io_douta;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__icache_data_ram_0_io_addra;
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__icache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__1(Vmycpu_top_icache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_data___stl_sequent__TOP__mycpu_top__inst_cache__icache_data_15__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__icache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
    vlSelf->__PVT__icache_data_ram_0->__PVT__clock 
        = vlSelf->__PVT__icache_data_ram_0_clock;
    vlSelf->__PVT__icache_data_ram_0->__PVT__reset 
        = vlSelf->__PVT__icache_data_ram_0_reset;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_wea 
        = vlSelf->__PVT__icache_data_ram_0_io_wea;
    vlSelf->__PVT__icache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__icache_data_ram_0_io_dina;
}
