// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT__writeback_data = ((IData)(vlSelf->__PVT___GEN_128)
                                      ? vlSelf->__PVT___GEN_2073
                                      : vlSelf->__PVT___GEN_2081);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT___io_port_wdata_T_4 = (((IData)(vlSelf->__PVT___write_counter_T) 
                                          | (IData)(vlSelf->__PVT___write_counter_T_7))
                                          ? vlSelf->__PVT__writeback_data
                                          : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__155(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__155\n"); );
    // Body
    vlSelf->__PVT__way1_wen_0 = ((IData)(vlSelf->__PVT___way0_wen_0_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_1 = ((IData)(vlSelf->__PVT___way0_wen_1_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_2 = ((IData)(vlSelf->__PVT___way0_wen_2_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_3 = ((IData)(vlSelf->__PVT___way0_wen_3_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_4 = ((IData)(vlSelf->__PVT___way0_wen_4_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_5 = ((IData)(vlSelf->__PVT___way0_wen_5_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_6 = ((IData)(vlSelf->__PVT___way0_wen_6_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_7 = ((IData)(vlSelf->__PVT___way0_wen_7_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__156(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__156\n"); );
    // Body
    vlSelf->__PVT___wen_way1_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_0), 8U));
    vlSelf->__PVT___wen_way1_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_1), 8U));
    vlSelf->__PVT___wen_way1_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_2), 8U));
    vlSelf->__PVT___wen_way1_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_3), 8U));
    vlSelf->__PVT___wen_way1_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_4), 8U));
    vlSelf->__PVT___wen_way1_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_5), 8U));
    vlSelf->__PVT___wen_way1_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_6), 8U));
    vlSelf->__PVT___wen_way1_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_7), 8U));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__157(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__157\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_0_T_1) 
                                            & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way1_wire_0_T_13));
    vlSelf->__PVT__dcache_data_9_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_1_T_1) 
                                            & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way1_wire_1_T_13));
    vlSelf->__PVT__dcache_data_10_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_2_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_2_T_13));
    vlSelf->__PVT__dcache_data_11_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_3_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_3_T_13));
    vlSelf->__PVT__dcache_data_12_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_4_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_4_T_13));
    vlSelf->__PVT__dcache_data_13_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_5_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_5_T_13));
    vlSelf->__PVT__dcache_data_14_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_6_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_6_T_13));
    vlSelf->__PVT__dcache_data_15_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_7_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_7_T_13));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__159(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__159\n"); );
    // Body
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__164(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__164\n"); );
    // Body
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_1)) 
                               & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_14 = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                        & (IData)(vlSelf->__PVT___GEN_128)) 
                                       | (IData)(vlSelf->__PVT___GEN_896));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT___awaddr_miss_addr_T_2 = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                             ? vlSelf->__PVT__dcache_tag_io_tag
                                             : vlSelf->__PVT__dcache_tag_1_io_tag);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__165(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__165\n"); );
    // Body
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
    vlSelf->__PVT___way1_dirty_T_15 = ((~ ((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                           & (IData)(vlSelf->__PVT___GEN_128))) 
                                       & (IData)(vlSelf->__PVT___way1_dirty_T_14));
    vlSelf->__PVT___way0_dirty_T_14 = (((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7)) 
                                       | (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT__dirty_victim = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                    ? (IData)(vlSelf->__PVT___GEN_384)
                                    : (IData)(vlSelf->__PVT___GEN_896));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT__awaddr_miss_addr = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___awaddr_miss_addr_T_2, 
                                                    VL_CONCAT_III(13,7,6, 
                                                                  (0x7fU 
                                                                   & VL_SEL_IQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 6U, 7U)), 0U));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__166(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__166\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_15 = ((~ ((0xeU == (IData)(vlSelf->__PVT__work_state)) 
                                           & (~ (IData)(vlSelf->__PVT___GEN_128)))) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_14));
    vlSelf->__PVT__way0_wen_0 = ((0U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_1 = ((1U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_16 
        = ((IData)(vlSelf->__PVT__dirty_victim) ? 9U
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_15));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT___io_port_awaddr_T_4 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__awaddr_miss_addr
                                           : vlSelf->__PVT___io_port_awaddr_T_2);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__167(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__167\n"); );
    // Body
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 8U));
    vlSelf->__PVT___wen_way0_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_1), 8U));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_17 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_16)
            : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_12)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__168(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__168\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_wen = (((0U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                          & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                             | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                          ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                          : (IData)(vlSelf->__PVT___wen_way0_wire_0_T_13));
    vlSelf->__PVT__dcache_data_1_io_wen = (((1U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_1_T_13));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_18 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_17))
            : 0x19U);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__173(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__173\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__174(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__174\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__175(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__175\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__176(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__176\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_55 = ((0xdU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_53));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__177(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__177\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_57 = ((0xeU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_55));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__178(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__178\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_59 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_17)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_57));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__179(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__179\n"); );
    // Body
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
