// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_cache.h"

VL_INLINE_OPT void Vmycpu_top_inst_cache___ico_sequent__TOP__mycpu_top__inst_cache__0(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___ico_sequent__TOP__mycpu_top__inst_cache__0\n"); );
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
    vlSelf->__PVT___access_work_state_T_42 = ((IData)(vlSelf->__PVT___access_work_state_T_6)
                                               ? 7U
                                               : (IData)(vlSelf->__PVT__work_state));
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
    vlSelf->__PVT___access_work_state_T_45 = ((6U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_42)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_44));
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
    vlSelf->__PVT__decoder_inst_data_lo = VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                        VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U));
    vlSelf->__PVT___decoder_inst_data_T_20 = ((IData)(vlSelf->__PVT___decoder_inst_data_T_18) 
                                              | (0x6fU 
                                                 == (IData)(vlSelf->__PVT__decoder_inst_data_opD)));
    vlSelf->__PVT___decoder_inst_data_T_6 = ((4U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 4U : 
                                             VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___decoder_inst_data_T_4)));
    vlSelf->__PVT___access_work_state_T_46 = (((5U 
                                                == (IData)(vlSelf->__PVT__work_state)) 
                                               & (IData)(vlSelf->__PVT__io_port_arready))
                                               ? 6U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
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
    vlSelf->__PVT___decoder_inst_data_T_8 = ((5U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                              ? 8U : 
                                             VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___decoder_inst_data_T_6)));
    vlSelf->__PVT___access_work_state_T_47 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_34))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_46));
    vlSelf->__PVT___decoder_inst_data_T_10 = ((6U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x10U
                                               : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___decoder_inst_data_T_8)));
    vlSelf->__PVT___access_work_state_T_48 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_22))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT___decoder_inst_data_T_12 = ((7U == (IData)(vlSelf->__PVT__decoder_inst_data_Funct3D))
                                               ? 0x20U
                                               : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___decoder_inst_data_T_10)));
    vlSelf->__PVT___access_work_state_T_49 = ((IData)(vlSelf->__PVT___stage1_finished_T_2)
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_7))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_48));
    vlSelf->__PVT___decoder_inst_data_T_14 = ((0x63U 
                                               == (IData)(vlSelf->__PVT__decoder_inst_data_opD))
                                               ? (IData)(vlSelf->__PVT___decoder_inst_data_T_12)
                                               : 0U);
    vlSelf->__PVT__access_work_state = (((2U == (IData)(vlSelf->__PVT__work_state)) 
                                         & (IData)(vlSelf->__PVT__io_port_arready))
                                         ? 3U : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT__decoder_inst_data = VL_CONCAT_QIQ(40,6,34, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), 
                                                     VL_CONCAT_QIQ(34,1,33, (IData)(vlSelf->__PVT___decoder_inst_data_T_20), 
                                                                   VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT___decoder_inst_data_T_22), 
                                                                                VL_SEL_IQII(64, vlSelf->__PVT__io_port_rdata, 0U, 0x20U))));
    vlSelf->__PVT__decoder_inst_data_hi = VL_CONCAT_III(7,6,1, (IData)(vlSelf->__PVT___decoder_inst_data_T_14), (IData)(vlSelf->__PVT___decoder_inst_data_T_20));
    vlSelf->__PVT___stage2_stall_T = (1U == (IData)(vlSelf->__PVT__access_work_state));
    vlSelf->__PVT__stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                    | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                   & (IData)(vlSelf->__PVT___stage2_stall_T_5));
    vlSelf->__PVT__io_stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                       | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                      & (IData)(vlSelf->__PVT___stage2_stall_T_5));
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
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__4(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__4\n"); );
    // Body
    vlSelf->__PVT__icache_data_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__5(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__5\n"); );
    // Body
    vlSelf->__PVT__icache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__21(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__21\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_15_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_addr, 5U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__26(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__26\n"); );
    // Body
    vlSelf->__PVT__icache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__27(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__27\n"); );
    // Body
    vlSelf->__PVT__icache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__28(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__28\n"); );
    // Body
    vlSelf->__PVT__icache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__29(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__29\n"); );
    // Body
    vlSelf->__PVT__icache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__30(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__30\n"); );
    // Body
    vlSelf->__PVT__icache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__31(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__31\n"); );
    // Body
    vlSelf->__PVT__icache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__32(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__32\n"); );
    // Body
    vlSelf->__PVT__icache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__33(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__33\n"); );
    // Body
    vlSelf->__PVT__icache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__34(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__34\n"); );
    // Body
    vlSelf->__PVT__icache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__35(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__35\n"); );
    // Body
    vlSelf->__PVT__icache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__36(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__36\n"); );
    // Body
    vlSelf->__PVT__icache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__37(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__37\n"); );
    // Body
    vlSelf->__PVT__icache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__38(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__38\n"); );
    // Body
    vlSelf->__PVT__icache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__39(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__39\n"); );
    // Body
    vlSelf->__PVT__icache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__40(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__40\n"); );
    // Body
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_addr, 5U, 7U));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__66(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__66\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__icache_tag_1_io_wdata;
    vlSelf->__PVT___access_work_state_T_45 = ((6U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_42)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_44));
    vlSelf->__PVT___GEN_6 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__80(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__80\n"); );
    // Body
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_arburst 
        = vlSelf->__PVT__io_port_arburst;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__81(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__81\n"); );
    // Body
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSymsp->TOP__mycpu_top.axi_mem_port_0_arburst 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_arburst;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_arlen 
        = vlSelf->__PVT__io_port_arlen;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__82(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__82\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__icache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr 
        = vlSelf->__PVT__icache_tag_1_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_io_addr;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__icache_data_1_io_addr;
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__icache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_addr, 5U, 7U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__icache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_addra;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_ar_addr 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_ar_addr;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__17(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__17\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata_L = (((IData)(vlSelf->__PVT___stage2_stall_T_5) 
                                       & (IData)(vlSelf->__PVT__has_stage2_stall))
                                       ? vlSelf->__PVT__access_sram_rdata_L
                                       : vlSelf->__PVT__sram_rdata_L_Reg);
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_rdata_L 
        = vlSelf->__PVT__io_sram_rdata_L;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__84(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__84\n"); );
    // Body
    vlSelf->__PVT__io_port_arvalid = ((IData)(vlSelf->__PVT___access_work_state_T) 
                                      | (IData)(vlSelf->__PVT___access_work_state_T_35));
    vlSelf->__PVT___io_port_araddr_T_4 = ((IData)(vlSelf->__PVT___access_work_state_T_35)
                                           ? vlSelf->__PVT___io_port_araddr_T_3
                                           : 0ULL);
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_arvalid 
        = vlSelf->__PVT__io_port_arvalid;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__85(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__85\n"); );
    // Body
    vlSelf->__PVT__io_port_araddr = ((IData)(vlSelf->__PVT___access_work_state_T)
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_4);
    vlSymsp->TOP__mycpu_top.axi_mem_port_0_arvalid 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_arvalid;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_araddr 
        = vlSelf->__PVT__io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__86(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__86\n"); );
    // Body
    vlSelf->__PVT___access_work_state_T_38 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT__write_counter = vlSelf->__Vdly__write_counter;
    vlSymsp->TOP__mycpu_top.axi_mem_port_0_araddr = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_port_araddr;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__87(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__87\n"); );
    // Body
    vlSelf->__PVT___write_counter_T_8 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
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
    vlSelf->__PVT___wait_data_L_T_7 = ((IData)(vlSelf->__PVT___access_work_state_T_38) 
                                       & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSymsp->TOP.axi_mem_port_0_arvalid = vlSymsp->TOP__mycpu_top.axi_mem_port_0_arvalid;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_v_addr_for_tlb 
        = vlSelf->__PVT__io_v_addr_for_tlb;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__90(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__90\n"); );
    // Body
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__io_wen;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__91(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__91\n"); );
    // Body
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__icache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1.__PVT__icache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_15__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_14__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_13__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_12__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_11__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_10__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_8__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_9__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_5__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_4__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_3__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_2__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__inst_cache__icache_data_1__icache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__18(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__18\n"); );
    // Body
    vlSelf->__PVT__io_sram_write_en = ((IData)(vlSelf->__PVT__io_inst_buffer_full)
                                        ? 0U : (IData)(vlSelf->__PVT___io_sram_write_en_T_5));
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_write_en 
        = vlSelf->__PVT__io_sram_write_en;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__92(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__92\n"); );
    // Body
    vlSelf->__PVT__icache_tag_1_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                          & (IData)(vlSelf->__PVT___GEN_130));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_1_io_wen;
    vlSelf->__PVT__icache_tag_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                        & (IData)(vlSelf->__PVT___lru_T_8));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__93(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_sequent__TOP__mycpu_top__inst_cache__93\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_io_wen;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__19(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__19\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__20(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__20\n"); );
    // Body
    vlSelf->__PVT__icache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_hit;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__27(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___nba_comb__TOP__mycpu_top__inst_cache__27\n"); );
    // Body
    vlSelf->__PVT__stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                    | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                   & (IData)(vlSelf->__PVT___stage2_stall_T_5));
    vlSelf->__PVT__io_stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                       | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                      & (IData)(vlSelf->__PVT___stage2_stall_T_5));
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
}
