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

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT__dcache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT__dcache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__dcache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT__dcache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT__dcache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT__dcache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT__dcache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT__dcache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT__dcache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__24(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__24\n"); );
    // Body
    vlSelf->__PVT__dcache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__25(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__25\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__26(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__26\n"); );
    // Body
    vlSelf->__PVT__dcache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__27(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__27\n"); );
    // Body
    vlSelf->__PVT__dcache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__28(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__28\n"); );
    // Body
    vlSelf->__PVT__dcache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__48(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__48\n"); );
    // Body
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT___io_port_araddr_T_6 = (((0xcU == (IData)(vlSelf->__PVT__work_state)) 
                                           | (8U == (IData)(vlSelf->__PVT__work_state)))
                                           ? vlSelf->__PVT___io_port_araddr_T_5
                                           : 0ULL);
    vlSelf->__PVT___io_port_awaddr_T_2 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                           : 0ULL);
    vlSelf->__PVT___GEN_258 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_1)
                                : (IData)(vlSelf->__PVT__way0_dirty_0));
    vlSelf->__PVT___GEN_770 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_1)
                                : (IData)(vlSelf->__PVT__way1_dirty_0));
    vlSelf->__PVT___GEN_2 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb 
        = vlSelf->__PVT__io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__49(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__49\n"); );
    // Body
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT___GEN_259 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_771 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_770));
    vlSelf->__PVT___GEN_3 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_v_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr 
        = vlSelf->__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__50(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__50\n"); );
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
    vlSelf->__PVT__io_p_addr_for_tlb = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_p_addr_for_tlb;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_araddr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_araddr;
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

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__78(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__78\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_1_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_15_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr, 6U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__79(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__79\n"); );
    // Body
    vlSelf->__PVT__dcache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_8_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_ar_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__80(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__80\n"); );
    // Body
    vlSelf->__PVT__dcache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_9_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__81(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__81\n"); );
    // Body
    vlSelf->__PVT__dcache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_11_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_12_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_13_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__85(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__85\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_4 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_port_awburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___io_port_arsize_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                           ? 3U : (IData)(vlSelf->__PVT__stage1_sram_size_reg));
    vlSelf->__PVT___access_work_state_T_19 = (7U == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 3U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 1U);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awburst 
        = vlSelf->__PVT__io_port_awburst;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arburst 
        = vlSelf->__PVT__io_port_arburst;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__86(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__86\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__87(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__87\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___hit_T = ((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                             & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT__stage2_write_stage1_read = ((IData)(vlSelf->__PVT__stage2_sram_write_reg) 
                                               & (~ (IData)(vlSelf->__PVT__stage1_sram_wr_reg)));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_3)
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_5));
    vlSelf->__PVT___hit_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_hit1_reg) 
                               & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arlen;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arsize;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awlen = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awlen;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awsize = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awsize;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__88(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__88\n"); );
    // Body
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSelf->__PVT___state_lookup_for_less_delay_T_1 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT__work_state));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_tlb_req 
        = vlSelf->__PVT__io_tlb_req;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid 
        = vlSelf->__PVT__io_port_wvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid 
        = vlSelf->__PVT__io_port_awvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__89(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__89\n"); );
    // Body
    vlSelf->__PVT__io_port_arvalid = ((((IData)(vlSelf->__PVT___io_port_araddr_T) 
                                        | (IData)(vlSelf->__PVT___io_port_araddr_T_1)) 
                                       | (IData)(vlSelf->__PVT___io_port_araddr_T_2)) 
                                      & (IData)(vlSelf->__PVT___io_port_arvalid_T_7));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xffU : 0U);
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awvalid;
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_wvalid = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid 
        = vlSelf->__PVT__io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90\n"); );
    // Body
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
    vlSelf->__PVT___way0_dirty_T = (0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay));
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_arvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_arvalid;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wlast 
        = vlSelf->__PVT__io_port_wlast;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wstrb 
        = vlSelf->__PVT__io_port_wstrb;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__91(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__91\n"); );
    // Body
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__92(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__92\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_stage2_stall;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__93(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__93\n"); );
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_aw_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__94(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__94\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_1_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_2_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_3_io_wdata;
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__95(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__95\n"); );
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_dina;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__99(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__99\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_1_io_wdata;
    vlSelf->__PVT___way0_dirty_T_4 = ((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                        & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__101(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__101\n"); );
    // Body
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
    vlSelf->__PVT__dcache_data_14_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_15_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
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
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__102(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__102\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_15_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__103(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__103\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_12 = ((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                       & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_1_io_wen;
    vlSelf->__PVT__dcache_tag_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_io_wen;
    vlSelf->__PVT___wen_way1_wire_0_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_0), 8U));
    vlSelf->__PVT___wen_way1_wire_1_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_1), 8U));
    vlSelf->__PVT___wen_way1_wire_2_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_2), 8U));
    vlSelf->__PVT___wen_way1_wire_3_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_3), 8U));
    vlSelf->__PVT___wen_way1_wire_4_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_4), 8U));
    vlSelf->__PVT___wen_way1_wire_5_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_5), 8U));
    vlSelf->__PVT___wen_way1_wire_6_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_6), 8U));
    vlSelf->__PVT___wen_way1_wire_7_T_13 = (0xffU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_7), 8U));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__32(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__32\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__33(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__33\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__34(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__34\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_valid;
    vlSelf->__PVT__dcache_tag_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__35(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__35\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__dcache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__39(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__39\n"); );
    // Body
    vlSelf->__PVT__io_port_awaddr = ((0xfU == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__awaddr_miss_addr
                                      : vlSelf->__PVT___io_port_awaddr_T_4);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awaddr 
        = vlSelf->__PVT__io_port_awaddr;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__43(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__43\n"); );
    // Body
    vlSelf->__PVT__io_port_wdata = ((4U == (IData)(vlSelf->__PVT__work_state))
                                     ? vlSelf->__PVT__stage1_sram_wdata_reg
                                     : vlSelf->__PVT___io_port_wdata_T_4);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_wdata 
        = vlSelf->__PVT__io_port_wdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__114(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__114\n"); );
    // Body
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
    vlSelf->__PVT__state_ready_lookup_will_to_be = 
        ((IData)(vlSelf->__PVT__hit) ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_7)
          : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_18));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wen;
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_wea;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__115(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__115\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
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
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
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
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
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
