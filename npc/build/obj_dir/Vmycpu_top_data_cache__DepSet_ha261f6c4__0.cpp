// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__7\n"); );
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
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_8_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_9_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_13_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_15_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT__dcache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT__dcache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT__dcache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT__dcache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT__dcache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__dcache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT__dcache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT__dcache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT__dcache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__37(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__37\n"); );
    // Body
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_awlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__stage1_sram_wr_reg = vlSelf->__Vdly__stage1_sram_wr_reg;
    vlSelf->__PVT___state_ready_lookup_should_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_2)
            : 0x19U);
    vlSelf->__PVT__wait_data = vlSelf->__Vdly__wait_data;
    vlSelf->__PVT__stage2_hit0_reg = vlSelf->__Vdly__stage2_hit0_reg;
    vlSelf->__Vdly__read_counter = vlSelf->__PVT__read_counter;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst 
        = vlSelf->__PVT__io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst 
        = vlSelf->__PVT__io_port_arburst;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__38(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__38\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_3)
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_5));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_12 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 3U : 1U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_15 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 8U : 0xcU);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__read_counter = 0U;
    } else if (vlSelf->__PVT___wait_data_T_3) {
        vlSelf->__Vdly__read_counter = vlSelf->__PVT___read_counter_T_8;
    } else if ((0U == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__read_counter = vlSelf->__PVT___read_counter_T_8;
    }
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arburst 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awburst 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awlen 
        = vlSelf->__PVT__io_port_awlen;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arlen 
        = vlSelf->__PVT__io_port_arlen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__39(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__39\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_6)
            : 0x19U);
    vlSelf->__PVT__work_state = vlSelf->__Vdly__work_state;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arlen;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awlen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__40(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__40\n"); );
    // Body
    vlSelf->__PVT___T_29 = (3U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___wait_data_T_3 = (0xdU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_9 = (0U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_sram_data_ok_T_1 = (0x18U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___cache_wdata_T_3 = (0x19U == (IData)(vlSelf->__PVT__work_state));
    vlSymsp->TOP.axi_mem_port_1_awburst = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awburst;
    vlSymsp->TOP.axi_mem_port_1_arburst = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arburst;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__41(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__41\n"); );
    // Body
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSymsp->TOP.axi_mem_port_1_awlen = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awlen;
    vlSymsp->TOP.axi_mem_port_1_arlen = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arlen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__42(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__42\n"); );
    // Body
    vlSelf->__PVT__dcache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__43(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__43\n"); );
    // Body
    vlSelf->__PVT__dcache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__47(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__47\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_1_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_11_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_12_io_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_tag_1_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_wready = vlSymsp->TOP.axi_mem_port_1_wready;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awready 
        = vlSymsp->TOP.axi_mem_port_1_awready;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arready 
        = vlSymsp->TOP.axi_mem_port_1_arready;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_reset 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top.aresetn)));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wready 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_wready;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awready 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awready;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arready 
        = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arready;
    vlSelf->__PVT__io_port_wready = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wready;
    vlSelf->__PVT__io_port_arready = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arready;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_1_reset;
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
    vlSelf->__PVT___access_work_state_T_1 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 2U : (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_41 = ((2U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_39));
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_1 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_129 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_9 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_3 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_15 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_2 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_130 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_129);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_45 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_39 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_33 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_27 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_9) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_21 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_15 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_9 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_3) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_12 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_6 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_12 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__57(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__57\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_3 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_131 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_130);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_129 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_1)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_10 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_3) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_13 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_12)
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_17 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_12)
            ? 3U : VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_15)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__9\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h1f45abac__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d823016__0;
    VlWide<3>/*95:0*/ __Vtemp_ha68ae993__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f8aac85__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__0;
    VlWide<3>/*95:0*/ __Vtemp_ha96b5776__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2f92834__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__1;
    VlWide<3>/*95:0*/ __Vtemp_ha986308b__0;
    VlWide<3>/*95:0*/ __Vtemp_hb431d43c__0;
    VlWide<4>/*127:0*/ __Vtemp_h37692958__0;
    VlWide<4>/*127:0*/ __Vtemp_h335e110a__0;
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_11 
        = ((0xeU == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_4 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_132 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_131);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_16 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_10) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_14 
        = (((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D) 
              == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
             & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5))
            ? 1U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_18 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_6)
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_17));
    vlSelf->__PVT__access_work_state_for_stall = ((0x10U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? 0x18U
                                                   : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_5 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_4);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_133 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_132);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_22 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_16) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1D 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1D_T_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2E 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_18));
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_6 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_5);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_134 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_133);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_28 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_22) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_27));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1D 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward2E;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_7 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_6);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_135 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_134);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_133 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_132));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_34 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_28) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_33));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD2E);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_8 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_7);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_136 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_135);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_134 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_133));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_40 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_34) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_39));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_ok 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_stage2_stall;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_9 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_8);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_137 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_136);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_135 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_134));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_40) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___mem2regM_Stall_T_45));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_ok 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_ok;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_10 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_9);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_138 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_137);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_136 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_135));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_7));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_11 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_10);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_139 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_138);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_137 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_136));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_8));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_9 
        = ((9U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_9)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_8));
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_pending 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmem.__PVT__io_data_pending;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_12 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_11);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_140 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_139);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_10)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_74 
        = VL_CONCAT_III(10,7,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_73), 5U);
    VL_CONCAT_WIQ(65,9,56, __Vtemp_h1f45abac__0, VL_EXTEND_II(9,8, 
                                                              (0xffU 
                                                               & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 8U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_30, __Vtemp_h1f45abac__0);
    VL_CONCAT_WIQ(65,17,48, __Vtemp_h2d823016__0, VL_EXTEND_II(17,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_WriteDataE, 0U, 0x10U))), 0ULL);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wdata_T_59, __Vtemp_h2d823016__0);
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
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_DataPendingM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_pending;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_13 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_141 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_140);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_158 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_74)
            : VL_EXTEND_II(10,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_156)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___alu_io_in2;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_DataPendingM;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_14 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_13);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_142 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_141);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_160 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? VL_EXTEND_II(10,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_87))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_sraw_T_1 
        = VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit 
        = (0x1fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 5U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa 
        = (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0U, 6U));
    VL_CONCAT_WIQ(65,1,64, __Vtemp_ha68ae993__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, __Vtemp_ha68ae993__0);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h5f8aac85__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2, 0x3fU)), vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in2);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend, __Vtemp_h5f8aac85__0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_15 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_143 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_142);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_162 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? 0x16U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_160));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srl 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1 
           >> (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srlw 
        = (VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, 0U, 0x20U) 
           >> (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_in1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sraw 
        = VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___answer_sraw_T_1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__sa_for_32bit));
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__0,0x00000001,0xffffffff,0xffffffff);
    VL_SUB_W(3, __Vtemp_ha96b5776__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_ha2f92834__0, __Vtemp_h83e9204a__0, __Vtemp_ha96b5776__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sub, __Vtemp_ha2f92834__0);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__1,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_ha986308b__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in1_extend, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_hb431d43c__0, __Vtemp_h83e9204a__1, __Vtemp_ha986308b__0);
    VL_ASSIGN_W(65,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_add, __Vtemp_hb431d43c__0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_16 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_15);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_144 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_143);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_164 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? 0x1aU : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_162));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_37 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srlw)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_srl);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_34 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__io_data_w)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sraw)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT__answer_sra);
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_17 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_16);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_145 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_144);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_143 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_166 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? 9U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_164));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra 
        = (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE, 0U, 3U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_54 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_35, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_37
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_53 
        = ((1U & VL_BITSEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_32, 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_34
            : 0ULL);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_18 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_146 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_145);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_144 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_143));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_168 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? 0x201U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_166));
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
    VL_EXTEND_WQ(127,64, __Vtemp_h37692958__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_54);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_19, __Vtemp_h37692958__0);
    VL_EXTEND_WQ(127,64, __Vtemp_h335e110a__0, vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___normal_result_T_53);
    VL_ASSIGN_W(127,vlSymsp->TOP__mycpu_top__u_riscv_cpu___alu.__PVT___GEN_18, __Vtemp_h335e110a__0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_19 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_18);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_147 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_146);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_145 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_144));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_170 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? VL_EXTEND_II(10,7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_106))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_168));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_20 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_19);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_148 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_147);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_146 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_145));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_172 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? VL_EXTEND_II(10,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_115))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_170));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0x30U : VL_EXTEND_II(6,4, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_17)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_21 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_20);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_149 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_148);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_147 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_146));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_174 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? VL_EXTEND_II(10,8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_126))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_172));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_21 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__ra))
            ? 0xc0U : VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT___io_wstrb_T_19)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_22 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_21);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_150 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_149);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_148 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_176 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? VL_EXTEND_II(10,9, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_153))
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_23 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_22);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_151 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_150);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_149 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_148));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_code_type 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__OpD))
            ? 0x282U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___inst_code_type_T_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_24 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_23);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_152 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_151);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_150 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_149));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code 
        = (0x7fU & VL_SEL_IIII(10, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_code_type), 3U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_25 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_24);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_153 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_152);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_151 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_150));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_33 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : 0U);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_26 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_25);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_154 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_153);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_152 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_151));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_35 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__ins_code))
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUCtrlD_T_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_27 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_26);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_155 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_154);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_153 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_152));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_28 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_27);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_156 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_155);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_154 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_29 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_28);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_157 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_156);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_155 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_27 
        = ((0x1bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_27)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_30 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_29);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_158 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_157);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_156 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_28 
        = ((0x1cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_28)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_31 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_30);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_159 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_158);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_157 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_29 
        = ((0x1dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_29)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_32 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_160 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_159);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_158 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_30 
        = ((0x1eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_30)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_33 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_32);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_161 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_160);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_159 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_31 
        = ((0x1fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_31)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_34 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_33);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_162 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_161);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_160 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_159));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_32 
        = ((0x20U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_32)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_31));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_35 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_34);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_163 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_162);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_161 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_160));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_33 
        = ((0x21U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_33)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_32));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_36 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_35);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_164 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_163);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_162 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_161));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_34 
        = ((0x22U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_34)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_37 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_36);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_165 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_164);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_163 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_162));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_35 
        = ((0x23U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_35)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_38 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_37);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_166 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_165);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_164 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_163));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_36 
        = ((0x24U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_36)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_39 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_38);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_167 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_166);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_165 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_164));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_37 
        = ((0x25U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_37)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_36));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_40 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_39);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_168 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_167);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_166 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_165));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_38 
        = ((0x26U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_38)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_37));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_41 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_40);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_169 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_168);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_167 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_166));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_39 
        = ((0x27U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_39)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_38));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_42 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_41);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_170 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_169);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_168 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_167));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_40 
        = ((0x28U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_40)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_43 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_42);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_171 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_170);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_169 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_168));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_41 
        = ((0x29U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_41)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_40));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_44 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_43);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_172 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_171);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_170 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_169));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_42 
        = ((0x2aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_42)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_45 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_44);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_173 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_171 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_170));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_43 
        = ((0x2bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_43)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_46 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_45);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_174 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_172 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_171));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_44 
        = ((0x2cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_44)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_47 
        = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_47
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_46);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_175 
        = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_47
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_173 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_172));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_45 
        = ((0x2dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_45)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_48 
        = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_48
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_47);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_176 
        = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_48
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_175);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_174 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_173));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_46 
        = ((0x2eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_46)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_49 
        = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_49
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_48);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_177 
        = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_49
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_176);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_175 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_174));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_47 
        = ((0x2fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_47)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_50 
        = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_50
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_49);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_178 
        = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_50
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_177);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_176 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_175));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_48 
        = ((0x30U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_48)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_51 
        = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_51
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_50);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_179 
        = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_51
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_178);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_177 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_176));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_49 
        = ((0x31U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_49)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_52 
        = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_52
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_51);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_180 
        = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_52
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_179);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_178 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_177));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_50 
        = ((0x32U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_50)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_49));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_53 
        = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_53
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_52);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_181 
        = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_53
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_180);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_179 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_178));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_51 
        = ((0x33U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_51)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_50));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_54 
        = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_54
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_53);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_182 
        = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_54
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_181);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_180 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_52 
        = ((0x34U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_52)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_55 
        = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_55
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_54);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_183 
        = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_55
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_182);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_180));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_53 
        = ((0x35U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_53)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_52));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_56 
        = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_56
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_55);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_184 
        = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_56
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_183);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_181));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_54 
        = ((0x36U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_54)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_53));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_57 
        = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_57
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_56);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_185 
        = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_57
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_184);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_182));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_55 
        = ((0x37U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_55)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_54));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_58 
        = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_58
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_57);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_183));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_56 
        = ((0x38U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_56)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_55));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_184));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_57 
        = ((0x39U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_57)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_56));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_58 
        = ((0x3aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_58)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_59 
        = ((0x3bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_59)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_60 
        = ((0x3cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_60)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_189 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_61 
        = ((0x3dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_61)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_60));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_15_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset 
        = vlSelf->__PVT__dcache_data_15_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_reset;
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

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT__dcache_data_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_4_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_7_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_11_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__reset 
        = vlSelf->__PVT__dcache_data_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__reset 
        = vlSelf->__PVT__dcache_data_1_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__reset 
        = vlSelf->__PVT__dcache_data_2_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__reset 
        = vlSelf->__PVT__dcache_data_3_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__reset 
        = vlSelf->__PVT__dcache_data_4_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset 
        = vlSelf->__PVT__dcache_data_7_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset 
        = vlSelf->__PVT__dcache_data_11_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_reset;
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

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_6_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_8_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_9_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset 
        = vlSelf->__PVT__dcache_data_5_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset 
        = vlSelf->__PVT__dcache_data_6_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset 
        = vlSelf->__PVT__dcache_data_8_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset 
        = vlSelf->__PVT__dcache_data_9_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_reset;
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

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__reset 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_reset;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__63(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__63\n"); );
    // Body
    vlSelf->__PVT__stage2_write_stage1_read = ((IData)(vlSelf->__PVT__stage2_sram_write_reg) 
                                               & (~ (IData)(vlSelf->__PVT__stage1_sram_wr_reg)));
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
                                               ? 0x10U
                                               : 0xeU);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awsize 
        = vlSelf->__PVT__io_port_awsize;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arsize 
        = vlSelf->__PVT__io_port_arsize;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__64(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__64\n"); );
    // Body
    vlSelf->__PVT__read_counter = vlSelf->__Vdly__read_counter;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arsize;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awsize;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_2 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resetn)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__66(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__66\n"); );
    // Body
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSymsp->TOP.axi_mem_port_1_awsize = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awsize;
    vlSymsp->TOP.axi_mem_port_1_arsize = vlSymsp->TOP__mycpu_top.axi_mem_port_1_arsize;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb 
        = vlSelf->__PVT__io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___commit_next_pc_T_3 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_pc 
           - (IData)(4U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT___commit_next_pc_T_6 
        = ((IData)(4U) + vlSymsp->TOP__mycpu_top__u_riscv_cpu___cp0.__PVT__io_pc);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__67(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__67\n"); );
    // Body
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xffU : 0U);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_tlb_req 
        = vlSelf->__PVT__io_tlb_req;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid 
        = vlSelf->__PVT__io_port_wvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr 
        = vlSelf->__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__68(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__68\n"); );
    // Body
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
    vlSelf->__PVT__io_p_addr_for_tlb = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_araddr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_wvalid = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__69(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__69\n"); );
    // Body
    vlSelf->__PVT___way1_dirty_T_4 = (((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wlast 
        = vlSelf->__PVT__io_port_wlast;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wstrb 
        = vlSelf->__PVT__io_port_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__18\n"); );
    // Body
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_129));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_129));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_12_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_13_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_15_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_130));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__196(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__196\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB 
        = VL_CONCAT_QQI(64,51,13, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_56, 
                        VL_CONCAT_III(13,1,12, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                                      VL_CONCAT_III(12,1,11, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U)), 
                                                    VL_CONCAT_III(11,6,5, 
                                                                  (0x3fU 
                                                                   & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x19U, 6U)), 
                                                                  VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 8U, 4U)), 0U)))));
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_branchdata 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_branchdata;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_decoder_jump 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_decoder_jump;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_407 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__btb_13_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_407 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_aw_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset)) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallE) 
               & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T)) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_InException)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_19 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_hashcode));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_20 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pre_pht));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_14 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_1_out_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_0_out_pc);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_33 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_34 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_28 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_2_out_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem_exception_T_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_47 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_33));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_48 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_34));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_42 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__fifo_banks_3_out_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_28);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___mem_exception_T 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__mem_bru_state.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__mem_bru_state_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushM;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_FlushE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___ex2mem.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___ex2mem_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_clr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_clr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_req 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_en) 
           & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemToRegE) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_MemWriteE)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_req 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_req;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_en 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_req) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmem_io_data_pending)));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type 
        = (7U & VL_SEL_IIII(10, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_code_type), 0U, 3U));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_req 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_3 
        = (4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_4 
        = (6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_2 
        = (3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_1 
        = (2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T 
        = (1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__inst_type));
    vlSelf->__PVT__io_sram_req = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_req;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUSrcD_1_T_4 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_1) 
            | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_4)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_9 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_4)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immUJ
            : 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_8 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_3)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immSB
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_7 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_2)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immS
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_6 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_1)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immI
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_5 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU
            : 0U);
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1 
        = VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ALUSrcD_1_T_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_1 
        = VL_EXTEND_QI(64,20, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_9);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_0 
        = VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_5);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_10 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_0 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_6);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUSrcD_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_11 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_10 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_7);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUSrcD_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_12 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_11 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_8);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io1_ALUSrcD_1 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io1_ALUSrcD_1;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___io_ImmD_T_12 
           | vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ImmD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cu_io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_ImmD 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmD;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1D 
        = ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1D), 0U))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___BranchR1D_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___id2ex.__PVT__io_RD1D 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1D;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_targetD_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jump)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCJumpD
            : 0ULL);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_in_target_pc 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_branchD_flag)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PCBranchD
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_targetD_T_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__ex_bru_state.__PVT__io_in_target_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ex_bru_state_io_in_target_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_1) 
           & ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pre_decoder_jump) 
                | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___PCSrcD_T_3)) 
               != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_true_branch_state)) 
              | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__target_addr_error)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_1 
        = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_1_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_0_rdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_1 
        = ((1U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_1_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_0_rdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_46 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_45);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___write_banks_points_T 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_flush) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_banks_points) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points)) 
            & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__write_length_points) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_length_points))) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_point_write_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_2 
        = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_2_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_2 
        = ((2U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_2_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_47 
        = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_47
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_46);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_hashcode 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_47));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pht 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_48));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pc 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty)
            ? 0ULL : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_42);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_3 
        = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_3_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_3 
        = ((3U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_3_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_empty 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_empty;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_48 
        = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_48
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_47);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_4 
        = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_4_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_4 
        = ((4U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_4_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_out_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Inst_Fifo_Empty 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_empty;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_49 
        = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_49
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_48);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_5 
        = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_5_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_5 
        = ((5U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_5_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_buffer_read_out_pc 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pre_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_out_0_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Inst_Fifo_Empty;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_50 
        = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_50
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_49);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF 
        = (1U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__reset) 
                 | (~ ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___has_Stall_T) 
                         | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_DataPendingM)) 
                        | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__mem2regM_Stall)) 
                       | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Inst_Fifo_Empty)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_6 
        = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_6_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_6 
        = ((6U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_6_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCF;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_hashcode 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__id_bru_state.__PVT__io_in_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__id_bru_state_io_in_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCPlus4F 
        = (4ULL + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCF);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_51 
        = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_51
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_50);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_179 
        = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_51
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_178);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_7 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_7 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_pht_out 
        = ((7U == (7U & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__ways_araddr_reg), 0U, 3U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__phts_7_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___if2id.__PVT__io_PCPlus4F 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___if2id_io_PCPlus4F;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallF 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_StallF;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_52 
        = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_52
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_51);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_180 
        = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_52
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_179);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___io_out_T_10 
        = (3U & ((0U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_7), 0U, 2U)
                  : VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_7), 6U, 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___io_out_T_10 
        = (3U & ((0U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_7), 0U, 2U)
                  : VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_7), 6U, 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_25 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_StallF;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_53 
        = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_53
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_52);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_181 
        = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_53
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_180);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___io_out_T_12 
        = (3U & ((1U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_7), 2U, 2U)
                  : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___io_out_T_10)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___io_out_T_12 
        = (3U & ((1U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_7), 2U, 2U)
                  : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___io_out_T_10)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_4 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_25)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__InDelaySlotF));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_en 
        = VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_25));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_54 
        = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_54
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_53);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_182 
        = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_54
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_181);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_3_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_3_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_2_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_2_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_out 
        = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___GEN_7), 4U, 2U)
                  : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_out 
        = (3U & ((2U == (3U & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__raddr_reg), 0U, 2U)))
                  ? VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___GEN_7), 4U, 2U)
                  : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT___io_out_T_12)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_read_en;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_55 
        = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_55
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_54);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_183 
        = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_55
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_182);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___read_banks_points_T_2 
        = (3U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_banks_points) 
                 + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_58 
        = VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_read_en));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_5 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_pht_out));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_56 
        = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_56
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_55);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_184 
        = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_56
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_183);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___read_length_points_T_3 
        = (7U & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___read_length_points_T_1) 
                 + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_58)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_6 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_2_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_57 
        = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_57
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_56);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_185 
        = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_57
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_184);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_59 
        = VL_EXTEND_II(4,1, (1U & VL_BITSEL_IIII(3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___read_length_points_T_3), 2U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_3_pht_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_io_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__PHTS_with_block_ram_1_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_58 
        = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_58
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_57);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_186 
        = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_58
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_185);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_186 
        = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_58
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_185);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___read_length_points_T_7 
        = (0xfU & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__read_length_points) 
                   + (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT___GEN_59)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_1_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_0_out));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_59 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_187 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_186);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_59 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_58);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_187 
        = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_59
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_186);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_pht_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_2_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_60 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_188 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_187);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_60 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_59);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_188 
        = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_60
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_187);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_pht_out;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_out_L 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__ar_bank_sel_reg))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__phts_banks_3_out)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_61 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_189 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_188);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_61 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_60);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_189 
        = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_61
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_188);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_62 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_190 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_189);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_62 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_61);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_190 
        = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_62
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_189);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram.__PVT__io_out_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_lookup_value_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_63 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_191 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_190);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_63 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_62);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_191 
        = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_63
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_190);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__PHTS_banks_oneissue_block_ram_io_out_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag 
        = (0x7ffffffffffffULL & ((1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 6U))
                                  ? VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_191, 0U, 0x33U)
                                  : VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_63, 0U, 0x33U)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag 
        = (0x7ffffffffffffULL & ((1U & VL_BITSEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr, 6U))
                                  ? VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_191, 0U, 0x33U)
                                  : VL_SEL_QQII(52, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_63, 0U, 0x33U)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_62 
        = ((0x3eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_62)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT___io_pre_L_T_1 
        = (0U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_63 
        = ((0x3fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_63)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_62));
    vlSelf->__PVT__dcache_tag_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag;
    vlSelf->__PVT__dcache_tag_1_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_lookup_value 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT___io_pre_L_T_3 
        = ((1U != (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT___io_pre_L_T_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_out_L;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_64 
        = ((0x40U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_64)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_63));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_L 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_out_L)) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT___io_pre_L_T_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_65 
        = ((0x41U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_65)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_64));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_L;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_66 
        = ((0x42U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_66)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_65));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_pht 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pht;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_67 
        = ((0x43U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_67)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_66));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_68 
        = ((0x44U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_68)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_69 
        = ((0x45U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_69)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_68));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_70 
        = ((0x46U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_70)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_69));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_71 
        = ((0x47U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_71)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_70));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_72 
        = ((0x48U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_72)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_71));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_73 
        = ((0x49U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_73)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_72));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_74 
        = ((0x4aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_74)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_75 
        = ((0x4bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_75)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_76 
        = ((0x4cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_76)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_77 
        = ((0x4dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_77)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_78 
        = ((0x4eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_78)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_79 
        = ((0x4fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_79)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_80 
        = ((0x50U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_80)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_79));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_81 
        = ((0x51U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_81)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_80));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_82 
        = ((0x52U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_82)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_81));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_83 
        = ((0x53U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_83)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_82));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_84 
        = ((0x54U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_84)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_85 
        = ((0x55U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_85)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_84));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_86 
        = ((0x56U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_86)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_85));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_87 
        = ((0x57U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_87)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_86));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_88 
        = ((0x58U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_88)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_87));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_89 
        = ((0x59U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_89)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_88));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_90 
        = ((0x5aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_90)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_91 
        = ((0x5bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_91)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_92 
        = ((0x5cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_92)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_93 
        = ((0x5dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_93)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_94 
        = ((0x5eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_94)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_95 
        = ((0x5fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_95)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_96 
        = ((0x60U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_96)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_95));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_97 
        = ((0x61U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_97)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_96));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_98 
        = ((0x62U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_98)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_97));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_99 
        = ((0x63U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_99)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_98));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_100 
        = ((0x64U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_100)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_101 
        = ((0x65U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_101)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_100));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_102 
        = ((0x66U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_102)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_101));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_103 
        = ((0x67U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_103)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_102));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_104 
        = ((0x68U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_104)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_103));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_105 
        = ((0x69U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_105)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_104));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_106 
        = ((0x6aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_106)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_105));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_107 
        = ((0x6bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_107)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_106));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_108 
        = ((0x6cU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_108)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_107));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_109 
        = ((0x6dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_109)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_108));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_110 
        = ((0x6eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_110)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_109));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_111 
        = ((0x6fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_111)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_112 
        = ((0x70U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_112)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_111));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_371 
        = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_115)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_370));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_113 
        = ((0x71U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_113)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_112));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_372 
        = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_116)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_371));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_114 
        = ((0x72U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_114)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_113));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_373 
        = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_117)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_372));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115 
        = ((0x73U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_115)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_114));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_374 
        = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_118)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_373));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_243));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116 
        = ((0x74U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_116)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_375 
        = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_119)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_374));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_244));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117 
        = ((0x75U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_117)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_116));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_376 
        = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_120)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_375));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_245));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118 
        = ((0x76U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_118)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_117));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_377 
        = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_121)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_376));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_246));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119 
        = ((0x77U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_119)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_118));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_378 
        = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_122)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_377));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_247));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120 
        = ((0x78U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_120)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_119));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_379 
        = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_123)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_378));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_248));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121 
        = ((0x79U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_121)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_120));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_380 
        = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_124)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_379));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_249));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122 
        = ((0x7aU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_122)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_381 
        = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_125)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_380));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_251 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_250));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_123 
        = ((0x7bU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_123)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_122));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT___awaddr_miss_addr_T_2 = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                             ? vlSelf->__PVT__dcache_tag_io_tag
                                             : vlSelf->__PVT__dcache_tag_1_io_tag);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_383 
        = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_127)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_382));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_253 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_252));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125 
        = ((0x7dU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_125)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_124));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__199(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__199\n"); );
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

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT__awaddr_miss_addr = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___awaddr_miss_addr_T_2, 
                                                    VL_CONCAT_III(13,7,6, 
                                                                  (0x7fU 
                                                                   & VL_SEL_IQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 6U, 7U)), 0U));
    vlSelf->__PVT__way0_wen_6 = ((6U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_7 = ((7U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_valid 
        = (1U & VL_BITSEL_IIII(21, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_127, 0x14U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_hit 
        = (((0xfffffU & VL_SEL_IIII(21, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_127, 0U, 0x14U)) 
            == (0xfffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 0xcU, 0x14U))) 
           & (0U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_383)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_valid 
        = (1U & VL_BITSEL_IIII(21, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_127, 0x14U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_hit 
        = (((0xfffffU & VL_SEL_IIII(21, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_127, 0U, 0x14U)) 
            == (0xfffffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 0xcU, 0x14U))) 
           & (0U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_383)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126 
        = ((0x7eU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_126)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_125));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT___io_port_awaddr_T_4 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__awaddr_miss_addr
                                           : vlSelf->__PVT___io_port_awaddr_T_2);
    vlSelf->__PVT___wen_way0_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_6), 8U));
    vlSelf->__PVT___wen_way0_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_7), 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 8U));
    vlSelf->__PVT___wen_way0_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_1), 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out 
        = ((0x7fU == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_127)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_126));
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
}
