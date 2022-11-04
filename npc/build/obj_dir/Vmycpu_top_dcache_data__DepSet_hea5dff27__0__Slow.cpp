// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dcache_data.h"

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_1__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_2__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_3__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_4__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_5__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_6__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_7__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_8__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_9__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_10__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_11__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_12__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_13__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_14__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__2(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__5(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__5\n"); );
    // Body
    vlSelf->__PVT__io_rdata = vlSelf->__PVT__dcache_data_ram_0_io_douta;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__6(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__8(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_dina = vlSelf->__PVT__io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__10(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___settle__TOP__mycpu_top__data_cache__dcache_data_15__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
}

VL_ATTR_COLD void Vmycpu_top_dcache_data___ctor_var_reset(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_wen = 0;
    vlSelf->__PVT__io_addr = 0;
    vlSelf->__PVT__io_wdata = 0;
    vlSelf->__PVT__io_rdata = 0;
    vlSelf->__PVT__dcache_data_ram_0_clock = 0;
    vlSelf->__PVT__dcache_data_ram_0_reset = 0;
    vlSelf->__PVT__dcache_data_ram_0_io_wea = 0;
    vlSelf->__PVT__dcache_data_ram_0_io_addra = 0;
    vlSelf->__PVT__dcache_data_ram_0_io_dina = 0;
    vlSelf->__PVT__dcache_data_ram_0_io_douta = 0;
}
