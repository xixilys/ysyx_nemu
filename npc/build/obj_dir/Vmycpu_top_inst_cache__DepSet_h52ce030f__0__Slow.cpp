// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_cache.h"

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__2(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__2\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__reset 
        = vlSelf->__PVT__icache_data_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__reset 
        = vlSelf->__PVT__icache_data_1_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__reset 
        = vlSelf->__PVT__icache_data_2_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__reset 
        = vlSelf->__PVT__icache_data_3_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__reset 
        = vlSelf->__PVT__icache_data_4_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__reset 
        = vlSelf->__PVT__icache_data_5_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__reset 
        = vlSelf->__PVT__icache_data_6_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__reset 
        = vlSelf->__PVT__icache_data_7_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__reset 
        = vlSelf->__PVT__icache_data_8_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__reset 
        = vlSelf->__PVT__icache_data_9_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__reset 
        = vlSelf->__PVT__icache_data_10_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__reset 
        = vlSelf->__PVT__icache_data_11_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__reset 
        = vlSelf->__PVT__icache_data_12_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__reset 
        = vlSelf->__PVT__icache_data_13_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__reset 
        = vlSelf->__PVT__icache_data_14_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__reset 
        = vlSelf->__PVT__icache_data_15_reset;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__9(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__9\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__clock 
        = vlSelf->__PVT__icache_data_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__clock 
        = vlSelf->__PVT__icache_data_1_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__clock 
        = vlSelf->__PVT__icache_data_2_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__clock 
        = vlSelf->__PVT__icache_data_3_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__clock 
        = vlSelf->__PVT__icache_data_4_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__clock 
        = vlSelf->__PVT__icache_data_5_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__clock 
        = vlSelf->__PVT__icache_data_6_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__clock 
        = vlSelf->__PVT__icache_data_7_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__clock 
        = vlSelf->__PVT__icache_data_8_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__clock 
        = vlSelf->__PVT__icache_data_9_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__clock 
        = vlSelf->__PVT__icache_data_10_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__clock 
        = vlSelf->__PVT__icache_data_11_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__clock 
        = vlSelf->__PVT__icache_data_12_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__clock 
        = vlSelf->__PVT__icache_data_13_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__clock 
        = vlSelf->__PVT__icache_data_14_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__clock 
        = vlSelf->__PVT__icache_data_15_clock;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__10(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__10\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__clock 
        = vlSelf->__PVT__icache_tag_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__clock 
        = vlSelf->__PVT__icache_tag_1_clock;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__30(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__30\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__reset 
        = vlSelf->__PVT__icache_tag_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__reset 
        = vlSelf->__PVT__icache_tag_1_reset;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__46(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__46\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_8_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_9_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_11_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_12_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_13_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_15_io_addr;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__48(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__48\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_1_io_addr;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__49(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__49\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_1_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_2_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_3_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_4_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_5_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_6_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_7_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_10_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_11_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_12_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_13_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__icache_data_15_io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__50(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__50\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_1_io_wdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__54(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__54\n"); );
    // Body
    vlSelf->__PVT__icache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__55(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__55\n"); );
    // Body
    vlSelf->__PVT__icache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__56(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__56\n"); );
    // Body
    vlSelf->__PVT__icache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__57(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__57\n"); );
    // Body
    vlSelf->__PVT__icache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__58(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__58\n"); );
    // Body
    vlSelf->__PVT__icache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__59(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__59\n"); );
    // Body
    vlSelf->__PVT__icache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__206(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__206\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_1_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__210(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__210\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__211(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__211\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_8_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_9_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_10_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_11_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_12_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_13_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_14_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_15_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__213(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__213\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_1_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_2_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_3_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_4_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_5_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_6_io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_wen 
        = vlSelf->__PVT__icache_data_7_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__214(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__214\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_hit;
    vlSelf->__PVT__icache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_hit;
}
