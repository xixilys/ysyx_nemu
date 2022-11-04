// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__55(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__55\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__57(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__57\n"); );
    // Body
    vlSelf->__PVT__write_access_complete_reg = vlSelf->__Vdly__write_access_complete_reg;
    vlSelf->__PVT__stage2_sram_write_reg = vlSelf->__Vdly__stage2_sram_write_reg;
    vlSelf->__PVT__lru_126 = vlSelf->__Vdly__lru_126;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__5(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__5\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__58(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__58\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_4 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___access_work_state_T_19 = (7U == (IData)(vlSelf->__PVT__write_counter));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__59(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__59\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_5 = ((IData)(vlSelf->__PVT___access_work_state_T_19)
                                          ? 0U : (IData)(vlSelf->__PVT___write_counter_T_4));
    vlSelf->__PVT__lru_127 = vlSelf->__Vdly__lru_127;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__60(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__60\n"); );
    // Body
    vlSelf->__PVT__stage2_write_stage1_read = ((IData)(vlSelf->__PVT__stage2_sram_write_reg) 
                                               & (~ (IData)(vlSelf->__PVT__stage1_sram_wr_reg)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__61(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__61\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_5 = (0xeU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___T_21 = VL_CONCAT_QIQ(52,1,51, 1U, 
                                         (0x7ffffffffffffULL 
                                          & VL_SEL_QQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xdU, 0x33U)));
    vlSelf->__PVT___T_29 = (3U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_6 = (((0xcU == (IData)(vlSelf->__PVT__work_state)) 
                                           | (8U == (IData)(vlSelf->__PVT__work_state)))
                                           ? vlSelf->__PVT___io_port_araddr_T_5
                                           : 0ULL);
    vlSelf->__PVT___io_port_araddr_T = (1U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_1 = (0xcU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_2 = (8U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_awaddr_T_2 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                           : 0ULL);
    vlSelf->__PVT__stage2_addr_same_as_stage1 = (vlSelf->__PVT__stage2_sram_addr_reg 
                                                 == vlSelf->__PVT__stage1_addr_line_mapping);
    vlSelf->__PVT___io_port_wdata_T = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T = (0xaU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T_7 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_dirty_T_9 = (0x10U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___wait_data_T_3 = (0xdU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_9 = (0U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT__dcache_tag_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_tag_1_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_39 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_1)
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT___GEN_2075 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT___GEN_2067 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__2(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__2\n"); );
    // Body
    vlSelf->__PVT___GEN_2076 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_2075);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT___GEN_2068 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_2067);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSelf->__PVT___GEN_2077 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_2076);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__5(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__5\n"); );
    // Body
    vlSelf->__PVT___GEN_2069 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_2068);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__PVT___GEN_2078 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_2077);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSelf->__PVT___GEN_2070 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_2069);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT___GEN_2079 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_2078);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT___GEN_2071 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_2070);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT___GEN_2080 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_2079);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT___GEN_2072 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_2071);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT___GEN_2081 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_2080);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT___GEN_2073 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_2072);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__66(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__66\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 3U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 1U);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__67(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__67\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_3)
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_5));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__68(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__68\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_6)
            : 0x19U);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__69(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__69\n"); );
    // Body
    vlSelf->__PVT___io_tlb_req_T_4 = (1U & ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1fU)) 
                                            | (3U == 
                                               (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1eU, 2U)))));
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT___GEN_1923 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT___GEN_1931 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT___GEN_1924 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_1923);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT___GEN_1932 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_1931);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT___GEN_1925 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_1924);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT___GEN_1933 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_1932);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT___GEN_1926 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_1925);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT___GEN_1934 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_1933);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT___GEN_1927 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_1926);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT___GEN_1935 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_1934);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT___GEN_1928 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_1927);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT___GEN_1936 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_1935);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT___GEN_1929 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_1928);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT___GEN_1937 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_1936);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT__hit_word = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                ? vlSelf->__PVT___GEN_1929
                                : vlSelf->__PVT___GEN_1937);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__29(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__29\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_2 = ((IData)(vlSelf->__PVT___cache_wdata_T_3)
                                          ? vlSelf->__PVT__hit_word
                                          : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__30(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__30\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_3 = ((IData)(vlSelf->__PVT___io_sram_data_ok_T_1)
                                          ? vlSelf->__PVT__wait_data
                                          : vlSelf->__PVT___io_sram_rdata_T_2);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__31(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__31\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata = ((IData)(vlSelf->__PVT__stage2_stall_reg)
                                     ? vlSelf->__PVT___io_sram_rdata_T_3
                                     : vlSelf->__PVT__sram_rdata_reg);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__71(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__71\n"); );
    // Body
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_port_awburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___io_port_arsize_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                           ? 3U : (IData)(vlSelf->__PVT__stage1_sram_size_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__76(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__76\n"); );
    // Body
    vlSelf->__PVT___GEN_123 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_122)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_124 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_123)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_125 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_124)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_126 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_125)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_127 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_126)
                                : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT___GEN_128 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_127)
                                : (IData)(vlSelf->__PVT___GEN_127));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__77(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__77\n"); );
    // Body
    vlSelf->__PVT___way1_dirty_T_12 = ((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                       & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way0_dirty_T_7 = (1U & (~ (IData)(vlSelf->__PVT___GEN_128)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT__way0_burst_read_wen = ((((IData)(vlSelf->__PVT___wait_data_T_3) 
                                            | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                           & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                          & (IData)(vlSelf->__PVT___way0_dirty_T_7));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__io_port_rvalid) 
                                              & (IData)(vlSelf->__PVT__io_port_rlast));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__79(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__79\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
                                               ? 0x10U
                                               : 0xeU);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__80(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__80\n"); );
    // Body
    vlSelf->__PVT__read_counter = vlSelf->__Vdly__read_counter;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_29 = (((IData)(vlSelf->__PVT__io_port_rvalid) 
                                               & (IData)(vlSelf->__PVT__io_port_rlast))
                                               ? 0x10U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_15 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__81(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__81\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_6 = (7U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__read_counter)));
    vlSelf->__PVT___wen_way0_wire_0_T_1 = (0U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_1_T_1 = (1U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_2_T_1 = (2U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_3_T_1 = (3U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_4_T_1 = (4U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_5_T_1 = (5U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_6_T_1 = (6U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___wen_way0_wire_7_T_1 = (7U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U)));
    vlSelf->__PVT___way0_wen_0_T = (0U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_1_T = (1U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_2_T = (2U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_3_T = (3U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_4_T = (4U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_5_T = (5U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_6_T = (6U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_7_T = (7U == (IData)(vlSelf->__PVT__read_counter));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__82(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__82\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__83(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__83\n"); );
    // Body
    vlSelf->__PVT___way1_dirty_T_4 = (((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__32(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__32\n"); );
    // Body
    vlSelf->__PVT__writeback_data = ((IData)(vlSelf->__PVT___GEN_128)
                                      ? vlSelf->__PVT___GEN_2073
                                      : vlSelf->__PVT___GEN_2081);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__84(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__84\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_1)) 
                               & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_14 = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                        & (IData)(vlSelf->__PVT___GEN_128)) 
                                       | (IData)(vlSelf->__PVT___GEN_896));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__33(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__33\n"); );
    // Body
    vlSelf->__PVT___io_port_wdata_T_4 = (((IData)(vlSelf->__PVT___write_counter_T) 
                                          | (IData)(vlSelf->__PVT___write_counter_T_7))
                                          ? vlSelf->__PVT__writeback_data
                                          : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__34(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___multiclk__TOP__mycpu_top__data_cache__34\n"); );
    // Body
    vlSelf->__PVT__io_port_wdata = ((4U == (IData)(vlSelf->__PVT__work_state))
                                     ? vlSelf->__PVT__stage1_sram_wdata_reg
                                     : vlSelf->__PVT___io_port_wdata_T_4);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__86(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__86\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_15 = ((~ ((0xeU == (IData)(vlSelf->__PVT__work_state)) 
                                           & (~ (IData)(vlSelf->__PVT___GEN_128)))) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_14));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__87(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__87\n"); );
    // Body
    vlSelf->__PVT__state_ready_lookup_will_to_be = 
        ((IData)(vlSelf->__PVT__hit) ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_7)
          : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_18));
}
