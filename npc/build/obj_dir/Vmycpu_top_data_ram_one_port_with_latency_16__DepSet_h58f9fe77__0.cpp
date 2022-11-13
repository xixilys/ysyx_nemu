// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first___05F40.h"
#include "Vmycpu_top_data_ram_one_port_with_latency_16.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__7(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__7\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__4(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___ico_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first___05Freset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__io_dina, 0x38U, 8U));
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 0U));
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 1U));
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 2U));
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 3U));
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 4U));
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 5U));
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 6U));
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__io_wea), 7U));
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_clock;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_reset;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_reset;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_in;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_write;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__5(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F2->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F3->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F5->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__6(Vmycpu_top_data_ram_one_port_with_latency_16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port_with_latency_16___nba_sequent__TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__6\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F1->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F4->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F6->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first___05F7->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr;
}
