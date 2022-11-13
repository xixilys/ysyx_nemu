// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___ico_sequent__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___ico_sequent__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
    vlSelf->__PVT___access_work_state_T_23 = ((IData)(vlSelf->__PVT__io_port_bvalid)
                                               ? 0xcU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___access_work_state_T_21 = (((IData)(vlSelf->__PVT__io_port_wready) 
                                               & (7U 
                                                  == (IData)(vlSelf->__PVT__write_counter)))
                                               ? 0xbU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_7 = ((IData)(vlSelf->__PVT__io_port_wready)
                                              ? 5U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_17 = ((IData)(vlSelf->__PVT__io_port_awready)
                                               ? 0xaU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_5 = ((IData)(vlSelf->__PVT__io_port_awready)
                                              ? 4U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_25 = ((IData)(vlSelf->__PVT__io_port_arready)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_9 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 0xdU
                                              : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_1 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 2U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__io_port_rvalid) 
                                              & (IData)(vlSelf->__PVT__io_port_rlast));
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___access_work_state_T_29 = (((IData)(vlSelf->__PVT__io_port_rvalid) 
                                               & (IData)(vlSelf->__PVT__io_port_rlast))
                                               ? 0x10U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_15 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT__way0_burst_read_wen = ((((IData)(vlSelf->__PVT___wait_data_T_3) 
                                            | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                           & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                          & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___access_work_state_for_stall_T_1 
        = ((IData)(vlSelf->__PVT__io_port_rvalid) ? 0x18U
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT__dcache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_tag_1_clock = vlSelf->__PVT__clock;
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
    vlSelf->__PVT__dcache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_tag_1_reset = vlSelf->__PVT__reset;
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
    vlSelf->__PVT___access_work_state_T_39 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_1)
                                               : (IData)(vlSelf->__PVT__work_state));
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
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
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
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_1_clock;
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_1_reset;
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset 
        = vlSelf->__PVT__dcache_data_5_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset 
        = vlSelf->__PVT__dcache_data_6_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset 
        = vlSelf->__PVT__dcache_data_7_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset 
        = vlSelf->__PVT__dcache_data_8_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset 
        = vlSelf->__PVT__dcache_data_9_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__reset 
        = vlSelf->__PVT__dcache_data_10_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset 
        = vlSelf->__PVT__dcache_data_11_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__reset 
        = vlSelf->__PVT__dcache_data_12_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__reset 
        = vlSelf->__PVT__dcache_data_13_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__reset 
        = vlSelf->__PVT__dcache_data_14_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset 
        = vlSelf->__PVT__dcache_data_15_reset;
    vlSelf->__PVT___access_work_state_T_41 = ((2U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_39));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_10_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_11_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_12_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_13_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_15_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_1_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_2_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_3_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_4_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_5_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_6_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_7_io_wdata;
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 8U));
    vlSelf->__PVT___wen_way0_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_1), 8U));
    vlSelf->__PVT___wen_way0_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_2), 8U));
    vlSelf->__PVT___wen_way0_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_3), 8U));
    vlSelf->__PVT___wen_way0_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_4), 8U));
    vlSelf->__PVT___wen_way0_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_5), 8U));
    vlSelf->__PVT___wen_way0_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_6), 8U));
    vlSelf->__PVT___wen_way0_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_7), 8U));
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
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
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
    vlSelf->__PVT__dcache_data_2_io_wen = (((2U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_2_T_13));
    vlSelf->__PVT__dcache_data_3_io_wen = (((3U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_3_T_13));
    vlSelf->__PVT__dcache_data_4_io_wen = (((4U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_4_T_13));
    vlSelf->__PVT__dcache_data_5_io_wen = (((5U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_5_T_13));
    vlSelf->__PVT__dcache_data_6_io_wen = (((6U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_6_T_13));
    vlSelf->__PVT__dcache_data_7_io_wen = (((7U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_7_T_13));
    vlSelf->__PVT___wen_way1_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_0), 8U));
    vlSelf->__PVT___wen_way1_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_1), 8U));
    vlSelf->__PVT___wen_way1_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_2), 8U));
    vlSelf->__PVT___wen_way1_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_3), 8U));
    vlSelf->__PVT___wen_way1_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_4), 8U));
    vlSelf->__PVT___wen_way1_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_5), 8U));
    vlSelf->__PVT___wen_way1_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_6), 8U));
    vlSelf->__PVT___wen_way1_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_7), 8U));
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_1_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_2_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_3_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_4_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_5_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_6_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_7_io_wen;
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
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_8_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_9_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_10_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_11_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_12_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_13_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_14_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_15_io_wen;
    vlSelf->__PVT___access_work_state_for_stall_T_11 
        = ((0xeU == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_9));
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT__access_work_state_for_stall = ((0x10U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? 0x18U
                                                   : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_11));
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
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

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT__dcache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT__dcache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT__dcache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT__dcache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT__dcache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT__dcache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT__dcache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__dcache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT__dcache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT__dcache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT__dcache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__56(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__56\n"); );
    // Body
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__57(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__57\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_8_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_9_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_11_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_12_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_13_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__58(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__58\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
    vlSelf->__PVT__dcache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT___GEN_3 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_15_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr, 6U, 7U));
    vlSelf->__PVT___GEN_4 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra;
    vlSelf->__PVT___GEN_5 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_4)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT___GEN_6 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_5)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___GEN_7 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_6)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___GEN_8 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_7)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_9 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_8)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_10 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_9)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_11 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_10)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_12 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_11)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_13 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_12)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_14 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_13)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_15 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_14)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_16 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_15)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_17 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_16)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_18 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_17)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_19 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_18)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_20 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_19)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_21 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_20)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_22 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_21)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_23 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_22)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_24 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_23)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_25 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_24)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_26 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_25)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_27 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_26)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_28 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_27)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_29 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_28)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_30 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_29)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_31 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_30)
                               : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT___GEN_32 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_31)
                               : (IData)(vlSelf->__PVT___GEN_31));
    vlSelf->__PVT___GEN_33 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_32)
                               : (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT___GEN_34 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_33)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_35 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_34)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_36 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_35)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_37 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_36)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_38 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_37)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_39 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_38)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_40 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_39)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_41 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_40)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_42 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_41)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_43 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_42)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_44 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_43)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_45 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_44)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_46 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_45)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_47 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_46)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_48 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_47)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_49 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_48)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_50 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_49)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_51 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_50)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_52 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_51)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_53 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_52)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_54 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_53)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_55 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_54)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_56 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_55)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_57 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_56)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_58 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_57)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_59 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_58)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_60 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_59)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_61 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_60)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_62 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_61)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_63 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_62)
                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT___GEN_64 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_63)
                               : (IData)(vlSelf->__PVT___GEN_63));
    vlSelf->__PVT___GEN_65 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_64)
                               : (IData)(vlSelf->__PVT___GEN_64));
    vlSelf->__PVT___GEN_66 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_65)
                               : (IData)(vlSelf->__PVT___GEN_65));
    vlSelf->__PVT___GEN_67 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_66)
                               : (IData)(vlSelf->__PVT___GEN_66));
    vlSelf->__PVT___GEN_68 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_67)
                               : (IData)(vlSelf->__PVT___GEN_67));
    vlSelf->__PVT___GEN_69 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_68)
                               : (IData)(vlSelf->__PVT___GEN_68));
    vlSelf->__PVT___GEN_70 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_69)
                               : (IData)(vlSelf->__PVT___GEN_69));
    vlSelf->__PVT___GEN_71 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_70)
                               : (IData)(vlSelf->__PVT___GEN_70));
    vlSelf->__PVT___GEN_72 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_71)
                               : (IData)(vlSelf->__PVT___GEN_71));
    vlSelf->__PVT___GEN_73 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_72)
                               : (IData)(vlSelf->__PVT___GEN_72));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__59(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__59\n"); );
    // Body
    vlSelf->__PVT__dcache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__63(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__63\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___write_counter_T_4 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_port_awburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT___io_port_araddr_T_5 = VL_CONCAT_QQI(64,58,6, 
                                                       (0x3ffffffffffffffULL 
                                                        & VL_SEL_QQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 6U, 0x3aU)), 0U);
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___io_port_arsize_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                           ? 3U : (IData)(vlSelf->__PVT__stage1_sram_size_reg));
    vlSelf->__PVT___access_work_state_T_19 = (7U == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__Vdly__stage1_stall_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                        & (IData)(vlSelf->__PVT__io_sram_req));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst 
        = vlSelf->__PVT__io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst 
        = vlSelf->__PVT__io_port_arburst;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__64(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__64\n"); );
    // Body
    vlSelf->__PVT__stage1_stall_reg = vlSelf->__Vdly__stage1_stall_reg;
    vlSelf->__PVT___write_counter_T_5 = ((IData)(vlSelf->__PVT___access_work_state_T_19)
                                          ? 0U : (IData)(vlSelf->__PVT___write_counter_T_4));
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_arsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSelf->__PVT__io_port_awlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_awsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arburst 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awburst 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awsize 
        = vlSelf->__PVT__io_port_awsize;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awlen 
        = vlSelf->__PVT__io_port_awlen;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arsize 
        = vlSelf->__PVT__io_port_arsize;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arlen 
        = vlSelf->__PVT__io_port_arlen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__65(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__65\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arlen;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arsize;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awlen;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awsize;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__66(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__66\n"); );
    // Body
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
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
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_tlb_req 
        = vlSelf->__PVT__io_tlb_req;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr 
        = vlSelf->__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__67(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__67\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
    vlSelf->__PVT__io_p_addr_for_tlb = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_araddr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__70(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__70\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_10_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_11_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_12_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_13_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__74(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__74\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_15_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__75(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__75\n"); );
    // Body
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_dina;
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90\n"); );
    // Body
    vlSelf->__PVT___GEN_88 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_87)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_89 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_88)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_90 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_89)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_91 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_90)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_92 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_91)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_93 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_92)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_94 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_93)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_95 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_94)
                               : (IData)(vlSelf->__PVT___GEN_94));
    vlSelf->__PVT___GEN_96 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_95)
                               : (IData)(vlSelf->__PVT___GEN_95));
    vlSelf->__PVT___GEN_97 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_96)
                               : (IData)(vlSelf->__PVT___GEN_96));
    vlSelf->__PVT___GEN_98 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_97)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_99 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_98)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_100 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_99)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_101 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_100)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_102 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_101)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_103 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_102)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_104 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_103)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_105 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_104)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_106 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_105)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_107 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_106)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_108 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_107)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_109 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_108)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_110 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_109)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_111 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_110)
                                : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT___GEN_112 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_111)
                                : (IData)(vlSelf->__PVT___GEN_111));
    vlSelf->__PVT___GEN_113 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_112)
                                : (IData)(vlSelf->__PVT___GEN_112));
    vlSelf->__PVT___GEN_114 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_113)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_115 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_114)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_116 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_115)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_117 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_116)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_118 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_117)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_119 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_118)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_120 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_119)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_121 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_120)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_122 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_121)
                                : (IData)(vlSelf->__PVT___GEN_121));
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
    vlSelf->__PVT__dcache_tag_1_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_12 = ((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                       & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way0_dirty_T_7 = (1U & (~ (IData)(vlSelf->__PVT___GEN_128)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_1_io_wen;
    vlSelf->__PVT__dcache_tag_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT___way0_dirty_T_12 = ((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__way0_burst_read_wen = ((((IData)(vlSelf->__PVT___wait_data_T_3) 
                                            | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                           & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                          & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_io_wen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__95(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__95\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___GEN_259 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_771 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_770));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid 
        = vlSelf->__PVT__io_port_awvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__96(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__96\n"); );
    // Body
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
    vlSelf->__PVT__io_port_arvalid = ((((IData)(vlSelf->__PVT___io_port_araddr_T) 
                                        | (IData)(vlSelf->__PVT___io_port_araddr_T_1)) 
                                       | (IData)(vlSelf->__PVT___io_port_araddr_T_2)) 
                                      & (IData)(vlSelf->__PVT___io_port_arvalid_T_7));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xffU : 0U);
    vlSelf->__PVT___GEN_260 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_772 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_771));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid 
        = vlSelf->__PVT__io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__97(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__97\n"); );
    // Body
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
    vlSelf->__PVT___GEN_261 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_773 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_772));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wstrb 
        = vlSelf->__PVT__io_port_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata = ((IData)(vlSelf->__PVT__stage2_stall_reg)
                                     ? vlSelf->__PVT___io_sram_rdata_T_3
                                     : vlSelf->__PVT__sram_rdata_reg);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_rdata 
        = vlSelf->__PVT__io_sram_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__153(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__153\n"); );
    // Body
    vlSelf->__PVT___T_21 = VL_CONCAT_QIQ(52,1,51, 1U, 
                                         (0x7ffffffffffffULL 
                                          & VL_SEL_QQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xdU, 0x33U)));
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
    vlSelf->__PVT__dcache_tag_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                           ? vlSelf->__PVT___T_21
                                           : 0ULL);
    vlSelf->__PVT__dcache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                             ? vlSelf->__PVT___T_21
                                             : 0ULL);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_1_io_wdata;
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_addra;
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
    vlSelf->__PVT___way1_dirty_T_4 = (((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_1_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_2_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_3_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_4_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_5_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_6_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_7_io_wdata;
    vlSelf->__PVT__dcache_data_8_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_9_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__154(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__154\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT__io_port_wdata = ((4U == (IData)(vlSelf->__PVT__work_state))
                                     ? vlSelf->__PVT__stage1_sram_wdata_reg
                                     : vlSelf->__PVT___io_port_wdata_T_4);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wdata 
        = vlSelf->__PVT__io_port_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__158(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__158\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_8_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_9_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_10_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_11_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_12_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_13_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_14_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_15_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__160(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__160\n"); );
    // Body
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid 
        = vlSelf->__PVT__io_port_wvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__161(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__161\n"); );
    // Body
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_wvalid = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__162(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__162\n"); );
    // Body
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wlast 
        = vlSelf->__PVT__io_port_wlast;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__163(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__163\n"); );
    // Body
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
    vlSelf->__PVT___wen_way0_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_2), 8U));
    vlSelf->__PVT___wen_way0_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_3), 8U));
    vlSelf->__PVT___wen_way0_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_4), 8U));
    vlSelf->__PVT___wen_way0_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_5), 8U));
    vlSelf->__PVT___wen_way0_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_6), 8U));
    vlSelf->__PVT___wen_way0_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_7), 8U));
    vlSelf->__PVT__dcache_data_2_io_wen = (((2U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_2_T_13));
    vlSelf->__PVT__dcache_data_3_io_wen = (((3U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_3_T_13));
    vlSelf->__PVT__dcache_data_4_io_wen = (((4U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_4_T_13));
    vlSelf->__PVT__dcache_data_5_io_wen = (((5U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_5_T_13));
    vlSelf->__PVT__dcache_data_6_io_wen = (((6U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_6_T_13));
    vlSelf->__PVT__dcache_data_7_io_wen = (((7U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_7_T_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_2_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_3_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_4_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_5_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_6_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_7_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_valid;
    vlSelf->__PVT__dcache_tag_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__dcache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__29(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__29\n"); );
    // Body
    vlSelf->__PVT__io_port_awaddr = ((0xfU == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__awaddr_miss_addr
                                      : vlSelf->__PVT___io_port_awaddr_T_4);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awaddr 
        = vlSelf->__PVT__io_port_awaddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__169(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__169\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_1_io_wen;
    vlSelf->__PVT__state_ready_lookup_will_to_be = 
        ((IData)(vlSelf->__PVT__hit) ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_7)
          : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wen;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__170(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__170\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_wea;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__171(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__171\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea), 7U));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__172(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__172\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
}
