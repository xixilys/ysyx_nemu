// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dcache_tag.h"

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__77(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__77\n"); );
    // Body
    vlSelf->__PVT__io_tag = (0x7ffffffffffffULL & (
                                                   (1U 
                                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                                    ? 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_191, 0U, 0x33U)
                                                    : 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_63, 0U, 0x33U)));
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__78(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__78\n"); );
    // Body
    vlSelf->__PVT__io_hit = ((VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U) 
                              & ((0x7ffffffffffffULL 
                                  & VL_SEL_QQII(52, vlSelf->__PVT___GEN_447, 0U, 0x33U)) 
                                 == (0x7ffffffffffffULL 
                                     & VL_SEL_QQII(64, vlSelf->__PVT__io_raddr, 0xdU, 0x33U)))) 
                             | ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U)) 
                                & ((0x7ffffffffffffULL 
                                    & VL_SEL_QQII(52, vlSelf->__PVT___GEN_511, 0U, 0x33U)) 
                                   == (0x7ffffffffffffULL 
                                       & VL_SEL_QQII(64, vlSelf->__PVT__io_raddr, 0xdU, 0x33U)))));
    vlSelf->__PVT__io_valid = (1U & ((1U & VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U))
                                      ? VL_BITSEL_IQII(52, vlSelf->__PVT___GEN_447, 0x33U)
                                      : VL_BITSEL_IQII(52, vlSelf->__PVT___GEN_511, 0x33U)));
}
