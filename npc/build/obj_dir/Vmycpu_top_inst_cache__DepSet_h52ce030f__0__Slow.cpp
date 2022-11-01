// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_cache.h"

VL_ATTR_COLD void Vmycpu_top_inst_cache___stl_sequent__TOP__mycpu_top__inst_cache__0(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___stl_sequent__TOP__mycpu_top__inst_cache__0\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_8 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___T_13 = VL_CONCAT_III(21,1,20, 1U, 
                                         (0xfffffU 
                                          & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xcU, 0x14U)));
    vlSelf->__PVT___io_port_araddr_T_3 = VL_CONCAT_QQI(64,59,5, 
                                                       (0x7ffffffffffffffULL 
                                                        & VL_SEL_QQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 5U, 0x3bU)), 0U);
    vlSelf->__PVT___access_work_state_T = (2U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_35 = (5U == (IData)(vlSelf->__PVT__work_state));
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
    vlSelf->__PVT___io_sram_write_en_T_3 = ((~ (IData)(vlSelf->__PVT__stage2_sram_req_reg)) 
                                            & (0U != 
                                               (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 0U, 2U))));
    vlSelf->__PVT___wait_data_L_T_3 = (0U == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___stage1_finished_T_2 = (3U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_18 = ((IData)(vlSelf->__PVT__stage1_finished)
                                               ? 4U
                                               : 5U);
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 1U
                                               : 2U);
    vlSelf->__PVT___access_work_state_T_32 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 5U
                                               : 2U);
    vlSelf->__PVT___stage1_finished_T_1 = (7U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_13 = ((IData)(vlSelf->__PVT__stage1_finished)
                                               ? 4U
                                               : 2U);
    vlSelf->__PVT___access_work_state_T_38 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_8 = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_23 = (1U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___GEN_4 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
    vlSelf->__PVT__icache_tag_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_tag_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
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
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_arvalid = ((IData)(vlSelf->__PVT___access_work_state_T) 
                                      | (IData)(vlSelf->__PVT___access_work_state_T_35));
    vlSelf->__PVT___io_port_araddr_T_4 = ((IData)(vlSelf->__PVT___access_work_state_T_35)
                                           ? vlSelf->__PVT___io_port_araddr_T_3
                                           : 0ULL);
    vlSelf->__PVT___io_sram_write_en_T_5 = (((IData)(vlSelf->__PVT__stage2_sram_req_reg) 
                                             | (IData)(vlSelf->__PVT___io_sram_write_en_T_3))
                                             ? (IData)(vlSelf->__PVT__stage2_write_en_reg)
                                             : 0U);
    vlSelf->__PVT___access_work_state_T_29 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_28)
                                               : 1U);
    vlSelf->__PVT___access_work_state_T_33 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_32)
                                               : 1U);
    vlSelf->__PVT__icache_tag_io_wdata = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                           ? vlSelf->__PVT___T_13
                                           : 0U);
    vlSelf->__PVT__icache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                             ? vlSelf->__PVT___T_13
                                             : 0U);
    vlSelf->__PVT___access_work_state_T_44 = ((IData)(vlSelf->__PVT___stage1_finished_T_1)
                                               ? 4U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? 1U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_13));
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_18)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_13));
    vlSelf->__PVT___GEN_5 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_1_io_addr;
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
    vlSelf->__PVT__io_port_araddr = ((IData)(vlSelf->__PVT___access_work_state_T)
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_4);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_1_io_wdata;
    vlSelf->__PVT___access_work_state_T_15 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : 1U);
    vlSelf->__PVT___access_work_state_T_21 = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_20)
                                               : 1U);
    vlSelf->__PVT___GEN_6 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_4)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_5)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_6)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_7)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_8)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_9)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_10)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_11)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_12)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_13)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_14)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_15)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_16)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_17)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_18)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_19)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_20)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_21)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_22)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_23)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_24)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_25)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_26)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_27)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_31 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_28)
                               : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT___GEN_32 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_29)
                               : (IData)(vlSelf->__PVT___GEN_31));
    vlSelf->__PVT___GEN_33 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_30)
                               : (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT___GEN_34 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_31)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_32)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_33)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_34)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_35)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_36)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_37)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_38)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_39)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_40)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_41)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_42)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_43)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_44)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_45)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_46)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_47)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_48)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_49)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_50)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_51)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_52)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_53)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_54)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_55)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_56)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_57)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_58)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_62 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_59)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_63 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_60)
                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT___GEN_64 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_61)
                               : (IData)(vlSelf->__PVT___GEN_63));
    vlSelf->__PVT___GEN_65 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_62)
                               : (IData)(vlSelf->__PVT___GEN_64));
    vlSelf->__PVT___GEN_66 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_63)
                               : (IData)(vlSelf->__PVT___GEN_65));
    vlSelf->__PVT___GEN_67 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_64)
                               : (IData)(vlSelf->__PVT___GEN_66));
    vlSelf->__PVT___GEN_68 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_65)
                               : (IData)(vlSelf->__PVT___GEN_67));
    vlSelf->__PVT___GEN_69 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_66)
                               : (IData)(vlSelf->__PVT___GEN_68));
    vlSelf->__PVT___GEN_70 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_67)
                               : (IData)(vlSelf->__PVT___GEN_69));
    vlSelf->__PVT___GEN_71 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_68)
                               : (IData)(vlSelf->__PVT___GEN_70));
    vlSelf->__PVT___GEN_72 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_69)
                               : (IData)(vlSelf->__PVT___GEN_71));
    vlSelf->__PVT___GEN_73 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_70)
                               : (IData)(vlSelf->__PVT___GEN_72));
    vlSelf->__PVT___GEN_74 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_71)
                               : (IData)(vlSelf->__PVT___GEN_73));
    vlSelf->__PVT___GEN_75 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_72)
                               : (IData)(vlSelf->__PVT___GEN_74));
    vlSelf->__PVT___GEN_76 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_73)
                               : (IData)(vlSelf->__PVT___GEN_75));
    vlSelf->__PVT___GEN_77 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_74)
                               : (IData)(vlSelf->__PVT___GEN_76));
    vlSelf->__PVT___GEN_78 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_75)
                               : (IData)(vlSelf->__PVT___GEN_77));
    vlSelf->__PVT___GEN_79 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_76)
                               : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT___GEN_80 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_77)
                               : (IData)(vlSelf->__PVT___GEN_79));
    vlSelf->__PVT___GEN_81 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_78)
                               : (IData)(vlSelf->__PVT___GEN_80));
    vlSelf->__PVT___GEN_82 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_79)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_83 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_80)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_84 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_81)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_85 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_82)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_86 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_83)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_87 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_84)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_88 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_85)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_89 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_86)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_90 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_87)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_91 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_88)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_92 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_89)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_93 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_90)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_94 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_91)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_95 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_92)
                               : (IData)(vlSelf->__PVT___GEN_94));
    vlSelf->__PVT___GEN_96 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_93)
                               : (IData)(vlSelf->__PVT___GEN_95));
    vlSelf->__PVT___GEN_97 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_94)
                               : (IData)(vlSelf->__PVT___GEN_96));
    vlSelf->__PVT___GEN_98 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_95)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_99 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_96)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_100 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_97)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_101 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_98)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_102 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_99)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_103 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_100)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_104 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_101)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_105 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_102)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_106 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_103)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_107 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_104)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_108 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_105)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_109 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_106)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_110 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_107)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_111 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_108)
                                : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT___GEN_112 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_109)
                                : (IData)(vlSelf->__PVT___GEN_111));
    vlSelf->__PVT___GEN_113 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_110)
                                : (IData)(vlSelf->__PVT___GEN_112));
    vlSelf->__PVT___GEN_114 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_111)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_115 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_112)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_116 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_113)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_117 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_114)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_118 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_115)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_119 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_116)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_120 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_117)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_121 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_118)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_122 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_119)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_123 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_120)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_124 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_121)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_125 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_122)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_126 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_123)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_127 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_124)
                                : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT___GEN_128 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_125)
                                : (IData)(vlSelf->__PVT___GEN_127));
    vlSelf->__PVT___GEN_129 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_126)
                                : (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___GEN_130 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_127)
                                : (IData)(vlSelf->__PVT___GEN_129));
    vlSelf->__PVT__icache_tag_1_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                          & (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT___lru_T_8 = (1U & (~ (IData)(vlSelf->__PVT___GEN_130)));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_1_io_wen;
    vlSelf->__PVT__icache_tag_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                        & (IData)(vlSelf->__PVT___lru_T_8));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_io_wen;
}

VL_ATTR_COLD void Vmycpu_top_inst_cache___stl_sequent__TOP__mycpu_top__inst_cache__1(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___stl_sequent__TOP__mycpu_top__inst_cache__1\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_7 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                              & (IData)(vlSelf->__PVT__io_port_rvalid))
                                              ? 4U : 3U);
    vlSelf->__PVT___access_work_state_T_6 = ((IData)(vlSelf->__PVT__io_port_rlast) 
                                             & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___wait_data_L_T_7 = ((IData)(vlSelf->__PVT___access_work_state_T_38) 
                                       & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT__icache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__icache_tag_1_clock = vlSelf->__PVT__clock;
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
    vlSelf->__PVT__icache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__icache_tag_1_reset = vlSelf->__PVT__reset;
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
    vlSelf->__PVT__decoder_inst_data_opD = (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 7U));
    vlSelf->__PVT__decoder_inst_data_Funct3D = (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0xcU, 3U));
    vlSelf->__PVT__icache_tag_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_hit;
    vlSelf->__PVT__icache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_hit;
    vlSelf->__PVT__icache_data_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_rdata;
    vlSelf->__PVT__icache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_rdata;
    vlSelf->__PVT___access_work_state_T_42 = ((IData)(vlSelf->__PVT___access_work_state_T_6)
                                               ? 7U
                                               : (IData)(vlSelf->__PVT__work_state));
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__clock 
        = vlSelf->__PVT__icache_tag_clock;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__clock 
        = vlSelf->__PVT__icache_tag_1_clock;
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__reset 
        = vlSelf->__PVT__icache_tag_reset;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__reset 
        = vlSelf->__PVT__icache_tag_1_reset;
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
    vlSelf->__PVT___decoder_inst_data_T_22 = (0x63U 
                                              == (IData)(vlSelf->__PVT__decoder_inst_data_opD));
    vlSelf->__PVT___decoder_inst_data_T_18 = ((0x67U 
                                               == (IData)(vlSelf->__PVT__decoder_inst_data_opD)) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D)));
    vlSelf->__PVT___decoder_inst_data_T_4 = ((1U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 2U : 
                                             VL_EXTEND_II(2,1, 
                                                          (0U 
                                                           == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))));
    vlSelf->__PVT___hit_T_2 = ((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_io_valid));
    vlSelf->__PVT___hit_T = vlSelf->__PVT__icache_tag_io_hit;
    vlSelf->__PVT___hit_T_3 = vlSelf->__PVT__icache_tag_1_io_hit;
    vlSelf->__PVT___hit_T_5 = ((IData)(vlSelf->__PVT__icache_tag_1_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_1_io_valid));
    vlSelf->__PVT__icache_data_way0_0_rdata = vlSelf->__PVT__icache_data_io_rdata;
    vlSelf->__PVT__icache_data_way0_1_rdata = vlSelf->__PVT__icache_data_1_io_rdata;
    vlSelf->__PVT__icache_data_way0_2_rdata = vlSelf->__PVT__icache_data_2_io_rdata;
    vlSelf->__PVT__icache_data_way0_3_rdata = vlSelf->__PVT__icache_data_3_io_rdata;
    vlSelf->__PVT__icache_data_way0_4_rdata = vlSelf->__PVT__icache_data_4_io_rdata;
    vlSelf->__PVT__icache_data_way0_5_rdata = vlSelf->__PVT__icache_data_5_io_rdata;
    vlSelf->__PVT__icache_data_way0_6_rdata = vlSelf->__PVT__icache_data_6_io_rdata;
    vlSelf->__PVT__icache_data_way0_7_rdata = vlSelf->__PVT__icache_data_7_io_rdata;
    vlSelf->__PVT__icache_data_way1_0_rdata = vlSelf->__PVT__icache_data_8_io_rdata;
    vlSelf->__PVT__icache_data_way1_1_rdata = vlSelf->__PVT__icache_data_9_io_rdata;
    vlSelf->__PVT__icache_data_way1_2_rdata = vlSelf->__PVT__icache_data_10_io_rdata;
    vlSelf->__PVT__icache_data_way1_3_rdata = vlSelf->__PVT__icache_data_11_io_rdata;
    vlSelf->__PVT__icache_data_way1_4_rdata = vlSelf->__PVT__icache_data_12_io_rdata;
    vlSelf->__PVT__icache_data_way1_5_rdata = vlSelf->__PVT__icache_data_13_io_rdata;
    vlSelf->__PVT__icache_data_way1_6_rdata = vlSelf->__PVT__icache_data_14_io_rdata;
    vlSelf->__PVT__icache_data_way1_7_rdata = vlSelf->__PVT__icache_data_15_io_rdata;
    vlSelf->__PVT___access_work_state_T_45 = ((6U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_42)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_44));
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
    vlSelf->__PVT__decoder_inst_data_lo = VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                        VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U));
    vlSelf->__PVT___decoder_inst_data_T_20 = ((IData)(vlSelf->__PVT___decoder_inst_data_T_18) 
                                              | (0x6fU 
                                                 == (IData)(vlSelf->__PVT__decoder_inst_data_opD)));
    vlSelf->__PVT___decoder_inst_data_T_6 = ((4U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 4U : 
                                             VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___decoder_inst_data_T_4)));
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_3)) 
                               & (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                           & (IData)(vlSelf->__PVT__icache_tag_io_valid)) 
                          | (IData)(vlSelf->__PVT___hit_T_5));
    vlSelf->__PVT___GEN_516 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_1_rdata
                                : vlSelf->__PVT__icache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_524 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_1_rdata
                                : vlSelf->__PVT__icache_data_way1_0_rdata);
    vlSelf->__PVT___access_work_state_T_46 = (((5U 
                                                == (IData)(vlSelf->__PVT__work_state)) 
                                               & (IData)(vlSelf->__PVT__io_port_arready))
                                               ? 6U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
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
    vlSelf->__PVT___decoder_inst_data_T_8 = ((5U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 8U : 
                                             VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___decoder_inst_data_T_6)));
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
    vlSelf->__PVT___access_work_state_T_22 = ((IData)(vlSelf->__PVT__hit)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_21));
    vlSelf->__PVT___access_work_state_T_34 = ((IData)(vlSelf->__PVT__hit)
                                               ? VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___access_work_state_T_29))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_33));
    vlSelf->__PVT___GEN_517 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_2_rdata
                                : vlSelf->__PVT___GEN_516);
    vlSelf->__PVT___GEN_525 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_2_rdata
                                : vlSelf->__PVT___GEN_524);
    vlSelf->__PVT___decoder_inst_data_T_10 = ((6U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x10U
                                               : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___decoder_inst_data_T_8)));
    vlSelf->__PVT___access_work_state_T_47 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_34))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_46));
    vlSelf->__PVT___GEN_518 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_3_rdata
                                : vlSelf->__PVT___GEN_517);
    vlSelf->__PVT___GEN_526 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_3_rdata
                                : vlSelf->__PVT___GEN_525);
    vlSelf->__PVT___decoder_inst_data_T_12 = ((7U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x20U
                                               : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___decoder_inst_data_T_10)));
    vlSelf->__PVT___access_work_state_T_48 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_22))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT___GEN_519 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_4_rdata
                                : vlSelf->__PVT___GEN_518);
    vlSelf->__PVT___GEN_527 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_4_rdata
                                : vlSelf->__PVT___GEN_526);
    vlSelf->__PVT___decoder_inst_data_T_14 = ((0x63U 
                                               == (IData)(vlSelf->__PVT__decoder_inst_data_opD))
                                               ? (IData)(vlSelf->__PVT___decoder_inst_data_T_12)
                                               : 0U);
    vlSelf->__PVT___access_work_state_T_49 = ((IData)(vlSelf->__PVT___stage1_finished_T_2)
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_7))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_48));
    vlSelf->__PVT___GEN_520 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_5_rdata
                                : vlSelf->__PVT___GEN_519);
    vlSelf->__PVT___GEN_528 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_5_rdata
                                : vlSelf->__PVT___GEN_527);
    vlSelf->__PVT__decoder_inst_data = VL_CONCAT_QIQ(40,6,34, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), 
                                                     VL_CONCAT_QIQ(34,1,33, (IData)(vlSelf->__PVT___decoder_inst_data_T_20), 
                                                                   VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                                                VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U))));
    vlSelf->__PVT__decoder_inst_data_hi = VL_CONCAT_III(7,6,1, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), (IData)(vlSelf->__PVT___decoder_inst_data_T_20));
    vlSelf->__PVT__access_work_state = (((2U == (IData)(vlSelf->__PVT__work_state)) 
                                         & (IData)(vlSelf->__PVT__io_port_arready))
                                         ? 3U : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT___GEN_521 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_6_rdata
                                : vlSelf->__PVT___GEN_520);
    vlSelf->__PVT___GEN_529 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_6_rdata
                                : vlSelf->__PVT___GEN_528);
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
    vlSelf->__PVT___stage2_stall_T = (1U == (IData)(vlSelf->__PVT__access_work_state));
    vlSelf->__PVT___GEN_522 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_7_rdata
                                : vlSelf->__PVT___GEN_521);
    vlSelf->__PVT___GEN_530 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_7_rdata
                                : vlSelf->__PVT___GEN_529);
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
    vlSelf->__PVT__hit_word_L = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                  ? vlSelf->__PVT___GEN_522
                                  : vlSelf->__PVT___GEN_530);
    vlSelf->__PVT___access_sram_rdata_L_T_2 = ((IData)(vlSelf->__PVT___access_work_state_T_23)
                                                ? vlSelf->__PVT__hit_word_L
                                                : 0ULL);
    vlSelf->__PVT__access_sram_rdata_L = ((IData)(vlSelf->__PVT___access_work_state_T_8)
                                           ? vlSelf->__PVT__wait_data_L
                                           : vlSelf->__PVT___access_sram_rdata_L_T_2);
}
