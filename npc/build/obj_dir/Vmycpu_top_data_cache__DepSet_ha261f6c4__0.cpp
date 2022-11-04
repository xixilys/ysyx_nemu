// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_4_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_5_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_6_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_7_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_8_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_9_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_10_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_11_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_12_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_13_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_14_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_15_clock = vlSelf->__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__clock 
        = vlSelf->__PVT__dcache_data_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__clock 
        = vlSelf->__PVT__dcache_data_1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__clock 
        = vlSelf->__PVT__dcache_data_2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__clock 
        = vlSelf->__PVT__dcache_data_3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__clock 
        = vlSelf->__PVT__dcache_data_4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__clock 
        = vlSelf->__PVT__dcache_data_5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__clock 
        = vlSelf->__PVT__dcache_data_6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__clock 
        = vlSelf->__PVT__dcache_data_7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__clock 
        = vlSelf->__PVT__dcache_data_8_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__clock 
        = vlSelf->__PVT__dcache_data_9_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__clock 
        = vlSelf->__PVT__dcache_data_10_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__clock 
        = vlSelf->__PVT__dcache_data_11_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__clock 
        = vlSelf->__PVT__dcache_data_12_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__clock 
        = vlSelf->__PVT__dcache_data_13_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__clock 
        = vlSelf->__PVT__dcache_data_14_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__clock 
        = vlSelf->__PVT__dcache_data_15_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fclock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_clock;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_tag_1_clock = vlSelf->__PVT__clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___br.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___br_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___regfile.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___regfile_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_clock;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___mem2mem2.__PVT__clock 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_clock;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__2(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_1_clock;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSelf->__PVT__dcache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT__dcache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_12_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_13_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT__dcache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT__dcache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT__dcache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__29(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__29\n"); );
    // Body
    vlSelf->__PVT__dcache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__30(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__30\n"); );
    // Body
    vlSelf->__PVT__dcache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__31(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__31\n"); );
    // Body
    vlSelf->__PVT__dcache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__32(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__32\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__33(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__33\n"); );
    // Body
    vlSelf->__PVT__dcache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__34(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__34\n"); );
    // Body
    vlSelf->__PVT__dcache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__51(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__51\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_11_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__54(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__54\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_9_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_15_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__reset 
        = vlSelf->__PVT__dcache_data_2_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__56(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__56\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_8_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_tag_1_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_bvalid = vlSymsp->TOP.axi_mem_port_1_bvalid;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_rdata = vlSymsp->TOP.axi_mem_port_1_rdata;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_rvalid = vlSymsp->TOP.axi_mem_port_1_rvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_bvalid 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_bvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_rdata 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_rdata;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_rvalid 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_rvalid;
    vlSelf->__PVT__io_port_bvalid = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_bvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_1_reset;
    vlSelf->__PVT___access_work_state_T_25 = ((IData)(vlSelf->__PVT__io_port_arready)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_23 = ((IData)(vlSelf->__PVT__io_port_bvalid)
                                               ? 0xcU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_21 = (((IData)(vlSelf->__PVT__io_port_wready) 
                                               & (7U 
                                                  == (IData)(vlSelf->__PVT__write_counter)))
                                               ? 0xbU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_17 = ((IData)(vlSelf->__PVT__io_port_awready)
                                               ? 0xaU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_9 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 0xdU
                                              : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_7 = ((IData)(vlSelf->__PVT__io_port_wready)
                                              ? 5U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_5 = ((IData)(vlSelf->__PVT__io_port_awready)
                                              ? 4U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_1 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 2U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_for_stall_T_1 
        = ((IData)(vlSelf->__PVT__io_port_rvalid) ? 0x18U
            : (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__62(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__62\n"); );
    // Body
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSelf->__PVT___state_lookup_for_less_delay_T_1 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT__work_state));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_1_io_waddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
    vlSelf->__PVT___access_work_state_T_41 = ((2U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_39));
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_1 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_129 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_15 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__63(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__63\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                           ? vlSelf->__PVT___T_21
                                           : 0ULL);
    vlSelf->__PVT__dcache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                             ? vlSelf->__PVT___T_21
                                             : 0ULL);
    vlSelf->__PVT__io_port_arvalid = ((((IData)(vlSelf->__PVT___io_port_araddr_T) 
                                        | (IData)(vlSelf->__PVT___io_port_araddr_T_1)) 
                                       | (IData)(vlSelf->__PVT___io_port_araddr_T_2)) 
                                      & (IData)(vlSelf->__PVT___io_port_arvalid_T_7));
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid 
        = vlSelf->__PVT__io_port_awvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr 
        = vlSelf->__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_2 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_130 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_129);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__64(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__64\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_1_io_wdata;
    vlSelf->__PVT___way0_dirty_T_4 = ((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                        & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT___way0_dirty_T = (0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_araddr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid 
        = vlSelf->__PVT__io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_3 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_131 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_130);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_17 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_12)
            ? 3U : VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_15)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__65(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__65\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_2 = 
        ((IData)(vlSelf->__PVT___way0_dirty_T_9) | (IData)(vlSelf->__PVT___way0_dirty_T));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_11 
        = ((0xeU == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_4 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_18 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_6)
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_17));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT__access_work_state_for_stall = ((0x10U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? 0x18U
                                                   : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_11));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_18));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__14\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc6a65523__0;
    VlWide<3>/*95:0*/ __Vtemp_h22d729e0__0;
    VlWide<3>/*95:0*/ __Vtemp_hcebceb95__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f7f979c__0;
    VlWide<3>/*95:0*/ __Vtemp_h7f4c58b8__0;
    VlWide<3>/*95:0*/ __Vtemp_hed2430f2__0;
    VlWide<3>/*95:0*/ __Vtemp_h623f365f__0;
    VlWide<3>/*95:0*/ __Vtemp_h7f4c58b8__1;
    VlWide<3>/*95:0*/ __Vtemp_hecf221d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h069acf53__0;
    // Body
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3));
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1E);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_ok 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_ok;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_WriteDataE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock2E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock2E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock1E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_WriteDataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in1 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_0)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_PCE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_1)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_0)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_PCE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_ALUSrcE_1)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE 
           + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_pending 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137));
    VL_CONCAT_WIQ(65,9,56, __Vtemp_hc6a65523__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_30, __Vtemp_hc6a65523__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h22d729e0__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_h22d729e0__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_26 
        = VL_CONCAT_QIQ(57,9,48, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_55 
        = VL_CONCAT_QII(49,17,32, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_22 
        = VL_CONCAT_QIQ(49,9,40, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_51 
        = VL_CONCAT_QII(33,17,16, VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_47 
        = VL_EXTEND_II(17,16, (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_18 
        = VL_CONCAT_QII(41,9,32, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_14 
        = VL_CONCAT_QII(33,9,24, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_10 
        = VL_CONCAT_III(25,9,16, VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_2 
        = VL_EXTEND_II(9,8, (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_6 
        = VL_CONCAT_III(17,9,8, VL_EXTEND_II(9,8, (0xffU 
                                                   & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_in2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___muldiv_io_in2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in1 
        = VL_CONCAT_QII(64,32,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E, 0x20U, 0x20U), 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src1E, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in2 
        = VL_CONCAT_QII(64,32,32, VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E, 0x20U, 0x20U), 
                        VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Src2E, 0U, 0x20U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_DataPendingM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_pending;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_DataPendingM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa 
        = (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 6U));
    VL_CONCAT_WIQ(65,1,64, __Vtemp_hcebceb95__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, __Vtemp_hcebceb95__0);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h3f7f979c__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend, __Vtemp_h3f7f979c__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
    VL_CONST_W_3X(96,__Vtemp_h7f4c58b8__0,0x00000001,0xffffffff,0xffffffff);
    VL_SUB_W(3, __Vtemp_hed2430f2__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h623f365f__0, __Vtemp_h7f4c58b8__0, __Vtemp_hed2430f2__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, __Vtemp_h623f365f__0);
    VL_CONST_W_3X(96,__Vtemp_h7f4c58b8__1,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_hecf221d0__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h069acf53__0, __Vtemp_h7f4c58b8__1, __Vtemp_hecf221d0__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, __Vtemp_h069acf53__0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_45 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_15, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_44 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_12, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_43 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_9, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_42 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_6, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_40 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_41 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_3, 0U))
            ? VL_SEL_QWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0U, 0x40U)
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra 
        = (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE, 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_27 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_80 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xfU : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 3U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_32 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_6
            : VL_EXTEND_II(17,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_2)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_25 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xf0U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_23)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xcU : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_15)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_34 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_10
            : VL_EXTEND_II(25,17, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_21 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19)));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr;
    vlSelf->__PVT__io_sram_addr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr;
    vlSelf->__PVT__dcache_tag_io_raddr = vlSelf->__PVT__io_sram_addr;
    vlSelf->__PVT__dcache_tag_1_io_raddr = vlSelf->__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr 
        = vlSelf->__PVT__dcache_tag_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr 
        = vlSelf->__PVT__dcache_tag_1_io_raddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__70(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__70\n"); );
    // Body
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb 
        = vlSelf->__PVT__io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__72(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__72\n"); );
    // Body
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_arsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSelf->__PVT__io_port_awlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_awsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst 
        = vlSelf->__PVT__io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst 
        = vlSelf->__PVT__io_port_arburst;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__73(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__73\n"); );
    // Body
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSymsp->TOP.axi_mem_port_1_awsize = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awsize;
    vlSymsp->TOP.axi_mem_port_1_awlen = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awlen;
    vlSymsp->TOP.axi_mem_port_1_arsize = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arsize;
    vlSymsp->TOP.axi_mem_port_1_arlen = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arlen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__74(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__74\n"); );
    // Body
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid 
        = vlSelf->__PVT__io_port_wvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__75(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__75\n"); );
    // Body
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_wvalid = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__dcache_data_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_4_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_10_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_15_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__reset 
        = vlSelf->__PVT__dcache_data_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__reset 
        = vlSelf->__PVT__dcache_data_4_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__reset 
        = vlSelf->__PVT__dcache_data_10_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset 
        = vlSelf->__PVT__dcache_data_15_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_13_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset 
        = vlSelf->__PVT__dcache_data_5_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__reset 
        = vlSelf->__PVT__dcache_data_13_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__78(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__78\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT___way0_dirty_T_12 = ((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__dirty_victim = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                    ? (IData)(vlSelf->__PVT___GEN_384)
                                    : (IData)(vlSelf->__PVT___GEN_896));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_io_wen;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_16 
        = ((IData)(vlSelf->__PVT__dirty_victim) ? 9U
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_15));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_17 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_16)
            : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_12)));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_18 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_17))
            : 0x19U);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT__dcache_data_14_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__reset 
        = vlSelf->__PVT__dcache_data_14_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__reset 
        = vlSelf->__PVT__dcache_data_12_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_rlast = vlSymsp->TOP.axi_mem_port_1_rlast;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_rlast 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_rlast;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset 
        = vlSelf->__PVT__dcache_data_8_reset;
    vlSelf->__PVT__io_port_rlast = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_rlast;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT___csr_read_data_Wire_T_1 
        = ((0x341U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__csr_epc
            : 0ULL);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_ForwardcsrE_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ReadcsrAddrE) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_ForwardcsrE_T_6 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ReadcsrAddrE) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WritecsrAddrM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_size 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWidthE;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_9_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__csr_read_data_Wire 
        = ((0x300U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__csr_status
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT___csr_read_data_Wire_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_size 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_size;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ForwardcsrE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_csrToRegE)
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_ForwardcsrE_T_8)
            : 0U);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_data 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__reset)
            ? 0ULL : vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__csr_read_data_Wire);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_mem_trace_budleE_len 
        = VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_size));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_size 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_size;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_len 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_mem_trace_budleE_len;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_ForwardcsrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_ForwardcsrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_csr_read_data 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___csr.__PVT__io_csr_read_data;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_size 
        = VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_size));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Forward_csr_data_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_ForwardcsrE))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_WriteDataM
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_io_csr_read_data);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_in 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_132));
    vlSelf->__PVT__io_sram_size = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_size;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_csr_data 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_ForwardcsrE))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem2mem2_io_WriteDataM
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Forward_csr_data_T_1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__csr_src1 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_csr_ImmE)
            ? VL_EXTEND_QI(64,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___csr_src1_T_1))
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_11 
        = ((1U & VL_BITSEL_IIII(6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_7), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__csr_src1
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_2 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_csr_data 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__csr_src1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_5 
        = (~ vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__csr_src1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_9 
        = ((1U & VL_BITSEL_IIII(6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_2
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_6 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_csr_data 
           & vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_5);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_10 
        = ((1U & VL_BITSEL_IIII(6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_3), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_6
            : 0ULL);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_12 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_9 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_10);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_overflow 
        = ((VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_3, 0U) 
            & ((1U & VL_BITSEL_IWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0x40U)) 
               != (1U & VL_BITSEL_IWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, 0x3fU)))) 
           | (VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_12, 0U) 
              & ((1U & VL_BITSEL_IWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0x40U)) 
                 != (1U & VL_BITSEL_IWII(65, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, 0x3fU)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_CsrWritedataE 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_12 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_11);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__CalCsrDataE 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_12 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___CalCsrDataE_T_11);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_CsrWritedataE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_CsrWritedataE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_overflow 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_overflow;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___resultE_T_3 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__csrToRegE)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__CalCsrDataE
            : 0ULL);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___temp_exceptionE_T_11 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_overflow)
            ? 0x1000U : 0U);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_ExceptionTypeE 
        = ((0U != vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ExceptionTypeE_Out)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ExceptionTypeE_Out
            : VL_EXTEND_II(32,13, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___temp_exceptionE_T_11)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_ExceptionTypeE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_ExceptionTypeE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_mem_trace_budleE_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_mem_trace_budleE_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_mem_trace_budleE_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrToRegD 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
           | ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
              | ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                 | ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                    | ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)) 
                       | (0x49U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code)))))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_14 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_16 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 1U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csrToRegD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_csrToRegD;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 4U : VL_EXTEND_II(4,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_16)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csrToRegD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_csrToRegD;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 8U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_csrToRegD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_csrToRegD;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10U : VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_20)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x20U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_43 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x2000U : VL_EXTEND_II(16,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_41)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x40U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_45 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x4000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x80U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_47 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100U : VL_EXTEND_II(16,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_28)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_49 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x200U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_51 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10000U : VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_49)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_34 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x400U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_32));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_53 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x8000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_51);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_36 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_34));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_55 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_53);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_38 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x800U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_36));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_57 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x8000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_55);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control 
        = VL_EXTEND_II(24,16, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_muldiv_control_T_38));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_59 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_57);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal 
        = (0U != vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_61 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x800U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_59);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_control;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_63 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_61);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_65 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x80U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_63);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_control 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_control;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_muldiv_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_67 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_65);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_muldiv_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_muldiv_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_69 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_67);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_71 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_69);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_73 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x8000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_71);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_75 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x2000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_73);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_77 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x4000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_75);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_79 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x20000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_77);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_81 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_79);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_83 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x800U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_81);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_85 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x1000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_83);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_87 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x10000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_85);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_89 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x8000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_87);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_91 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_89);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_93 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x20000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_91);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_95 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 0x100000U : vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_93);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD 
        = (0xffffffU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_95, 0U, 0x18U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal 
        = (0U != vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_alu_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUCtrlD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUCtrlD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_alu_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_alu_cal 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_alu_cal;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_190 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_191 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_192 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_191));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_193 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_192));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_194 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_193));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_195 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_194));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT__dcache_data_9_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset 
        = vlSelf->__PVT__dcache_data_9_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT__dcache_data_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_6_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_7_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_11_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__reset 
        = vlSelf->__PVT__dcache_data_1_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__reset 
        = vlSelf->__PVT__dcache_data_3_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset 
        = vlSelf->__PVT__dcache_data_6_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset 
        = vlSelf->__PVT__dcache_data_7_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset 
        = vlSelf->__PVT__dcache_data_11_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Freset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__85(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__85\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_1_io_wen;
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
    vlSelf->__PVT___way1_dirty_T_15 = ((~ ((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                           & (IData)(vlSelf->__PVT___GEN_128))) 
                                       & (IData)(vlSelf->__PVT___way1_dirty_T_14));
    vlSelf->__PVT___way0_dirty_T_14 = (((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7)) 
                                       | (IData)(vlSelf->__PVT___GEN_384));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__29(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__29\n"); );
    // Body
    vlSelf->__PVT__way0_wen_0 = ((0U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__30(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__30\n"); );
    // Body
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__31(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__31\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_wen = (((0U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                          & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                             | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                          ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                          : (IData)(vlSelf->__PVT___wen_way0_wire_0_T_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__32(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__32\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_1_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_1_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__table_4_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_douta_lo 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_3_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_2_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_1_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_0_out))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_7_out), 
                        VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_6_out), 
                                      VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_5_out), (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_4_out))));
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
    vlSelf->__PVT___access_work_state_T_55 = ((0xdU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_53));
    vlSelf->__PVT___access_work_state_T_57 = ((0xeU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_55));
    vlSelf->__PVT___access_work_state_T_59 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_17)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_57));
    vlSelf->__PVT___access_work_state_T_61 = ((0xaU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_21)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_59));
    vlSelf->__PVT___access_work_state_T_63 = ((0xbU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_23)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_61));
    vlSelf->__PVT___access_work_state_T_65 = ((8U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_25)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_63));
    vlSelf->__PVT___access_work_state_T_67 = ((0U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_29)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_65));
}
