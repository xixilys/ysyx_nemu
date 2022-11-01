// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_ram_one_port_with_latency_16.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__Vdly__io_douta_REG = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__io_douta_hi, vlSelf->__PVT__io_douta_lo);
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__io_douta_REG = vlSelf->__Vdly__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__io_douta = vlSelf->__PVT__io_douta_REG;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__table_0_out = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__1(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__table_1_out = vlSelf->__PVT__Look_up_table_read_first___05F1_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__2(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__table_4_out = vlSelf->__PVT__Look_up_table_read_first___05F4_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__3(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__table_6_out = vlSelf->__PVT__Look_up_table_read_first___05F6_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__table_2_out = vlSelf->__PVT__Look_up_table_read_first___05F2_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__table_3_out = vlSelf->__PVT__Look_up_table_read_first___05F3_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__table_5_out = vlSelf->__PVT__Look_up_table_read_first___05F5_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__table_7_out = vlSelf->__PVT__Look_up_table_read_first___05F7_io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__8(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__8\n"); );
    // Body
    vlSelf->__PVT__io_douta_lo = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_3_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_2_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_1_out), (IData)(vlSelf->__PVT__table_0_out))));
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__9(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_comb__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__9\n"); );
    // Body
    vlSelf->__PVT__io_douta_hi = VL_CONCAT_III(32,8,24, (IData)(vlSelf->__PVT__table_7_out), 
                                               VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__table_6_out), 
                                                             VL_CONCAT_III(16,8,8, (IData)(vlSelf->__PVT__table_5_out), (IData)(vlSelf->__PVT__table_4_out))));
}
