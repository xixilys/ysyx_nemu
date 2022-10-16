// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_cache.h"

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_tag_1_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT__dcache_data_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_4_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_5_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_6_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_7_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_8_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_9_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_10_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_11_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_12_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_13_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_14_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_15_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_tag_1_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__4\n"); );
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
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_4 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_port_awburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___io_port_arsize_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                           ? 3U : (IData)(vlSelf->__PVT__stage1_sram_size_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT___io_port_araddr_T_5 = VL_CONCAT_QQI(64,58,6, 
                                                       (0x3ffffffffffffffULL 
                                                        & VL_SEL_QQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 6U, 0x3aU)), 0U);
    vlSelf->__PVT___access_work_state_T_19 = (7U == (IData)(vlSelf->__PVT__write_counter));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 3U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 1U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_should_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? 0U : 0x19U);
    vlSelf->__PVT___state_ready_lookup_should_be_T_2 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_5 = ((IData)(vlSelf->__PVT___access_work_state_T_19)
                                          ? 0U : (IData)(vlSelf->__PVT___write_counter_T_4));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_arsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSelf->__PVT__io_port_awlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_awsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_should_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_2)
            : 0x19U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT___hit_T = ((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                             & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__io_port_rvalid) 
                                              & (IData)(vlSelf->__PVT__io_port_rlast));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT__stage2_write_stage1_read = ((IData)(vlSelf->__PVT__stage2_sram_write_reg) 
                                               & (~ (IData)(vlSelf->__PVT__stage1_sram_wr_reg)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
                                               ? 0x10U
                                               : 0xeU);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_3)
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_5));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_12 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 3U : 1U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_15 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 8U : 0xcU);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT___hit_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_hit1_reg) 
                               & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_6)
            : 0x19U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                          | (IData)(vlSelf->__PVT___hit_T_1));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_5 = (0xeU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_29 = (((IData)(vlSelf->__PVT__io_port_rvalid) 
                                               & (IData)(vlSelf->__PVT__io_port_rlast))
                                               ? 0x10U
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__29(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__29\n"); );
    // Body
    vlSelf->__PVT___io_tlb_req_T_4 = (1U & ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1fU)) 
                                            | (3U == 
                                               (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1eU, 2U)))));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__30(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__30\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_6 = (7U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__read_counter)));
    vlSelf->__PVT___access_work_state_T_25 = ((IData)(vlSelf->__PVT__io_port_arready)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__31(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__31\n"); );
    // Body
    vlSelf->__PVT___T_21 = VL_CONCAT_QIQ(52,1,51, 1U, 
                                         (0x7ffffffffffffULL 
                                          & VL_SEL_QQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xdU, 0x33U)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__32(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__32\n"); );
    // Body
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__33(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__33\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_23 = ((IData)(vlSelf->__PVT__io_port_bvalid)
                                               ? 0xcU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___T_29 = (3U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__34(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__34\n"); );
    // Body
    vlSelf->__PVT___io_port_araddr_T_6 = (((0xcU == (IData)(vlSelf->__PVT__work_state)) 
                                           | (8U == (IData)(vlSelf->__PVT__work_state)))
                                           ? vlSelf->__PVT___io_port_araddr_T_5
                                           : 0ULL);
    vlSelf->__PVT___io_port_araddr_T = (1U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_1 = (0xcU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_2 = (8U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__35(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__35\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_21 = (((IData)(vlSelf->__PVT__io_port_wready) 
                                               & (7U 
                                                  == (IData)(vlSelf->__PVT__write_counter)))
                                               ? 0xbU
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__36(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__36\n"); );
    // Body
    vlSelf->__PVT___io_port_awaddr_T_2 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                           : 0ULL);
    vlSelf->__PVT__stage2_addr_same_as_stage1 = (vlSelf->__PVT__stage2_sram_addr_reg 
                                                 == vlSelf->__PVT__stage1_addr_line_mapping);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__37(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__37\n"); );
    // Body
    vlSelf->__PVT___io_port_wdata_T = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_17 = ((IData)(vlSelf->__PVT__io_port_awready)
                                               ? 0xaU
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__38(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__38\n"); );
    // Body
    vlSelf->__PVT___write_counter_T = (0xaU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T_7 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_15 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__39(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__39\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_9 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 0xdU
                                              : (IData)(vlSelf->__PVT__work_state));
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
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__40(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__40\n"); );
    // Body
    vlSelf->__PVT___way0_wen_0_T = (0U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_1_T = (1U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_2_T = (2U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_3_T = (3U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_4_T = (4U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_5_T = (5U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_6_T = (6U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_7_T = (7U == (IData)(vlSelf->__PVT__read_counter));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__41(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__41\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_7 = ((IData)(vlSelf->__PVT__io_port_wready)
                                              ? 5U : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__42(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__42\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_5 = ((IData)(vlSelf->__PVT__io_port_awready)
                                              ? 4U : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__43(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__43\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_9 = (0x10U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_1 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 2U : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__44(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__44\n"); );
    // Body
    vlSelf->__PVT___wait_data_T_3 = (0xdU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_9 = (0U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__45(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__45\n"); );
    // Body
    vlSelf->__PVT__state_ready_lookup_should_be = ((IData)(vlSelf->__PVT__hit)
                                                    ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_3)
                                                    : (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_5));
    vlSelf->__PVT___access_work_state_for_stall_T_1 
        = ((IData)(vlSelf->__PVT__io_port_rvalid) ? 0x18U
            : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__46(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__46\n"); );
    // Body
    vlSelf->__PVT___io_sram_data_ok_T_1 = (0x18U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___cache_wdata_T_3 = (0x19U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__47(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__47\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_tag_1_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__48(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__48\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__49(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__49\n"); );
    // Body
    vlSelf->__PVT___GEN_258 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_1)
                                : (IData)(vlSelf->__PVT__way0_dirty_0));
    vlSelf->__PVT___GEN_770 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_1)
                                : (IData)(vlSelf->__PVT__way1_dirty_0));
    vlSelf->__PVT___GEN_2 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__50(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__50\n"); );
    // Body
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__51(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__51\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__52(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__52\n"); );
    // Body
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__53(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__53\n"); );
    // Body
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__54(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__54\n"); );
    // Body
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__55(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__55\n"); );
    // Body
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__56(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__56\n"); );
    // Body
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSelf->__PVT___access_work_state_T_39 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_1)
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__57(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__57\n"); );
    // Body
    vlSelf->__PVT___state_lookup_for_less_delay_T_1 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__58(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__58\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__61(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__61\n"); );
    // Body
    vlSelf->__PVT___GEN_259 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_771 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_770));
    vlSelf->__PVT___GEN_3 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_2));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__62(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__62\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__63(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__63\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                           ? vlSelf->__PVT___T_21
                                           : 0ULL);
    vlSelf->__PVT__dcache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                             ? vlSelf->__PVT___T_21
                                             : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__64(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__64\n"); );
    // Body
    vlSelf->__PVT__io_port_arvalid = ((((IData)(vlSelf->__PVT___io_port_araddr_T) 
                                        | (IData)(vlSelf->__PVT___io_port_araddr_T_1)) 
                                       | (IData)(vlSelf->__PVT___io_port_araddr_T_2)) 
                                      & (IData)(vlSelf->__PVT___io_port_arvalid_T_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__65(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__65\n"); );
    // Body
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xffU : 0U);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__66(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__66\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__67(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__67\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_41 = ((2U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_39));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__68(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__68\n"); );
    // Body
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__69(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__69\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__70(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__70\n"); );
    // Body
    vlSelf->__PVT___GEN_260 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_772 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_771));
    vlSelf->__PVT___GEN_4 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_3));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__72(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__72\n"); );
    // Body
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__73(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__73\n"); );
    // Body
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__74(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__74\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_4 = ((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                        & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__75(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__75\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__76(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__76\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T = (0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__77(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__77\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__83(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__83\n"); );
    // Body
    vlSelf->__PVT___GEN_261 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_773 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_772));
    vlSelf->__PVT___GEN_5 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_4)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__84(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__84\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                            | (IData)(vlSelf->__PVT___way0_dirty_T))
                                            ? vlSelf->__PVT__stage1_sram_wdata_reg
                                            : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_1_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_2_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_3_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_4_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_5_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_6_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_7_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__85(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__85\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_2 = 
        ((IData)(vlSelf->__PVT___way0_dirty_T_9) | (IData)(vlSelf->__PVT___way0_dirty_T));
    vlSelf->__PVT___way1_dirty_T_4 = (((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__86(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__86\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__87(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__87\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_7_rdata = vlSelf->__PVT__dcache_data_7_io_rdata;
    vlSelf->__PVT__dcache_data_way1_7_rdata = vlSelf->__PVT__dcache_data_15_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__88(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__88\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_6_rdata = vlSelf->__PVT__dcache_data_6_io_rdata;
    vlSelf->__PVT__dcache_data_way1_6_rdata = vlSelf->__PVT__dcache_data_14_io_rdata;
    vlSelf->__PVT__dcache_data_way0_5_rdata = vlSelf->__PVT__dcache_data_5_io_rdata;
    vlSelf->__PVT__dcache_data_way1_5_rdata = vlSelf->__PVT__dcache_data_13_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__89(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__89\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_4_rdata = vlSelf->__PVT__dcache_data_4_io_rdata;
    vlSelf->__PVT__dcache_data_way1_4_rdata = vlSelf->__PVT__dcache_data_12_io_rdata;
    vlSelf->__PVT__dcache_data_way0_3_rdata = vlSelf->__PVT__dcache_data_3_io_rdata;
    vlSelf->__PVT__dcache_data_way1_3_rdata = vlSelf->__PVT__dcache_data_11_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__90(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__90\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_2_rdata = vlSelf->__PVT__dcache_data_2_io_rdata;
    vlSelf->__PVT__dcache_data_way1_2_rdata = vlSelf->__PVT__dcache_data_10_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__91(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__91\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_0_rdata = vlSelf->__PVT__dcache_data_io_rdata;
    vlSelf->__PVT__dcache_data_way0_1_rdata = vlSelf->__PVT__dcache_data_1_io_rdata;
    vlSelf->__PVT__dcache_data_way1_0_rdata = vlSelf->__PVT__dcache_data_8_io_rdata;
    vlSelf->__PVT__dcache_data_way1_1_rdata = vlSelf->__PVT__dcache_data_9_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__92(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__92\n"); );
    // Body
    vlSelf->__PVT___GEN_262 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_5)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_774 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_5)
                                : (IData)(vlSelf->__PVT___GEN_773));
    vlSelf->__PVT___GEN_6 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_5)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__94(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__94\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_9_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_10_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_11_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_12_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_13_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_14_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_15_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__95(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__95\n"); );
    // Body
    vlSelf->__PVT___GEN_2067 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
    vlSelf->__PVT___GEN_2075 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__96(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__96\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_11 
        = ((0xeU == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_9));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__97(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__97\n"); );
    // Body
    vlSelf->__PVT___GEN_1923 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_1931 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__98(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__98\n"); );
    // Body
    vlSelf->__PVT___GEN_263 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_6)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_775 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_6)
                                : (IData)(vlSelf->__PVT___GEN_774));
    vlSelf->__PVT___GEN_7 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_6)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__100(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__100\n"); );
    // Body
    vlSelf->__PVT___GEN_2068 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_2067);
    vlSelf->__PVT___GEN_2076 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_2075);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__101(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__101\n"); );
    // Body
    vlSelf->__PVT__access_work_state_for_stall = ((0x10U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? 0x18U
                                                   : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_11));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__102(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__102\n"); );
    // Body
    vlSelf->__PVT___GEN_1924 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_1923);
    vlSelf->__PVT___GEN_1932 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_1931);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__103(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__103\n"); );
    // Body
    vlSelf->__PVT___GEN_264 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_7)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_776 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_7)
                                : (IData)(vlSelf->__PVT___GEN_775));
    vlSelf->__PVT___GEN_8 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_7)
                              : (IData)(vlSelf->__PVT___GEN_7));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__104(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__104\n"); );
    // Body
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__105(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__105\n"); );
    // Body
    vlSelf->__PVT___GEN_2069 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_2068);
    vlSelf->__PVT___GEN_2077 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_2076);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__106(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__106\n"); );
    // Body
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__107(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__107\n"); );
    // Body
    vlSelf->__PVT___GEN_1925 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_1924);
    vlSelf->__PVT___GEN_1933 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_1932);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__108(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__108\n"); );
    // Body
    vlSelf->__PVT___GEN_265 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_8)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_777 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_8)
                                : (IData)(vlSelf->__PVT___GEN_776));
    vlSelf->__PVT___GEN_9 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_8)
                              : (IData)(vlSelf->__PVT___GEN_8));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__109(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__109\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__110(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__110\n"); );
    // Body
    vlSelf->__PVT___GEN_2070 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_2069);
    vlSelf->__PVT___GEN_2078 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_2077);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__111(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__111\n"); );
    // Body
    vlSelf->__PVT___GEN_1926 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_1925);
    vlSelf->__PVT___GEN_1934 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_1933);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__112(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__112\n"); );
    // Body
    vlSelf->__PVT___GEN_266 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_9)
                                : (IData)(vlSelf->__PVT___GEN_265));
    vlSelf->__PVT___GEN_778 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_9)
                                : (IData)(vlSelf->__PVT___GEN_777));
    vlSelf->__PVT___GEN_10 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_9)
                               : (IData)(vlSelf->__PVT___GEN_9));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__113(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__113\n"); );
    // Body
    vlSelf->__PVT___GEN_2071 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_2070);
    vlSelf->__PVT___GEN_2079 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_2078);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__114(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__114\n"); );
    // Body
    vlSelf->__PVT___GEN_1927 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_1926);
    vlSelf->__PVT___GEN_1935 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_1934);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__115(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__115\n"); );
    // Body
    vlSelf->__PVT___GEN_267 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_10)
                                : (IData)(vlSelf->__PVT___GEN_266));
    vlSelf->__PVT___GEN_779 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_10)
                                : (IData)(vlSelf->__PVT___GEN_778));
    vlSelf->__PVT___GEN_11 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_10)
                               : (IData)(vlSelf->__PVT___GEN_10));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__116(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__116\n"); );
    // Body
    vlSelf->__PVT___GEN_2072 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_2071);
    vlSelf->__PVT___GEN_2080 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_2079);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__117(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__117\n"); );
    // Body
    vlSelf->__PVT___GEN_1928 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_1927);
    vlSelf->__PVT___GEN_1936 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_1935);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__118(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__118\n"); );
    // Body
    vlSelf->__PVT___GEN_268 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_267));
    vlSelf->__PVT___GEN_780 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_779));
    vlSelf->__PVT___GEN_12 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_11)
                               : (IData)(vlSelf->__PVT___GEN_11));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__119(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__119\n"); );
    // Body
    vlSelf->__PVT___GEN_2073 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_2072);
    vlSelf->__PVT___GEN_2081 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_2080);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__120(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__120\n"); );
    // Body
    vlSelf->__PVT___GEN_1929 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_1928);
    vlSelf->__PVT___GEN_1937 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_1936);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__121(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__121\n"); );
    // Body
    vlSelf->__PVT___GEN_269 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_781 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_780));
    vlSelf->__PVT___GEN_13 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_12)
                               : (IData)(vlSelf->__PVT___GEN_12));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__122(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__122\n"); );
    // Body
    vlSelf->__PVT__hit_word = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                ? vlSelf->__PVT___GEN_1929
                                : vlSelf->__PVT___GEN_1937);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__123(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__123\n"); );
    // Body
    vlSelf->__PVT___GEN_270 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_269));
    vlSelf->__PVT___GEN_782 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_781));
    vlSelf->__PVT___GEN_14 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_13)
                               : (IData)(vlSelf->__PVT___GEN_13));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__124(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__124\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_2 = ((IData)(vlSelf->__PVT___cache_wdata_T_3)
                                          ? vlSelf->__PVT__hit_word
                                          : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__125(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__125\n"); );
    // Body
    vlSelf->__PVT___GEN_271 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_783 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_782));
    vlSelf->__PVT___GEN_15 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_14)
                               : (IData)(vlSelf->__PVT___GEN_14));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__126(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__126\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_3 = ((IData)(vlSelf->__PVT___io_sram_data_ok_T_1)
                                          ? vlSelf->__PVT__wait_data
                                          : vlSelf->__PVT___io_sram_rdata_T_2);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__127(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__127\n"); );
    // Body
    vlSelf->__PVT___GEN_272 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_784 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_783));
    vlSelf->__PVT___GEN_16 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_15)
                               : (IData)(vlSelf->__PVT___GEN_15));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__128(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__128\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata = ((IData)(vlSelf->__PVT__stage2_stall_reg)
                                     ? vlSelf->__PVT___io_sram_rdata_T_3
                                     : vlSelf->__PVT__sram_rdata_reg);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__129(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__129\n"); );
    // Body
    vlSelf->__PVT___GEN_273 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_785 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_784));
    vlSelf->__PVT___GEN_17 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_16)
                               : (IData)(vlSelf->__PVT___GEN_16));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__130(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__130\n"); );
    // Body
    vlSelf->__PVT___GEN_274 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_786 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_785));
    vlSelf->__PVT___GEN_18 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_17)
                               : (IData)(vlSelf->__PVT___GEN_17));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__131(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__131\n"); );
    // Body
    vlSelf->__PVT___GEN_275 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_787 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_786));
    vlSelf->__PVT___GEN_19 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_18)
                               : (IData)(vlSelf->__PVT___GEN_18));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__132(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__132\n"); );
    // Body
    vlSelf->__PVT___GEN_276 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_788 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_787));
    vlSelf->__PVT___GEN_20 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_19)
                               : (IData)(vlSelf->__PVT___GEN_19));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__133(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__133\n"); );
    // Body
    vlSelf->__PVT___GEN_277 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_789 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_788));
    vlSelf->__PVT___GEN_21 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_20)
                               : (IData)(vlSelf->__PVT___GEN_20));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__134(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__134\n"); );
    // Body
    vlSelf->__PVT___GEN_278 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_790 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_789));
    vlSelf->__PVT___GEN_22 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_21)
                               : (IData)(vlSelf->__PVT___GEN_21));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__135(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__135\n"); );
    // Body
    vlSelf->__PVT___GEN_279 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_791 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_790));
    vlSelf->__PVT___GEN_23 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_22)
                               : (IData)(vlSelf->__PVT___GEN_22));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__136(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__136\n"); );
    // Body
    vlSelf->__PVT___GEN_280 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_279));
    vlSelf->__PVT___GEN_792 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_791));
    vlSelf->__PVT___GEN_24 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_23)
                               : (IData)(vlSelf->__PVT___GEN_23));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__137(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__137\n"); );
    // Body
    vlSelf->__PVT___GEN_281 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_280));
    vlSelf->__PVT___GEN_793 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_792));
    vlSelf->__PVT___GEN_25 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_24)
                               : (IData)(vlSelf->__PVT___GEN_24));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__138(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__138\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_raddr = vlSelf->__PVT__io_sram_addr;
    vlSelf->__PVT__dcache_tag_1_io_raddr = vlSelf->__PVT__io_sram_addr;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__139(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__139\n"); );
    // Body
    vlSelf->__PVT___GEN_282 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_281));
    vlSelf->__PVT___GEN_794 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_793));
    vlSelf->__PVT___GEN_26 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_25)
                               : (IData)(vlSelf->__PVT___GEN_25));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__141(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__141\n"); );
    // Body
    vlSelf->__PVT___GEN_283 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_795 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_794));
    vlSelf->__PVT___GEN_27 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_26)
                               : (IData)(vlSelf->__PVT___GEN_26));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__142(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__142\n"); );
    // Body
    vlSelf->__PVT___GEN_284 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_283));
    vlSelf->__PVT___GEN_796 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_795));
    vlSelf->__PVT___GEN_28 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_27)
                               : (IData)(vlSelf->__PVT___GEN_27));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__143(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__143\n"); );
    // Body
    vlSelf->__PVT___GEN_285 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_797 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_796));
    vlSelf->__PVT___GEN_29 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_28)
                               : (IData)(vlSelf->__PVT___GEN_28));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__144(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__144\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__145(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__145\n"); );
    // Body
    vlSelf->__PVT___GEN_286 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_798 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_797));
    vlSelf->__PVT___GEN_30 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_29)
                               : (IData)(vlSelf->__PVT___GEN_29));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__146(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__146\n"); );
    // Body
    vlSelf->__PVT___GEN_287 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_799 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_798));
    vlSelf->__PVT___GEN_31 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_30)
                               : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__147(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__147\n"); );
    // Body
    vlSelf->__PVT___GEN_288 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_800 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_799));
    vlSelf->__PVT___GEN_32 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_31)
                               : (IData)(vlSelf->__PVT___GEN_31));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__148(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__148\n"); );
    // Body
    vlSelf->__PVT___GEN_289 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_801 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_800));
    vlSelf->__PVT___GEN_33 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_32)
                               : (IData)(vlSelf->__PVT___GEN_32));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__149(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__149\n"); );
    // Body
    vlSelf->__PVT___GEN_290 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_802 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_801));
    vlSelf->__PVT___GEN_34 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_33)
                               : (IData)(vlSelf->__PVT___GEN_33));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__150(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__150\n"); );
    // Body
    vlSelf->__PVT___GEN_291 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_803 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_802));
    vlSelf->__PVT___GEN_35 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_34)
                               : (IData)(vlSelf->__PVT___GEN_34));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__151(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__151\n"); );
    // Body
    vlSelf->__PVT___GEN_292 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_804 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_803));
    vlSelf->__PVT___GEN_36 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_35)
                               : (IData)(vlSelf->__PVT___GEN_35));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__152(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__152\n"); );
    // Body
    vlSelf->__PVT___GEN_293 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_805 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_804));
    vlSelf->__PVT___GEN_37 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_36)
                               : (IData)(vlSelf->__PVT___GEN_36));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__153(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__153\n"); );
    // Body
    vlSelf->__PVT___GEN_294 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_293));
    vlSelf->__PVT___GEN_806 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_805));
    vlSelf->__PVT___GEN_38 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_37)
                               : (IData)(vlSelf->__PVT___GEN_37));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__154(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__154\n"); );
    // Body
    vlSelf->__PVT___GEN_295 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_294));
    vlSelf->__PVT___GEN_807 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_806));
    vlSelf->__PVT___GEN_39 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_38)
                               : (IData)(vlSelf->__PVT___GEN_38));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__155(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__155\n"); );
    // Body
    vlSelf->__PVT___GEN_296 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_295));
    vlSelf->__PVT___GEN_808 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_807));
    vlSelf->__PVT___GEN_40 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_39)
                               : (IData)(vlSelf->__PVT___GEN_39));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__156(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__156\n"); );
    // Body
    vlSelf->__PVT___GEN_297 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_809 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_808));
    vlSelf->__PVT___GEN_41 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_40)
                               : (IData)(vlSelf->__PVT___GEN_40));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__157(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__157\n"); );
    // Body
    vlSelf->__PVT___GEN_298 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_297));
    vlSelf->__PVT___GEN_810 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_809));
    vlSelf->__PVT___GEN_42 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_41)
                               : (IData)(vlSelf->__PVT___GEN_41));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__158(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__158\n"); );
    // Body
    vlSelf->__PVT___GEN_299 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_811 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_810));
    vlSelf->__PVT___GEN_43 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_42)
                               : (IData)(vlSelf->__PVT___GEN_42));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__159(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__159\n"); );
    // Body
    vlSelf->__PVT___GEN_300 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_812 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_811));
    vlSelf->__PVT___GEN_44 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_43)
                               : (IData)(vlSelf->__PVT___GEN_43));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__160(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__160\n"); );
    // Body
    vlSelf->__PVT___GEN_301 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_813 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_812));
    vlSelf->__PVT___GEN_45 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_44)
                               : (IData)(vlSelf->__PVT___GEN_44));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__161(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__161\n"); );
    // Body
    vlSelf->__PVT___GEN_302 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_814 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_813));
    vlSelf->__PVT___GEN_46 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_45)
                               : (IData)(vlSelf->__PVT___GEN_45));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__162(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__162\n"); );
    // Body
    vlSelf->__PVT___GEN_303 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_815 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_814));
    vlSelf->__PVT___GEN_47 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_46)
                               : (IData)(vlSelf->__PVT___GEN_46));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__163(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__163\n"); );
    // Body
    vlSelf->__PVT___GEN_304 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_816 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_815));
    vlSelf->__PVT___GEN_48 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_47)
                               : (IData)(vlSelf->__PVT___GEN_47));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__164(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__164\n"); );
    // Body
    vlSelf->__PVT___GEN_305 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_817 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_816));
    vlSelf->__PVT___GEN_49 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_48)
                               : (IData)(vlSelf->__PVT___GEN_48));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__165(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__165\n"); );
    // Body
    vlSelf->__PVT___GEN_306 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_818 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_817));
    vlSelf->__PVT___GEN_50 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_49)
                               : (IData)(vlSelf->__PVT___GEN_49));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__166(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__166\n"); );
    // Body
    vlSelf->__PVT___GEN_307 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_819 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_818));
    vlSelf->__PVT___GEN_51 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_50)
                               : (IData)(vlSelf->__PVT___GEN_50));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__167(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__167\n"); );
    // Body
    vlSelf->__PVT___GEN_308 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_307));
    vlSelf->__PVT___GEN_820 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_819));
    vlSelf->__PVT___GEN_52 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_51)
                               : (IData)(vlSelf->__PVT___GEN_51));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__168(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__168\n"); );
    // Body
    vlSelf->__PVT___GEN_309 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_308));
    vlSelf->__PVT___GEN_821 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_820));
    vlSelf->__PVT___GEN_53 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_52)
                               : (IData)(vlSelf->__PVT___GEN_52));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__169(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__169\n"); );
    // Body
    vlSelf->__PVT___GEN_310 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_309));
    vlSelf->__PVT___GEN_822 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_821));
    vlSelf->__PVT___GEN_54 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_53)
                               : (IData)(vlSelf->__PVT___GEN_53));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__170(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__170\n"); );
    // Body
    vlSelf->__PVT___GEN_311 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_823 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_822));
    vlSelf->__PVT___GEN_55 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_54)
                               : (IData)(vlSelf->__PVT___GEN_54));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__171(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__171\n"); );
    // Body
    vlSelf->__PVT___GEN_312 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_311));
    vlSelf->__PVT___GEN_824 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_823));
    vlSelf->__PVT___GEN_56 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_55)
                               : (IData)(vlSelf->__PVT___GEN_55));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__172(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__172\n"); );
    // Body
    vlSelf->__PVT___GEN_313 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_825 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_824));
    vlSelf->__PVT___GEN_57 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_56)
                               : (IData)(vlSelf->__PVT___GEN_56));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__173(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__173\n"); );
    // Body
    vlSelf->__PVT___GEN_314 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_826 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_825));
    vlSelf->__PVT___GEN_58 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_57)
                               : (IData)(vlSelf->__PVT___GEN_57));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__174(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__174\n"); );
    // Body
    vlSelf->__PVT___GEN_315 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_827 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_826));
    vlSelf->__PVT___GEN_59 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_58)
                               : (IData)(vlSelf->__PVT___GEN_58));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__175(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__175\n"); );
    // Body
    vlSelf->__PVT___GEN_316 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_828 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_827));
    vlSelf->__PVT___GEN_60 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_59)
                               : (IData)(vlSelf->__PVT___GEN_59));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__176(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__176\n"); );
    // Body
    vlSelf->__PVT___GEN_317 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_829 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_828));
    vlSelf->__PVT___GEN_61 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_60)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__177(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__177\n"); );
    // Body
    vlSelf->__PVT___GEN_318 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_830 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_829));
    vlSelf->__PVT___GEN_62 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_61)
                               : (IData)(vlSelf->__PVT___GEN_61));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__178(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__178\n"); );
    // Body
    vlSelf->__PVT___GEN_319 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_831 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_830));
    vlSelf->__PVT___GEN_63 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_62)
                               : (IData)(vlSelf->__PVT___GEN_62));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__179(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__179\n"); );
    // Body
    vlSelf->__PVT___GEN_320 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_832 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_831));
    vlSelf->__PVT___GEN_64 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_63)
                               : (IData)(vlSelf->__PVT___GEN_63));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__180(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__180\n"); );
    // Body
    vlSelf->__PVT___GEN_321 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_833 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_832));
    vlSelf->__PVT___GEN_65 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_64)
                               : (IData)(vlSelf->__PVT___GEN_64));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__181(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__181\n"); );
    // Body
    vlSelf->__PVT___GEN_322 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_321));
    vlSelf->__PVT___GEN_834 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_833));
    vlSelf->__PVT___GEN_66 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_65)
                               : (IData)(vlSelf->__PVT___GEN_65));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__182(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__182\n"); );
    // Body
    vlSelf->__PVT___GEN_323 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_322));
    vlSelf->__PVT___GEN_835 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_834));
    vlSelf->__PVT___GEN_67 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_66)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__184(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__184\n"); );
    // Body
    vlSelf->__PVT___GEN_324 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_323));
    vlSelf->__PVT___GEN_836 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_835));
    vlSelf->__PVT___GEN_68 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_67)
                               : (IData)(vlSelf->__PVT___GEN_67));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__185(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__185\n"); );
    // Body
    vlSelf->__PVT___GEN_325 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_837 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_836));
    vlSelf->__PVT___GEN_69 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_68)
                               : (IData)(vlSelf->__PVT___GEN_68));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__186(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__186\n"); );
    // Body
    vlSelf->__PVT___GEN_326 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_325));
    vlSelf->__PVT___GEN_838 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_837));
    vlSelf->__PVT___GEN_70 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_69)
                               : (IData)(vlSelf->__PVT___GEN_69));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__187(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__187\n"); );
    // Body
    vlSelf->__PVT___GEN_327 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_839 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_838));
    vlSelf->__PVT___GEN_71 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_70)
                               : (IData)(vlSelf->__PVT___GEN_70));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__188(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__188\n"); );
    // Body
    vlSelf->__PVT___GEN_328 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_840 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_839));
    vlSelf->__PVT___GEN_72 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_71)
                               : (IData)(vlSelf->__PVT___GEN_71));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__189(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__189\n"); );
    // Body
    vlSelf->__PVT___GEN_329 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_841 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_840));
    vlSelf->__PVT___GEN_73 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_72)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__190(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__190\n"); );
    // Body
    vlSelf->__PVT___GEN_330 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_842 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_841));
    vlSelf->__PVT___GEN_74 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_73)
                               : (IData)(vlSelf->__PVT___GEN_73));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__191(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__191\n"); );
    // Body
    vlSelf->__PVT___GEN_331 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_843 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_842));
    vlSelf->__PVT___GEN_75 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_74)
                               : (IData)(vlSelf->__PVT___GEN_74));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__192(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__192\n"); );
    // Body
    vlSelf->__PVT___GEN_332 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_844 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_843));
    vlSelf->__PVT___GEN_76 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_75)
                               : (IData)(vlSelf->__PVT___GEN_75));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__193(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__193\n"); );
    // Body
    vlSelf->__PVT___GEN_333 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_845 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_844));
    vlSelf->__PVT___GEN_77 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_76)
                               : (IData)(vlSelf->__PVT___GEN_76));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__194(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__194\n"); );
    // Body
    vlSelf->__PVT___GEN_334 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_846 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_845));
    vlSelf->__PVT___GEN_78 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_77)
                               : (IData)(vlSelf->__PVT___GEN_77));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__195(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__195\n"); );
    // Body
    vlSelf->__PVT___GEN_335 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_847 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_846));
    vlSelf->__PVT___GEN_79 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_78)
                               : (IData)(vlSelf->__PVT___GEN_78));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__196(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__196\n"); );
    // Body
    vlSelf->__PVT___GEN_336 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_335));
    vlSelf->__PVT___GEN_848 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_847));
    vlSelf->__PVT___GEN_80 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_79)
                               : (IData)(vlSelf->__PVT___GEN_79));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__197(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__197\n"); );
    // Body
    vlSelf->__PVT___GEN_337 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_336));
    vlSelf->__PVT___GEN_849 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_848));
    vlSelf->__PVT___GEN_81 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_80)
                               : (IData)(vlSelf->__PVT___GEN_80));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__198(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__198\n"); );
    // Body
    vlSelf->__PVT___GEN_338 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_337));
    vlSelf->__PVT___GEN_850 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_849));
    vlSelf->__PVT___GEN_82 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_81)
                               : (IData)(vlSelf->__PVT___GEN_81));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__199(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__199\n"); );
    // Body
    vlSelf->__PVT___GEN_339 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_851 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_850));
    vlSelf->__PVT___GEN_83 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_82)
                               : (IData)(vlSelf->__PVT___GEN_82));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__200(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__200\n"); );
    // Body
    vlSelf->__PVT___GEN_340 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_339));
    vlSelf->__PVT___GEN_852 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_851));
    vlSelf->__PVT___GEN_84 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_83)
                               : (IData)(vlSelf->__PVT___GEN_83));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__201(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__201\n"); );
    // Body
    vlSelf->__PVT___GEN_341 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_853 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_852));
    vlSelf->__PVT___GEN_85 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_84)
                               : (IData)(vlSelf->__PVT___GEN_84));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__202(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__202\n"); );
    // Body
    vlSelf->__PVT___GEN_342 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_854 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_853));
    vlSelf->__PVT___GEN_86 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_85)
                               : (IData)(vlSelf->__PVT___GEN_85));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__203(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__203\n"); );
    // Body
    vlSelf->__PVT___GEN_343 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_855 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_854));
    vlSelf->__PVT___GEN_87 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_86)
                               : (IData)(vlSelf->__PVT___GEN_86));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__204(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__204\n"); );
    // Body
    vlSelf->__PVT___GEN_344 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_856 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_855));
    vlSelf->__PVT___GEN_88 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_87)
                               : (IData)(vlSelf->__PVT___GEN_87));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__205(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__205\n"); );
    // Body
    vlSelf->__PVT___GEN_345 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_857 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_856));
    vlSelf->__PVT___GEN_89 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_88)
                               : (IData)(vlSelf->__PVT___GEN_88));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__206(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__206\n"); );
    // Body
    vlSelf->__PVT___GEN_346 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_858 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_857));
    vlSelf->__PVT___GEN_90 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_89)
                               : (IData)(vlSelf->__PVT___GEN_89));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__207(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__207\n"); );
    // Body
    vlSelf->__PVT___GEN_347 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_859 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_858));
    vlSelf->__PVT___GEN_91 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_90)
                               : (IData)(vlSelf->__PVT___GEN_90));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__209(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__209\n"); );
    // Body
    vlSelf->__PVT___GEN_348 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_860 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_859));
    vlSelf->__PVT___GEN_92 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_91)
                               : (IData)(vlSelf->__PVT___GEN_91));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__210(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__210\n"); );
    // Body
    vlSelf->__PVT___GEN_349 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_861 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_860));
    vlSelf->__PVT___GEN_93 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_92)
                               : (IData)(vlSelf->__PVT___GEN_92));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__211(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__211\n"); );
    // Body
    vlSelf->__PVT___GEN_350 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_349));
    vlSelf->__PVT___GEN_862 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_861));
    vlSelf->__PVT___GEN_94 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_93)
                               : (IData)(vlSelf->__PVT___GEN_93));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__212(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__212\n"); );
    // Body
    vlSelf->__PVT___GEN_351 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_350));
    vlSelf->__PVT___GEN_863 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_862));
    vlSelf->__PVT___GEN_95 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_94)
                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__213(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__213\n"); );
    // Body
    vlSelf->__PVT___GEN_352 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_351));
    vlSelf->__PVT___GEN_864 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_863));
    vlSelf->__PVT___GEN_96 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_95)
                               : (IData)(vlSelf->__PVT___GEN_95));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__214(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__214\n"); );
    // Body
    vlSelf->__PVT___GEN_353 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_865 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_864));
    vlSelf->__PVT___GEN_97 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_96)
                               : (IData)(vlSelf->__PVT___GEN_96));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__215(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__215\n"); );
    // Body
    vlSelf->__PVT___GEN_354 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_353));
    vlSelf->__PVT___GEN_866 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_865));
    vlSelf->__PVT___GEN_98 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_97)
                               : (IData)(vlSelf->__PVT___GEN_97));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__216(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__216\n"); );
    // Body
    vlSelf->__PVT___GEN_355 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_867 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_866));
    vlSelf->__PVT___GEN_99 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_98)
                               : (IData)(vlSelf->__PVT___GEN_98));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__217(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__217\n"); );
    // Body
    vlSelf->__PVT___GEN_356 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_868 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_867));
    vlSelf->__PVT___GEN_100 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_99)
                                : (IData)(vlSelf->__PVT___GEN_99));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__218(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__218\n"); );
    // Body
    vlSelf->__PVT___GEN_357 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_869 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_868));
    vlSelf->__PVT___GEN_101 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_100)
                                : (IData)(vlSelf->__PVT___GEN_100));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__219(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__219\n"); );
    // Body
    vlSelf->__PVT___GEN_358 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_870 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_869));
    vlSelf->__PVT___GEN_102 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_101)
                                : (IData)(vlSelf->__PVT___GEN_101));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__220(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__220\n"); );
    // Body
    vlSelf->__PVT___GEN_359 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_871 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_870));
    vlSelf->__PVT___GEN_103 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_102)
                                : (IData)(vlSelf->__PVT___GEN_102));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__221(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__221\n"); );
    // Body
    vlSelf->__PVT___GEN_360 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_872 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_871));
    vlSelf->__PVT___GEN_104 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_103)
                                : (IData)(vlSelf->__PVT___GEN_103));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__222(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__222\n"); );
    // Body
    vlSelf->__PVT___GEN_361 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_873 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_872));
    vlSelf->__PVT___GEN_105 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_104)
                                : (IData)(vlSelf->__PVT___GEN_104));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__223(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__223\n"); );
    // Body
    vlSelf->__PVT___GEN_362 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_874 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_873));
    vlSelf->__PVT___GEN_106 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_105)
                                : (IData)(vlSelf->__PVT___GEN_105));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__224(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__224\n"); );
    // Body
    vlSelf->__PVT___GEN_363 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_875 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_874));
    vlSelf->__PVT___GEN_107 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_106)
                                : (IData)(vlSelf->__PVT___GEN_106));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__225(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__225\n"); );
    // Body
    vlSelf->__PVT___GEN_364 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_363));
    vlSelf->__PVT___GEN_876 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_875));
    vlSelf->__PVT___GEN_108 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_107)
                                : (IData)(vlSelf->__PVT___GEN_107));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__226(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__226\n"); );
    // Body
    vlSelf->__PVT___GEN_365 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_364));
    vlSelf->__PVT___GEN_877 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_876));
    vlSelf->__PVT___GEN_109 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_108)
                                : (IData)(vlSelf->__PVT___GEN_108));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__227(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__227\n"); );
    // Body
    vlSelf->__PVT___GEN_366 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_365));
    vlSelf->__PVT___GEN_878 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_877));
    vlSelf->__PVT___GEN_110 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_109)
                                : (IData)(vlSelf->__PVT___GEN_109));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__228(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__228\n"); );
    // Body
    vlSelf->__PVT___GEN_367 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_879 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_878));
    vlSelf->__PVT___GEN_111 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_110)
                                : (IData)(vlSelf->__PVT___GEN_110));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__229(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__229\n"); );
    // Body
    vlSelf->__PVT___GEN_368 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_367));
    vlSelf->__PVT___GEN_880 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_879));
    vlSelf->__PVT___GEN_112 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_111)
                                : (IData)(vlSelf->__PVT___GEN_111));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__230(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__230\n"); );
    // Body
    vlSelf->__PVT___GEN_369 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_881 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_880));
    vlSelf->__PVT___GEN_113 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_112)
                                : (IData)(vlSelf->__PVT___GEN_112));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__231(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__231\n"); );
    // Body
    vlSelf->__PVT___GEN_370 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_882 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_881));
    vlSelf->__PVT___GEN_114 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_113)
                                : (IData)(vlSelf->__PVT___GEN_113));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__232(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__232\n"); );
    // Body
    vlSelf->__PVT___GEN_371 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_883 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_882));
    vlSelf->__PVT___GEN_115 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_114)
                                : (IData)(vlSelf->__PVT___GEN_114));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__233(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__233\n"); );
    // Body
    vlSelf->__PVT___GEN_372 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_884 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_883));
    vlSelf->__PVT___GEN_116 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_115)
                                : (IData)(vlSelf->__PVT___GEN_115));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__234(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__234\n"); );
    // Body
    vlSelf->__PVT___GEN_373 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_885 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_884));
    vlSelf->__PVT___GEN_117 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_116)
                                : (IData)(vlSelf->__PVT___GEN_116));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__235(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__235\n"); );
    // Body
    vlSelf->__PVT___GEN_374 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_886 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_885));
    vlSelf->__PVT___GEN_118 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_117)
                                : (IData)(vlSelf->__PVT___GEN_117));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__236(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__236\n"); );
    // Body
    vlSelf->__PVT___GEN_375 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_887 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_886));
    vlSelf->__PVT___GEN_119 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_118)
                                : (IData)(vlSelf->__PVT___GEN_118));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__237(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__237\n"); );
    // Body
    vlSelf->__PVT___GEN_376 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_888 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_887));
    vlSelf->__PVT___GEN_120 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_119)
                                : (IData)(vlSelf->__PVT___GEN_119));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__238(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__238\n"); );
    // Body
    vlSelf->__PVT___GEN_377 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_889 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_888));
    vlSelf->__PVT___GEN_121 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_120)
                                : (IData)(vlSelf->__PVT___GEN_120));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__239(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__239\n"); );
    // Body
    vlSelf->__PVT___GEN_378 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_377));
    vlSelf->__PVT___GEN_890 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_889));
    vlSelf->__PVT___GEN_122 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_121)
                                : (IData)(vlSelf->__PVT___GEN_121));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__240(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__240\n"); );
    // Body
    vlSelf->__PVT___GEN_379 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_378));
    vlSelf->__PVT___GEN_891 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_890));
    vlSelf->__PVT___GEN_123 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_122)
                                : (IData)(vlSelf->__PVT___GEN_122));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__241(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__241\n"); );
    // Body
    vlSelf->__PVT___GEN_380 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_379));
    vlSelf->__PVT___GEN_892 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_891));
    vlSelf->__PVT___GEN_124 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_123)
                                : (IData)(vlSelf->__PVT___GEN_123));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__242(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__242\n"); );
    // Body
    vlSelf->__PVT___GEN_381 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_893 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_892));
    vlSelf->__PVT___GEN_125 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_124)
                                : (IData)(vlSelf->__PVT___GEN_124));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__243(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__243\n"); );
    // Body
    vlSelf->__PVT___GEN_382 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_381));
    vlSelf->__PVT___GEN_894 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_893));
    vlSelf->__PVT___GEN_126 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_125)
                                : (IData)(vlSelf->__PVT___GEN_125));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__244(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__244\n"); );
    // Body
    vlSelf->__PVT___GEN_383 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_895 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_894));
    vlSelf->__PVT___GEN_127 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_126)
                                : (IData)(vlSelf->__PVT___GEN_126));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__245(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__245\n"); );
    // Body
    vlSelf->__PVT___GEN_384 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_896 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_895));
    vlSelf->__PVT___GEN_128 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_127)
                                : (IData)(vlSelf->__PVT___GEN_127));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__246(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__246\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_1)) 
                               & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_14 = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                        & (IData)(vlSelf->__PVT___GEN_128)) 
                                       | (IData)(vlSelf->__PVT___GEN_896));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__247(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__247\n"); );
    // Body
    vlSelf->__PVT__writeback_data = ((IData)(vlSelf->__PVT___GEN_128)
                                      ? vlSelf->__PVT___GEN_2073
                                      : vlSelf->__PVT___GEN_2081);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__248(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__248\n"); );
    // Body
    vlSelf->__PVT___way1_dirty_T_12 = ((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                       & (IData)(vlSelf->__PVT___GEN_128));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__249(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__249\n"); );
    // Body
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way0_dirty_T_7 = (1U & (~ (IData)(vlSelf->__PVT___GEN_128)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__251(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__251\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT___way0_dirty_T_14 = (((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7)) 
                                       | (IData)(vlSelf->__PVT___GEN_384));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__252(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__252\n"); );
    // Body
    vlSelf->__PVT___io_port_wdata_T_4 = (((IData)(vlSelf->__PVT___write_counter_T) 
                                          | (IData)(vlSelf->__PVT___write_counter_T_7))
                                          ? vlSelf->__PVT__writeback_data
                                          : 0ULL);
    vlSelf->__PVT___awaddr_miss_addr_T_2 = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                             ? vlSelf->__PVT__dcache_tag_io_tag
                                             : vlSelf->__PVT__dcache_tag_1_io_tag);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__253(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__253\n"); );
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
    vlSelf->__PVT___way0_dirty_T_12 = ((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__way0_burst_read_wen = ((((IData)(vlSelf->__PVT___wait_data_T_3) 
                                            | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                           & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                          & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__dirty_victim = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                    ? (IData)(vlSelf->__PVT___GEN_384)
                                    : (IData)(vlSelf->__PVT___GEN_896));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__255(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__255\n"); );
    // Body
    vlSelf->__PVT__io_port_wdata = ((4U == (IData)(vlSelf->__PVT__work_state))
                                     ? vlSelf->__PVT__stage1_sram_wdata_reg
                                     : vlSelf->__PVT___io_port_wdata_T_4);
    vlSelf->__PVT__awaddr_miss_addr = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___awaddr_miss_addr_T_2, 
                                                    VL_CONCAT_III(13,7,6, 
                                                                  (0x7fU 
                                                                   & VL_SEL_IQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 6U, 7U)), 0U));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__256(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__256\n"); );
    // Body
    vlSelf->__PVT___wen_way1_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_0), 8U));
    vlSelf->__PVT___wen_way1_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_1), 8U));
    vlSelf->__PVT___wen_way1_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_2), 8U));
    vlSelf->__PVT___wen_way1_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_3), 8U));
    vlSelf->__PVT___wen_way1_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_4), 8U));
    vlSelf->__PVT___wen_way1_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_5), 8U));
    vlSelf->__PVT___wen_way1_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_6), 8U));
    vlSelf->__PVT___wen_way1_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_7), 8U));
    vlSelf->__PVT__way0_wen_0 = ((0U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_1 = ((1U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_2 = ((2U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_3 = ((3U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_4 = ((4U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_5 = ((5U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_6 = ((6U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_7 = ((7U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_16 
        = ((IData)(vlSelf->__PVT__dirty_victim) ? 9U
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_15));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__257(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__257\n"); );
    // Body
    vlSelf->__PVT___io_port_awaddr_T_4 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__awaddr_miss_addr
                                           : vlSelf->__PVT___io_port_awaddr_T_2);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__258(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__258\n"); );
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
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 8U));
    vlSelf->__PVT___wen_way0_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_1), 8U));
    vlSelf->__PVT___wen_way0_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_2), 8U));
    vlSelf->__PVT___wen_way0_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_3), 8U));
    vlSelf->__PVT___wen_way0_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_4), 8U));
    vlSelf->__PVT___wen_way0_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_5), 8U));
    vlSelf->__PVT___wen_way0_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_6), 8U));
    vlSelf->__PVT___wen_way0_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_7), 8U));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_17 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_16)
            : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_12)));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__259(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__259\n"); );
    // Body
    vlSelf->__PVT__io_port_awaddr = ((0xfU == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__awaddr_miss_addr
                                      : vlSelf->__PVT___io_port_awaddr_T_4);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__262(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__262\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__263(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__263\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__264(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__264\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__265(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__265\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__266(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__266\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__267(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__267\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__268(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__268\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_55 = ((0xdU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_53));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__269(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__269\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_57 = ((0xeU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_55));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__270(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__270\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_59 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_17)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_57));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__271(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__271\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_61 = ((0xaU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_21)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_59));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__272(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__272\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_63 = ((0xbU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_23)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_61));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__273(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__273\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_65 = ((8U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_25)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_63));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__274(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__274\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_67 = ((0U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_29)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_65));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___ctor_var_reset(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_port_araddr = 0;
    vlSelf->__PVT__io_port_arlen = 0;
    vlSelf->__PVT__io_port_arsize = 0;
    vlSelf->__PVT__io_port_arburst = 0;
    vlSelf->__PVT__io_port_arvalid = 0;
    vlSelf->__PVT__io_port_arready = 0;
    vlSelf->__PVT__io_port_rdata = 0;
    vlSelf->__PVT__io_port_rlast = 0;
    vlSelf->__PVT__io_port_rvalid = 0;
    vlSelf->__PVT__io_port_awaddr = 0;
    vlSelf->__PVT__io_port_awlen = 0;
    vlSelf->__PVT__io_port_awsize = 0;
    vlSelf->__PVT__io_port_awburst = 0;
    vlSelf->__PVT__io_port_awvalid = 0;
    vlSelf->__PVT__io_port_awready = 0;
    vlSelf->__PVT__io_port_wdata = 0;
    vlSelf->__PVT__io_port_wstrb = 0;
    vlSelf->__PVT__io_port_wlast = 0;
    vlSelf->__PVT__io_port_wvalid = 0;
    vlSelf->__PVT__io_port_wready = 0;
    vlSelf->__PVT__io_port_bvalid = 0;
    vlSelf->__PVT__io_stage2_stall = 0;
    vlSelf->__PVT__io_v_addr_for_tlb = 0;
    vlSelf->__PVT__io_p_addr_for_tlb = 0;
    vlSelf->__PVT__io_tlb_req = 0;
    vlSelf->__PVT__io_data_wstrb = 0;
    vlSelf->__PVT__io_sram_req = 0;
    vlSelf->__PVT__io_sram_wr = 0;
    vlSelf->__PVT__io_sram_size = 0;
    vlSelf->__PVT__io_sram_addr = 0;
    vlSelf->__PVT__io_sram_wdata = 0;
    vlSelf->__PVT__io_sram_rdata = 0;
    vlSelf->__PVT__io_sram_cache = 0;
    vlSelf->__PVT__dcache_tag_clock = 0;
    vlSelf->__PVT__dcache_tag_reset = 0;
    vlSelf->__PVT__dcache_tag_io_wen = 0;
    vlSelf->__PVT__dcache_tag_io_wdata = 0;
    vlSelf->__PVT__dcache_tag_io_raddr = 0;
    vlSelf->__PVT__dcache_tag_io_waddr = 0;
    vlSelf->__PVT__dcache_tag_io_hit = 0;
    vlSelf->__PVT__dcache_tag_io_valid = 0;
    vlSelf->__PVT__dcache_tag_io_tag = 0;
    vlSelf->__PVT__dcache_tag_1_clock = 0;
    vlSelf->__PVT__dcache_tag_1_reset = 0;
    vlSelf->__PVT__dcache_tag_1_io_wen = 0;
    vlSelf->__PVT__dcache_tag_1_io_wdata = 0;
    vlSelf->__PVT__dcache_tag_1_io_raddr = 0;
    vlSelf->__PVT__dcache_tag_1_io_waddr = 0;
    vlSelf->__PVT__dcache_tag_1_io_hit = 0;
    vlSelf->__PVT__dcache_tag_1_io_valid = 0;
    vlSelf->__PVT__dcache_tag_1_io_tag = 0;
    vlSelf->__PVT__dcache_data_clock = 0;
    vlSelf->__PVT__dcache_data_reset = 0;
    vlSelf->__PVT__dcache_data_io_wen = 0;
    vlSelf->__PVT__dcache_data_io_addr = 0;
    vlSelf->__PVT__dcache_data_io_wdata = 0;
    vlSelf->__PVT__dcache_data_io_rdata = 0;
    vlSelf->__PVT__dcache_data_1_clock = 0;
    vlSelf->__PVT__dcache_data_1_reset = 0;
    vlSelf->__PVT__dcache_data_1_io_wen = 0;
    vlSelf->__PVT__dcache_data_1_io_addr = 0;
    vlSelf->__PVT__dcache_data_1_io_wdata = 0;
    vlSelf->__PVT__dcache_data_1_io_rdata = 0;
    vlSelf->__PVT__dcache_data_2_clock = 0;
    vlSelf->__PVT__dcache_data_2_reset = 0;
    vlSelf->__PVT__dcache_data_2_io_wen = 0;
    vlSelf->__PVT__dcache_data_2_io_addr = 0;
    vlSelf->__PVT__dcache_data_2_io_wdata = 0;
    vlSelf->__PVT__dcache_data_2_io_rdata = 0;
    vlSelf->__PVT__dcache_data_3_clock = 0;
    vlSelf->__PVT__dcache_data_3_reset = 0;
    vlSelf->__PVT__dcache_data_3_io_wen = 0;
    vlSelf->__PVT__dcache_data_3_io_addr = 0;
    vlSelf->__PVT__dcache_data_3_io_wdata = 0;
    vlSelf->__PVT__dcache_data_3_io_rdata = 0;
    vlSelf->__PVT__dcache_data_4_clock = 0;
    vlSelf->__PVT__dcache_data_4_reset = 0;
    vlSelf->__PVT__dcache_data_4_io_wen = 0;
    vlSelf->__PVT__dcache_data_4_io_addr = 0;
    vlSelf->__PVT__dcache_data_4_io_wdata = 0;
    vlSelf->__PVT__dcache_data_4_io_rdata = 0;
    vlSelf->__PVT__dcache_data_5_clock = 0;
    vlSelf->__PVT__dcache_data_5_reset = 0;
    vlSelf->__PVT__dcache_data_5_io_wen = 0;
    vlSelf->__PVT__dcache_data_5_io_addr = 0;
    vlSelf->__PVT__dcache_data_5_io_wdata = 0;
    vlSelf->__PVT__dcache_data_5_io_rdata = 0;
    vlSelf->__PVT__dcache_data_6_clock = 0;
    vlSelf->__PVT__dcache_data_6_reset = 0;
    vlSelf->__PVT__dcache_data_6_io_wen = 0;
    vlSelf->__PVT__dcache_data_6_io_addr = 0;
    vlSelf->__PVT__dcache_data_6_io_wdata = 0;
    vlSelf->__PVT__dcache_data_6_io_rdata = 0;
    vlSelf->__PVT__dcache_data_7_clock = 0;
    vlSelf->__PVT__dcache_data_7_reset = 0;
    vlSelf->__PVT__dcache_data_7_io_wen = 0;
    vlSelf->__PVT__dcache_data_7_io_addr = 0;
    vlSelf->__PVT__dcache_data_7_io_wdata = 0;
    vlSelf->__PVT__dcache_data_7_io_rdata = 0;
    vlSelf->__PVT__dcache_data_8_clock = 0;
    vlSelf->__PVT__dcache_data_8_reset = 0;
    vlSelf->__PVT__dcache_data_8_io_wen = 0;
    vlSelf->__PVT__dcache_data_8_io_addr = 0;
    vlSelf->__PVT__dcache_data_8_io_wdata = 0;
    vlSelf->__PVT__dcache_data_8_io_rdata = 0;
    vlSelf->__PVT__dcache_data_9_clock = 0;
    vlSelf->__PVT__dcache_data_9_reset = 0;
    vlSelf->__PVT__dcache_data_9_io_wen = 0;
    vlSelf->__PVT__dcache_data_9_io_addr = 0;
    vlSelf->__PVT__dcache_data_9_io_wdata = 0;
    vlSelf->__PVT__dcache_data_9_io_rdata = 0;
    vlSelf->__PVT__dcache_data_10_clock = 0;
    vlSelf->__PVT__dcache_data_10_reset = 0;
    vlSelf->__PVT__dcache_data_10_io_wen = 0;
    vlSelf->__PVT__dcache_data_10_io_addr = 0;
    vlSelf->__PVT__dcache_data_10_io_wdata = 0;
    vlSelf->__PVT__dcache_data_10_io_rdata = 0;
    vlSelf->__PVT__dcache_data_11_clock = 0;
    vlSelf->__PVT__dcache_data_11_reset = 0;
    vlSelf->__PVT__dcache_data_11_io_wen = 0;
    vlSelf->__PVT__dcache_data_11_io_addr = 0;
    vlSelf->__PVT__dcache_data_11_io_wdata = 0;
    vlSelf->__PVT__dcache_data_11_io_rdata = 0;
    vlSelf->__PVT__dcache_data_12_clock = 0;
    vlSelf->__PVT__dcache_data_12_reset = 0;
    vlSelf->__PVT__dcache_data_12_io_wen = 0;
    vlSelf->__PVT__dcache_data_12_io_addr = 0;
    vlSelf->__PVT__dcache_data_12_io_wdata = 0;
    vlSelf->__PVT__dcache_data_12_io_rdata = 0;
    vlSelf->__PVT__dcache_data_13_clock = 0;
    vlSelf->__PVT__dcache_data_13_reset = 0;
    vlSelf->__PVT__dcache_data_13_io_wen = 0;
    vlSelf->__PVT__dcache_data_13_io_addr = 0;
    vlSelf->__PVT__dcache_data_13_io_wdata = 0;
    vlSelf->__PVT__dcache_data_13_io_rdata = 0;
    vlSelf->__PVT__dcache_data_14_clock = 0;
    vlSelf->__PVT__dcache_data_14_reset = 0;
    vlSelf->__PVT__dcache_data_14_io_wen = 0;
    vlSelf->__PVT__dcache_data_14_io_addr = 0;
    vlSelf->__PVT__dcache_data_14_io_wdata = 0;
    vlSelf->__PVT__dcache_data_14_io_rdata = 0;
    vlSelf->__PVT__dcache_data_15_clock = 0;
    vlSelf->__PVT__dcache_data_15_reset = 0;
    vlSelf->__PVT__dcache_data_15_io_wen = 0;
    vlSelf->__PVT__dcache_data_15_io_addr = 0;
    vlSelf->__PVT__dcache_data_15_io_wdata = 0;
    vlSelf->__PVT__dcache_data_15_io_rdata = 0;
    vlSelf->__PVT__work_state = 0;
    vlSelf->__PVT__write_counter = 0;
    vlSelf->__PVT__read_counter = 0;
    vlSelf->__PVT__wait_data = 0;
    vlSelf->__PVT__lru_0 = 0;
    vlSelf->__PVT__lru_1 = 0;
    vlSelf->__PVT__lru_2 = 0;
    vlSelf->__PVT__lru_3 = 0;
    vlSelf->__PVT__lru_4 = 0;
    vlSelf->__PVT__lru_5 = 0;
    vlSelf->__PVT__lru_6 = 0;
    vlSelf->__PVT__lru_7 = 0;
    vlSelf->__PVT__lru_8 = 0;
    vlSelf->__PVT__lru_9 = 0;
    vlSelf->__PVT__lru_10 = 0;
    vlSelf->__PVT__lru_11 = 0;
    vlSelf->__PVT__lru_12 = 0;
    vlSelf->__PVT__lru_13 = 0;
    vlSelf->__PVT__lru_14 = 0;
    vlSelf->__PVT__lru_15 = 0;
    vlSelf->__PVT__lru_16 = 0;
    vlSelf->__PVT__lru_17 = 0;
    vlSelf->__PVT__lru_18 = 0;
    vlSelf->__PVT__lru_19 = 0;
    vlSelf->__PVT__lru_20 = 0;
    vlSelf->__PVT__lru_21 = 0;
    vlSelf->__PVT__lru_22 = 0;
    vlSelf->__PVT__lru_23 = 0;
    vlSelf->__PVT__lru_24 = 0;
    vlSelf->__PVT__lru_25 = 0;
    vlSelf->__PVT__lru_26 = 0;
    vlSelf->__PVT__lru_27 = 0;
    vlSelf->__PVT__lru_28 = 0;
    vlSelf->__PVT__lru_29 = 0;
    vlSelf->__PVT__lru_30 = 0;
    vlSelf->__PVT__lru_31 = 0;
    vlSelf->__PVT__lru_32 = 0;
    vlSelf->__PVT__lru_33 = 0;
    vlSelf->__PVT__lru_34 = 0;
    vlSelf->__PVT__lru_35 = 0;
    vlSelf->__PVT__lru_36 = 0;
    vlSelf->__PVT__lru_37 = 0;
    vlSelf->__PVT__lru_38 = 0;
    vlSelf->__PVT__lru_39 = 0;
    vlSelf->__PVT__lru_40 = 0;
    vlSelf->__PVT__lru_41 = 0;
    vlSelf->__PVT__lru_42 = 0;
    vlSelf->__PVT__lru_43 = 0;
    vlSelf->__PVT__lru_44 = 0;
    vlSelf->__PVT__lru_45 = 0;
    vlSelf->__PVT__lru_46 = 0;
    vlSelf->__PVT__lru_47 = 0;
    vlSelf->__PVT__lru_48 = 0;
    vlSelf->__PVT__lru_49 = 0;
    vlSelf->__PVT__lru_50 = 0;
    vlSelf->__PVT__lru_51 = 0;
    vlSelf->__PVT__lru_52 = 0;
    vlSelf->__PVT__lru_53 = 0;
    vlSelf->__PVT__lru_54 = 0;
    vlSelf->__PVT__lru_55 = 0;
    vlSelf->__PVT__lru_56 = 0;
    vlSelf->__PVT__lru_57 = 0;
    vlSelf->__PVT__lru_58 = 0;
    vlSelf->__PVT__lru_59 = 0;
    vlSelf->__PVT__lru_60 = 0;
    vlSelf->__PVT__lru_61 = 0;
    vlSelf->__PVT__lru_62 = 0;
    vlSelf->__PVT__lru_63 = 0;
    vlSelf->__PVT__lru_64 = 0;
    vlSelf->__PVT__lru_65 = 0;
    vlSelf->__PVT__lru_66 = 0;
    vlSelf->__PVT__lru_67 = 0;
    vlSelf->__PVT__lru_68 = 0;
    vlSelf->__PVT__lru_69 = 0;
    vlSelf->__PVT__lru_70 = 0;
    vlSelf->__PVT__lru_71 = 0;
    vlSelf->__PVT__lru_72 = 0;
    vlSelf->__PVT__lru_73 = 0;
    vlSelf->__PVT__lru_74 = 0;
    vlSelf->__PVT__lru_75 = 0;
    vlSelf->__PVT__lru_76 = 0;
    vlSelf->__PVT__lru_77 = 0;
    vlSelf->__PVT__lru_78 = 0;
    vlSelf->__PVT__lru_79 = 0;
    vlSelf->__PVT__lru_80 = 0;
    vlSelf->__PVT__lru_81 = 0;
    vlSelf->__PVT__lru_82 = 0;
    vlSelf->__PVT__lru_83 = 0;
    vlSelf->__PVT__lru_84 = 0;
    vlSelf->__PVT__lru_85 = 0;
    vlSelf->__PVT__lru_86 = 0;
    vlSelf->__PVT__lru_87 = 0;
    vlSelf->__PVT__lru_88 = 0;
    vlSelf->__PVT__lru_89 = 0;
    vlSelf->__PVT__lru_90 = 0;
    vlSelf->__PVT__lru_91 = 0;
    vlSelf->__PVT__lru_92 = 0;
    vlSelf->__PVT__lru_93 = 0;
    vlSelf->__PVT__lru_94 = 0;
    vlSelf->__PVT__lru_95 = 0;
    vlSelf->__PVT__lru_96 = 0;
    vlSelf->__PVT__lru_97 = 0;
    vlSelf->__PVT__lru_98 = 0;
    vlSelf->__PVT__lru_99 = 0;
    vlSelf->__PVT__lru_100 = 0;
    vlSelf->__PVT__lru_101 = 0;
    vlSelf->__PVT__lru_102 = 0;
    vlSelf->__PVT__lru_103 = 0;
    vlSelf->__PVT__lru_104 = 0;
    vlSelf->__PVT__lru_105 = 0;
    vlSelf->__PVT__lru_106 = 0;
    vlSelf->__PVT__lru_107 = 0;
    vlSelf->__PVT__lru_108 = 0;
    vlSelf->__PVT__lru_109 = 0;
    vlSelf->__PVT__lru_110 = 0;
    vlSelf->__PVT__lru_111 = 0;
    vlSelf->__PVT__lru_112 = 0;
    vlSelf->__PVT__lru_113 = 0;
    vlSelf->__PVT__lru_114 = 0;
    vlSelf->__PVT__lru_115 = 0;
    vlSelf->__PVT__lru_116 = 0;
    vlSelf->__PVT__lru_117 = 0;
    vlSelf->__PVT__lru_118 = 0;
    vlSelf->__PVT__lru_119 = 0;
    vlSelf->__PVT__lru_120 = 0;
    vlSelf->__PVT__lru_121 = 0;
    vlSelf->__PVT__lru_122 = 0;
    vlSelf->__PVT__lru_123 = 0;
    vlSelf->__PVT__lru_124 = 0;
    vlSelf->__PVT__lru_125 = 0;
    vlSelf->__PVT__lru_126 = 0;
    vlSelf->__PVT__lru_127 = 0;
    vlSelf->__PVT__way0_dirty_0 = 0;
    vlSelf->__PVT__way0_dirty_1 = 0;
    vlSelf->__PVT__way0_dirty_2 = 0;
    vlSelf->__PVT__way0_dirty_3 = 0;
    vlSelf->__PVT__way0_dirty_4 = 0;
    vlSelf->__PVT__way0_dirty_5 = 0;
    vlSelf->__PVT__way0_dirty_6 = 0;
    vlSelf->__PVT__way0_dirty_7 = 0;
    vlSelf->__PVT__way0_dirty_8 = 0;
    vlSelf->__PVT__way0_dirty_9 = 0;
    vlSelf->__PVT__way0_dirty_10 = 0;
    vlSelf->__PVT__way0_dirty_11 = 0;
    vlSelf->__PVT__way0_dirty_12 = 0;
    vlSelf->__PVT__way0_dirty_13 = 0;
    vlSelf->__PVT__way0_dirty_14 = 0;
    vlSelf->__PVT__way0_dirty_15 = 0;
    vlSelf->__PVT__way0_dirty_16 = 0;
    vlSelf->__PVT__way0_dirty_17 = 0;
    vlSelf->__PVT__way0_dirty_18 = 0;
    vlSelf->__PVT__way0_dirty_19 = 0;
    vlSelf->__PVT__way0_dirty_20 = 0;
    vlSelf->__PVT__way0_dirty_21 = 0;
    vlSelf->__PVT__way0_dirty_22 = 0;
    vlSelf->__PVT__way0_dirty_23 = 0;
    vlSelf->__PVT__way0_dirty_24 = 0;
    vlSelf->__PVT__way0_dirty_25 = 0;
    vlSelf->__PVT__way0_dirty_26 = 0;
    vlSelf->__PVT__way0_dirty_27 = 0;
    vlSelf->__PVT__way0_dirty_28 = 0;
    vlSelf->__PVT__way0_dirty_29 = 0;
    vlSelf->__PVT__way0_dirty_30 = 0;
    vlSelf->__PVT__way0_dirty_31 = 0;
    vlSelf->__PVT__way0_dirty_32 = 0;
    vlSelf->__PVT__way0_dirty_33 = 0;
    vlSelf->__PVT__way0_dirty_34 = 0;
    vlSelf->__PVT__way0_dirty_35 = 0;
    vlSelf->__PVT__way0_dirty_36 = 0;
    vlSelf->__PVT__way0_dirty_37 = 0;
    vlSelf->__PVT__way0_dirty_38 = 0;
    vlSelf->__PVT__way0_dirty_39 = 0;
    vlSelf->__PVT__way0_dirty_40 = 0;
    vlSelf->__PVT__way0_dirty_41 = 0;
    vlSelf->__PVT__way0_dirty_42 = 0;
    vlSelf->__PVT__way0_dirty_43 = 0;
    vlSelf->__PVT__way0_dirty_44 = 0;
    vlSelf->__PVT__way0_dirty_45 = 0;
    vlSelf->__PVT__way0_dirty_46 = 0;
    vlSelf->__PVT__way0_dirty_47 = 0;
    vlSelf->__PVT__way0_dirty_48 = 0;
    vlSelf->__PVT__way0_dirty_49 = 0;
    vlSelf->__PVT__way0_dirty_50 = 0;
    vlSelf->__PVT__way0_dirty_51 = 0;
    vlSelf->__PVT__way0_dirty_52 = 0;
    vlSelf->__PVT__way0_dirty_53 = 0;
    vlSelf->__PVT__way0_dirty_54 = 0;
    vlSelf->__PVT__way0_dirty_55 = 0;
    vlSelf->__PVT__way0_dirty_56 = 0;
    vlSelf->__PVT__way0_dirty_57 = 0;
    vlSelf->__PVT__way0_dirty_58 = 0;
    vlSelf->__PVT__way0_dirty_59 = 0;
    vlSelf->__PVT__way0_dirty_60 = 0;
    vlSelf->__PVT__way0_dirty_61 = 0;
    vlSelf->__PVT__way0_dirty_62 = 0;
    vlSelf->__PVT__way0_dirty_63 = 0;
    vlSelf->__PVT__way0_dirty_64 = 0;
    vlSelf->__PVT__way0_dirty_65 = 0;
    vlSelf->__PVT__way0_dirty_66 = 0;
    vlSelf->__PVT__way0_dirty_67 = 0;
    vlSelf->__PVT__way0_dirty_68 = 0;
    vlSelf->__PVT__way0_dirty_69 = 0;
    vlSelf->__PVT__way0_dirty_70 = 0;
    vlSelf->__PVT__way0_dirty_71 = 0;
    vlSelf->__PVT__way0_dirty_72 = 0;
    vlSelf->__PVT__way0_dirty_73 = 0;
    vlSelf->__PVT__way0_dirty_74 = 0;
    vlSelf->__PVT__way0_dirty_75 = 0;
    vlSelf->__PVT__way0_dirty_76 = 0;
    vlSelf->__PVT__way0_dirty_77 = 0;
    vlSelf->__PVT__way0_dirty_78 = 0;
    vlSelf->__PVT__way0_dirty_79 = 0;
    vlSelf->__PVT__way0_dirty_80 = 0;
    vlSelf->__PVT__way0_dirty_81 = 0;
    vlSelf->__PVT__way0_dirty_82 = 0;
    vlSelf->__PVT__way0_dirty_83 = 0;
    vlSelf->__PVT__way0_dirty_84 = 0;
    vlSelf->__PVT__way0_dirty_85 = 0;
    vlSelf->__PVT__way0_dirty_86 = 0;
    vlSelf->__PVT__way0_dirty_87 = 0;
    vlSelf->__PVT__way0_dirty_88 = 0;
    vlSelf->__PVT__way0_dirty_89 = 0;
    vlSelf->__PVT__way0_dirty_90 = 0;
    vlSelf->__PVT__way0_dirty_91 = 0;
    vlSelf->__PVT__way0_dirty_92 = 0;
    vlSelf->__PVT__way0_dirty_93 = 0;
    vlSelf->__PVT__way0_dirty_94 = 0;
    vlSelf->__PVT__way0_dirty_95 = 0;
    vlSelf->__PVT__way0_dirty_96 = 0;
    vlSelf->__PVT__way0_dirty_97 = 0;
    vlSelf->__PVT__way0_dirty_98 = 0;
    vlSelf->__PVT__way0_dirty_99 = 0;
    vlSelf->__PVT__way0_dirty_100 = 0;
    vlSelf->__PVT__way0_dirty_101 = 0;
    vlSelf->__PVT__way0_dirty_102 = 0;
    vlSelf->__PVT__way0_dirty_103 = 0;
    vlSelf->__PVT__way0_dirty_104 = 0;
    vlSelf->__PVT__way0_dirty_105 = 0;
    vlSelf->__PVT__way0_dirty_106 = 0;
    vlSelf->__PVT__way0_dirty_107 = 0;
    vlSelf->__PVT__way0_dirty_108 = 0;
    vlSelf->__PVT__way0_dirty_109 = 0;
    vlSelf->__PVT__way0_dirty_110 = 0;
    vlSelf->__PVT__way0_dirty_111 = 0;
    vlSelf->__PVT__way0_dirty_112 = 0;
    vlSelf->__PVT__way0_dirty_113 = 0;
    vlSelf->__PVT__way0_dirty_114 = 0;
    vlSelf->__PVT__way0_dirty_115 = 0;
    vlSelf->__PVT__way0_dirty_116 = 0;
    vlSelf->__PVT__way0_dirty_117 = 0;
    vlSelf->__PVT__way0_dirty_118 = 0;
    vlSelf->__PVT__way0_dirty_119 = 0;
    vlSelf->__PVT__way0_dirty_120 = 0;
    vlSelf->__PVT__way0_dirty_121 = 0;
    vlSelf->__PVT__way0_dirty_122 = 0;
    vlSelf->__PVT__way0_dirty_123 = 0;
    vlSelf->__PVT__way0_dirty_124 = 0;
    vlSelf->__PVT__way0_dirty_125 = 0;
    vlSelf->__PVT__way0_dirty_126 = 0;
    vlSelf->__PVT__way0_dirty_127 = 0;
    vlSelf->__PVT__way1_dirty_0 = 0;
    vlSelf->__PVT__way1_dirty_1 = 0;
    vlSelf->__PVT__way1_dirty_2 = 0;
    vlSelf->__PVT__way1_dirty_3 = 0;
    vlSelf->__PVT__way1_dirty_4 = 0;
    vlSelf->__PVT__way1_dirty_5 = 0;
    vlSelf->__PVT__way1_dirty_6 = 0;
    vlSelf->__PVT__way1_dirty_7 = 0;
    vlSelf->__PVT__way1_dirty_8 = 0;
    vlSelf->__PVT__way1_dirty_9 = 0;
    vlSelf->__PVT__way1_dirty_10 = 0;
    vlSelf->__PVT__way1_dirty_11 = 0;
    vlSelf->__PVT__way1_dirty_12 = 0;
    vlSelf->__PVT__way1_dirty_13 = 0;
    vlSelf->__PVT__way1_dirty_14 = 0;
    vlSelf->__PVT__way1_dirty_15 = 0;
    vlSelf->__PVT__way1_dirty_16 = 0;
    vlSelf->__PVT__way1_dirty_17 = 0;
    vlSelf->__PVT__way1_dirty_18 = 0;
    vlSelf->__PVT__way1_dirty_19 = 0;
    vlSelf->__PVT__way1_dirty_20 = 0;
    vlSelf->__PVT__way1_dirty_21 = 0;
    vlSelf->__PVT__way1_dirty_22 = 0;
    vlSelf->__PVT__way1_dirty_23 = 0;
    vlSelf->__PVT__way1_dirty_24 = 0;
    vlSelf->__PVT__way1_dirty_25 = 0;
    vlSelf->__PVT__way1_dirty_26 = 0;
    vlSelf->__PVT__way1_dirty_27 = 0;
    vlSelf->__PVT__way1_dirty_28 = 0;
    vlSelf->__PVT__way1_dirty_29 = 0;
    vlSelf->__PVT__way1_dirty_30 = 0;
    vlSelf->__PVT__way1_dirty_31 = 0;
    vlSelf->__PVT__way1_dirty_32 = 0;
    vlSelf->__PVT__way1_dirty_33 = 0;
    vlSelf->__PVT__way1_dirty_34 = 0;
    vlSelf->__PVT__way1_dirty_35 = 0;
    vlSelf->__PVT__way1_dirty_36 = 0;
    vlSelf->__PVT__way1_dirty_37 = 0;
    vlSelf->__PVT__way1_dirty_38 = 0;
    vlSelf->__PVT__way1_dirty_39 = 0;
    vlSelf->__PVT__way1_dirty_40 = 0;
    vlSelf->__PVT__way1_dirty_41 = 0;
    vlSelf->__PVT__way1_dirty_42 = 0;
    vlSelf->__PVT__way1_dirty_43 = 0;
    vlSelf->__PVT__way1_dirty_44 = 0;
    vlSelf->__PVT__way1_dirty_45 = 0;
    vlSelf->__PVT__way1_dirty_46 = 0;
    vlSelf->__PVT__way1_dirty_47 = 0;
    vlSelf->__PVT__way1_dirty_48 = 0;
    vlSelf->__PVT__way1_dirty_49 = 0;
    vlSelf->__PVT__way1_dirty_50 = 0;
    vlSelf->__PVT__way1_dirty_51 = 0;
    vlSelf->__PVT__way1_dirty_52 = 0;
    vlSelf->__PVT__way1_dirty_53 = 0;
    vlSelf->__PVT__way1_dirty_54 = 0;
    vlSelf->__PVT__way1_dirty_55 = 0;
    vlSelf->__PVT__way1_dirty_56 = 0;
    vlSelf->__PVT__way1_dirty_57 = 0;
    vlSelf->__PVT__way1_dirty_58 = 0;
    vlSelf->__PVT__way1_dirty_59 = 0;
    vlSelf->__PVT__way1_dirty_60 = 0;
    vlSelf->__PVT__way1_dirty_61 = 0;
    vlSelf->__PVT__way1_dirty_62 = 0;
    vlSelf->__PVT__way1_dirty_63 = 0;
    vlSelf->__PVT__way1_dirty_64 = 0;
    vlSelf->__PVT__way1_dirty_65 = 0;
    vlSelf->__PVT__way1_dirty_66 = 0;
    vlSelf->__PVT__way1_dirty_67 = 0;
    vlSelf->__PVT__way1_dirty_68 = 0;
    vlSelf->__PVT__way1_dirty_69 = 0;
    vlSelf->__PVT__way1_dirty_70 = 0;
    vlSelf->__PVT__way1_dirty_71 = 0;
    vlSelf->__PVT__way1_dirty_72 = 0;
    vlSelf->__PVT__way1_dirty_73 = 0;
    vlSelf->__PVT__way1_dirty_74 = 0;
    vlSelf->__PVT__way1_dirty_75 = 0;
    vlSelf->__PVT__way1_dirty_76 = 0;
    vlSelf->__PVT__way1_dirty_77 = 0;
    vlSelf->__PVT__way1_dirty_78 = 0;
    vlSelf->__PVT__way1_dirty_79 = 0;
    vlSelf->__PVT__way1_dirty_80 = 0;
    vlSelf->__PVT__way1_dirty_81 = 0;
    vlSelf->__PVT__way1_dirty_82 = 0;
    vlSelf->__PVT__way1_dirty_83 = 0;
    vlSelf->__PVT__way1_dirty_84 = 0;
    vlSelf->__PVT__way1_dirty_85 = 0;
    vlSelf->__PVT__way1_dirty_86 = 0;
    vlSelf->__PVT__way1_dirty_87 = 0;
    vlSelf->__PVT__way1_dirty_88 = 0;
    vlSelf->__PVT__way1_dirty_89 = 0;
    vlSelf->__PVT__way1_dirty_90 = 0;
    vlSelf->__PVT__way1_dirty_91 = 0;
    vlSelf->__PVT__way1_dirty_92 = 0;
    vlSelf->__PVT__way1_dirty_93 = 0;
    vlSelf->__PVT__way1_dirty_94 = 0;
    vlSelf->__PVT__way1_dirty_95 = 0;
    vlSelf->__PVT__way1_dirty_96 = 0;
    vlSelf->__PVT__way1_dirty_97 = 0;
    vlSelf->__PVT__way1_dirty_98 = 0;
    vlSelf->__PVT__way1_dirty_99 = 0;
    vlSelf->__PVT__way1_dirty_100 = 0;
    vlSelf->__PVT__way1_dirty_101 = 0;
    vlSelf->__PVT__way1_dirty_102 = 0;
    vlSelf->__PVT__way1_dirty_103 = 0;
    vlSelf->__PVT__way1_dirty_104 = 0;
    vlSelf->__PVT__way1_dirty_105 = 0;
    vlSelf->__PVT__way1_dirty_106 = 0;
    vlSelf->__PVT__way1_dirty_107 = 0;
    vlSelf->__PVT__way1_dirty_108 = 0;
    vlSelf->__PVT__way1_dirty_109 = 0;
    vlSelf->__PVT__way1_dirty_110 = 0;
    vlSelf->__PVT__way1_dirty_111 = 0;
    vlSelf->__PVT__way1_dirty_112 = 0;
    vlSelf->__PVT__way1_dirty_113 = 0;
    vlSelf->__PVT__way1_dirty_114 = 0;
    vlSelf->__PVT__way1_dirty_115 = 0;
    vlSelf->__PVT__way1_dirty_116 = 0;
    vlSelf->__PVT__way1_dirty_117 = 0;
    vlSelf->__PVT__way1_dirty_118 = 0;
    vlSelf->__PVT__way1_dirty_119 = 0;
    vlSelf->__PVT__way1_dirty_120 = 0;
    vlSelf->__PVT__way1_dirty_121 = 0;
    vlSelf->__PVT__way1_dirty_122 = 0;
    vlSelf->__PVT__way1_dirty_123 = 0;
    vlSelf->__PVT__way1_dirty_124 = 0;
    vlSelf->__PVT__way1_dirty_125 = 0;
    vlSelf->__PVT__way1_dirty_126 = 0;
    vlSelf->__PVT__way1_dirty_127 = 0;
    vlSelf->__PVT__stage1_addr_line_mapping = 0;
    vlSelf->__PVT__stage1_sram_cache_reg = 0;
    vlSelf->__PVT__stage1_sram_wdata_reg = 0;
    vlSelf->__PVT__stage1_sram_size_reg = 0;
    vlSelf->__PVT__stage1_sram_wr_reg = 0;
    vlSelf->__PVT__stage1_sram_req_reg = 0;
    vlSelf->__PVT__stage1_sram_hit0_reg = 0;
    vlSelf->__PVT__stage1_sram_hit1_reg = 0;
    vlSelf->__PVT__stage1_sram_valid0_reg = 0;
    vlSelf->__PVT__stage1_sram_valid1_reg = 0;
    vlSelf->__PVT__stage1_wstrb_reg = 0;
    vlSelf->__PVT__stage1_sram_phy_addr_reg = 0;
    vlSelf->__PVT___hit_T = 0;
    vlSelf->__PVT___hit_T_1 = 0;
    vlSelf->__PVT__hit = 0;
    vlSelf->__PVT___state_ready_lookup_should_be_T_2 = 0;
    vlSelf->__PVT___state_ready_lookup_should_be_T_3 = 0;
    vlSelf->__PVT___state_ready_lookup_should_be_T_5 = 0;
    vlSelf->__PVT__state_ready_lookup_should_be = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_1 = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_3 = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_5 = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_7 = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_9 = 0;
    vlSelf->__PVT___access_work_state_for_stall_T_11 = 0;
    vlSelf->__PVT__access_work_state_for_stall = 0;
    vlSelf->__PVT__stage2_stall = 0;
    vlSelf->__PVT__stage2_sram_write_reg = 0;
    vlSelf->__PVT__stage1_stall_reg = 0;
    vlSelf->__PVT__write_access_complete_reg = 0;
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = 0;
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = 0;
    vlSelf->__PVT___state_lookup_for_less_delay_T_1 = 0;
    vlSelf->__PVT__state_lookup_for_less_delay = 0;
    vlSelf->__PVT___way0_dirty_T = 0;
    vlSelf->__PVT___way0_dirty_T_2 = 0;
    vlSelf->__PVT___way0_dirty_T_4 = 0;
    vlSelf->__PVT___way0_dirty_T_5 = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT___GEN_3 = 0;
    vlSelf->__PVT___GEN_4 = 0;
    vlSelf->__PVT___GEN_5 = 0;
    vlSelf->__PVT___GEN_6 = 0;
    vlSelf->__PVT___GEN_7 = 0;
    vlSelf->__PVT___GEN_8 = 0;
    vlSelf->__PVT___GEN_9 = 0;
    vlSelf->__PVT___GEN_10 = 0;
    vlSelf->__PVT___GEN_11 = 0;
    vlSelf->__PVT___GEN_12 = 0;
    vlSelf->__PVT___GEN_13 = 0;
    vlSelf->__PVT___GEN_14 = 0;
    vlSelf->__PVT___GEN_15 = 0;
    vlSelf->__PVT___GEN_16 = 0;
    vlSelf->__PVT___GEN_17 = 0;
    vlSelf->__PVT___GEN_18 = 0;
    vlSelf->__PVT___GEN_19 = 0;
    vlSelf->__PVT___GEN_20 = 0;
    vlSelf->__PVT___GEN_21 = 0;
    vlSelf->__PVT___GEN_22 = 0;
    vlSelf->__PVT___GEN_23 = 0;
    vlSelf->__PVT___GEN_24 = 0;
    vlSelf->__PVT___GEN_25 = 0;
    vlSelf->__PVT___GEN_26 = 0;
    vlSelf->__PVT___GEN_27 = 0;
    vlSelf->__PVT___GEN_28 = 0;
    vlSelf->__PVT___GEN_29 = 0;
    vlSelf->__PVT___GEN_30 = 0;
    vlSelf->__PVT___GEN_31 = 0;
    vlSelf->__PVT___GEN_32 = 0;
    vlSelf->__PVT___GEN_33 = 0;
    vlSelf->__PVT___GEN_34 = 0;
    vlSelf->__PVT___GEN_35 = 0;
    vlSelf->__PVT___GEN_36 = 0;
    vlSelf->__PVT___GEN_37 = 0;
    vlSelf->__PVT___GEN_38 = 0;
    vlSelf->__PVT___GEN_39 = 0;
    vlSelf->__PVT___GEN_40 = 0;
    vlSelf->__PVT___GEN_41 = 0;
    vlSelf->__PVT___GEN_42 = 0;
    vlSelf->__PVT___GEN_43 = 0;
    vlSelf->__PVT___GEN_44 = 0;
    vlSelf->__PVT___GEN_45 = 0;
    vlSelf->__PVT___GEN_46 = 0;
    vlSelf->__PVT___GEN_47 = 0;
    vlSelf->__PVT___GEN_48 = 0;
    vlSelf->__PVT___GEN_49 = 0;
    vlSelf->__PVT___GEN_50 = 0;
    vlSelf->__PVT___GEN_51 = 0;
    vlSelf->__PVT___GEN_52 = 0;
    vlSelf->__PVT___GEN_53 = 0;
    vlSelf->__PVT___GEN_54 = 0;
    vlSelf->__PVT___GEN_55 = 0;
    vlSelf->__PVT___GEN_56 = 0;
    vlSelf->__PVT___GEN_57 = 0;
    vlSelf->__PVT___GEN_58 = 0;
    vlSelf->__PVT___GEN_59 = 0;
    vlSelf->__PVT___GEN_60 = 0;
    vlSelf->__PVT___GEN_61 = 0;
    vlSelf->__PVT___GEN_62 = 0;
    vlSelf->__PVT___GEN_63 = 0;
    vlSelf->__PVT___GEN_64 = 0;
    vlSelf->__PVT___GEN_65 = 0;
    vlSelf->__PVT___GEN_66 = 0;
    vlSelf->__PVT___GEN_67 = 0;
    vlSelf->__PVT___GEN_68 = 0;
    vlSelf->__PVT___GEN_69 = 0;
    vlSelf->__PVT___GEN_70 = 0;
    vlSelf->__PVT___GEN_71 = 0;
    vlSelf->__PVT___GEN_72 = 0;
    vlSelf->__PVT___GEN_73 = 0;
    vlSelf->__PVT___GEN_74 = 0;
    vlSelf->__PVT___GEN_75 = 0;
    vlSelf->__PVT___GEN_76 = 0;
    vlSelf->__PVT___GEN_77 = 0;
    vlSelf->__PVT___GEN_78 = 0;
    vlSelf->__PVT___GEN_79 = 0;
    vlSelf->__PVT___GEN_80 = 0;
    vlSelf->__PVT___GEN_81 = 0;
    vlSelf->__PVT___GEN_82 = 0;
    vlSelf->__PVT___GEN_83 = 0;
    vlSelf->__PVT___GEN_84 = 0;
    vlSelf->__PVT___GEN_85 = 0;
    vlSelf->__PVT___GEN_86 = 0;
    vlSelf->__PVT___GEN_87 = 0;
    vlSelf->__PVT___GEN_88 = 0;
    vlSelf->__PVT___GEN_89 = 0;
    vlSelf->__PVT___GEN_90 = 0;
    vlSelf->__PVT___GEN_91 = 0;
    vlSelf->__PVT___GEN_92 = 0;
    vlSelf->__PVT___GEN_93 = 0;
    vlSelf->__PVT___GEN_94 = 0;
    vlSelf->__PVT___GEN_95 = 0;
    vlSelf->__PVT___GEN_96 = 0;
    vlSelf->__PVT___GEN_97 = 0;
    vlSelf->__PVT___GEN_98 = 0;
    vlSelf->__PVT___GEN_99 = 0;
    vlSelf->__PVT___GEN_100 = 0;
    vlSelf->__PVT___GEN_101 = 0;
    vlSelf->__PVT___GEN_102 = 0;
    vlSelf->__PVT___GEN_103 = 0;
    vlSelf->__PVT___GEN_104 = 0;
    vlSelf->__PVT___GEN_105 = 0;
    vlSelf->__PVT___GEN_106 = 0;
    vlSelf->__PVT___GEN_107 = 0;
    vlSelf->__PVT___GEN_108 = 0;
    vlSelf->__PVT___GEN_109 = 0;
    vlSelf->__PVT___GEN_110 = 0;
    vlSelf->__PVT___GEN_111 = 0;
    vlSelf->__PVT___GEN_112 = 0;
    vlSelf->__PVT___GEN_113 = 0;
    vlSelf->__PVT___GEN_114 = 0;
    vlSelf->__PVT___GEN_115 = 0;
    vlSelf->__PVT___GEN_116 = 0;
    vlSelf->__PVT___GEN_117 = 0;
    vlSelf->__PVT___GEN_118 = 0;
    vlSelf->__PVT___GEN_119 = 0;
    vlSelf->__PVT___GEN_120 = 0;
    vlSelf->__PVT___GEN_121 = 0;
    vlSelf->__PVT___GEN_122 = 0;
    vlSelf->__PVT___GEN_123 = 0;
    vlSelf->__PVT___GEN_124 = 0;
    vlSelf->__PVT___GEN_125 = 0;
    vlSelf->__PVT___GEN_126 = 0;
    vlSelf->__PVT___GEN_127 = 0;
    vlSelf->__PVT___GEN_128 = 0;
    vlSelf->__PVT___way0_dirty_T_7 = 0;
    vlSelf->__PVT___way0_dirty_T_9 = 0;
    vlSelf->__PVT___way0_dirty_T_12 = 0;
    vlSelf->__PVT___GEN_258 = 0;
    vlSelf->__PVT___GEN_259 = 0;
    vlSelf->__PVT___GEN_260 = 0;
    vlSelf->__PVT___GEN_261 = 0;
    vlSelf->__PVT___GEN_262 = 0;
    vlSelf->__PVT___GEN_263 = 0;
    vlSelf->__PVT___GEN_264 = 0;
    vlSelf->__PVT___GEN_265 = 0;
    vlSelf->__PVT___GEN_266 = 0;
    vlSelf->__PVT___GEN_267 = 0;
    vlSelf->__PVT___GEN_268 = 0;
    vlSelf->__PVT___GEN_269 = 0;
    vlSelf->__PVT___GEN_270 = 0;
    vlSelf->__PVT___GEN_271 = 0;
    vlSelf->__PVT___GEN_272 = 0;
    vlSelf->__PVT___GEN_273 = 0;
    vlSelf->__PVT___GEN_274 = 0;
    vlSelf->__PVT___GEN_275 = 0;
    vlSelf->__PVT___GEN_276 = 0;
    vlSelf->__PVT___GEN_277 = 0;
    vlSelf->__PVT___GEN_278 = 0;
    vlSelf->__PVT___GEN_279 = 0;
    vlSelf->__PVT___GEN_280 = 0;
    vlSelf->__PVT___GEN_281 = 0;
    vlSelf->__PVT___GEN_282 = 0;
    vlSelf->__PVT___GEN_283 = 0;
    vlSelf->__PVT___GEN_284 = 0;
    vlSelf->__PVT___GEN_285 = 0;
    vlSelf->__PVT___GEN_286 = 0;
    vlSelf->__PVT___GEN_287 = 0;
    vlSelf->__PVT___GEN_288 = 0;
    vlSelf->__PVT___GEN_289 = 0;
    vlSelf->__PVT___GEN_290 = 0;
    vlSelf->__PVT___GEN_291 = 0;
    vlSelf->__PVT___GEN_292 = 0;
    vlSelf->__PVT___GEN_293 = 0;
    vlSelf->__PVT___GEN_294 = 0;
    vlSelf->__PVT___GEN_295 = 0;
    vlSelf->__PVT___GEN_296 = 0;
    vlSelf->__PVT___GEN_297 = 0;
    vlSelf->__PVT___GEN_298 = 0;
    vlSelf->__PVT___GEN_299 = 0;
    vlSelf->__PVT___GEN_300 = 0;
    vlSelf->__PVT___GEN_301 = 0;
    vlSelf->__PVT___GEN_302 = 0;
    vlSelf->__PVT___GEN_303 = 0;
    vlSelf->__PVT___GEN_304 = 0;
    vlSelf->__PVT___GEN_305 = 0;
    vlSelf->__PVT___GEN_306 = 0;
    vlSelf->__PVT___GEN_307 = 0;
    vlSelf->__PVT___GEN_308 = 0;
    vlSelf->__PVT___GEN_309 = 0;
    vlSelf->__PVT___GEN_310 = 0;
    vlSelf->__PVT___GEN_311 = 0;
    vlSelf->__PVT___GEN_312 = 0;
    vlSelf->__PVT___GEN_313 = 0;
    vlSelf->__PVT___GEN_314 = 0;
    vlSelf->__PVT___GEN_315 = 0;
    vlSelf->__PVT___GEN_316 = 0;
    vlSelf->__PVT___GEN_317 = 0;
    vlSelf->__PVT___GEN_318 = 0;
    vlSelf->__PVT___GEN_319 = 0;
    vlSelf->__PVT___GEN_320 = 0;
    vlSelf->__PVT___GEN_321 = 0;
    vlSelf->__PVT___GEN_322 = 0;
    vlSelf->__PVT___GEN_323 = 0;
    vlSelf->__PVT___GEN_324 = 0;
    vlSelf->__PVT___GEN_325 = 0;
    vlSelf->__PVT___GEN_326 = 0;
    vlSelf->__PVT___GEN_327 = 0;
    vlSelf->__PVT___GEN_328 = 0;
    vlSelf->__PVT___GEN_329 = 0;
    vlSelf->__PVT___GEN_330 = 0;
    vlSelf->__PVT___GEN_331 = 0;
    vlSelf->__PVT___GEN_332 = 0;
    vlSelf->__PVT___GEN_333 = 0;
    vlSelf->__PVT___GEN_334 = 0;
    vlSelf->__PVT___GEN_335 = 0;
    vlSelf->__PVT___GEN_336 = 0;
    vlSelf->__PVT___GEN_337 = 0;
    vlSelf->__PVT___GEN_338 = 0;
    vlSelf->__PVT___GEN_339 = 0;
    vlSelf->__PVT___GEN_340 = 0;
    vlSelf->__PVT___GEN_341 = 0;
    vlSelf->__PVT___GEN_342 = 0;
    vlSelf->__PVT___GEN_343 = 0;
    vlSelf->__PVT___GEN_344 = 0;
    vlSelf->__PVT___GEN_345 = 0;
    vlSelf->__PVT___GEN_346 = 0;
    vlSelf->__PVT___GEN_347 = 0;
    vlSelf->__PVT___GEN_348 = 0;
    vlSelf->__PVT___GEN_349 = 0;
    vlSelf->__PVT___GEN_350 = 0;
    vlSelf->__PVT___GEN_351 = 0;
    vlSelf->__PVT___GEN_352 = 0;
    vlSelf->__PVT___GEN_353 = 0;
    vlSelf->__PVT___GEN_354 = 0;
    vlSelf->__PVT___GEN_355 = 0;
    vlSelf->__PVT___GEN_356 = 0;
    vlSelf->__PVT___GEN_357 = 0;
    vlSelf->__PVT___GEN_358 = 0;
    vlSelf->__PVT___GEN_359 = 0;
    vlSelf->__PVT___GEN_360 = 0;
    vlSelf->__PVT___GEN_361 = 0;
    vlSelf->__PVT___GEN_362 = 0;
    vlSelf->__PVT___GEN_363 = 0;
    vlSelf->__PVT___GEN_364 = 0;
    vlSelf->__PVT___GEN_365 = 0;
    vlSelf->__PVT___GEN_366 = 0;
    vlSelf->__PVT___GEN_367 = 0;
    vlSelf->__PVT___GEN_368 = 0;
    vlSelf->__PVT___GEN_369 = 0;
    vlSelf->__PVT___GEN_370 = 0;
    vlSelf->__PVT___GEN_371 = 0;
    vlSelf->__PVT___GEN_372 = 0;
    vlSelf->__PVT___GEN_373 = 0;
    vlSelf->__PVT___GEN_374 = 0;
    vlSelf->__PVT___GEN_375 = 0;
    vlSelf->__PVT___GEN_376 = 0;
    vlSelf->__PVT___GEN_377 = 0;
    vlSelf->__PVT___GEN_378 = 0;
    vlSelf->__PVT___GEN_379 = 0;
    vlSelf->__PVT___GEN_380 = 0;
    vlSelf->__PVT___GEN_381 = 0;
    vlSelf->__PVT___GEN_382 = 0;
    vlSelf->__PVT___GEN_383 = 0;
    vlSelf->__PVT___GEN_384 = 0;
    vlSelf->__PVT___way0_dirty_T_14 = 0;
    vlSelf->__PVT___way0_dirty_T_15 = 0;
    vlSelf->__PVT___way1_dirty_T_4 = 0;
    vlSelf->__PVT___way1_dirty_T_12 = 0;
    vlSelf->__PVT___GEN_770 = 0;
    vlSelf->__PVT___GEN_771 = 0;
    vlSelf->__PVT___GEN_772 = 0;
    vlSelf->__PVT___GEN_773 = 0;
    vlSelf->__PVT___GEN_774 = 0;
    vlSelf->__PVT___GEN_775 = 0;
    vlSelf->__PVT___GEN_776 = 0;
    vlSelf->__PVT___GEN_777 = 0;
    vlSelf->__PVT___GEN_778 = 0;
    vlSelf->__PVT___GEN_779 = 0;
    vlSelf->__PVT___GEN_780 = 0;
    vlSelf->__PVT___GEN_781 = 0;
    vlSelf->__PVT___GEN_782 = 0;
    vlSelf->__PVT___GEN_783 = 0;
    vlSelf->__PVT___GEN_784 = 0;
    vlSelf->__PVT___GEN_785 = 0;
    vlSelf->__PVT___GEN_786 = 0;
    vlSelf->__PVT___GEN_787 = 0;
    vlSelf->__PVT___GEN_788 = 0;
    vlSelf->__PVT___GEN_789 = 0;
    vlSelf->__PVT___GEN_790 = 0;
    vlSelf->__PVT___GEN_791 = 0;
    vlSelf->__PVT___GEN_792 = 0;
    vlSelf->__PVT___GEN_793 = 0;
    vlSelf->__PVT___GEN_794 = 0;
    vlSelf->__PVT___GEN_795 = 0;
    vlSelf->__PVT___GEN_796 = 0;
    vlSelf->__PVT___GEN_797 = 0;
    vlSelf->__PVT___GEN_798 = 0;
    vlSelf->__PVT___GEN_799 = 0;
    vlSelf->__PVT___GEN_800 = 0;
    vlSelf->__PVT___GEN_801 = 0;
    vlSelf->__PVT___GEN_802 = 0;
    vlSelf->__PVT___GEN_803 = 0;
    vlSelf->__PVT___GEN_804 = 0;
    vlSelf->__PVT___GEN_805 = 0;
    vlSelf->__PVT___GEN_806 = 0;
    vlSelf->__PVT___GEN_807 = 0;
    vlSelf->__PVT___GEN_808 = 0;
    vlSelf->__PVT___GEN_809 = 0;
    vlSelf->__PVT___GEN_810 = 0;
    vlSelf->__PVT___GEN_811 = 0;
    vlSelf->__PVT___GEN_812 = 0;
    vlSelf->__PVT___GEN_813 = 0;
    vlSelf->__PVT___GEN_814 = 0;
    vlSelf->__PVT___GEN_815 = 0;
    vlSelf->__PVT___GEN_816 = 0;
    vlSelf->__PVT___GEN_817 = 0;
    vlSelf->__PVT___GEN_818 = 0;
    vlSelf->__PVT___GEN_819 = 0;
    vlSelf->__PVT___GEN_820 = 0;
    vlSelf->__PVT___GEN_821 = 0;
    vlSelf->__PVT___GEN_822 = 0;
    vlSelf->__PVT___GEN_823 = 0;
    vlSelf->__PVT___GEN_824 = 0;
    vlSelf->__PVT___GEN_825 = 0;
    vlSelf->__PVT___GEN_826 = 0;
    vlSelf->__PVT___GEN_827 = 0;
    vlSelf->__PVT___GEN_828 = 0;
    vlSelf->__PVT___GEN_829 = 0;
    vlSelf->__PVT___GEN_830 = 0;
    vlSelf->__PVT___GEN_831 = 0;
    vlSelf->__PVT___GEN_832 = 0;
    vlSelf->__PVT___GEN_833 = 0;
    vlSelf->__PVT___GEN_834 = 0;
    vlSelf->__PVT___GEN_835 = 0;
    vlSelf->__PVT___GEN_836 = 0;
    vlSelf->__PVT___GEN_837 = 0;
    vlSelf->__PVT___GEN_838 = 0;
    vlSelf->__PVT___GEN_839 = 0;
    vlSelf->__PVT___GEN_840 = 0;
    vlSelf->__PVT___GEN_841 = 0;
    vlSelf->__PVT___GEN_842 = 0;
    vlSelf->__PVT___GEN_843 = 0;
    vlSelf->__PVT___GEN_844 = 0;
    vlSelf->__PVT___GEN_845 = 0;
    vlSelf->__PVT___GEN_846 = 0;
    vlSelf->__PVT___GEN_847 = 0;
    vlSelf->__PVT___GEN_848 = 0;
    vlSelf->__PVT___GEN_849 = 0;
    vlSelf->__PVT___GEN_850 = 0;
    vlSelf->__PVT___GEN_851 = 0;
    vlSelf->__PVT___GEN_852 = 0;
    vlSelf->__PVT___GEN_853 = 0;
    vlSelf->__PVT___GEN_854 = 0;
    vlSelf->__PVT___GEN_855 = 0;
    vlSelf->__PVT___GEN_856 = 0;
    vlSelf->__PVT___GEN_857 = 0;
    vlSelf->__PVT___GEN_858 = 0;
    vlSelf->__PVT___GEN_859 = 0;
    vlSelf->__PVT___GEN_860 = 0;
    vlSelf->__PVT___GEN_861 = 0;
    vlSelf->__PVT___GEN_862 = 0;
    vlSelf->__PVT___GEN_863 = 0;
    vlSelf->__PVT___GEN_864 = 0;
    vlSelf->__PVT___GEN_865 = 0;
    vlSelf->__PVT___GEN_866 = 0;
    vlSelf->__PVT___GEN_867 = 0;
    vlSelf->__PVT___GEN_868 = 0;
    vlSelf->__PVT___GEN_869 = 0;
    vlSelf->__PVT___GEN_870 = 0;
    vlSelf->__PVT___GEN_871 = 0;
    vlSelf->__PVT___GEN_872 = 0;
    vlSelf->__PVT___GEN_873 = 0;
    vlSelf->__PVT___GEN_874 = 0;
    vlSelf->__PVT___GEN_875 = 0;
    vlSelf->__PVT___GEN_876 = 0;
    vlSelf->__PVT___GEN_877 = 0;
    vlSelf->__PVT___GEN_878 = 0;
    vlSelf->__PVT___GEN_879 = 0;
    vlSelf->__PVT___GEN_880 = 0;
    vlSelf->__PVT___GEN_881 = 0;
    vlSelf->__PVT___GEN_882 = 0;
    vlSelf->__PVT___GEN_883 = 0;
    vlSelf->__PVT___GEN_884 = 0;
    vlSelf->__PVT___GEN_885 = 0;
    vlSelf->__PVT___GEN_886 = 0;
    vlSelf->__PVT___GEN_887 = 0;
    vlSelf->__PVT___GEN_888 = 0;
    vlSelf->__PVT___GEN_889 = 0;
    vlSelf->__PVT___GEN_890 = 0;
    vlSelf->__PVT___GEN_891 = 0;
    vlSelf->__PVT___GEN_892 = 0;
    vlSelf->__PVT___GEN_893 = 0;
    vlSelf->__PVT___GEN_894 = 0;
    vlSelf->__PVT___GEN_895 = 0;
    vlSelf->__PVT___GEN_896 = 0;
    vlSelf->__PVT___way1_dirty_T_14 = 0;
    vlSelf->__PVT___way1_dirty_T_15 = 0;
    vlSelf->__PVT__dirty_victim = 0;
    vlSelf->__PVT___io_tlb_req_T_4 = 0;
    vlSelf->__PVT___lru_T_4 = 0;
    vlSelf->__PVT___lru_T_5 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_12 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_15 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_16 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_17 = 0;
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_18 = 0;
    vlSelf->__PVT__state_ready_lookup_will_to_be = 0;
    vlSelf->__PVT___access_work_state_T_1 = 0;
    vlSelf->__PVT___access_work_state_T_5 = 0;
    vlSelf->__PVT___access_work_state_T_7 = 0;
    vlSelf->__PVT___access_work_state_T_9 = 0;
    vlSelf->__PVT___access_work_state_T_14 = 0;
    vlSelf->__PVT___access_work_state_T_15 = 0;
    vlSelf->__PVT___access_work_state_T_17 = 0;
    vlSelf->__PVT___access_work_state_T_19 = 0;
    vlSelf->__PVT___access_work_state_T_20 = 0;
    vlSelf->__PVT___access_work_state_T_21 = 0;
    vlSelf->__PVT___access_work_state_T_23 = 0;
    vlSelf->__PVT___access_work_state_T_25 = 0;
    vlSelf->__PVT___access_work_state_T_28 = 0;
    vlSelf->__PVT___access_work_state_T_29 = 0;
    vlSelf->__PVT___access_work_state_T_39 = 0;
    vlSelf->__PVT___access_work_state_T_41 = 0;
    vlSelf->__PVT___access_work_state_T_43 = 0;
    vlSelf->__PVT___access_work_state_T_45 = 0;
    vlSelf->__PVT___access_work_state_T_47 = 0;
    vlSelf->__PVT___access_work_state_T_49 = 0;
    vlSelf->__PVT___access_work_state_T_51 = 0;
    vlSelf->__PVT___access_work_state_T_53 = 0;
    vlSelf->__PVT___access_work_state_T_55 = 0;
    vlSelf->__PVT___access_work_state_T_57 = 0;
    vlSelf->__PVT___access_work_state_T_59 = 0;
    vlSelf->__PVT___access_work_state_T_61 = 0;
    vlSelf->__PVT___access_work_state_T_63 = 0;
    vlSelf->__PVT___access_work_state_T_65 = 0;
    vlSelf->__PVT___access_work_state_T_67 = 0;
    vlSelf->__PVT___wait_data_T_3 = 0;
    vlSelf->__PVT___write_counter_T = 0;
    vlSelf->__PVT___write_counter_T_4 = 0;
    vlSelf->__PVT___write_counter_T_5 = 0;
    vlSelf->__PVT___write_counter_T_6 = 0;
    vlSelf->__PVT___write_counter_T_7 = 0;
    vlSelf->__PVT___read_counter_T_6 = 0;
    vlSelf->__PVT___read_counter_T_7 = 0;
    vlSelf->__PVT___read_counter_T_8 = 0;
    vlSelf->__PVT___read_counter_T_9 = 0;
    vlSelf->__PVT__stage2_sram_addr_reg = 0;
    vlSelf->__PVT__stage2_hit0_reg = 0;
    vlSelf->__PVT__dcache_data_way0_0_rdata = 0;
    vlSelf->__PVT__dcache_data_way0_1_rdata = 0;
    vlSelf->__PVT___GEN_1923 = 0;
    vlSelf->__PVT__dcache_data_way0_2_rdata = 0;
    vlSelf->__PVT___GEN_1924 = 0;
    vlSelf->__PVT__dcache_data_way0_3_rdata = 0;
    vlSelf->__PVT___GEN_1925 = 0;
    vlSelf->__PVT__dcache_data_way0_4_rdata = 0;
    vlSelf->__PVT___GEN_1926 = 0;
    vlSelf->__PVT__dcache_data_way0_5_rdata = 0;
    vlSelf->__PVT___GEN_1927 = 0;
    vlSelf->__PVT__dcache_data_way0_6_rdata = 0;
    vlSelf->__PVT___GEN_1928 = 0;
    vlSelf->__PVT__dcache_data_way0_7_rdata = 0;
    vlSelf->__PVT___GEN_1929 = 0;
    vlSelf->__PVT__dcache_data_way1_0_rdata = 0;
    vlSelf->__PVT__dcache_data_way1_1_rdata = 0;
    vlSelf->__PVT___GEN_1931 = 0;
    vlSelf->__PVT__dcache_data_way1_2_rdata = 0;
    vlSelf->__PVT___GEN_1932 = 0;
    vlSelf->__PVT__dcache_data_way1_3_rdata = 0;
    vlSelf->__PVT___GEN_1933 = 0;
    vlSelf->__PVT__dcache_data_way1_4_rdata = 0;
    vlSelf->__PVT___GEN_1934 = 0;
    vlSelf->__PVT__dcache_data_way1_5_rdata = 0;
    vlSelf->__PVT___GEN_1935 = 0;
    vlSelf->__PVT__dcache_data_way1_6_rdata = 0;
    vlSelf->__PVT___GEN_1936 = 0;
    vlSelf->__PVT__dcache_data_way1_7_rdata = 0;
    vlSelf->__PVT___GEN_1937 = 0;
    vlSelf->__PVT__hit_word = 0;
    vlSelf->__PVT___GEN_2067 = 0;
    vlSelf->__PVT___GEN_2068 = 0;
    vlSelf->__PVT___GEN_2069 = 0;
    vlSelf->__PVT___GEN_2070 = 0;
    vlSelf->__PVT___GEN_2071 = 0;
    vlSelf->__PVT___GEN_2072 = 0;
    vlSelf->__PVT___GEN_2073 = 0;
    vlSelf->__PVT___GEN_2075 = 0;
    vlSelf->__PVT___GEN_2076 = 0;
    vlSelf->__PVT___GEN_2077 = 0;
    vlSelf->__PVT___GEN_2078 = 0;
    vlSelf->__PVT___GEN_2079 = 0;
    vlSelf->__PVT___GEN_2080 = 0;
    vlSelf->__PVT___GEN_2081 = 0;
    vlSelf->__PVT__writeback_data = 0;
    vlSelf->__PVT___way0_burst_read_wen_T_2 = 0;
    vlSelf->__PVT___way0_burst_read_wen_T_4 = 0;
    vlSelf->__PVT__way0_burst_read_wen = 0;
    vlSelf->__PVT__way1_burst_read_wen = 0;
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_2 = 0;
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 0;
    vlSelf->__PVT___wen_way0_wire_0_T_1 = 0;
    vlSelf->__PVT___way0_wen_0_T = 0;
    vlSelf->__PVT__way0_wen_0 = 0;
    vlSelf->__PVT___wen_way0_wire_0_T_13 = 0;
    vlSelf->__PVT__way1_wen_0 = 0;
    vlSelf->__PVT___wen_way1_wire_0_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_1_T_1 = 0;
    vlSelf->__PVT___way0_wen_1_T = 0;
    vlSelf->__PVT__way0_wen_1 = 0;
    vlSelf->__PVT___wen_way0_wire_1_T_13 = 0;
    vlSelf->__PVT__way1_wen_1 = 0;
    vlSelf->__PVT___wen_way1_wire_1_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_2_T_1 = 0;
    vlSelf->__PVT___way0_wen_2_T = 0;
    vlSelf->__PVT__way0_wen_2 = 0;
    vlSelf->__PVT___wen_way0_wire_2_T_13 = 0;
    vlSelf->__PVT__way1_wen_2 = 0;
    vlSelf->__PVT___wen_way1_wire_2_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_3_T_1 = 0;
    vlSelf->__PVT___way0_wen_3_T = 0;
    vlSelf->__PVT__way0_wen_3 = 0;
    vlSelf->__PVT___wen_way0_wire_3_T_13 = 0;
    vlSelf->__PVT__way1_wen_3 = 0;
    vlSelf->__PVT___wen_way1_wire_3_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_4_T_1 = 0;
    vlSelf->__PVT___way0_wen_4_T = 0;
    vlSelf->__PVT__way0_wen_4 = 0;
    vlSelf->__PVT___wen_way0_wire_4_T_13 = 0;
    vlSelf->__PVT__way1_wen_4 = 0;
    vlSelf->__PVT___wen_way1_wire_4_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_5_T_1 = 0;
    vlSelf->__PVT___way0_wen_5_T = 0;
    vlSelf->__PVT__way0_wen_5 = 0;
    vlSelf->__PVT___wen_way0_wire_5_T_13 = 0;
    vlSelf->__PVT__way1_wen_5 = 0;
    vlSelf->__PVT___wen_way1_wire_5_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_6_T_1 = 0;
    vlSelf->__PVT___way0_wen_6_T = 0;
    vlSelf->__PVT__way0_wen_6 = 0;
    vlSelf->__PVT___wen_way0_wire_6_T_13 = 0;
    vlSelf->__PVT__way1_wen_6 = 0;
    vlSelf->__PVT___wen_way1_wire_6_T_13 = 0;
    vlSelf->__PVT___wen_way0_wire_7_T_1 = 0;
    vlSelf->__PVT___way0_wen_7_T = 0;
    vlSelf->__PVT__way0_wen_7 = 0;
    vlSelf->__PVT___wen_way0_wire_7_T_13 = 0;
    vlSelf->__PVT__way1_wen_7 = 0;
    vlSelf->__PVT___wen_way1_wire_7_T_13 = 0;
    vlSelf->__PVT___cache_wdata_T_3 = 0;
    vlSelf->__PVT___T_21 = 0;
    vlSelf->__PVT___io_port_araddr_T = 0;
    vlSelf->__PVT___io_port_araddr_T_1 = 0;
    vlSelf->__PVT___io_port_araddr_T_2 = 0;
    vlSelf->__PVT___io_port_araddr_T_5 = 0;
    vlSelf->__PVT___io_port_araddr_T_6 = 0;
    vlSelf->__PVT___io_port_arlen_T_1 = 0;
    vlSelf->__PVT___io_port_arsize_T_1 = 0;
    vlSelf->__PVT__stage2_addr_same_as_stage1 = 0;
    vlSelf->__PVT__stage2_write_stage1_read = 0;
    vlSelf->__PVT___T_29 = 0;
    vlSelf->__PVT___GEN_4642 = 0;
    vlSelf->__PVT___awaddr_miss_addr_T_2 = 0;
    vlSelf->__PVT__awaddr_miss_addr = 0;
    vlSelf->__PVT___io_port_arvalid_T_7 = 0;
    vlSelf->__PVT___io_port_awaddr_T_2 = 0;
    vlSelf->__PVT___io_port_awaddr_T_4 = 0;
    vlSelf->__PVT___io_port_wdata_T = 0;
    vlSelf->__PVT___io_port_wdata_T_3 = 0;
    vlSelf->__PVT___io_port_wdata_T_4 = 0;
    vlSelf->__PVT___io_port_wstrb_T_4 = 0;
    vlSelf->__PVT___io_port_wlast_T_5 = 0;
    vlSelf->__PVT___io_sram_data_ok_T_1 = 0;
    vlSelf->__PVT__sram_rdata_reg = 0;
    vlSelf->__PVT__stage2_stall_reg = 0;
    vlSelf->__PVT___io_sram_rdata_T_2 = 0;
    vlSelf->__PVT___io_sram_rdata_T_3 = 0;
    vlSelf->__Vdly__work_state = 0;
    vlSelf->__Vdly__write_counter = 0;
    vlSelf->__Vdly__read_counter = 0;
    vlSelf->__Vdly__wait_data = 0;
    vlSelf->__Vdly__lru_0 = 0;
    vlSelf->__Vdly__lru_1 = 0;
    vlSelf->__Vdly__lru_2 = 0;
    vlSelf->__Vdly__lru_3 = 0;
    vlSelf->__Vdly__lru_4 = 0;
    vlSelf->__Vdly__lru_5 = 0;
    vlSelf->__Vdly__lru_6 = 0;
    vlSelf->__Vdly__lru_7 = 0;
    vlSelf->__Vdly__lru_8 = 0;
    vlSelf->__Vdly__lru_9 = 0;
    vlSelf->__Vdly__lru_10 = 0;
    vlSelf->__Vdly__lru_11 = 0;
    vlSelf->__Vdly__lru_12 = 0;
    vlSelf->__Vdly__lru_13 = 0;
    vlSelf->__Vdly__lru_14 = 0;
    vlSelf->__Vdly__lru_15 = 0;
    vlSelf->__Vdly__lru_16 = 0;
    vlSelf->__Vdly__lru_17 = 0;
    vlSelf->__Vdly__lru_18 = 0;
    vlSelf->__Vdly__lru_19 = 0;
    vlSelf->__Vdly__lru_20 = 0;
    vlSelf->__Vdly__lru_21 = 0;
    vlSelf->__Vdly__lru_22 = 0;
    vlSelf->__Vdly__lru_23 = 0;
    vlSelf->__Vdly__lru_24 = 0;
    vlSelf->__Vdly__lru_25 = 0;
    vlSelf->__Vdly__lru_26 = 0;
    vlSelf->__Vdly__lru_27 = 0;
    vlSelf->__Vdly__lru_28 = 0;
    vlSelf->__Vdly__lru_29 = 0;
    vlSelf->__Vdly__lru_30 = 0;
    vlSelf->__Vdly__lru_31 = 0;
    vlSelf->__Vdly__lru_32 = 0;
    vlSelf->__Vdly__lru_33 = 0;
    vlSelf->__Vdly__lru_34 = 0;
    vlSelf->__Vdly__lru_35 = 0;
    vlSelf->__Vdly__lru_36 = 0;
    vlSelf->__Vdly__lru_37 = 0;
    vlSelf->__Vdly__lru_38 = 0;
    vlSelf->__Vdly__lru_39 = 0;
    vlSelf->__Vdly__lru_40 = 0;
    vlSelf->__Vdly__lru_41 = 0;
    vlSelf->__Vdly__lru_42 = 0;
    vlSelf->__Vdly__lru_43 = 0;
    vlSelf->__Vdly__lru_44 = 0;
    vlSelf->__Vdly__lru_45 = 0;
    vlSelf->__Vdly__lru_46 = 0;
    vlSelf->__Vdly__lru_47 = 0;
    vlSelf->__Vdly__lru_48 = 0;
    vlSelf->__Vdly__lru_49 = 0;
    vlSelf->__Vdly__lru_50 = 0;
    vlSelf->__Vdly__lru_51 = 0;
    vlSelf->__Vdly__lru_52 = 0;
    vlSelf->__Vdly__lru_53 = 0;
    vlSelf->__Vdly__lru_54 = 0;
    vlSelf->__Vdly__lru_55 = 0;
    vlSelf->__Vdly__lru_56 = 0;
    vlSelf->__Vdly__lru_57 = 0;
    vlSelf->__Vdly__lru_58 = 0;
    vlSelf->__Vdly__lru_59 = 0;
    vlSelf->__Vdly__lru_60 = 0;
    vlSelf->__Vdly__lru_61 = 0;
    vlSelf->__Vdly__lru_62 = 0;
    vlSelf->__Vdly__lru_63 = 0;
    vlSelf->__Vdly__lru_64 = 0;
    vlSelf->__Vdly__lru_65 = 0;
    vlSelf->__Vdly__lru_66 = 0;
    vlSelf->__Vdly__lru_67 = 0;
    vlSelf->__Vdly__lru_68 = 0;
    vlSelf->__Vdly__lru_69 = 0;
    vlSelf->__Vdly__lru_70 = 0;
    vlSelf->__Vdly__lru_71 = 0;
    vlSelf->__Vdly__lru_72 = 0;
    vlSelf->__Vdly__lru_73 = 0;
    vlSelf->__Vdly__lru_74 = 0;
    vlSelf->__Vdly__lru_75 = 0;
    vlSelf->__Vdly__lru_76 = 0;
    vlSelf->__Vdly__lru_77 = 0;
    vlSelf->__Vdly__lru_78 = 0;
    vlSelf->__Vdly__lru_79 = 0;
    vlSelf->__Vdly__lru_80 = 0;
    vlSelf->__Vdly__lru_81 = 0;
    vlSelf->__Vdly__lru_82 = 0;
    vlSelf->__Vdly__lru_83 = 0;
    vlSelf->__Vdly__lru_84 = 0;
    vlSelf->__Vdly__lru_85 = 0;
    vlSelf->__Vdly__lru_86 = 0;
    vlSelf->__Vdly__lru_87 = 0;
    vlSelf->__Vdly__lru_88 = 0;
    vlSelf->__Vdly__lru_89 = 0;
    vlSelf->__Vdly__lru_90 = 0;
    vlSelf->__Vdly__lru_91 = 0;
    vlSelf->__Vdly__lru_92 = 0;
    vlSelf->__Vdly__lru_93 = 0;
    vlSelf->__Vdly__lru_94 = 0;
    vlSelf->__Vdly__lru_95 = 0;
    vlSelf->__Vdly__lru_96 = 0;
    vlSelf->__Vdly__lru_97 = 0;
    vlSelf->__Vdly__lru_98 = 0;
    vlSelf->__Vdly__lru_99 = 0;
    vlSelf->__Vdly__lru_100 = 0;
    vlSelf->__Vdly__lru_101 = 0;
    vlSelf->__Vdly__lru_102 = 0;
    vlSelf->__Vdly__lru_103 = 0;
    vlSelf->__Vdly__lru_104 = 0;
    vlSelf->__Vdly__lru_105 = 0;
    vlSelf->__Vdly__lru_106 = 0;
    vlSelf->__Vdly__lru_107 = 0;
    vlSelf->__Vdly__lru_108 = 0;
    vlSelf->__Vdly__lru_109 = 0;
    vlSelf->__Vdly__lru_110 = 0;
    vlSelf->__Vdly__lru_111 = 0;
    vlSelf->__Vdly__lru_112 = 0;
    vlSelf->__Vdly__lru_113 = 0;
    vlSelf->__Vdly__lru_114 = 0;
    vlSelf->__Vdly__lru_115 = 0;
    vlSelf->__Vdly__lru_116 = 0;
    vlSelf->__Vdly__lru_117 = 0;
    vlSelf->__Vdly__lru_118 = 0;
    vlSelf->__Vdly__lru_119 = 0;
    vlSelf->__Vdly__lru_120 = 0;
    vlSelf->__Vdly__lru_121 = 0;
    vlSelf->__Vdly__lru_122 = 0;
    vlSelf->__Vdly__lru_123 = 0;
    vlSelf->__Vdly__lru_124 = 0;
    vlSelf->__Vdly__lru_125 = 0;
    vlSelf->__Vdly__lru_126 = 0;
    vlSelf->__Vdly__lru_127 = 0;
    vlSelf->__Vdly__way0_dirty_0 = 0;
    vlSelf->__Vdly__way0_dirty_1 = 0;
    vlSelf->__Vdly__way0_dirty_2 = 0;
    vlSelf->__Vdly__way0_dirty_3 = 0;
    vlSelf->__Vdly__way0_dirty_4 = 0;
    vlSelf->__Vdly__way0_dirty_5 = 0;
    vlSelf->__Vdly__way0_dirty_6 = 0;
    vlSelf->__Vdly__way0_dirty_7 = 0;
    vlSelf->__Vdly__way0_dirty_8 = 0;
    vlSelf->__Vdly__way0_dirty_9 = 0;
    vlSelf->__Vdly__way0_dirty_10 = 0;
    vlSelf->__Vdly__way0_dirty_11 = 0;
    vlSelf->__Vdly__way0_dirty_12 = 0;
    vlSelf->__Vdly__way0_dirty_13 = 0;
    vlSelf->__Vdly__way0_dirty_14 = 0;
    vlSelf->__Vdly__way0_dirty_15 = 0;
    vlSelf->__Vdly__way0_dirty_16 = 0;
    vlSelf->__Vdly__way0_dirty_17 = 0;
    vlSelf->__Vdly__way0_dirty_18 = 0;
    vlSelf->__Vdly__way0_dirty_19 = 0;
    vlSelf->__Vdly__way0_dirty_20 = 0;
    vlSelf->__Vdly__way0_dirty_21 = 0;
    vlSelf->__Vdly__way0_dirty_22 = 0;
    vlSelf->__Vdly__way0_dirty_23 = 0;
    vlSelf->__Vdly__way0_dirty_24 = 0;
    vlSelf->__Vdly__way0_dirty_25 = 0;
    vlSelf->__Vdly__way0_dirty_26 = 0;
    vlSelf->__Vdly__way0_dirty_27 = 0;
    vlSelf->__Vdly__way0_dirty_28 = 0;
    vlSelf->__Vdly__way0_dirty_29 = 0;
    vlSelf->__Vdly__way0_dirty_30 = 0;
    vlSelf->__Vdly__way0_dirty_31 = 0;
    vlSelf->__Vdly__way0_dirty_32 = 0;
    vlSelf->__Vdly__way0_dirty_33 = 0;
    vlSelf->__Vdly__way0_dirty_34 = 0;
    vlSelf->__Vdly__way0_dirty_35 = 0;
    vlSelf->__Vdly__way0_dirty_36 = 0;
    vlSelf->__Vdly__way0_dirty_37 = 0;
    vlSelf->__Vdly__way0_dirty_38 = 0;
    vlSelf->__Vdly__way0_dirty_39 = 0;
    vlSelf->__Vdly__way0_dirty_40 = 0;
    vlSelf->__Vdly__way0_dirty_41 = 0;
    vlSelf->__Vdly__way0_dirty_42 = 0;
    vlSelf->__Vdly__way0_dirty_43 = 0;
    vlSelf->__Vdly__way0_dirty_44 = 0;
    vlSelf->__Vdly__way0_dirty_45 = 0;
    vlSelf->__Vdly__way0_dirty_46 = 0;
    vlSelf->__Vdly__way0_dirty_47 = 0;
    vlSelf->__Vdly__way0_dirty_48 = 0;
    vlSelf->__Vdly__way0_dirty_49 = 0;
    vlSelf->__Vdly__way0_dirty_50 = 0;
    vlSelf->__Vdly__way0_dirty_51 = 0;
    vlSelf->__Vdly__way0_dirty_52 = 0;
    vlSelf->__Vdly__way0_dirty_53 = 0;
    vlSelf->__Vdly__way0_dirty_54 = 0;
    vlSelf->__Vdly__way0_dirty_55 = 0;
    vlSelf->__Vdly__way0_dirty_56 = 0;
    vlSelf->__Vdly__way0_dirty_57 = 0;
    vlSelf->__Vdly__way0_dirty_58 = 0;
    vlSelf->__Vdly__way0_dirty_59 = 0;
    vlSelf->__Vdly__way0_dirty_60 = 0;
    vlSelf->__Vdly__way0_dirty_61 = 0;
    vlSelf->__Vdly__way0_dirty_62 = 0;
    vlSelf->__Vdly__way0_dirty_63 = 0;
    vlSelf->__Vdly__way0_dirty_64 = 0;
    vlSelf->__Vdly__way0_dirty_65 = 0;
    vlSelf->__Vdly__way0_dirty_66 = 0;
    vlSelf->__Vdly__way0_dirty_67 = 0;
    vlSelf->__Vdly__way0_dirty_68 = 0;
    vlSelf->__Vdly__way0_dirty_69 = 0;
    vlSelf->__Vdly__way0_dirty_70 = 0;
    vlSelf->__Vdly__way0_dirty_71 = 0;
    vlSelf->__Vdly__way0_dirty_72 = 0;
    vlSelf->__Vdly__way0_dirty_73 = 0;
    vlSelf->__Vdly__way0_dirty_74 = 0;
    vlSelf->__Vdly__way0_dirty_75 = 0;
    vlSelf->__Vdly__way0_dirty_76 = 0;
    vlSelf->__Vdly__way0_dirty_77 = 0;
    vlSelf->__Vdly__way0_dirty_78 = 0;
    vlSelf->__Vdly__way0_dirty_79 = 0;
    vlSelf->__Vdly__way0_dirty_80 = 0;
    vlSelf->__Vdly__way0_dirty_81 = 0;
    vlSelf->__Vdly__way0_dirty_82 = 0;
    vlSelf->__Vdly__way0_dirty_83 = 0;
    vlSelf->__Vdly__way0_dirty_84 = 0;
    vlSelf->__Vdly__way0_dirty_85 = 0;
    vlSelf->__Vdly__way0_dirty_86 = 0;
    vlSelf->__Vdly__way0_dirty_87 = 0;
    vlSelf->__Vdly__way0_dirty_88 = 0;
    vlSelf->__Vdly__way0_dirty_89 = 0;
    vlSelf->__Vdly__way0_dirty_90 = 0;
    vlSelf->__Vdly__way0_dirty_91 = 0;
    vlSelf->__Vdly__way0_dirty_92 = 0;
    vlSelf->__Vdly__way0_dirty_93 = 0;
    vlSelf->__Vdly__way0_dirty_94 = 0;
    vlSelf->__Vdly__way0_dirty_95 = 0;
    vlSelf->__Vdly__way0_dirty_96 = 0;
    vlSelf->__Vdly__way0_dirty_97 = 0;
    vlSelf->__Vdly__way0_dirty_98 = 0;
    vlSelf->__Vdly__way0_dirty_99 = 0;
    vlSelf->__Vdly__way0_dirty_100 = 0;
    vlSelf->__Vdly__way0_dirty_101 = 0;
    vlSelf->__Vdly__way0_dirty_102 = 0;
    vlSelf->__Vdly__way0_dirty_103 = 0;
    vlSelf->__Vdly__way0_dirty_104 = 0;
    vlSelf->__Vdly__way0_dirty_105 = 0;
    vlSelf->__Vdly__way0_dirty_106 = 0;
    vlSelf->__Vdly__way0_dirty_107 = 0;
    vlSelf->__Vdly__way0_dirty_108 = 0;
    vlSelf->__Vdly__way0_dirty_109 = 0;
    vlSelf->__Vdly__way0_dirty_110 = 0;
    vlSelf->__Vdly__way0_dirty_111 = 0;
    vlSelf->__Vdly__way0_dirty_112 = 0;
    vlSelf->__Vdly__way0_dirty_113 = 0;
    vlSelf->__Vdly__way0_dirty_114 = 0;
    vlSelf->__Vdly__way0_dirty_115 = 0;
    vlSelf->__Vdly__way0_dirty_116 = 0;
    vlSelf->__Vdly__way0_dirty_117 = 0;
    vlSelf->__Vdly__way0_dirty_118 = 0;
    vlSelf->__Vdly__way0_dirty_119 = 0;
    vlSelf->__Vdly__way0_dirty_120 = 0;
    vlSelf->__Vdly__way0_dirty_121 = 0;
    vlSelf->__Vdly__way0_dirty_122 = 0;
    vlSelf->__Vdly__way0_dirty_123 = 0;
    vlSelf->__Vdly__way0_dirty_124 = 0;
    vlSelf->__Vdly__way0_dirty_125 = 0;
    vlSelf->__Vdly__way0_dirty_126 = 0;
    vlSelf->__Vdly__way0_dirty_127 = 0;
    vlSelf->__Vdly__way1_dirty_0 = 0;
    vlSelf->__Vdly__way1_dirty_1 = 0;
    vlSelf->__Vdly__way1_dirty_2 = 0;
    vlSelf->__Vdly__way1_dirty_3 = 0;
    vlSelf->__Vdly__way1_dirty_4 = 0;
    vlSelf->__Vdly__way1_dirty_5 = 0;
    vlSelf->__Vdly__way1_dirty_6 = 0;
    vlSelf->__Vdly__way1_dirty_7 = 0;
    vlSelf->__Vdly__way1_dirty_8 = 0;
    vlSelf->__Vdly__way1_dirty_9 = 0;
    vlSelf->__Vdly__way1_dirty_10 = 0;
    vlSelf->__Vdly__way1_dirty_11 = 0;
    vlSelf->__Vdly__way1_dirty_12 = 0;
    vlSelf->__Vdly__way1_dirty_13 = 0;
    vlSelf->__Vdly__way1_dirty_14 = 0;
    vlSelf->__Vdly__way1_dirty_15 = 0;
    vlSelf->__Vdly__way1_dirty_16 = 0;
    vlSelf->__Vdly__way1_dirty_17 = 0;
    vlSelf->__Vdly__way1_dirty_18 = 0;
    vlSelf->__Vdly__way1_dirty_19 = 0;
    vlSelf->__Vdly__way1_dirty_20 = 0;
    vlSelf->__Vdly__way1_dirty_21 = 0;
    vlSelf->__Vdly__way1_dirty_22 = 0;
    vlSelf->__Vdly__way1_dirty_23 = 0;
    vlSelf->__Vdly__way1_dirty_24 = 0;
    vlSelf->__Vdly__way1_dirty_25 = 0;
    vlSelf->__Vdly__way1_dirty_26 = 0;
    vlSelf->__Vdly__way1_dirty_27 = 0;
    vlSelf->__Vdly__way1_dirty_28 = 0;
    vlSelf->__Vdly__way1_dirty_29 = 0;
    vlSelf->__Vdly__way1_dirty_30 = 0;
    vlSelf->__Vdly__way1_dirty_31 = 0;
    vlSelf->__Vdly__way1_dirty_32 = 0;
    vlSelf->__Vdly__way1_dirty_33 = 0;
    vlSelf->__Vdly__way1_dirty_34 = 0;
    vlSelf->__Vdly__way1_dirty_35 = 0;
    vlSelf->__Vdly__way1_dirty_36 = 0;
    vlSelf->__Vdly__way1_dirty_37 = 0;
    vlSelf->__Vdly__way1_dirty_38 = 0;
    vlSelf->__Vdly__way1_dirty_39 = 0;
    vlSelf->__Vdly__way1_dirty_40 = 0;
    vlSelf->__Vdly__way1_dirty_41 = 0;
    vlSelf->__Vdly__way1_dirty_42 = 0;
    vlSelf->__Vdly__way1_dirty_43 = 0;
    vlSelf->__Vdly__way1_dirty_44 = 0;
    vlSelf->__Vdly__way1_dirty_45 = 0;
    vlSelf->__Vdly__way1_dirty_46 = 0;
    vlSelf->__Vdly__way1_dirty_47 = 0;
    vlSelf->__Vdly__way1_dirty_48 = 0;
    vlSelf->__Vdly__way1_dirty_49 = 0;
    vlSelf->__Vdly__way1_dirty_50 = 0;
    vlSelf->__Vdly__way1_dirty_51 = 0;
    vlSelf->__Vdly__way1_dirty_52 = 0;
    vlSelf->__Vdly__way1_dirty_53 = 0;
    vlSelf->__Vdly__way1_dirty_54 = 0;
    vlSelf->__Vdly__way1_dirty_55 = 0;
    vlSelf->__Vdly__way1_dirty_56 = 0;
    vlSelf->__Vdly__way1_dirty_57 = 0;
    vlSelf->__Vdly__way1_dirty_58 = 0;
    vlSelf->__Vdly__way1_dirty_59 = 0;
    vlSelf->__Vdly__way1_dirty_60 = 0;
    vlSelf->__Vdly__way1_dirty_61 = 0;
    vlSelf->__Vdly__way1_dirty_62 = 0;
    vlSelf->__Vdly__way1_dirty_63 = 0;
    vlSelf->__Vdly__way1_dirty_64 = 0;
    vlSelf->__Vdly__way1_dirty_65 = 0;
    vlSelf->__Vdly__way1_dirty_66 = 0;
    vlSelf->__Vdly__way1_dirty_67 = 0;
    vlSelf->__Vdly__way1_dirty_68 = 0;
    vlSelf->__Vdly__way1_dirty_69 = 0;
    vlSelf->__Vdly__way1_dirty_70 = 0;
    vlSelf->__Vdly__way1_dirty_71 = 0;
    vlSelf->__Vdly__way1_dirty_72 = 0;
    vlSelf->__Vdly__way1_dirty_73 = 0;
    vlSelf->__Vdly__way1_dirty_74 = 0;
    vlSelf->__Vdly__way1_dirty_75 = 0;
    vlSelf->__Vdly__way1_dirty_76 = 0;
    vlSelf->__Vdly__way1_dirty_77 = 0;
    vlSelf->__Vdly__way1_dirty_78 = 0;
    vlSelf->__Vdly__way1_dirty_79 = 0;
    vlSelf->__Vdly__way1_dirty_80 = 0;
    vlSelf->__Vdly__way1_dirty_81 = 0;
    vlSelf->__Vdly__way1_dirty_82 = 0;
    vlSelf->__Vdly__way1_dirty_83 = 0;
    vlSelf->__Vdly__way1_dirty_84 = 0;
    vlSelf->__Vdly__way1_dirty_85 = 0;
    vlSelf->__Vdly__way1_dirty_86 = 0;
    vlSelf->__Vdly__way1_dirty_87 = 0;
    vlSelf->__Vdly__way1_dirty_88 = 0;
    vlSelf->__Vdly__way1_dirty_89 = 0;
    vlSelf->__Vdly__way1_dirty_90 = 0;
    vlSelf->__Vdly__way1_dirty_91 = 0;
    vlSelf->__Vdly__way1_dirty_92 = 0;
    vlSelf->__Vdly__way1_dirty_93 = 0;
    vlSelf->__Vdly__way1_dirty_94 = 0;
    vlSelf->__Vdly__way1_dirty_95 = 0;
    vlSelf->__Vdly__way1_dirty_96 = 0;
    vlSelf->__Vdly__way1_dirty_97 = 0;
    vlSelf->__Vdly__way1_dirty_98 = 0;
    vlSelf->__Vdly__way1_dirty_99 = 0;
    vlSelf->__Vdly__way1_dirty_100 = 0;
    vlSelf->__Vdly__way1_dirty_101 = 0;
    vlSelf->__Vdly__way1_dirty_102 = 0;
    vlSelf->__Vdly__way1_dirty_103 = 0;
    vlSelf->__Vdly__way1_dirty_104 = 0;
    vlSelf->__Vdly__way1_dirty_105 = 0;
    vlSelf->__Vdly__way1_dirty_106 = 0;
    vlSelf->__Vdly__way1_dirty_107 = 0;
    vlSelf->__Vdly__way1_dirty_108 = 0;
    vlSelf->__Vdly__way1_dirty_109 = 0;
    vlSelf->__Vdly__way1_dirty_110 = 0;
    vlSelf->__Vdly__way1_dirty_111 = 0;
    vlSelf->__Vdly__way1_dirty_112 = 0;
    vlSelf->__Vdly__way1_dirty_113 = 0;
    vlSelf->__Vdly__way1_dirty_114 = 0;
    vlSelf->__Vdly__way1_dirty_115 = 0;
    vlSelf->__Vdly__way1_dirty_116 = 0;
    vlSelf->__Vdly__way1_dirty_117 = 0;
    vlSelf->__Vdly__way1_dirty_118 = 0;
    vlSelf->__Vdly__way1_dirty_119 = 0;
    vlSelf->__Vdly__way1_dirty_120 = 0;
    vlSelf->__Vdly__way1_dirty_121 = 0;
    vlSelf->__Vdly__way1_dirty_122 = 0;
    vlSelf->__Vdly__way1_dirty_123 = 0;
    vlSelf->__Vdly__way1_dirty_124 = 0;
    vlSelf->__Vdly__way1_dirty_125 = 0;
    vlSelf->__Vdly__way1_dirty_126 = 0;
    vlSelf->__Vdly__way1_dirty_127 = 0;
    vlSelf->__Vdly__stage1_addr_line_mapping = 0;
    vlSelf->__Vdly__stage1_sram_cache_reg = 0;
    vlSelf->__Vdly__stage1_sram_wdata_reg = 0;
    vlSelf->__Vdly__stage1_sram_size_reg = 0;
    vlSelf->__Vdly__stage1_sram_wr_reg = 0;
    vlSelf->__Vdly__stage1_sram_req_reg = 0;
    vlSelf->__Vdly__stage1_sram_hit0_reg = 0;
    vlSelf->__Vdly__stage1_sram_hit1_reg = 0;
    vlSelf->__Vdly__stage1_sram_valid0_reg = 0;
    vlSelf->__Vdly__stage1_sram_valid1_reg = 0;
    vlSelf->__Vdly__stage1_wstrb_reg = 0;
    vlSelf->__Vdly__stage1_sram_phy_addr_reg = 0;
    vlSelf->__Vdly__stage2_sram_write_reg = 0;
    vlSelf->__Vdly__stage1_stall_reg = 0;
    vlSelf->__Vdly__write_access_complete_reg = 0;
    vlSelf->__Vdly__stage2_sram_addr_reg = 0;
    vlSelf->__Vdly__stage2_hit0_reg = 0;
    vlSelf->__Vdly__sram_rdata_reg = 0;
    vlSelf->__Vdly__stage2_stall_reg = 0;
}
