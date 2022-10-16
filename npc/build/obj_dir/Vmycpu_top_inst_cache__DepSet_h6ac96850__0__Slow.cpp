// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_inst_cache.h"

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__0(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__0\n"); );
    // Body
    vlSelf->__PVT__icache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_tag_1_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__1(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__1\n"); );
    // Body
    vlSelf->__PVT__icache_data_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_4_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_5_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_6_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_7_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_8_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_9_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_10_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_11_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_12_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_13_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_14_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_data_15_reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__3(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__3\n"); );
    // Body
    vlSelf->__PVT__decoder_inst_data_opD = (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 7U));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__4(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__4\n"); );
    // Body
    vlSelf->__PVT__decoder_inst_data_Funct3D = (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0xcU, 3U));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__5(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__5\n"); );
    // Body
    vlSelf->__PVT__icache_data_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_4_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_5_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_6_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_7_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_8_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_9_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_10_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_11_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_12_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_13_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_14_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_data_15_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__6(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__6\n"); );
    // Body
    vlSelf->__PVT__icache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_tag_1_clock = vlSelf->__PVT__clock;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__7(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__7\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_22 = (0x63U 
                                              == (IData)(vlSelf->__PVT__decoder_inst_data_opD));
    vlSelf->__PVT___decoder_inst_data_T_18 = ((0x67U 
                                               == (IData)(vlSelf->__PVT__decoder_inst_data_opD)) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__8(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__8\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_4 = ((1U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 2U : 
                                             VL_EXTEND_II(2,1, 
                                                          (0U 
                                                           == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__11(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__11\n"); );
    // Body
    vlSelf->__PVT__decoder_inst_data_lo = VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                        VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U));
    vlSelf->__PVT___decoder_inst_data_T_20 = ((IData)(vlSelf->__PVT___decoder_inst_data_T_18) 
                                              | (0x6fU 
                                                 == (IData)(vlSelf->__PVT__decoder_inst_data_opD)));
    vlSelf->__PVT___decoder_inst_data_T_6 = ((4U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 4U : 
                                             VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___decoder_inst_data_T_4)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__12(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__12\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_8 = ((5U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 8U : 
                                             VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___decoder_inst_data_T_6)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__13(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__13\n"); );
    // Body
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__14(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__14\n"); );
    // Body
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__15(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__15\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T = (2U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_3 = VL_CONCAT_QQI(64,59,5, 
                                                       (0x7ffffffffffffffULL 
                                                        & VL_SEL_QQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 5U, 0x3bU)), 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__16(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__16\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_35 = (5U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__17(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__17\n"); );
    // Body
    vlSelf->__PVT___io_sram_write_en_T_3 = ((~ (IData)(vlSelf->__PVT__stage2_sram_req_reg)) 
                                            & (0U != 
                                               (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 0U, 2U))));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__18(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__18\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_18 = ((IData)(vlSelf->__PVT__stage1_finished)
                                               ? 4U
                                               : 5U);
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 1U
                                               : 2U);
    vlSelf->__PVT___access_work_state_T_32 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 5U
                                               : 2U);
    vlSelf->__PVT___access_work_state_T_13 = ((IData)(vlSelf->__PVT__stage1_finished)
                                               ? 4U
                                               : 2U);
    vlSelf->__PVT___access_work_state_T_8 = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_23 = (1U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__19(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__19\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_10 = ((6U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x10U
                                               : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___decoder_inst_data_T_8)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__20(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__20\n"); );
    // Body
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__21(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__21\n"); );
    // Body
    vlSelf->__PVT__io_port_arvalid = ((IData)(vlSelf->__PVT___access_work_state_T) 
                                      | (IData)(vlSelf->__PVT___access_work_state_T_35));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__22(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__22\n"); );
    // Body
    vlSelf->__PVT___io_port_araddr_T_4 = ((IData)(vlSelf->__PVT___access_work_state_T_35)
                                           ? vlSelf->__PVT___io_port_araddr_T_3
                                           : 0ULL);
    vlSelf->__PVT___io_sram_write_en_T_5 = (((IData)(vlSelf->__PVT__stage2_sram_req_reg) 
                                             | (IData)(vlSelf->__PVT___io_sram_write_en_T_3))
                                             ? (IData)(vlSelf->__PVT__stage2_write_en_reg)
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__23(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__23\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 1U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_13));
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_18)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_13));
    vlSelf->__PVT___stage1_finished_T_1 = (7U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__24(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__24\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_12 = ((7U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x20U
                                               : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___decoder_inst_data_T_10)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__25(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__25\n"); );
    // Body
    vlSelf->__PVT__io_port_araddr = ((IData)(vlSelf->__PVT___access_work_state_T)
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_4);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__26(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__26\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_15 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : 1U);
    vlSelf->__PVT___access_work_state_T_21 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_20)
                                               : 1U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__27(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__27\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_29 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_28)
                                               : 1U);
    vlSelf->__PVT___access_work_state_T_33 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_32)
                                               : 1U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__28(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__28\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_44 = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                               ? 4U
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__29(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__29\n"); );
    // Body
    vlSelf->__PVT___decoder_inst_data_T_14 = ((0x63U 
                                               == (IData)(vlSelf->__PVT__decoder_inst_data_opD))
                                               ? (IData)(vlSelf->__PVT___decoder_inst_data_T_12)
                                               : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__31(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__31\n"); );
    // Body
    vlSelf->__PVT___stage1_finished_T_2 = (3U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_38 = (6U == (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__32(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__32\n"); );
    // Body
    vlSelf->__PVT__decoder_inst_data = VL_CONCAT_QIQ(40,6,34, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), 
                                                     VL_CONCAT_QIQ(34,1,33, (IData)(vlSelf->__PVT___decoder_inst_data_T_20), 
                                                                   VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                                                VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U))));
    vlSelf->__PVT__decoder_inst_data_hi = VL_CONCAT_III(7,6,1, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), (IData)(vlSelf->__PVT___decoder_inst_data_T_20));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__33(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__33\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_8 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__34(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__34\n"); );
    // Body
    vlSelf->__PVT___T_13 = VL_CONCAT_III(21,1,20, 1U, 
                                         (0xfffffU 
                                          & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xcU, 0x14U)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__35(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__35\n"); );
    // Body
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__36(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__36\n"); );
    // Body
    vlSelf->__PVT___icache_data_way0_1_wen_T_6 = (1U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_2_wen_T_6 = (2U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_3_wen_T_6 = (3U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_4_wen_T_6 = (4U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_5_wen_T_6 = (5U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_6_wen_T_6 = (6U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___icache_data_way0_7_wen_T_6 = (7U 
                                                  == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___wait_data_L_T_3 = (0U == (IData)(vlSelf->__PVT__write_counter));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__37(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__37\n"); );
    // Body
    vlSelf->__PVT___wait_data_L_T_7 = ((IData)(vlSelf->__PVT___access_work_state_T_38) 
                                       & (IData)(vlSelf->__PVT__io_port_rvalid));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__38(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__38\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_7 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                              & (IData)(vlSelf->__PVT__io_port_rvalid))
                                              ? 4U : 3U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__39(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__39\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_6 = ((IData)(vlSelf->__PVT__io_port_rlast) 
                                             & (IData)(vlSelf->__PVT__io_port_rvalid));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__40(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__40\n"); );
    // Body
    vlSelf->__PVT__icache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__41(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__41\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__42(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__42\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_tag_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__43(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__43\n"); );
    // Body
    vlSelf->__PVT__icache_data_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_1_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_2_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_3_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_4_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_5_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_6_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_7_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_8_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_9_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_10_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_11_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_12_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_13_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_14_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
    vlSelf->__PVT__icache_data_15_io_wdata = VL_CONCAT_QIQ(40,7,33, (IData)(vlSelf->__PVT__decoder_inst_data_hi), vlSelf->__PVT__decoder_inst_data_lo);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__44(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__44\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_wdata = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                           ? vlSelf->__PVT___T_13
                                           : 0U);
    vlSelf->__PVT__icache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                             ? vlSelf->__PVT___T_13
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__45(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__45\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_42 = ((IData)(vlSelf->__PVT___access_work_state_T_6)
                                               ? 7U
                                               : (IData)(vlSelf->__PVT__work_state));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__47(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__47\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_4));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__51(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__51\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_45 = ((6U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_42)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_44));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__52(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__52\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__53(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__53\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_46 = (((5U 
                                                == (IData)(vlSelf->__PVT__work_state)) 
                                               & (IData)(vlSelf->__PVT__io_port_arready))
                                               ? 6U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__60(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__60\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_4)
                              : (IData)(vlSelf->__PVT___GEN_6));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__61(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__61\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_7_rdata = vlSelf->__PVT__icache_data_7_io_rdata;
    vlSelf->__PVT__icache_data_way1_7_rdata = vlSelf->__PVT__icache_data_15_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__62(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__62\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_6_rdata = vlSelf->__PVT__icache_data_6_io_rdata;
    vlSelf->__PVT__icache_data_way1_6_rdata = vlSelf->__PVT__icache_data_14_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__63(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__63\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_5_rdata = vlSelf->__PVT__icache_data_5_io_rdata;
    vlSelf->__PVT__icache_data_way1_5_rdata = vlSelf->__PVT__icache_data_13_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__64(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__64\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_4_rdata = vlSelf->__PVT__icache_data_4_io_rdata;
    vlSelf->__PVT__icache_data_way1_4_rdata = vlSelf->__PVT__icache_data_12_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__65(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__65\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_3_rdata = vlSelf->__PVT__icache_data_3_io_rdata;
    vlSelf->__PVT__icache_data_way1_3_rdata = vlSelf->__PVT__icache_data_11_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__66(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__66\n"); );
    // Body
    vlSelf->__PVT__icache_data_way0_2_rdata = vlSelf->__PVT__icache_data_2_io_rdata;
    vlSelf->__PVT__icache_data_way1_2_rdata = vlSelf->__PVT__icache_data_10_io_rdata;
    vlSelf->__PVT__icache_data_way0_0_rdata = vlSelf->__PVT__icache_data_io_rdata;
    vlSelf->__PVT__icache_data_way0_1_rdata = vlSelf->__PVT__icache_data_1_io_rdata;
    vlSelf->__PVT__icache_data_way1_0_rdata = vlSelf->__PVT__icache_data_8_io_rdata;
    vlSelf->__PVT__icache_data_way1_1_rdata = vlSelf->__PVT__icache_data_9_io_rdata;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__67(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__67\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_5)
                              : (IData)(vlSelf->__PVT___GEN_7));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__68(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__68\n"); );
    // Body
    vlSelf->__PVT___GEN_516 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_1_rdata
                                : vlSelf->__PVT__icache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_524 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_1_rdata
                                : vlSelf->__PVT__icache_data_way1_0_rdata);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__69(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__69\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_6)
                              : (IData)(vlSelf->__PVT___GEN_8));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__70(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__70\n"); );
    // Body
    vlSelf->__PVT__io_sram_write_en = ((IData)(vlSelf->__PVT__io_inst_buffer_full)
                                        ? 0U : (IData)(vlSelf->__PVT___io_sram_write_en_T_5));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__71(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__71\n"); );
    // Body
    vlSelf->__PVT___stage2_stall_T_5 = (1U & (~ (IData)(vlSelf->__PVT__io_inst_buffer_full)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__72(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__72\n"); );
    // Body
    vlSelf->__PVT___GEN_517 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_2_rdata
                                : vlSelf->__PVT___GEN_516);
    vlSelf->__PVT___GEN_525 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_2_rdata
                                : vlSelf->__PVT___GEN_524);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__73(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__73\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_7)
                               : (IData)(vlSelf->__PVT___GEN_9));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__74(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__74\n"); );
    // Body
    vlSelf->__PVT___GEN_518 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_3_rdata
                                : vlSelf->__PVT___GEN_517);
    vlSelf->__PVT___GEN_526 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_3_rdata
                                : vlSelf->__PVT___GEN_525);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__75(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__75\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_8)
                               : (IData)(vlSelf->__PVT___GEN_10));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__76(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__76\n"); );
    // Body
    vlSelf->__PVT___GEN_519 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_4_rdata
                                : vlSelf->__PVT___GEN_518);
    vlSelf->__PVT___GEN_527 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_4_rdata
                                : vlSelf->__PVT___GEN_526);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__77(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__77\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_9)
                               : (IData)(vlSelf->__PVT___GEN_11));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__78(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__78\n"); );
    // Body
    vlSelf->__PVT___GEN_520 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_5_rdata
                                : vlSelf->__PVT___GEN_519);
    vlSelf->__PVT___GEN_528 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_5_rdata
                                : vlSelf->__PVT___GEN_527);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__79(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__79\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_10)
                               : (IData)(vlSelf->__PVT___GEN_12));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__80(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__80\n"); );
    // Body
    vlSelf->__PVT___GEN_521 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_6_rdata
                                : vlSelf->__PVT___GEN_520);
    vlSelf->__PVT___GEN_529 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_6_rdata
                                : vlSelf->__PVT___GEN_528);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__81(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__81\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_11)
                               : (IData)(vlSelf->__PVT___GEN_13));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__82(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__82\n"); );
    // Body
    vlSelf->__PVT___GEN_522 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_7_rdata
                                : vlSelf->__PVT___GEN_521);
    vlSelf->__PVT___GEN_530 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_7_rdata
                                : vlSelf->__PVT___GEN_529);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__83(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__83\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_12)
                               : (IData)(vlSelf->__PVT___GEN_14));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__84(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__84\n"); );
    // Body
    vlSelf->__PVT__hit_word_L = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                  ? vlSelf->__PVT___GEN_522
                                  : vlSelf->__PVT___GEN_530);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__85(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__85\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_13)
                               : (IData)(vlSelf->__PVT___GEN_15));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__86(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__86\n"); );
    // Body
    vlSelf->__PVT___access_sram_rdata_L_T_2 = ((IData)(vlSelf->__PVT___access_work_state_T_23)
                                                ? vlSelf->__PVT__hit_word_L
                                                : 0ULL);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__87(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__87\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_14)
                               : (IData)(vlSelf->__PVT___GEN_16));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__88(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__88\n"); );
    // Body
    vlSelf->__PVT__access_sram_rdata_L = ((IData)(vlSelf->__PVT___access_work_state_T_8)
                                           ? vlSelf->__PVT__wait_data_L
                                           : vlSelf->__PVT___access_sram_rdata_L_T_2);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__89(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__89\n"); );
    // Body
    vlSelf->__PVT___GEN_18 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_15)
                               : (IData)(vlSelf->__PVT___GEN_17));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__90(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__90\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata_L = (((IData)(vlSelf->__PVT___stage2_stall_T_5) 
                                       & (IData)(vlSelf->__PVT__has_stage2_stall))
                                       ? vlSelf->__PVT__access_sram_rdata_L
                                       : vlSelf->__PVT__sram_rdata_L_Reg);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__91(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__91\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_16)
                               : (IData)(vlSelf->__PVT___GEN_18));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__92(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__92\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_17)
                               : (IData)(vlSelf->__PVT___GEN_19));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__93(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__93\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_18)
                               : (IData)(vlSelf->__PVT___GEN_20));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__94(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__94\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_19)
                               : (IData)(vlSelf->__PVT___GEN_21));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__95(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__95\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_20)
                               : (IData)(vlSelf->__PVT___GEN_22));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__96(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__96\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_21)
                               : (IData)(vlSelf->__PVT___GEN_23));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__97(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__97\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_22)
                               : (IData)(vlSelf->__PVT___GEN_24));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__98(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__98\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_23)
                               : (IData)(vlSelf->__PVT___GEN_25));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__99(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__99\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_24)
                               : (IData)(vlSelf->__PVT___GEN_26));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__100(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__100\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_25)
                               : (IData)(vlSelf->__PVT___GEN_27));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__101(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__101\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_26)
                               : (IData)(vlSelf->__PVT___GEN_28));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__102(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__102\n"); );
    // Body
    vlSelf->__PVT___GEN_30 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_27)
                               : (IData)(vlSelf->__PVT___GEN_29));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__103(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__103\n"); );
    // Body
    vlSelf->__PVT___GEN_31 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_28)
                               : (IData)(vlSelf->__PVT___GEN_30));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__104(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__104\n"); );
    // Body
    vlSelf->__PVT___GEN_32 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_29)
                               : (IData)(vlSelf->__PVT___GEN_31));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__105(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__105\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_30)
                               : (IData)(vlSelf->__PVT___GEN_32));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__106(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__106\n"); );
    // Body
    vlSelf->__PVT___GEN_34 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_31)
                               : (IData)(vlSelf->__PVT___GEN_33));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__107(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__107\n"); );
    // Body
    vlSelf->__PVT___GEN_35 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_32)
                               : (IData)(vlSelf->__PVT___GEN_34));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__108(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__108\n"); );
    // Body
    vlSelf->__PVT___GEN_36 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_33)
                               : (IData)(vlSelf->__PVT___GEN_35));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__109(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__109\n"); );
    // Body
    vlSelf->__PVT___GEN_37 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_34)
                               : (IData)(vlSelf->__PVT___GEN_36));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__110(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__110\n"); );
    // Body
    vlSelf->__PVT___GEN_38 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_35)
                               : (IData)(vlSelf->__PVT___GEN_37));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__111(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__111\n"); );
    // Body
    vlSelf->__PVT___GEN_39 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_36)
                               : (IData)(vlSelf->__PVT___GEN_38));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__112(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__112\n"); );
    // Body
    vlSelf->__PVT___GEN_40 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_37)
                               : (IData)(vlSelf->__PVT___GEN_39));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__113(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__113\n"); );
    // Body
    vlSelf->__PVT___GEN_41 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_38)
                               : (IData)(vlSelf->__PVT___GEN_40));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__114(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__114\n"); );
    // Body
    vlSelf->__PVT___GEN_42 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_39)
                               : (IData)(vlSelf->__PVT___GEN_41));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__115(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__115\n"); );
    // Body
    vlSelf->__PVT___GEN_43 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_40)
                               : (IData)(vlSelf->__PVT___GEN_42));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__116(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__116\n"); );
    // Body
    vlSelf->__PVT___GEN_44 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_41)
                               : (IData)(vlSelf->__PVT___GEN_43));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__117(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__117\n"); );
    // Body
    vlSelf->__PVT___GEN_45 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_42)
                               : (IData)(vlSelf->__PVT___GEN_44));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__118(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__118\n"); );
    // Body
    vlSelf->__PVT___GEN_46 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_43)
                               : (IData)(vlSelf->__PVT___GEN_45));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__119(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__119\n"); );
    // Body
    vlSelf->__PVT___GEN_47 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_44)
                               : (IData)(vlSelf->__PVT___GEN_46));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__120(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__120\n"); );
    // Body
    vlSelf->__PVT___GEN_48 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_45)
                               : (IData)(vlSelf->__PVT___GEN_47));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__121(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__121\n"); );
    // Body
    vlSelf->__PVT___GEN_49 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_46)
                               : (IData)(vlSelf->__PVT___GEN_48));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__122(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__122\n"); );
    // Body
    vlSelf->__PVT___GEN_50 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_47)
                               : (IData)(vlSelf->__PVT___GEN_49));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__123(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__123\n"); );
    // Body
    vlSelf->__PVT___GEN_51 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_48)
                               : (IData)(vlSelf->__PVT___GEN_50));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__124(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__124\n"); );
    // Body
    vlSelf->__PVT___GEN_52 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_49)
                               : (IData)(vlSelf->__PVT___GEN_51));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__125(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__125\n"); );
    // Body
    vlSelf->__PVT___GEN_53 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_50)
                               : (IData)(vlSelf->__PVT___GEN_52));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__126(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__126\n"); );
    // Body
    vlSelf->__PVT___GEN_54 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_51)
                               : (IData)(vlSelf->__PVT___GEN_53));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__127(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__127\n"); );
    // Body
    vlSelf->__PVT___GEN_55 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_52)
                               : (IData)(vlSelf->__PVT___GEN_54));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__128(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__128\n"); );
    // Body
    vlSelf->__PVT___GEN_56 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_53)
                               : (IData)(vlSelf->__PVT___GEN_55));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__129(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__129\n"); );
    // Body
    vlSelf->__PVT___GEN_57 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_54)
                               : (IData)(vlSelf->__PVT___GEN_56));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__130(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__130\n"); );
    // Body
    vlSelf->__PVT___GEN_58 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_55)
                               : (IData)(vlSelf->__PVT___GEN_57));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__131(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__131\n"); );
    // Body
    vlSelf->__PVT___GEN_59 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_56)
                               : (IData)(vlSelf->__PVT___GEN_58));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__132(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__132\n"); );
    // Body
    vlSelf->__PVT___GEN_60 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_57)
                               : (IData)(vlSelf->__PVT___GEN_59));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__133(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__133\n"); );
    // Body
    vlSelf->__PVT___GEN_61 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_58)
                               : (IData)(vlSelf->__PVT___GEN_60));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__134(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__134\n"); );
    // Body
    vlSelf->__PVT___GEN_62 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_59)
                               : (IData)(vlSelf->__PVT___GEN_61));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__135(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__135\n"); );
    // Body
    vlSelf->__PVT___GEN_63 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_60)
                               : (IData)(vlSelf->__PVT___GEN_62));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__136(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__136\n"); );
    // Body
    vlSelf->__PVT___GEN_64 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_61)
                               : (IData)(vlSelf->__PVT___GEN_63));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__137(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__137\n"); );
    // Body
    vlSelf->__PVT___GEN_65 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_62)
                               : (IData)(vlSelf->__PVT___GEN_64));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__138(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__138\n"); );
    // Body
    vlSelf->__PVT___GEN_66 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_63)
                               : (IData)(vlSelf->__PVT___GEN_65));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__139(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__139\n"); );
    // Body
    vlSelf->__PVT___GEN_67 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_64)
                               : (IData)(vlSelf->__PVT___GEN_66));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__140(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__140\n"); );
    // Body
    vlSelf->__PVT___GEN_68 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_65)
                               : (IData)(vlSelf->__PVT___GEN_67));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__141(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__141\n"); );
    // Body
    vlSelf->__PVT___GEN_69 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_66)
                               : (IData)(vlSelf->__PVT___GEN_68));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__142(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__142\n"); );
    // Body
    vlSelf->__PVT___GEN_70 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_67)
                               : (IData)(vlSelf->__PVT___GEN_69));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__143(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__143\n"); );
    // Body
    vlSelf->__PVT___GEN_71 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_68)
                               : (IData)(vlSelf->__PVT___GEN_70));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__144(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__144\n"); );
    // Body
    vlSelf->__PVT___GEN_72 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_69)
                               : (IData)(vlSelf->__PVT___GEN_71));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__145(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__145\n"); );
    // Body
    vlSelf->__PVT___GEN_73 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_70)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__146(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__146\n"); );
    // Body
    vlSelf->__PVT___GEN_74 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_71)
                               : (IData)(vlSelf->__PVT___GEN_73));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__147(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__147\n"); );
    // Body
    vlSelf->__PVT___GEN_75 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_72)
                               : (IData)(vlSelf->__PVT___GEN_74));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__148(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__148\n"); );
    // Body
    vlSelf->__PVT___GEN_76 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_73)
                               : (IData)(vlSelf->__PVT___GEN_75));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__149(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__149\n"); );
    // Body
    vlSelf->__PVT___GEN_77 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_74)
                               : (IData)(vlSelf->__PVT___GEN_76));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__150(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__150\n"); );
    // Body
    vlSelf->__PVT___GEN_78 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_75)
                               : (IData)(vlSelf->__PVT___GEN_77));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__151(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__151\n"); );
    // Body
    vlSelf->__PVT___GEN_79 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_76)
                               : (IData)(vlSelf->__PVT___GEN_78));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__152(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__152\n"); );
    // Body
    vlSelf->__PVT___GEN_80 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_77)
                               : (IData)(vlSelf->__PVT___GEN_79));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__153(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__153\n"); );
    // Body
    vlSelf->__PVT___GEN_81 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_78)
                               : (IData)(vlSelf->__PVT___GEN_80));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__154(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__154\n"); );
    // Body
    vlSelf->__PVT___GEN_82 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_79)
                               : (IData)(vlSelf->__PVT___GEN_81));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__155(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__155\n"); );
    // Body
    vlSelf->__PVT___GEN_83 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_80)
                               : (IData)(vlSelf->__PVT___GEN_82));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__156(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__156\n"); );
    // Body
    vlSelf->__PVT___GEN_84 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_81)
                               : (IData)(vlSelf->__PVT___GEN_83));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__157(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__157\n"); );
    // Body
    vlSelf->__PVT___GEN_85 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_82)
                               : (IData)(vlSelf->__PVT___GEN_84));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__158(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__158\n"); );
    // Body
    vlSelf->__PVT___GEN_86 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_83)
                               : (IData)(vlSelf->__PVT___GEN_85));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__159(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__159\n"); );
    // Body
    vlSelf->__PVT___GEN_87 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_84)
                               : (IData)(vlSelf->__PVT___GEN_86));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__160(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__160\n"); );
    // Body
    vlSelf->__PVT___GEN_88 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_85)
                               : (IData)(vlSelf->__PVT___GEN_87));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__161(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__161\n"); );
    // Body
    vlSelf->__PVT___GEN_89 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_86)
                               : (IData)(vlSelf->__PVT___GEN_88));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__162(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__162\n"); );
    // Body
    vlSelf->__PVT___GEN_90 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_87)
                               : (IData)(vlSelf->__PVT___GEN_89));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__163(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__163\n"); );
    // Body
    vlSelf->__PVT___GEN_91 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_88)
                               : (IData)(vlSelf->__PVT___GEN_90));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__164(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__164\n"); );
    // Body
    vlSelf->__PVT___GEN_92 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_89)
                               : (IData)(vlSelf->__PVT___GEN_91));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__165(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__165\n"); );
    // Body
    vlSelf->__PVT___GEN_93 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_90)
                               : (IData)(vlSelf->__PVT___GEN_92));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__166(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__166\n"); );
    // Body
    vlSelf->__PVT___GEN_94 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_91)
                               : (IData)(vlSelf->__PVT___GEN_93));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__167(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__167\n"); );
    // Body
    vlSelf->__PVT___GEN_95 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_92)
                               : (IData)(vlSelf->__PVT___GEN_94));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__168(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__168\n"); );
    // Body
    vlSelf->__PVT___GEN_96 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_93)
                               : (IData)(vlSelf->__PVT___GEN_95));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__169(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__169\n"); );
    // Body
    vlSelf->__PVT___GEN_97 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_94)
                               : (IData)(vlSelf->__PVT___GEN_96));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__170(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__170\n"); );
    // Body
    vlSelf->__PVT___GEN_98 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_95)
                               : (IData)(vlSelf->__PVT___GEN_97));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__171(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__171\n"); );
    // Body
    vlSelf->__PVT___GEN_99 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_96)
                               : (IData)(vlSelf->__PVT___GEN_98));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__172(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__172\n"); );
    // Body
    vlSelf->__PVT___GEN_100 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_97)
                                : (IData)(vlSelf->__PVT___GEN_99));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__173(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__173\n"); );
    // Body
    vlSelf->__PVT___GEN_101 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_98)
                                : (IData)(vlSelf->__PVT___GEN_100));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__174(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__174\n"); );
    // Body
    vlSelf->__PVT___GEN_102 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_99)
                                : (IData)(vlSelf->__PVT___GEN_101));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__175(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__175\n"); );
    // Body
    vlSelf->__PVT___GEN_103 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_100)
                                : (IData)(vlSelf->__PVT___GEN_102));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__176(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__176\n"); );
    // Body
    vlSelf->__PVT___GEN_104 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_101)
                                : (IData)(vlSelf->__PVT___GEN_103));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__177(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__177\n"); );
    // Body
    vlSelf->__PVT___GEN_105 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_102)
                                : (IData)(vlSelf->__PVT___GEN_104));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__178(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__178\n"); );
    // Body
    vlSelf->__PVT___GEN_106 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_103)
                                : (IData)(vlSelf->__PVT___GEN_105));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__179(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__179\n"); );
    // Body
    vlSelf->__PVT___GEN_107 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_104)
                                : (IData)(vlSelf->__PVT___GEN_106));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__180(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__180\n"); );
    // Body
    vlSelf->__PVT___GEN_108 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_105)
                                : (IData)(vlSelf->__PVT___GEN_107));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__181(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__181\n"); );
    // Body
    vlSelf->__PVT___GEN_109 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_106)
                                : (IData)(vlSelf->__PVT___GEN_108));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__182(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__182\n"); );
    // Body
    vlSelf->__PVT___GEN_110 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_107)
                                : (IData)(vlSelf->__PVT___GEN_109));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__183(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__183\n"); );
    // Body
    vlSelf->__PVT___GEN_111 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_108)
                                : (IData)(vlSelf->__PVT___GEN_110));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__184(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__184\n"); );
    // Body
    vlSelf->__PVT___GEN_112 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_109)
                                : (IData)(vlSelf->__PVT___GEN_111));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__185(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__185\n"); );
    // Body
    vlSelf->__PVT___GEN_113 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_110)
                                : (IData)(vlSelf->__PVT___GEN_112));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__186(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__186\n"); );
    // Body
    vlSelf->__PVT___GEN_114 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_111)
                                : (IData)(vlSelf->__PVT___GEN_113));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__187(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__187\n"); );
    // Body
    vlSelf->__PVT___GEN_115 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_112)
                                : (IData)(vlSelf->__PVT___GEN_114));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__188(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__188\n"); );
    // Body
    vlSelf->__PVT___GEN_116 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_113)
                                : (IData)(vlSelf->__PVT___GEN_115));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__189(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__189\n"); );
    // Body
    vlSelf->__PVT___GEN_117 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_114)
                                : (IData)(vlSelf->__PVT___GEN_116));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__190(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__190\n"); );
    // Body
    vlSelf->__PVT___GEN_118 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_115)
                                : (IData)(vlSelf->__PVT___GEN_117));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__191(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__191\n"); );
    // Body
    vlSelf->__PVT___GEN_119 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_116)
                                : (IData)(vlSelf->__PVT___GEN_118));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__192(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__192\n"); );
    // Body
    vlSelf->__PVT___GEN_120 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_117)
                                : (IData)(vlSelf->__PVT___GEN_119));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__193(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__193\n"); );
    // Body
    vlSelf->__PVT___GEN_121 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_118)
                                : (IData)(vlSelf->__PVT___GEN_120));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__194(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__194\n"); );
    // Body
    vlSelf->__PVT___GEN_122 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_119)
                                : (IData)(vlSelf->__PVT___GEN_121));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__195(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__195\n"); );
    // Body
    vlSelf->__PVT___GEN_123 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_120)
                                : (IData)(vlSelf->__PVT___GEN_122));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__196(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__196\n"); );
    // Body
    vlSelf->__PVT___GEN_124 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_121)
                                : (IData)(vlSelf->__PVT___GEN_123));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__197(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__197\n"); );
    // Body
    vlSelf->__PVT___GEN_125 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_122)
                                : (IData)(vlSelf->__PVT___GEN_124));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__198(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__198\n"); );
    // Body
    vlSelf->__PVT___GEN_126 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_123)
                                : (IData)(vlSelf->__PVT___GEN_125));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__199(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__199\n"); );
    // Body
    vlSelf->__PVT___GEN_127 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_124)
                                : (IData)(vlSelf->__PVT___GEN_126));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__200(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__200\n"); );
    // Body
    vlSelf->__PVT___GEN_128 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_125)
                                : (IData)(vlSelf->__PVT___GEN_127));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__201(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__201\n"); );
    // Body
    vlSelf->__PVT___GEN_129 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_126)
                                : (IData)(vlSelf->__PVT___GEN_128));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__202(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__202\n"); );
    // Body
    vlSelf->__PVT___GEN_130 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_127)
                                : (IData)(vlSelf->__PVT___GEN_129));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__203(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__203\n"); );
    // Body
    vlSelf->__PVT__icache_tag_1_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                          & (IData)(vlSelf->__PVT___GEN_130));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__204(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__204\n"); );
    // Body
    vlSelf->__PVT___icache_data_way1_0_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___wait_data_L_T_3));
    vlSelf->__PVT___icache_data_way1_1_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_1_wen_T_6));
    vlSelf->__PVT___icache_data_way1_2_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_2_wen_T_6));
    vlSelf->__PVT___icache_data_way1_3_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_3_wen_T_6));
    vlSelf->__PVT___icache_data_way1_4_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_4_wen_T_6));
    vlSelf->__PVT___icache_data_way1_5_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_5_wen_T_6));
    vlSelf->__PVT___icache_data_way1_6_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_6_wen_T_6));
    vlSelf->__PVT___icache_data_way1_7_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___GEN_130)) 
                                                  & (IData)(vlSelf->__PVT___icache_data_way0_7_wen_T_6));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__205(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__205\n"); );
    // Body
    vlSelf->__PVT___lru_T_8 = (1U & (~ (IData)(vlSelf->__PVT___GEN_130)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__207(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__207\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                        & (IData)(vlSelf->__PVT___lru_T_8));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__208(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__208\n"); );
    // Body
    vlSelf->__PVT__icache_data_8_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_0_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_9_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_1_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_10_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_2_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
    vlSelf->__PVT__icache_data_11_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_3_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
    vlSelf->__PVT__icache_data_12_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_4_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
    vlSelf->__PVT__icache_data_13_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_5_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
    vlSelf->__PVT__icache_data_14_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_6_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
    vlSelf->__PVT__icache_data_15_io_wen = ((IData)(vlSelf->__PVT___icache_data_way1_7_wen_T_7)
                                             ? 0x1fU
                                             : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__209(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__209\n"); );
    // Body
    vlSelf->__PVT___icache_data_way0_0_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (IData)(vlSelf->__PVT___wait_data_L_T_3));
    vlSelf->__PVT___icache_data_way0_1_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_2_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_3_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_4_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_5_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (5U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_6_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___icache_data_way0_7_wen_T_7 = (((IData)(vlSelf->__PVT___wait_data_L_T_7) 
                                                   & (IData)(vlSelf->__PVT___lru_T_8)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->__PVT__write_counter)));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__212(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__212\n"); );
    // Body
    vlSelf->__PVT__icache_data_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_0_wen_T_7)
                                          ? 0x1fU : 0U);
    vlSelf->__PVT__icache_data_1_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_1_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_2_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_2_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_3_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_3_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_4_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_4_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_5_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_5_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_6_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_6_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
    vlSelf->__PVT__icache_data_7_io_wen = ((IData)(vlSelf->__PVT___icache_data_way0_7_wen_T_7)
                                            ? 0x1fU
                                            : 0U);
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__215(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__215\n"); );
    // Body
    vlSelf->__PVT___hit_T_2 = ((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_io_valid));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__216(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__216\n"); );
    // Body
    vlSelf->__PVT___hit_T = vlSelf->__PVT__icache_tag_io_hit;
    vlSelf->__PVT___hit_T_3 = vlSelf->__PVT__icache_tag_1_io_hit;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__217(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__217\n"); );
    // Body
    vlSelf->__PVT___hit_T_5 = ((IData)(vlSelf->__PVT__icache_tag_1_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_1_io_valid));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__218(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__218\n"); );
    // Body
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_3)) 
                               & (IData)(vlSelf->__PVT___GEN_130));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__219(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__219\n"); );
    // Body
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                           & (IData)(vlSelf->__PVT__icache_tag_io_valid)) 
                          | (IData)(vlSelf->__PVT___hit_T_5));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__220(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__220\n"); );
    // Body
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__221(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__221\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_22 = ((IData)(vlSelf->__PVT__hit)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_21));
    vlSelf->__PVT___access_work_state_T_34 = ((IData)(vlSelf->__PVT__hit)
                                               ? VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___access_work_state_T_29))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_33));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__222(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__222\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_47 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_34))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_46));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__223(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__223\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_48 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_22))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__224(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__224\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_49 = ((IData)(vlSelf->__PVT___stage1_finished_T_2)
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_7))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_48));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__225(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__225\n"); );
    // Body
    vlSelf->__PVT__access_work_state = (((2U == (IData)(vlSelf->__PVT__work_state)) 
                                         & (IData)(vlSelf->__PVT__io_port_arready))
                                         ? 3U : (IData)(vlSelf->__PVT___access_work_state_T_49));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__226(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__226\n"); );
    // Body
    vlSelf->__PVT___stage2_stall_T = (1U == (IData)(vlSelf->__PVT__access_work_state));
    vlSelf->__PVT__stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                    | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                   & (IData)(vlSelf->__PVT___stage2_stall_T_5));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__227(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__227\n"); );
    // Body
    vlSelf->__PVT__io_stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                       | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                      & (IData)(vlSelf->__PVT___stage2_stall_T_5));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__228(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__228\n"); );
    // Body
    vlSelf->__PVT__stage1_flush = ((~ (IData)(vlSelf->__PVT__io_sram_req)) 
                                   & (IData)(vlSelf->__PVT__io_stage1_valid_flush));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__229(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___settle__TOP__mycpu_top__inst_cache__229\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req) 
                                               | (IData)(vlSelf->__PVT__stage1_flush));
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___ctor_var_reset(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_port_araddr = 0;
    vlSelf->__PVT__io_port_arlen = 0;
    vlSelf->__PVT__io_port_arburst = 0;
    vlSelf->__PVT__io_port_arvalid = 0;
    vlSelf->__PVT__io_port_arready = 0;
    vlSelf->__PVT__io_port_rdata = 0;
    vlSelf->__PVT__io_port_rlast = 0;
    vlSelf->__PVT__io_port_rvalid = 0;
    vlSelf->__PVT__io_stage2_flush = 0;
    vlSelf->__PVT__io_stage2_stall = 0;
    vlSelf->__PVT__io_stage1_valid_flush = 0;
    vlSelf->__PVT__io_inst_ready_to_use = 0;
    vlSelf->__PVT__io_inst_buffer_full = 0;
    vlSelf->__PVT__io_v_addr_for_tlb = 0;
    vlSelf->__PVT__io_p_addr_for_tlb = 0;
    vlSelf->__PVT__io_sram_req = 0;
    vlSelf->__PVT__io_sram_addr = 0;
    vlSelf->__PVT__io_sram_write_en = 0;
    vlSelf->__PVT__io_sram_rdata_L = 0;
    vlSelf->__PVT__io_sram_cache = 0;
    vlSelf->__PVT__icache_tag_clock = 0;
    vlSelf->__PVT__icache_tag_reset = 0;
    vlSelf->__PVT__icache_tag_io_wen = 0;
    vlSelf->__PVT__icache_tag_io_wdata = 0;
    vlSelf->__PVT__icache_tag_io_addr = 0;
    vlSelf->__PVT__icache_tag_io_hit = 0;
    vlSelf->__PVT__icache_tag_io_valid = 0;
    vlSelf->__PVT__icache_tag_1_clock = 0;
    vlSelf->__PVT__icache_tag_1_reset = 0;
    vlSelf->__PVT__icache_tag_1_io_wen = 0;
    vlSelf->__PVT__icache_tag_1_io_wdata = 0;
    vlSelf->__PVT__icache_tag_1_io_addr = 0;
    vlSelf->__PVT__icache_tag_1_io_hit = 0;
    vlSelf->__PVT__icache_tag_1_io_valid = 0;
    vlSelf->__PVT__icache_data_clock = 0;
    vlSelf->__PVT__icache_data_reset = 0;
    vlSelf->__PVT__icache_data_io_wen = 0;
    vlSelf->__PVT__icache_data_io_addr = 0;
    vlSelf->__PVT__icache_data_io_wdata = 0;
    vlSelf->__PVT__icache_data_io_rdata = 0;
    vlSelf->__PVT__icache_data_1_clock = 0;
    vlSelf->__PVT__icache_data_1_reset = 0;
    vlSelf->__PVT__icache_data_1_io_wen = 0;
    vlSelf->__PVT__icache_data_1_io_addr = 0;
    vlSelf->__PVT__icache_data_1_io_wdata = 0;
    vlSelf->__PVT__icache_data_1_io_rdata = 0;
    vlSelf->__PVT__icache_data_2_clock = 0;
    vlSelf->__PVT__icache_data_2_reset = 0;
    vlSelf->__PVT__icache_data_2_io_wen = 0;
    vlSelf->__PVT__icache_data_2_io_addr = 0;
    vlSelf->__PVT__icache_data_2_io_wdata = 0;
    vlSelf->__PVT__icache_data_2_io_rdata = 0;
    vlSelf->__PVT__icache_data_3_clock = 0;
    vlSelf->__PVT__icache_data_3_reset = 0;
    vlSelf->__PVT__icache_data_3_io_wen = 0;
    vlSelf->__PVT__icache_data_3_io_addr = 0;
    vlSelf->__PVT__icache_data_3_io_wdata = 0;
    vlSelf->__PVT__icache_data_3_io_rdata = 0;
    vlSelf->__PVT__icache_data_4_clock = 0;
    vlSelf->__PVT__icache_data_4_reset = 0;
    vlSelf->__PVT__icache_data_4_io_wen = 0;
    vlSelf->__PVT__icache_data_4_io_addr = 0;
    vlSelf->__PVT__icache_data_4_io_wdata = 0;
    vlSelf->__PVT__icache_data_4_io_rdata = 0;
    vlSelf->__PVT__icache_data_5_clock = 0;
    vlSelf->__PVT__icache_data_5_reset = 0;
    vlSelf->__PVT__icache_data_5_io_wen = 0;
    vlSelf->__PVT__icache_data_5_io_addr = 0;
    vlSelf->__PVT__icache_data_5_io_wdata = 0;
    vlSelf->__PVT__icache_data_5_io_rdata = 0;
    vlSelf->__PVT__icache_data_6_clock = 0;
    vlSelf->__PVT__icache_data_6_reset = 0;
    vlSelf->__PVT__icache_data_6_io_wen = 0;
    vlSelf->__PVT__icache_data_6_io_addr = 0;
    vlSelf->__PVT__icache_data_6_io_wdata = 0;
    vlSelf->__PVT__icache_data_6_io_rdata = 0;
    vlSelf->__PVT__icache_data_7_clock = 0;
    vlSelf->__PVT__icache_data_7_reset = 0;
    vlSelf->__PVT__icache_data_7_io_wen = 0;
    vlSelf->__PVT__icache_data_7_io_addr = 0;
    vlSelf->__PVT__icache_data_7_io_wdata = 0;
    vlSelf->__PVT__icache_data_7_io_rdata = 0;
    vlSelf->__PVT__icache_data_8_clock = 0;
    vlSelf->__PVT__icache_data_8_reset = 0;
    vlSelf->__PVT__icache_data_8_io_wen = 0;
    vlSelf->__PVT__icache_data_8_io_addr = 0;
    vlSelf->__PVT__icache_data_8_io_wdata = 0;
    vlSelf->__PVT__icache_data_8_io_rdata = 0;
    vlSelf->__PVT__icache_data_9_clock = 0;
    vlSelf->__PVT__icache_data_9_reset = 0;
    vlSelf->__PVT__icache_data_9_io_wen = 0;
    vlSelf->__PVT__icache_data_9_io_addr = 0;
    vlSelf->__PVT__icache_data_9_io_wdata = 0;
    vlSelf->__PVT__icache_data_9_io_rdata = 0;
    vlSelf->__PVT__icache_data_10_clock = 0;
    vlSelf->__PVT__icache_data_10_reset = 0;
    vlSelf->__PVT__icache_data_10_io_wen = 0;
    vlSelf->__PVT__icache_data_10_io_addr = 0;
    vlSelf->__PVT__icache_data_10_io_wdata = 0;
    vlSelf->__PVT__icache_data_10_io_rdata = 0;
    vlSelf->__PVT__icache_data_11_clock = 0;
    vlSelf->__PVT__icache_data_11_reset = 0;
    vlSelf->__PVT__icache_data_11_io_wen = 0;
    vlSelf->__PVT__icache_data_11_io_addr = 0;
    vlSelf->__PVT__icache_data_11_io_wdata = 0;
    vlSelf->__PVT__icache_data_11_io_rdata = 0;
    vlSelf->__PVT__icache_data_12_clock = 0;
    vlSelf->__PVT__icache_data_12_reset = 0;
    vlSelf->__PVT__icache_data_12_io_wen = 0;
    vlSelf->__PVT__icache_data_12_io_addr = 0;
    vlSelf->__PVT__icache_data_12_io_wdata = 0;
    vlSelf->__PVT__icache_data_12_io_rdata = 0;
    vlSelf->__PVT__icache_data_13_clock = 0;
    vlSelf->__PVT__icache_data_13_reset = 0;
    vlSelf->__PVT__icache_data_13_io_wen = 0;
    vlSelf->__PVT__icache_data_13_io_addr = 0;
    vlSelf->__PVT__icache_data_13_io_wdata = 0;
    vlSelf->__PVT__icache_data_13_io_rdata = 0;
    vlSelf->__PVT__icache_data_14_clock = 0;
    vlSelf->__PVT__icache_data_14_reset = 0;
    vlSelf->__PVT__icache_data_14_io_wen = 0;
    vlSelf->__PVT__icache_data_14_io_addr = 0;
    vlSelf->__PVT__icache_data_14_io_wdata = 0;
    vlSelf->__PVT__icache_data_14_io_rdata = 0;
    vlSelf->__PVT__icache_data_15_clock = 0;
    vlSelf->__PVT__icache_data_15_reset = 0;
    vlSelf->__PVT__icache_data_15_io_wen = 0;
    vlSelf->__PVT__icache_data_15_io_addr = 0;
    vlSelf->__PVT__icache_data_15_io_wdata = 0;
    vlSelf->__PVT__icache_data_15_io_rdata = 0;
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
    vlSelf->__PVT__work_state = 0;
    vlSelf->__PVT__write_counter = 0;
    vlSelf->__PVT__wait_data_L = 0;
    vlSelf->__PVT__stage1_flush = 0;
    vlSelf->__PVT__stage1_stall_reg = 0;
    vlSelf->__PVT__stage1_addr_line_mapping = 0;
    vlSelf->__PVT__stage1_sram_phy_addr_reg = 0;
    vlSelf->__PVT__stage1_sram_cache_reg = 0;
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = 0;
    vlSelf->__PVT__stage1_sram_req_reg = 0;
    vlSelf->__PVT__stage1_finished = 0;
    vlSelf->__PVT___stage1_finished_T_1 = 0;
    vlSelf->__PVT___stage1_finished_T_2 = 0;
    vlSelf->__PVT___access_work_state_T = 0;
    vlSelf->__PVT___access_work_state_T_6 = 0;
    vlSelf->__PVT___access_work_state_T_7 = 0;
    vlSelf->__PVT___access_work_state_T_8 = 0;
    vlSelf->__PVT___hit_T = 0;
    vlSelf->__PVT___hit_T_2 = 0;
    vlSelf->__PVT___hit_T_3 = 0;
    vlSelf->__PVT___hit_T_5 = 0;
    vlSelf->__PVT__hit = 0;
    vlSelf->__PVT___access_work_state_T_13 = 0;
    vlSelf->__PVT___access_work_state_T_14 = 0;
    vlSelf->__PVT___access_work_state_T_15 = 0;
    vlSelf->__PVT___access_work_state_T_18 = 0;
    vlSelf->__PVT___access_work_state_T_20 = 0;
    vlSelf->__PVT___access_work_state_T_21 = 0;
    vlSelf->__PVT___access_work_state_T_22 = 0;
    vlSelf->__PVT___access_work_state_T_23 = 0;
    vlSelf->__PVT___access_work_state_T_28 = 0;
    vlSelf->__PVT___access_work_state_T_29 = 0;
    vlSelf->__PVT___access_work_state_T_32 = 0;
    vlSelf->__PVT___access_work_state_T_33 = 0;
    vlSelf->__PVT___access_work_state_T_34 = 0;
    vlSelf->__PVT___access_work_state_T_35 = 0;
    vlSelf->__PVT___access_work_state_T_38 = 0;
    vlSelf->__PVT___access_work_state_T_42 = 0;
    vlSelf->__PVT___access_work_state_T_44 = 0;
    vlSelf->__PVT___access_work_state_T_45 = 0;
    vlSelf->__PVT___access_work_state_T_46 = 0;
    vlSelf->__PVT___access_work_state_T_47 = 0;
    vlSelf->__PVT___access_work_state_T_48 = 0;
    vlSelf->__PVT___access_work_state_T_49 = 0;
    vlSelf->__PVT__access_work_state = 0;
    vlSelf->__PVT___stage2_stall_T = 0;
    vlSelf->__PVT___stage2_stall_T_5 = 0;
    vlSelf->__PVT__stage2_stall = 0;
    vlSelf->__PVT__decoder_inst_data_opD = 0;
    vlSelf->__PVT__decoder_inst_data_Funct3D = 0;
    vlSelf->__PVT___decoder_inst_data_T_4 = 0;
    vlSelf->__PVT___decoder_inst_data_T_6 = 0;
    vlSelf->__PVT___decoder_inst_data_T_8 = 0;
    vlSelf->__PVT___decoder_inst_data_T_10 = 0;
    vlSelf->__PVT___decoder_inst_data_T_12 = 0;
    vlSelf->__PVT___decoder_inst_data_T_14 = 0;
    vlSelf->__PVT___decoder_inst_data_T_18 = 0;
    vlSelf->__PVT___decoder_inst_data_T_20 = 0;
    vlSelf->__PVT___decoder_inst_data_T_22 = 0;
    vlSelf->__PVT__decoder_inst_data_lo = 0;
    vlSelf->__PVT__decoder_inst_data_hi = 0;
    vlSelf->__PVT__decoder_inst_data = 0;
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
    vlSelf->__PVT___GEN_129 = 0;
    vlSelf->__PVT___GEN_130 = 0;
    vlSelf->__PVT___lru_T_4 = 0;
    vlSelf->__PVT___lru_T_5 = 0;
    vlSelf->__PVT___lru_T_8 = 0;
    vlSelf->__PVT__stage2_sram_addr_reg = 0;
    vlSelf->__PVT__stage2_sram_req_reg = 0;
    vlSelf->__PVT__stage2_hit0_reg = 0;
    vlSelf->__PVT__stage2_write_en_reg = 0;
    vlSelf->__PVT__icache_data_way0_0_rdata = 0;
    vlSelf->__PVT__icache_data_way0_1_rdata = 0;
    vlSelf->__PVT___GEN_516 = 0;
    vlSelf->__PVT__icache_data_way0_2_rdata = 0;
    vlSelf->__PVT___GEN_517 = 0;
    vlSelf->__PVT__icache_data_way0_3_rdata = 0;
    vlSelf->__PVT___GEN_518 = 0;
    vlSelf->__PVT__icache_data_way0_4_rdata = 0;
    vlSelf->__PVT___GEN_519 = 0;
    vlSelf->__PVT__icache_data_way0_5_rdata = 0;
    vlSelf->__PVT___GEN_520 = 0;
    vlSelf->__PVT__icache_data_way0_6_rdata = 0;
    vlSelf->__PVT___GEN_521 = 0;
    vlSelf->__PVT__icache_data_way0_7_rdata = 0;
    vlSelf->__PVT___GEN_522 = 0;
    vlSelf->__PVT__icache_data_way1_0_rdata = 0;
    vlSelf->__PVT__icache_data_way1_1_rdata = 0;
    vlSelf->__PVT___GEN_524 = 0;
    vlSelf->__PVT__icache_data_way1_2_rdata = 0;
    vlSelf->__PVT___GEN_525 = 0;
    vlSelf->__PVT__icache_data_way1_3_rdata = 0;
    vlSelf->__PVT___GEN_526 = 0;
    vlSelf->__PVT__icache_data_way1_4_rdata = 0;
    vlSelf->__PVT___GEN_527 = 0;
    vlSelf->__PVT__icache_data_way1_5_rdata = 0;
    vlSelf->__PVT___GEN_528 = 0;
    vlSelf->__PVT__icache_data_way1_6_rdata = 0;
    vlSelf->__PVT___GEN_529 = 0;
    vlSelf->__PVT__icache_data_way1_7_rdata = 0;
    vlSelf->__PVT___GEN_530 = 0;
    vlSelf->__PVT__hit_word_L = 0;
    vlSelf->__PVT__has_stage2_stall = 0;
    vlSelf->__PVT__sram_rdata_L_Reg = 0;
    vlSelf->__PVT___access_sram_rdata_L_T_2 = 0;
    vlSelf->__PVT__access_sram_rdata_L = 0;
    vlSelf->__PVT___wait_data_L_T_3 = 0;
    vlSelf->__PVT___wait_data_L_T_7 = 0;
    vlSelf->__PVT___write_counter_T_8 = 0;
    vlSelf->__PVT___icache_data_way0_0_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_1_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_1_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_2_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_2_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_3_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_3_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_4_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_4_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_5_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_5_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_6_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_6_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way0_7_wen_T_6 = 0;
    vlSelf->__PVT___icache_data_way0_7_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_0_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_1_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_2_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_3_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_4_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_5_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_6_wen_T_7 = 0;
    vlSelf->__PVT___icache_data_way1_7_wen_T_7 = 0;
    vlSelf->__PVT___T_13 = 0;
    vlSelf->__PVT___io_port_araddr_T_3 = 0;
    vlSelf->__PVT___io_port_araddr_T_4 = 0;
    vlSelf->__PVT___io_port_arlen_T_1 = 0;
    vlSelf->__PVT___io_sram_write_en_T_3 = 0;
    vlSelf->__PVT___io_sram_write_en_T_5 = 0;
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
    vlSelf->__Vdly__work_state = 0;
    vlSelf->__Vdly__write_counter = 0;
    vlSelf->__Vdly__wait_data_L = 0;
    vlSelf->__Vdly__stage1_stall_reg = 0;
    vlSelf->__Vdly__stage1_addr_line_mapping = 0;
    vlSelf->__Vdly__stage1_sram_phy_addr_reg = 0;
    vlSelf->__Vdly__stage1_sram_cache_reg = 0;
    vlSelf->__Vdly__stage1_sram_req_reg = 0;
    vlSelf->__Vdly__stage1_finished = 0;
    vlSelf->__Vdly__stage2_sram_addr_reg = 0;
    vlSelf->__Vdly__stage2_sram_req_reg = 0;
    vlSelf->__Vdly__stage2_hit0_reg = 0;
    vlSelf->__Vdly__stage2_write_en_reg = 0;
    vlSelf->__Vdly__has_stage2_stall = 0;
    vlSelf->__Vdly__sram_rdata_L_Reg = 0;
}
