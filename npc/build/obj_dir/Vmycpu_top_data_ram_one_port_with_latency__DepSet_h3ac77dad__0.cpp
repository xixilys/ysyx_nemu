// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_ram_one_port_with_latency.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_douta_hi, (IData)(vlSelf->__PVT__io_douta_lo));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_sequent__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency___nba_comb__TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_4_out), 
                                               VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_3_out), (IData)(vlSelf->__PVT__table_2_out)));
}
