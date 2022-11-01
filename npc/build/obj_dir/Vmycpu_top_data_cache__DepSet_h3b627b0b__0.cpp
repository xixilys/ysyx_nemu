// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___ico_sequent__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___ico_sequent__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__Vdly__way1_dirty_102 = vlSelf->__PVT__way1_dirty_102;
    vlSelf->__Vdly__way1_dirty_101 = vlSelf->__PVT__way1_dirty_101;
    vlSelf->__Vdly__way1_dirty_100 = vlSelf->__PVT__way1_dirty_100;
    vlSelf->__Vdly__way1_dirty_99 = vlSelf->__PVT__way1_dirty_99;
    vlSelf->__Vdly__way1_dirty_98 = vlSelf->__PVT__way1_dirty_98;
    vlSelf->__Vdly__way1_dirty_97 = vlSelf->__PVT__way1_dirty_97;
    vlSelf->__Vdly__way1_dirty_96 = vlSelf->__PVT__way1_dirty_96;
    vlSelf->__Vdly__way1_dirty_95 = vlSelf->__PVT__way1_dirty_95;
    vlSelf->__Vdly__way1_dirty_94 = vlSelf->__PVT__way1_dirty_94;
    vlSelf->__Vdly__way1_dirty_93 = vlSelf->__PVT__way1_dirty_93;
    vlSelf->__Vdly__way1_dirty_92 = vlSelf->__PVT__way1_dirty_92;
    vlSelf->__Vdly__way1_dirty_91 = vlSelf->__PVT__way1_dirty_91;
    vlSelf->__Vdly__way1_dirty_90 = vlSelf->__PVT__way1_dirty_90;
    vlSelf->__Vdly__way1_dirty_89 = vlSelf->__PVT__way1_dirty_89;
    vlSelf->__Vdly__way1_dirty_88 = vlSelf->__PVT__way1_dirty_88;
    vlSelf->__Vdly__way1_dirty_87 = vlSelf->__PVT__way1_dirty_87;
    vlSelf->__Vdly__way1_dirty_86 = vlSelf->__PVT__way1_dirty_86;
    vlSelf->__Vdly__way1_dirty_85 = vlSelf->__PVT__way1_dirty_85;
    vlSelf->__Vdly__way1_dirty_84 = vlSelf->__PVT__way1_dirty_84;
    vlSelf->__Vdly__way1_dirty_83 = vlSelf->__PVT__way1_dirty_83;
    vlSelf->__Vdly__way1_dirty_82 = vlSelf->__PVT__way1_dirty_82;
    vlSelf->__Vdly__way1_dirty_81 = vlSelf->__PVT__way1_dirty_81;
    vlSelf->__Vdly__way1_dirty_65 = vlSelf->__PVT__way1_dirty_65;
    vlSelf->__Vdly__way1_dirty_64 = vlSelf->__PVT__way1_dirty_64;
    vlSelf->__Vdly__way1_dirty_63 = vlSelf->__PVT__way1_dirty_63;
    vlSelf->__Vdly__way1_dirty_62 = vlSelf->__PVT__way1_dirty_62;
    vlSelf->__Vdly__way1_dirty_61 = vlSelf->__PVT__way1_dirty_61;
    vlSelf->__Vdly__way1_dirty_60 = vlSelf->__PVT__way1_dirty_60;
    vlSelf->__Vdly__way1_dirty_59 = vlSelf->__PVT__way1_dirty_59;
    vlSelf->__Vdly__way1_dirty_58 = vlSelf->__PVT__way1_dirty_58;
    vlSelf->__Vdly__way1_dirty_57 = vlSelf->__PVT__way1_dirty_57;
    vlSelf->__Vdly__way1_dirty_56 = vlSelf->__PVT__way1_dirty_56;
    vlSelf->__Vdly__way1_dirty_55 = vlSelf->__PVT__way1_dirty_55;
    vlSelf->__Vdly__way1_dirty_54 = vlSelf->__PVT__way1_dirty_54;
    vlSelf->__Vdly__way1_dirty_53 = vlSelf->__PVT__way1_dirty_53;
    vlSelf->__Vdly__way1_dirty_52 = vlSelf->__PVT__way1_dirty_52;
    vlSelf->__Vdly__way1_dirty_51 = vlSelf->__PVT__way1_dirty_51;
    vlSelf->__Vdly__way1_dirty_50 = vlSelf->__PVT__way1_dirty_50;
    vlSelf->__Vdly__way1_dirty_49 = vlSelf->__PVT__way1_dirty_49;
    vlSelf->__Vdly__way1_dirty_48 = vlSelf->__PVT__way1_dirty_48;
    vlSelf->__Vdly__way1_dirty_47 = vlSelf->__PVT__way1_dirty_47;
    vlSelf->__Vdly__way1_dirty_46 = vlSelf->__PVT__way1_dirty_46;
    vlSelf->__Vdly__way1_dirty_45 = vlSelf->__PVT__way1_dirty_45;
    vlSelf->__Vdly__way1_dirty_44 = vlSelf->__PVT__way1_dirty_44;
    vlSelf->__Vdly__way1_dirty_43 = vlSelf->__PVT__way1_dirty_43;
    vlSelf->__Vdly__way1_dirty_42 = vlSelf->__PVT__way1_dirty_42;
    vlSelf->__Vdly__way1_dirty_41 = vlSelf->__PVT__way1_dirty_41;
    vlSelf->__Vdly__way1_dirty_40 = vlSelf->__PVT__way1_dirty_40;
    vlSelf->__Vdly__way1_dirty_39 = vlSelf->__PVT__way1_dirty_39;
    vlSelf->__Vdly__way1_dirty_38 = vlSelf->__PVT__way1_dirty_38;
    vlSelf->__Vdly__way1_dirty_37 = vlSelf->__PVT__way1_dirty_37;
    vlSelf->__Vdly__way1_dirty_36 = vlSelf->__PVT__way1_dirty_36;
    vlSelf->__Vdly__way1_dirty_35 = vlSelf->__PVT__way1_dirty_35;
    vlSelf->__Vdly__way1_dirty_34 = vlSelf->__PVT__way1_dirty_34;
    vlSelf->__Vdly__way1_dirty_33 = vlSelf->__PVT__way1_dirty_33;
    vlSelf->__Vdly__way1_dirty_32 = vlSelf->__PVT__way1_dirty_32;
    vlSelf->__Vdly__way1_dirty_31 = vlSelf->__PVT__way1_dirty_31;
    vlSelf->__Vdly__way1_dirty_30 = vlSelf->__PVT__way1_dirty_30;
    vlSelf->__Vdly__way1_dirty_29 = vlSelf->__PVT__way1_dirty_29;
    vlSelf->__Vdly__way1_dirty_28 = vlSelf->__PVT__way1_dirty_28;
    vlSelf->__Vdly__way1_dirty_27 = vlSelf->__PVT__way1_dirty_27;
    vlSelf->__Vdly__way1_dirty_26 = vlSelf->__PVT__way1_dirty_26;
    vlSelf->__Vdly__way1_dirty_25 = vlSelf->__PVT__way1_dirty_25;
    vlSelf->__Vdly__way1_dirty_24 = vlSelf->__PVT__way1_dirty_24;
    vlSelf->__Vdly__way1_dirty_23 = vlSelf->__PVT__way1_dirty_23;
    vlSelf->__Vdly__way1_dirty_22 = vlSelf->__PVT__way1_dirty_22;
    vlSelf->__Vdly__way1_dirty_21 = vlSelf->__PVT__way1_dirty_21;
    vlSelf->__Vdly__way1_dirty_20 = vlSelf->__PVT__way1_dirty_20;
    vlSelf->__Vdly__way1_dirty_19 = vlSelf->__PVT__way1_dirty_19;
    vlSelf->__Vdly__way1_dirty_18 = vlSelf->__PVT__way1_dirty_18;
    vlSelf->__Vdly__way1_dirty_17 = vlSelf->__PVT__way1_dirty_17;
    vlSelf->__Vdly__way1_dirty_16 = vlSelf->__PVT__way1_dirty_16;
    vlSelf->__Vdly__way1_dirty_15 = vlSelf->__PVT__way1_dirty_15;
    vlSelf->__Vdly__way1_dirty_14 = vlSelf->__PVT__way1_dirty_14;
    vlSelf->__Vdly__way1_dirty_13 = vlSelf->__PVT__way1_dirty_13;
    vlSelf->__Vdly__way1_dirty_12 = vlSelf->__PVT__way1_dirty_12;
    vlSelf->__Vdly__way1_dirty_11 = vlSelf->__PVT__way1_dirty_11;
    vlSelf->__Vdly__way1_dirty_10 = vlSelf->__PVT__way1_dirty_10;
    vlSelf->__Vdly__way1_dirty_9 = vlSelf->__PVT__way1_dirty_9;
    vlSelf->__Vdly__way1_dirty_8 = vlSelf->__PVT__way1_dirty_8;
    vlSelf->__Vdly__way1_dirty_7 = vlSelf->__PVT__way1_dirty_7;
    vlSelf->__Vdly__way1_dirty_6 = vlSelf->__PVT__way1_dirty_6;
    vlSelf->__Vdly__way1_dirty_5 = vlSelf->__PVT__way1_dirty_5;
    vlSelf->__Vdly__way1_dirty_4 = vlSelf->__PVT__way1_dirty_4;
    vlSelf->__Vdly__way1_dirty_3 = vlSelf->__PVT__way1_dirty_3;
    vlSelf->__Vdly__way1_dirty_2 = vlSelf->__PVT__way1_dirty_2;
    vlSelf->__Vdly__way1_dirty_1 = vlSelf->__PVT__way1_dirty_1;
    vlSelf->__Vdly__way1_dirty_0 = vlSelf->__PVT__way1_dirty_0;
    vlSelf->__Vdly__way0_dirty_125 = vlSelf->__PVT__way0_dirty_125;
    vlSelf->__Vdly__way0_dirty_124 = vlSelf->__PVT__way0_dirty_124;
    vlSelf->__Vdly__way0_dirty_123 = vlSelf->__PVT__way0_dirty_123;
    vlSelf->__Vdly__way0_dirty_122 = vlSelf->__PVT__way0_dirty_122;
    vlSelf->__Vdly__way0_dirty_121 = vlSelf->__PVT__way0_dirty_121;
    vlSelf->__Vdly__way0_dirty_120 = vlSelf->__PVT__way0_dirty_120;
    vlSelf->__Vdly__way0_dirty_119 = vlSelf->__PVT__way0_dirty_119;
    vlSelf->__Vdly__way0_dirty_118 = vlSelf->__PVT__way0_dirty_118;
    vlSelf->__Vdly__way0_dirty_117 = vlSelf->__PVT__way0_dirty_117;
    vlSelf->__Vdly__way0_dirty_116 = vlSelf->__PVT__way0_dirty_116;
    vlSelf->__Vdly__way0_dirty_115 = vlSelf->__PVT__way0_dirty_115;
    vlSelf->__Vdly__way0_dirty_114 = vlSelf->__PVT__way0_dirty_114;
    vlSelf->__Vdly__way0_dirty_109 = vlSelf->__PVT__way0_dirty_109;
    vlSelf->__Vdly__way0_dirty_108 = vlSelf->__PVT__way0_dirty_108;
    vlSelf->__Vdly__way0_dirty_107 = vlSelf->__PVT__way0_dirty_107;
    vlSelf->__Vdly__way0_dirty_106 = vlSelf->__PVT__way0_dirty_106;
    vlSelf->__Vdly__way0_dirty_103 = vlSelf->__PVT__way0_dirty_103;
    vlSelf->__Vdly__way0_dirty_102 = vlSelf->__PVT__way0_dirty_102;
    vlSelf->__Vdly__way0_dirty_101 = vlSelf->__PVT__way0_dirty_101;
    vlSelf->__Vdly__way0_dirty_100 = vlSelf->__PVT__way0_dirty_100;
    vlSelf->__Vdly__way0_dirty_97 = vlSelf->__PVT__way0_dirty_97;
    vlSelf->__Vdly__way0_dirty_96 = vlSelf->__PVT__way0_dirty_96;
    vlSelf->__Vdly__way0_dirty_95 = vlSelf->__PVT__way0_dirty_95;
    vlSelf->__Vdly__way0_dirty_94 = vlSelf->__PVT__way0_dirty_94;
    vlSelf->__Vdly__way0_dirty_93 = vlSelf->__PVT__way0_dirty_93;
    vlSelf->__Vdly__way0_dirty_92 = vlSelf->__PVT__way0_dirty_92;
    vlSelf->__Vdly__way0_dirty_91 = vlSelf->__PVT__way0_dirty_91;
    vlSelf->__Vdly__way0_dirty_90 = vlSelf->__PVT__way0_dirty_90;
    vlSelf->__Vdly__way0_dirty_89 = vlSelf->__PVT__way0_dirty_89;
    vlSelf->__Vdly__way0_dirty_88 = vlSelf->__PVT__way0_dirty_88;
    vlSelf->__Vdly__way0_dirty_87 = vlSelf->__PVT__way0_dirty_87;
    vlSelf->__Vdly__way0_dirty_86 = vlSelf->__PVT__way0_dirty_86;
    vlSelf->__Vdly__way0_dirty_85 = vlSelf->__PVT__way0_dirty_85;
    vlSelf->__Vdly__way0_dirty_84 = vlSelf->__PVT__way0_dirty_84;
    vlSelf->__Vdly__way0_dirty_83 = vlSelf->__PVT__way0_dirty_83;
    vlSelf->__Vdly__way0_dirty_82 = vlSelf->__PVT__way0_dirty_82;
    vlSelf->__Vdly__way0_dirty_81 = vlSelf->__PVT__way0_dirty_81;
    vlSelf->__Vdly__way0_dirty_80 = vlSelf->__PVT__way0_dirty_80;
    vlSelf->__Vdly__way0_dirty_78 = vlSelf->__PVT__way0_dirty_78;
    vlSelf->__Vdly__way0_dirty_77 = vlSelf->__PVT__way0_dirty_77;
    vlSelf->__Vdly__lru_126 = vlSelf->__PVT__lru_126;
    vlSelf->__Vdly__lru_125 = vlSelf->__PVT__lru_125;
    vlSelf->__Vdly__lru_124 = vlSelf->__PVT__lru_124;
    vlSelf->__Vdly__lru_123 = vlSelf->__PVT__lru_123;
    vlSelf->__Vdly__lru_122 = vlSelf->__PVT__lru_122;
    vlSelf->__Vdly__lru_121 = vlSelf->__PVT__lru_121;
    vlSelf->__Vdly__lru_120 = vlSelf->__PVT__lru_120;
    vlSelf->__Vdly__lru_6 = vlSelf->__PVT__lru_6;
    vlSelf->__Vdly__lru_5 = vlSelf->__PVT__lru_5;
    vlSelf->__Vdly__lru_4 = vlSelf->__PVT__lru_4;
    vlSelf->__Vdly__lru_3 = vlSelf->__PVT__lru_3;
    vlSelf->__Vdly__lru_2 = vlSelf->__PVT__lru_2;
    vlSelf->__Vdly__lru_1 = vlSelf->__PVT__lru_1;
    vlSelf->__Vdly__lru_0 = vlSelf->__PVT__lru_0;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_102 = 0U;
    } else if ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_102 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_101 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_100 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_99 = 0U;
    } else if ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_99 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_98 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_97 = 0U;
    } else if ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_97 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_96 = 0U;
    } else if ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_96 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_95 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_94 = 0U;
    } else if ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_94 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_93 = 0U;
    } else if ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_93 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_92 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_91 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_90 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_89 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_88 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_87 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_86 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_85 = 0U;
    } else if ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_85 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_84 = 0U;
    } else if ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_84 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_83 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_82 = 0U;
    } else if ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_82 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_81 = 0U;
    } else if ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_81 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_65 = 0U;
    } else if ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_65 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_64 = 0U;
    } else if ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_64 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_63 = 0U;
    } else if ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_63 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_62 = 0U;
    } else if ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_62 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_61 = 0U;
    } else if ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_61 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_60 = 0U;
    } else if ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_60 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_59 = 0U;
    } else if ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_59 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_58 = 0U;
    } else if ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_58 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_57 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_56 = 0U;
    } else if ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_56 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_55 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_54 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_53 = 0U;
    } else if ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_53 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_52 = 0U;
    } else if ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_52 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_51 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_50 = 0U;
    } else if ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_50 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_49 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_48 = 0U;
    } else if ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_48 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_47 = 0U;
    } else if ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_47 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_46 = 0U;
    } else if ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_46 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_45 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_44 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_43 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_42 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_41 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_40 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_39 = 0U;
    } else if ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_39 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_38 = 0U;
    } else if ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_38 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_37 = 0U;
    } else if ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_37 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_36 = 0U;
    } else if ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_36 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_35 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_34 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_33 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_32 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_31 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_30 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_29 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_28 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_27 = 0U;
    } else if ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_27 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_26 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_25 = 0U;
    } else if ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_25 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_24 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_23 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_22 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_21 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_20 = 0U;
    } else if ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_20 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_19 = 0U;
    } else if ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_19 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_18 = 0U;
    } else if ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_18 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_17 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_16 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_15 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_14 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_13 = 0U;
    } else if ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_13 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_12 = 0U;
    } else if ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_12 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_11 = 0U;
    } else if ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_11 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_10 = 0U;
    } else if ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_10 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_9 = 0U;
    } else if ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_9 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_8 = 0U;
    } else if ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_8 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_7 = 0U;
    } else if ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_7 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_6 = 0U;
    } else if ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_6 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_5 = 0U;
    } else if ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_5 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_4 = 0U;
    } else if ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_4 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_3 = 0U;
    } else if ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_3 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_2 = 0U;
    } else if ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_2 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_0 = 0U;
    } else if ((0U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_0 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_1 = 0U;
    } else if ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_1 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_125 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_124 = 0U;
    } else if ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_124 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_123 = 0U;
    } else if ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_123 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_122 = 0U;
    } else if ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_122 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_121 = 0U;
    } else if ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_121 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_120 = 0U;
    } else if ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_120 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_119 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_118 = 0U;
    } else if ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_118 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_117 = 0U;
    } else if ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_117 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_116 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_115 = 0U;
    } else if ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_115 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_114 = 0U;
    } else if ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_114 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_109 = 0U;
    } else if ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_109 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_108 = 0U;
    } else if ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_108 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_107 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_106 = 0U;
    } else if ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_106 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_103 = 0U;
    } else if ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_103 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_102 = 0U;
    } else if ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_102 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_101 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_100 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_97 = 0U;
    } else if ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_97 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_96 = 0U;
    } else if ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_96 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_95 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_94 = 0U;
    } else if ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_94 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_93 = 0U;
    } else if ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_93 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_92 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_91 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_90 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_89 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_88 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_87 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_86 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_85 = 0U;
    } else if ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_85 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_84 = 0U;
    } else if ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_84 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_83 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_82 = 0U;
    } else if ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_82 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_81 = 0U;
    } else if ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_81 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_80 = 0U;
    } else if ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_80 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_78 = 0U;
    } else if ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_78 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_77 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_126 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_125 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_124 = 0U;
    } else if ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_124 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_123 = 0U;
    } else if ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_123 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_122 = 0U;
    } else if ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_122 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_121 = 0U;
    } else if ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_121 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_120 = 0U;
    } else if ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_120 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_6 = 0U;
    } else if ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_6 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_5 = 0U;
    } else if ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_5 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_4 = 0U;
    } else if ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_4 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_3 = 0U;
    } else if ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_3 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_2 = 0U;
    } else if ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_2 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_0 = 0U;
    } else if ((0U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_0 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_1 = 0U;
    } else if ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_1 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__2(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__2\n"); );
    // Body
    vlSelf->__PVT__way0_dirty_109 = vlSelf->__Vdly__way0_dirty_109;
    vlSelf->__PVT__way0_dirty_108 = vlSelf->__Vdly__way0_dirty_108;
    vlSelf->__PVT__way0_dirty_107 = vlSelf->__Vdly__way0_dirty_107;
    vlSelf->__PVT__way0_dirty_106 = vlSelf->__Vdly__way0_dirty_106;
    vlSelf->__PVT__way0_dirty_103 = vlSelf->__Vdly__way0_dirty_103;
    vlSelf->__PVT__way0_dirty_102 = vlSelf->__Vdly__way0_dirty_102;
    vlSelf->__PVT__way1_dirty_101 = vlSelf->__Vdly__way1_dirty_101;
    vlSelf->__PVT__way0_dirty_101 = vlSelf->__Vdly__way0_dirty_101;
    vlSelf->__PVT__way1_dirty_100 = vlSelf->__Vdly__way1_dirty_100;
    vlSelf->__PVT__way0_dirty_100 = vlSelf->__Vdly__way0_dirty_100;
    vlSelf->__PVT__way1_dirty_99 = vlSelf->__Vdly__way1_dirty_99;
    vlSelf->__PVT__way1_dirty_98 = vlSelf->__Vdly__way1_dirty_98;
    vlSelf->__PVT__way1_dirty_97 = vlSelf->__Vdly__way1_dirty_97;
    vlSelf->__PVT__way0_dirty_97 = vlSelf->__Vdly__way0_dirty_97;
    vlSelf->__PVT__way1_dirty_96 = vlSelf->__Vdly__way1_dirty_96;
    vlSelf->__PVT__way0_dirty_96 = vlSelf->__Vdly__way0_dirty_96;
    vlSelf->__PVT__way1_dirty_95 = vlSelf->__Vdly__way1_dirty_95;
    vlSelf->__PVT__way0_dirty_95 = vlSelf->__Vdly__way0_dirty_95;
    vlSelf->__PVT__way1_dirty_94 = vlSelf->__Vdly__way1_dirty_94;
    vlSelf->__PVT__way0_dirty_94 = vlSelf->__Vdly__way0_dirty_94;
    vlSelf->__PVT__way1_dirty_93 = vlSelf->__Vdly__way1_dirty_93;
    vlSelf->__PVT__way0_dirty_93 = vlSelf->__Vdly__way0_dirty_93;
    vlSelf->__PVT__way1_dirty_92 = vlSelf->__Vdly__way1_dirty_92;
    vlSelf->__PVT__way0_dirty_92 = vlSelf->__Vdly__way0_dirty_92;
    vlSelf->__PVT__way1_dirty_91 = vlSelf->__Vdly__way1_dirty_91;
    vlSelf->__PVT__way0_dirty_91 = vlSelf->__Vdly__way0_dirty_91;
    vlSelf->__PVT__way1_dirty_90 = vlSelf->__Vdly__way1_dirty_90;
    vlSelf->__PVT__way0_dirty_90 = vlSelf->__Vdly__way0_dirty_90;
    vlSelf->__PVT__way1_dirty_89 = vlSelf->__Vdly__way1_dirty_89;
    vlSelf->__PVT__way0_dirty_89 = vlSelf->__Vdly__way0_dirty_89;
    vlSelf->__PVT__way1_dirty_88 = vlSelf->__Vdly__way1_dirty_88;
    vlSelf->__PVT__way0_dirty_88 = vlSelf->__Vdly__way0_dirty_88;
    vlSelf->__PVT__way1_dirty_87 = vlSelf->__Vdly__way1_dirty_87;
    vlSelf->__PVT__way0_dirty_87 = vlSelf->__Vdly__way0_dirty_87;
    vlSelf->__PVT__way1_dirty_86 = vlSelf->__Vdly__way1_dirty_86;
    vlSelf->__PVT__way0_dirty_86 = vlSelf->__Vdly__way0_dirty_86;
    vlSelf->__PVT__way1_dirty_85 = vlSelf->__Vdly__way1_dirty_85;
    vlSelf->__PVT__way0_dirty_85 = vlSelf->__Vdly__way0_dirty_85;
    vlSelf->__PVT__way1_dirty_84 = vlSelf->__Vdly__way1_dirty_84;
    vlSelf->__PVT__way0_dirty_84 = vlSelf->__Vdly__way0_dirty_84;
    vlSelf->__PVT__way1_dirty_83 = vlSelf->__Vdly__way1_dirty_83;
    vlSelf->__PVT__way0_dirty_83 = vlSelf->__Vdly__way0_dirty_83;
    vlSelf->__PVT__way1_dirty_82 = vlSelf->__Vdly__way1_dirty_82;
    vlSelf->__PVT__way0_dirty_82 = vlSelf->__Vdly__way0_dirty_82;
    vlSelf->__PVT__way1_dirty_81 = vlSelf->__Vdly__way1_dirty_81;
    vlSelf->__PVT__way0_dirty_81 = vlSelf->__Vdly__way0_dirty_81;
    vlSelf->__PVT__way0_dirty_80 = vlSelf->__Vdly__way0_dirty_80;
    vlSelf->__PVT__way0_dirty_78 = vlSelf->__Vdly__way0_dirty_78;
    vlSelf->__PVT__way0_dirty_77 = vlSelf->__Vdly__way0_dirty_77;
    vlSelf->__PVT__way1_dirty_65 = vlSelf->__Vdly__way1_dirty_65;
    vlSelf->__PVT__way1_dirty_64 = vlSelf->__Vdly__way1_dirty_64;
    vlSelf->__PVT__way1_dirty_63 = vlSelf->__Vdly__way1_dirty_63;
    vlSelf->__PVT__way1_dirty_62 = vlSelf->__Vdly__way1_dirty_62;
    vlSelf->__PVT__way1_dirty_61 = vlSelf->__Vdly__way1_dirty_61;
    vlSelf->__PVT__way1_dirty_60 = vlSelf->__Vdly__way1_dirty_60;
    vlSelf->__PVT__way1_dirty_59 = vlSelf->__Vdly__way1_dirty_59;
    vlSelf->__PVT__way1_dirty_58 = vlSelf->__Vdly__way1_dirty_58;
    vlSelf->__PVT__way1_dirty_57 = vlSelf->__Vdly__way1_dirty_57;
    vlSelf->__PVT__way1_dirty_56 = vlSelf->__Vdly__way1_dirty_56;
    vlSelf->__PVT__way1_dirty_55 = vlSelf->__Vdly__way1_dirty_55;
    vlSelf->__PVT__way1_dirty_54 = vlSelf->__Vdly__way1_dirty_54;
    vlSelf->__PVT__way1_dirty_53 = vlSelf->__Vdly__way1_dirty_53;
    vlSelf->__PVT__way1_dirty_52 = vlSelf->__Vdly__way1_dirty_52;
    vlSelf->__PVT__way1_dirty_51 = vlSelf->__Vdly__way1_dirty_51;
    vlSelf->__PVT__way1_dirty_50 = vlSelf->__Vdly__way1_dirty_50;
    vlSelf->__PVT__way1_dirty_49 = vlSelf->__Vdly__way1_dirty_49;
    vlSelf->__PVT__way1_dirty_48 = vlSelf->__Vdly__way1_dirty_48;
    vlSelf->__PVT__way1_dirty_47 = vlSelf->__Vdly__way1_dirty_47;
    vlSelf->__PVT__way1_dirty_46 = vlSelf->__Vdly__way1_dirty_46;
    vlSelf->__PVT__way1_dirty_45 = vlSelf->__Vdly__way1_dirty_45;
    vlSelf->__PVT__way1_dirty_44 = vlSelf->__Vdly__way1_dirty_44;
    vlSelf->__PVT__way1_dirty_43 = vlSelf->__Vdly__way1_dirty_43;
    vlSelf->__PVT__way1_dirty_42 = vlSelf->__Vdly__way1_dirty_42;
    vlSelf->__PVT__way1_dirty_41 = vlSelf->__Vdly__way1_dirty_41;
    vlSelf->__PVT__way1_dirty_40 = vlSelf->__Vdly__way1_dirty_40;
    vlSelf->__PVT__way1_dirty_39 = vlSelf->__Vdly__way1_dirty_39;
    vlSelf->__PVT__way1_dirty_38 = vlSelf->__Vdly__way1_dirty_38;
    vlSelf->__PVT__way1_dirty_37 = vlSelf->__Vdly__way1_dirty_37;
    vlSelf->__PVT__way1_dirty_36 = vlSelf->__Vdly__way1_dirty_36;
    vlSelf->__PVT__way1_dirty_35 = vlSelf->__Vdly__way1_dirty_35;
    vlSelf->__PVT__way1_dirty_34 = vlSelf->__Vdly__way1_dirty_34;
    vlSelf->__PVT__way1_dirty_33 = vlSelf->__Vdly__way1_dirty_33;
    vlSelf->__PVT__way1_dirty_32 = vlSelf->__Vdly__way1_dirty_32;
    vlSelf->__PVT__way1_dirty_31 = vlSelf->__Vdly__way1_dirty_31;
    vlSelf->__PVT__way1_dirty_30 = vlSelf->__Vdly__way1_dirty_30;
    vlSelf->__PVT__way1_dirty_29 = vlSelf->__Vdly__way1_dirty_29;
    vlSelf->__PVT__way1_dirty_28 = vlSelf->__Vdly__way1_dirty_28;
    vlSelf->__PVT__way1_dirty_27 = vlSelf->__Vdly__way1_dirty_27;
    vlSelf->__PVT__way1_dirty_26 = vlSelf->__Vdly__way1_dirty_26;
    vlSelf->__PVT__way1_dirty_25 = vlSelf->__Vdly__way1_dirty_25;
    vlSelf->__PVT__way1_dirty_24 = vlSelf->__Vdly__way1_dirty_24;
    vlSelf->__PVT__way1_dirty_23 = vlSelf->__Vdly__way1_dirty_23;
    vlSelf->__PVT__way1_dirty_22 = vlSelf->__Vdly__way1_dirty_22;
    vlSelf->__PVT__way1_dirty_21 = vlSelf->__Vdly__way1_dirty_21;
    vlSelf->__PVT__way1_dirty_20 = vlSelf->__Vdly__way1_dirty_20;
    vlSelf->__PVT__way1_dirty_19 = vlSelf->__Vdly__way1_dirty_19;
    vlSelf->__PVT__way1_dirty_18 = vlSelf->__Vdly__way1_dirty_18;
    vlSelf->__PVT__way1_dirty_17 = vlSelf->__Vdly__way1_dirty_17;
    vlSelf->__PVT__way1_dirty_16 = vlSelf->__Vdly__way1_dirty_16;
    vlSelf->__PVT__way1_dirty_15 = vlSelf->__Vdly__way1_dirty_15;
    vlSelf->__PVT__way1_dirty_14 = vlSelf->__Vdly__way1_dirty_14;
    vlSelf->__PVT__way1_dirty_13 = vlSelf->__Vdly__way1_dirty_13;
    vlSelf->__PVT__way1_dirty_12 = vlSelf->__Vdly__way1_dirty_12;
    vlSelf->__PVT__way1_dirty_11 = vlSelf->__Vdly__way1_dirty_11;
    vlSelf->__PVT__way1_dirty_10 = vlSelf->__Vdly__way1_dirty_10;
    vlSelf->__PVT__way1_dirty_9 = vlSelf->__Vdly__way1_dirty_9;
    vlSelf->__PVT__way1_dirty_8 = vlSelf->__Vdly__way1_dirty_8;
    vlSelf->__PVT__way1_dirty_7 = vlSelf->__Vdly__way1_dirty_7;
    vlSelf->__PVT__way1_dirty_6 = vlSelf->__Vdly__way1_dirty_6;
    vlSelf->__PVT__way1_dirty_5 = vlSelf->__Vdly__way1_dirty_5;
    vlSelf->__PVT__way1_dirty_4 = vlSelf->__Vdly__way1_dirty_4;
    vlSelf->__PVT__way1_dirty_3 = vlSelf->__Vdly__way1_dirty_3;
    vlSelf->__PVT__way1_dirty_2 = vlSelf->__Vdly__way1_dirty_2;
    vlSelf->__PVT__way1_dirty_1 = vlSelf->__Vdly__way1_dirty_1;
    vlSelf->__PVT__way1_dirty_0 = vlSelf->__Vdly__way1_dirty_0;
    vlSelf->__PVT__lru_126 = vlSelf->__Vdly__lru_126;
    vlSelf->__PVT__lru_125 = vlSelf->__Vdly__lru_125;
    vlSelf->__PVT__lru_124 = vlSelf->__Vdly__lru_124;
    vlSelf->__PVT__lru_123 = vlSelf->__Vdly__lru_123;
    vlSelf->__PVT__lru_122 = vlSelf->__Vdly__lru_122;
    vlSelf->__PVT__lru_121 = vlSelf->__Vdly__lru_121;
    vlSelf->__PVT__lru_120 = vlSelf->__Vdly__lru_120;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__Vdly__way0_dirty_127 = vlSelf->__PVT__way0_dirty_127;
    vlSelf->__Vdly__way0_dirty_126 = vlSelf->__PVT__way0_dirty_126;
    vlSelf->__Vdly__way0_dirty_79 = vlSelf->__PVT__way0_dirty_79;
    vlSelf->__Vdly__way0_dirty_76 = vlSelf->__PVT__way0_dirty_76;
    vlSelf->__Vdly__way0_dirty_75 = vlSelf->__PVT__way0_dirty_75;
    vlSelf->__Vdly__way0_dirty_74 = vlSelf->__PVT__way0_dirty_74;
    vlSelf->__Vdly__way0_dirty_72 = vlSelf->__PVT__way0_dirty_72;
    vlSelf->__Vdly__way0_dirty_71 = vlSelf->__PVT__way0_dirty_71;
    vlSelf->__Vdly__way0_dirty_70 = vlSelf->__PVT__way0_dirty_70;
    vlSelf->__Vdly__way0_dirty_69 = vlSelf->__PVT__way0_dirty_69;
    vlSelf->__Vdly__way0_dirty_68 = vlSelf->__PVT__way0_dirty_68;
    vlSelf->__Vdly__way0_dirty_67 = vlSelf->__PVT__way0_dirty_67;
    vlSelf->__Vdly__way0_dirty_66 = vlSelf->__PVT__way0_dirty_66;
    vlSelf->__Vdly__way0_dirty_65 = vlSelf->__PVT__way0_dirty_65;
    vlSelf->__Vdly__way0_dirty_64 = vlSelf->__PVT__way0_dirty_64;
    vlSelf->__Vdly__way0_dirty_63 = vlSelf->__PVT__way0_dirty_63;
    vlSelf->__Vdly__way0_dirty_62 = vlSelf->__PVT__way0_dirty_62;
    vlSelf->__Vdly__way0_dirty_61 = vlSelf->__PVT__way0_dirty_61;
    vlSelf->__Vdly__way0_dirty_60 = vlSelf->__PVT__way0_dirty_60;
    vlSelf->__Vdly__way0_dirty_59 = vlSelf->__PVT__way0_dirty_59;
    vlSelf->__Vdly__way0_dirty_58 = vlSelf->__PVT__way0_dirty_58;
    vlSelf->__Vdly__way0_dirty_57 = vlSelf->__PVT__way0_dirty_57;
    vlSelf->__Vdly__way0_dirty_56 = vlSelf->__PVT__way0_dirty_56;
    vlSelf->__Vdly__way0_dirty_55 = vlSelf->__PVT__way0_dirty_55;
    vlSelf->__Vdly__way0_dirty_54 = vlSelf->__PVT__way0_dirty_54;
    vlSelf->__Vdly__way0_dirty_53 = vlSelf->__PVT__way0_dirty_53;
    vlSelf->__Vdly__way0_dirty_52 = vlSelf->__PVT__way0_dirty_52;
    vlSelf->__Vdly__way0_dirty_51 = vlSelf->__PVT__way0_dirty_51;
    vlSelf->__Vdly__way0_dirty_50 = vlSelf->__PVT__way0_dirty_50;
    vlSelf->__Vdly__way0_dirty_49 = vlSelf->__PVT__way0_dirty_49;
    vlSelf->__Vdly__way0_dirty_48 = vlSelf->__PVT__way0_dirty_48;
    vlSelf->__Vdly__way0_dirty_47 = vlSelf->__PVT__way0_dirty_47;
    vlSelf->__Vdly__way0_dirty_46 = vlSelf->__PVT__way0_dirty_46;
    vlSelf->__Vdly__way0_dirty_45 = vlSelf->__PVT__way0_dirty_45;
    vlSelf->__Vdly__way0_dirty_44 = vlSelf->__PVT__way0_dirty_44;
    vlSelf->__Vdly__way0_dirty_43 = vlSelf->__PVT__way0_dirty_43;
    vlSelf->__Vdly__way0_dirty_42 = vlSelf->__PVT__way0_dirty_42;
    vlSelf->__Vdly__way0_dirty_41 = vlSelf->__PVT__way0_dirty_41;
    vlSelf->__Vdly__way0_dirty_40 = vlSelf->__PVT__way0_dirty_40;
    vlSelf->__Vdly__way0_dirty_39 = vlSelf->__PVT__way0_dirty_39;
    vlSelf->__Vdly__way0_dirty_38 = vlSelf->__PVT__way0_dirty_38;
    vlSelf->__Vdly__way0_dirty_37 = vlSelf->__PVT__way0_dirty_37;
    vlSelf->__Vdly__way0_dirty_36 = vlSelf->__PVT__way0_dirty_36;
    vlSelf->__Vdly__way0_dirty_35 = vlSelf->__PVT__way0_dirty_35;
    vlSelf->__Vdly__way0_dirty_34 = vlSelf->__PVT__way0_dirty_34;
    vlSelf->__Vdly__way0_dirty_33 = vlSelf->__PVT__way0_dirty_33;
    vlSelf->__Vdly__way0_dirty_32 = vlSelf->__PVT__way0_dirty_32;
    vlSelf->__Vdly__way0_dirty_31 = vlSelf->__PVT__way0_dirty_31;
    vlSelf->__Vdly__way0_dirty_30 = vlSelf->__PVT__way0_dirty_30;
    vlSelf->__Vdly__way0_dirty_29 = vlSelf->__PVT__way0_dirty_29;
    vlSelf->__Vdly__way0_dirty_28 = vlSelf->__PVT__way0_dirty_28;
    vlSelf->__Vdly__way0_dirty_27 = vlSelf->__PVT__way0_dirty_27;
    vlSelf->__Vdly__way0_dirty_26 = vlSelf->__PVT__way0_dirty_26;
    vlSelf->__Vdly__way0_dirty_25 = vlSelf->__PVT__way0_dirty_25;
    vlSelf->__Vdly__way0_dirty_24 = vlSelf->__PVT__way0_dirty_24;
    vlSelf->__Vdly__way0_dirty_23 = vlSelf->__PVT__way0_dirty_23;
    vlSelf->__Vdly__way0_dirty_22 = vlSelf->__PVT__way0_dirty_22;
    vlSelf->__Vdly__way0_dirty_21 = vlSelf->__PVT__way0_dirty_21;
    vlSelf->__Vdly__way0_dirty_20 = vlSelf->__PVT__way0_dirty_20;
    vlSelf->__Vdly__way0_dirty_19 = vlSelf->__PVT__way0_dirty_19;
    vlSelf->__Vdly__way0_dirty_17 = vlSelf->__PVT__way0_dirty_17;
    vlSelf->__Vdly__way0_dirty_16 = vlSelf->__PVT__way0_dirty_16;
    vlSelf->__Vdly__way0_dirty_15 = vlSelf->__PVT__way0_dirty_15;
    vlSelf->__Vdly__way0_dirty_14 = vlSelf->__PVT__way0_dirty_14;
    vlSelf->__Vdly__way0_dirty_13 = vlSelf->__PVT__way0_dirty_13;
    vlSelf->__Vdly__way0_dirty_10 = vlSelf->__PVT__way0_dirty_10;
    vlSelf->__Vdly__way0_dirty_9 = vlSelf->__PVT__way0_dirty_9;
    vlSelf->__Vdly__way0_dirty_8 = vlSelf->__PVT__way0_dirty_8;
    vlSelf->__Vdly__way0_dirty_7 = vlSelf->__PVT__way0_dirty_7;
    vlSelf->__Vdly__way0_dirty_6 = vlSelf->__PVT__way0_dirty_6;
    vlSelf->__Vdly__way0_dirty_5 = vlSelf->__PVT__way0_dirty_5;
    vlSelf->__Vdly__way0_dirty_4 = vlSelf->__PVT__way0_dirty_4;
    vlSelf->__Vdly__way0_dirty_3 = vlSelf->__PVT__way0_dirty_3;
    vlSelf->__Vdly__way0_dirty_2 = vlSelf->__PVT__way0_dirty_2;
    vlSelf->__Vdly__way0_dirty_1 = vlSelf->__PVT__way0_dirty_1;
    vlSelf->__Vdly__way0_dirty_0 = vlSelf->__PVT__way0_dirty_0;
    vlSelf->__Vdly__lru_111 = vlSelf->__PVT__lru_111;
    vlSelf->__Vdly__lru_110 = vlSelf->__PVT__lru_110;
    vlSelf->__Vdly__lru_97 = vlSelf->__PVT__lru_97;
    vlSelf->__Vdly__lru_96 = vlSelf->__PVT__lru_96;
    vlSelf->__Vdly__lru_95 = vlSelf->__PVT__lru_95;
    vlSelf->__Vdly__lru_94 = vlSelf->__PVT__lru_94;
    vlSelf->__Vdly__lru_93 = vlSelf->__PVT__lru_93;
    vlSelf->__Vdly__lru_92 = vlSelf->__PVT__lru_92;
    vlSelf->__Vdly__lru_91 = vlSelf->__PVT__lru_91;
    vlSelf->__Vdly__lru_90 = vlSelf->__PVT__lru_90;
    vlSelf->__Vdly__lru_89 = vlSelf->__PVT__lru_89;
    vlSelf->__Vdly__lru_88 = vlSelf->__PVT__lru_88;
    vlSelf->__Vdly__lru_87 = vlSelf->__PVT__lru_87;
    vlSelf->__Vdly__lru_86 = vlSelf->__PVT__lru_86;
    vlSelf->__Vdly__lru_85 = vlSelf->__PVT__lru_85;
    vlSelf->__Vdly__lru_84 = vlSelf->__PVT__lru_84;
    vlSelf->__Vdly__lru_83 = vlSelf->__PVT__lru_83;
    vlSelf->__Vdly__lru_82 = vlSelf->__PVT__lru_82;
    vlSelf->__Vdly__lru_69 = vlSelf->__PVT__lru_69;
    vlSelf->__Vdly__lru_16 = vlSelf->__PVT__lru_16;
    vlSelf->__Vdly__lru_15 = vlSelf->__PVT__lru_15;
    vlSelf->__Vdly__lru_14 = vlSelf->__PVT__lru_14;
    vlSelf->__Vdly__lru_13 = vlSelf->__PVT__lru_13;
    vlSelf->__Vdly__lru_12 = vlSelf->__PVT__lru_12;
    vlSelf->__Vdly__lru_11 = vlSelf->__PVT__lru_11;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_127 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_126 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_79 = 0U;
    } else if ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_79 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_76 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_75 = 0U;
    } else if ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_75 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_74 = 0U;
    } else if ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_74 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_72 = 0U;
    } else if ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_72 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_71 = 0U;
    } else if ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_71 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_70 = 0U;
    } else if ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_70 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_69 = 0U;
    } else if ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_69 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_68 = 0U;
    } else if ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_68 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_67 = 0U;
    } else if ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_67 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_66 = 0U;
    } else if ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_66 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_65 = 0U;
    } else if ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_65 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_64 = 0U;
    } else if ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_64 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_63 = 0U;
    } else if ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_63 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_62 = 0U;
    } else if ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_62 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_61 = 0U;
    } else if ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_61 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_60 = 0U;
    } else if ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_60 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_59 = 0U;
    } else if ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_59 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_58 = 0U;
    } else if ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_58 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_57 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_56 = 0U;
    } else if ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_56 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_55 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_54 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_53 = 0U;
    } else if ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_53 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_52 = 0U;
    } else if ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_52 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_51 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_50 = 0U;
    } else if ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_50 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_49 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_48 = 0U;
    } else if ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_48 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_47 = 0U;
    } else if ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_47 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_46 = 0U;
    } else if ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_46 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_45 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_44 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_43 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_42 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_41 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_40 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_39 = 0U;
    } else if ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_39 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_38 = 0U;
    } else if ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_38 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_37 = 0U;
    } else if ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_37 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_36 = 0U;
    } else if ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_36 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_35 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_34 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_33 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_32 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_31 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_30 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_29 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_28 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_27 = 0U;
    } else if ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_27 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_26 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_25 = 0U;
    } else if ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_25 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_24 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_23 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_22 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_21 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_20 = 0U;
    } else if ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_20 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_19 = 0U;
    } else if ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_19 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_17 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_16 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_15 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_14 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_13 = 0U;
    } else if ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_13 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_10 = 0U;
    } else if ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_10 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_9 = 0U;
    } else if ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_9 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_8 = 0U;
    } else if ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_8 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_7 = 0U;
    } else if ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_7 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_6 = 0U;
    } else if ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_6 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_5 = 0U;
    } else if ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_5 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_4 = 0U;
    } else if ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_4 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_3 = 0U;
    } else if ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_3 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_2 = 0U;
    } else if ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_2 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_0 = 0U;
    } else if ((0U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_0 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_1 = 0U;
    } else if ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_1 = (((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_111 = 0U;
    } else if ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_111 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_110 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_97 = 0U;
    } else if ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_97 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_96 = 0U;
    } else if ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_96 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_95 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_94 = 0U;
    } else if ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_94 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_93 = 0U;
    } else if ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_93 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_92 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_91 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_90 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_89 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_88 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_87 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_86 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_85 = 0U;
    } else if ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_85 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_84 = 0U;
    } else if ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_84 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_83 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_82 = 0U;
    } else if ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_82 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_69 = 0U;
    } else if ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_69 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_16 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_15 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_14 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_13 = 0U;
    } else if ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_13 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_12 = 0U;
    } else if ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_12 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_11 = 0U;
    } else if ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_11 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__5(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__5\n"); );
    // Body
    vlSelf->__PVT__way0_dirty_79 = vlSelf->__Vdly__way0_dirty_79;
    vlSelf->__PVT__way0_dirty_76 = vlSelf->__Vdly__way0_dirty_76;
    vlSelf->__PVT__way0_dirty_75 = vlSelf->__Vdly__way0_dirty_75;
    vlSelf->__PVT__way0_dirty_74 = vlSelf->__Vdly__way0_dirty_74;
    vlSelf->__PVT__way0_dirty_72 = vlSelf->__Vdly__way0_dirty_72;
    vlSelf->__PVT__way0_dirty_71 = vlSelf->__Vdly__way0_dirty_71;
    vlSelf->__PVT__way0_dirty_70 = vlSelf->__Vdly__way0_dirty_70;
    vlSelf->__PVT__way0_dirty_69 = vlSelf->__Vdly__way0_dirty_69;
    vlSelf->__PVT__way0_dirty_68 = vlSelf->__Vdly__way0_dirty_68;
    vlSelf->__PVT__way0_dirty_67 = vlSelf->__Vdly__way0_dirty_67;
    vlSelf->__PVT__way0_dirty_66 = vlSelf->__Vdly__way0_dirty_66;
    vlSelf->__PVT__way0_dirty_65 = vlSelf->__Vdly__way0_dirty_65;
    vlSelf->__PVT__way0_dirty_64 = vlSelf->__Vdly__way0_dirty_64;
    vlSelf->__PVT__way0_dirty_63 = vlSelf->__Vdly__way0_dirty_63;
    vlSelf->__PVT__way0_dirty_62 = vlSelf->__Vdly__way0_dirty_62;
    vlSelf->__PVT__way0_dirty_61 = vlSelf->__Vdly__way0_dirty_61;
    vlSelf->__PVT__way0_dirty_60 = vlSelf->__Vdly__way0_dirty_60;
    vlSelf->__PVT__way0_dirty_59 = vlSelf->__Vdly__way0_dirty_59;
    vlSelf->__PVT__way0_dirty_58 = vlSelf->__Vdly__way0_dirty_58;
    vlSelf->__PVT__way0_dirty_57 = vlSelf->__Vdly__way0_dirty_57;
    vlSelf->__PVT__way0_dirty_56 = vlSelf->__Vdly__way0_dirty_56;
    vlSelf->__PVT__way0_dirty_55 = vlSelf->__Vdly__way0_dirty_55;
    vlSelf->__PVT__way0_dirty_54 = vlSelf->__Vdly__way0_dirty_54;
    vlSelf->__PVT__way0_dirty_53 = vlSelf->__Vdly__way0_dirty_53;
    vlSelf->__PVT__way0_dirty_52 = vlSelf->__Vdly__way0_dirty_52;
    vlSelf->__PVT__way0_dirty_51 = vlSelf->__Vdly__way0_dirty_51;
    vlSelf->__PVT__way0_dirty_50 = vlSelf->__Vdly__way0_dirty_50;
    vlSelf->__PVT__way0_dirty_49 = vlSelf->__Vdly__way0_dirty_49;
    vlSelf->__PVT__way0_dirty_48 = vlSelf->__Vdly__way0_dirty_48;
    vlSelf->__PVT__way0_dirty_47 = vlSelf->__Vdly__way0_dirty_47;
    vlSelf->__PVT__way0_dirty_46 = vlSelf->__Vdly__way0_dirty_46;
    vlSelf->__PVT__way0_dirty_45 = vlSelf->__Vdly__way0_dirty_45;
    vlSelf->__PVT__way0_dirty_44 = vlSelf->__Vdly__way0_dirty_44;
    vlSelf->__PVT__way0_dirty_43 = vlSelf->__Vdly__way0_dirty_43;
    vlSelf->__PVT__way0_dirty_42 = vlSelf->__Vdly__way0_dirty_42;
    vlSelf->__PVT__way0_dirty_41 = vlSelf->__Vdly__way0_dirty_41;
    vlSelf->__PVT__way0_dirty_40 = vlSelf->__Vdly__way0_dirty_40;
    vlSelf->__PVT__way0_dirty_39 = vlSelf->__Vdly__way0_dirty_39;
    vlSelf->__PVT__way0_dirty_38 = vlSelf->__Vdly__way0_dirty_38;
    vlSelf->__PVT__way0_dirty_37 = vlSelf->__Vdly__way0_dirty_37;
    vlSelf->__PVT__way0_dirty_36 = vlSelf->__Vdly__way0_dirty_36;
    vlSelf->__PVT__way0_dirty_35 = vlSelf->__Vdly__way0_dirty_35;
    vlSelf->__PVT__way0_dirty_34 = vlSelf->__Vdly__way0_dirty_34;
    vlSelf->__PVT__way0_dirty_33 = vlSelf->__Vdly__way0_dirty_33;
    vlSelf->__PVT__way0_dirty_32 = vlSelf->__Vdly__way0_dirty_32;
    vlSelf->__PVT__way0_dirty_31 = vlSelf->__Vdly__way0_dirty_31;
    vlSelf->__PVT__way0_dirty_30 = vlSelf->__Vdly__way0_dirty_30;
    vlSelf->__PVT__way0_dirty_29 = vlSelf->__Vdly__way0_dirty_29;
    vlSelf->__PVT__way0_dirty_28 = vlSelf->__Vdly__way0_dirty_28;
    vlSelf->__PVT__way0_dirty_27 = vlSelf->__Vdly__way0_dirty_27;
    vlSelf->__PVT__way0_dirty_26 = vlSelf->__Vdly__way0_dirty_26;
    vlSelf->__PVT__way0_dirty_25 = vlSelf->__Vdly__way0_dirty_25;
    vlSelf->__PVT__way0_dirty_24 = vlSelf->__Vdly__way0_dirty_24;
    vlSelf->__PVT__way0_dirty_23 = vlSelf->__Vdly__way0_dirty_23;
    vlSelf->__PVT__way0_dirty_22 = vlSelf->__Vdly__way0_dirty_22;
    vlSelf->__PVT__way0_dirty_21 = vlSelf->__Vdly__way0_dirty_21;
    vlSelf->__PVT__way0_dirty_20 = vlSelf->__Vdly__way0_dirty_20;
    vlSelf->__PVT__way0_dirty_19 = vlSelf->__Vdly__way0_dirty_19;
    vlSelf->__PVT__way0_dirty_17 = vlSelf->__Vdly__way0_dirty_17;
    vlSelf->__PVT__way0_dirty_16 = vlSelf->__Vdly__way0_dirty_16;
    vlSelf->__PVT__way0_dirty_15 = vlSelf->__Vdly__way0_dirty_15;
    vlSelf->__PVT__way0_dirty_14 = vlSelf->__Vdly__way0_dirty_14;
    vlSelf->__PVT__way0_dirty_13 = vlSelf->__Vdly__way0_dirty_13;
    vlSelf->__PVT__way0_dirty_10 = vlSelf->__Vdly__way0_dirty_10;
    vlSelf->__PVT__way0_dirty_9 = vlSelf->__Vdly__way0_dirty_9;
    vlSelf->__PVT__way0_dirty_8 = vlSelf->__Vdly__way0_dirty_8;
    vlSelf->__PVT__way0_dirty_7 = vlSelf->__Vdly__way0_dirty_7;
    vlSelf->__PVT__way0_dirty_6 = vlSelf->__Vdly__way0_dirty_6;
    vlSelf->__PVT__way0_dirty_5 = vlSelf->__Vdly__way0_dirty_5;
    vlSelf->__PVT__way0_dirty_4 = vlSelf->__Vdly__way0_dirty_4;
    vlSelf->__PVT__way0_dirty_3 = vlSelf->__Vdly__way0_dirty_3;
    vlSelf->__PVT__way0_dirty_2 = vlSelf->__Vdly__way0_dirty_2;
    vlSelf->__PVT__way0_dirty_1 = vlSelf->__Vdly__way0_dirty_1;
    vlSelf->__PVT__way0_dirty_0 = vlSelf->__Vdly__way0_dirty_0;
    vlSelf->__PVT__lru_111 = vlSelf->__Vdly__lru_111;
    vlSelf->__PVT__lru_110 = vlSelf->__Vdly__lru_110;
    vlSelf->__PVT__lru_97 = vlSelf->__Vdly__lru_97;
    vlSelf->__PVT__lru_96 = vlSelf->__Vdly__lru_96;
    vlSelf->__PVT__lru_95 = vlSelf->__Vdly__lru_95;
    vlSelf->__PVT__lru_94 = vlSelf->__Vdly__lru_94;
    vlSelf->__PVT__lru_93 = vlSelf->__Vdly__lru_93;
    vlSelf->__PVT__lru_92 = vlSelf->__Vdly__lru_92;
    vlSelf->__PVT__lru_91 = vlSelf->__Vdly__lru_91;
    vlSelf->__PVT__lru_90 = vlSelf->__Vdly__lru_90;
    vlSelf->__PVT__lru_89 = vlSelf->__Vdly__lru_89;
    vlSelf->__PVT__lru_88 = vlSelf->__Vdly__lru_88;
    vlSelf->__PVT__lru_87 = vlSelf->__Vdly__lru_87;
    vlSelf->__PVT__lru_86 = vlSelf->__Vdly__lru_86;
    vlSelf->__PVT__lru_85 = vlSelf->__Vdly__lru_85;
    vlSelf->__PVT__lru_84 = vlSelf->__Vdly__lru_84;
    vlSelf->__PVT__lru_83 = vlSelf->__Vdly__lru_83;
    vlSelf->__PVT__lru_82 = vlSelf->__Vdly__lru_82;
    vlSelf->__PVT__lru_69 = vlSelf->__Vdly__lru_69;
    vlSelf->__PVT__lru_16 = vlSelf->__Vdly__lru_16;
    vlSelf->__PVT__lru_15 = vlSelf->__Vdly__lru_15;
    vlSelf->__PVT__lru_14 = vlSelf->__Vdly__lru_14;
    vlSelf->__PVT__lru_13 = vlSelf->__Vdly__lru_13;
    vlSelf->__PVT__lru_12 = vlSelf->__Vdly__lru_12;
    vlSelf->__PVT__lru_11 = vlSelf->__Vdly__lru_11;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__Vdly__stage1_sram_wdata_reg = vlSelf->__PVT__stage1_sram_wdata_reg;
    vlSelf->__Vdly__stage1_wstrb_reg = vlSelf->__PVT__stage1_wstrb_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_wdata_reg = 0ULL;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_wdata_reg = vlSelf->__PVT__io_sram_wdata;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_wstrb_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_wstrb_reg = vlSelf->__PVT__io_data_wstrb;
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT__stage1_sram_wdata_reg = vlSelf->__Vdly__stage1_sram_wdata_reg;
    vlSelf->__PVT__stage1_wstrb_reg = vlSelf->__Vdly__stage1_wstrb_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__Vdly__stage1_sram_phy_addr_reg = vlSelf->__PVT__stage1_sram_phy_addr_reg;
    vlSelf->__Vdly__way1_dirty_127 = vlSelf->__PVT__way1_dirty_127;
    vlSelf->__Vdly__way1_dirty_126 = vlSelf->__PVT__way1_dirty_126;
    vlSelf->__Vdly__way1_dirty_125 = vlSelf->__PVT__way1_dirty_125;
    vlSelf->__Vdly__way1_dirty_124 = vlSelf->__PVT__way1_dirty_124;
    vlSelf->__Vdly__way1_dirty_123 = vlSelf->__PVT__way1_dirty_123;
    vlSelf->__Vdly__way1_dirty_122 = vlSelf->__PVT__way1_dirty_122;
    vlSelf->__Vdly__way1_dirty_121 = vlSelf->__PVT__way1_dirty_121;
    vlSelf->__Vdly__way1_dirty_120 = vlSelf->__PVT__way1_dirty_120;
    vlSelf->__Vdly__way1_dirty_119 = vlSelf->__PVT__way1_dirty_119;
    vlSelf->__Vdly__way1_dirty_118 = vlSelf->__PVT__way1_dirty_118;
    vlSelf->__Vdly__way1_dirty_117 = vlSelf->__PVT__way1_dirty_117;
    vlSelf->__Vdly__way1_dirty_116 = vlSelf->__PVT__way1_dirty_116;
    vlSelf->__Vdly__way1_dirty_115 = vlSelf->__PVT__way1_dirty_115;
    vlSelf->__Vdly__way1_dirty_114 = vlSelf->__PVT__way1_dirty_114;
    vlSelf->__Vdly__way1_dirty_113 = vlSelf->__PVT__way1_dirty_113;
    vlSelf->__Vdly__way1_dirty_112 = vlSelf->__PVT__way1_dirty_112;
    vlSelf->__Vdly__way1_dirty_111 = vlSelf->__PVT__way1_dirty_111;
    vlSelf->__Vdly__way1_dirty_110 = vlSelf->__PVT__way1_dirty_110;
    vlSelf->__Vdly__way1_dirty_109 = vlSelf->__PVT__way1_dirty_109;
    vlSelf->__Vdly__way1_dirty_108 = vlSelf->__PVT__way1_dirty_108;
    vlSelf->__Vdly__way1_dirty_107 = vlSelf->__PVT__way1_dirty_107;
    vlSelf->__Vdly__way1_dirty_106 = vlSelf->__PVT__way1_dirty_106;
    vlSelf->__Vdly__way1_dirty_105 = vlSelf->__PVT__way1_dirty_105;
    vlSelf->__Vdly__way1_dirty_104 = vlSelf->__PVT__way1_dirty_104;
    vlSelf->__Vdly__way1_dirty_103 = vlSelf->__PVT__way1_dirty_103;
    vlSelf->__Vdly__way1_dirty_80 = vlSelf->__PVT__way1_dirty_80;
    vlSelf->__Vdly__way1_dirty_79 = vlSelf->__PVT__way1_dirty_79;
    vlSelf->__Vdly__way1_dirty_78 = vlSelf->__PVT__way1_dirty_78;
    vlSelf->__Vdly__way1_dirty_77 = vlSelf->__PVT__way1_dirty_77;
    vlSelf->__Vdly__way1_dirty_76 = vlSelf->__PVT__way1_dirty_76;
    vlSelf->__Vdly__way1_dirty_75 = vlSelf->__PVT__way1_dirty_75;
    vlSelf->__Vdly__way1_dirty_74 = vlSelf->__PVT__way1_dirty_74;
    vlSelf->__Vdly__way1_dirty_73 = vlSelf->__PVT__way1_dirty_73;
    vlSelf->__Vdly__way1_dirty_72 = vlSelf->__PVT__way1_dirty_72;
    vlSelf->__Vdly__way1_dirty_71 = vlSelf->__PVT__way1_dirty_71;
    vlSelf->__Vdly__way1_dirty_70 = vlSelf->__PVT__way1_dirty_70;
    vlSelf->__Vdly__way1_dirty_69 = vlSelf->__PVT__way1_dirty_69;
    vlSelf->__Vdly__way1_dirty_68 = vlSelf->__PVT__way1_dirty_68;
    vlSelf->__Vdly__way1_dirty_67 = vlSelf->__PVT__way1_dirty_67;
    vlSelf->__Vdly__way1_dirty_66 = vlSelf->__PVT__way1_dirty_66;
    vlSelf->__Vdly__way0_dirty_113 = vlSelf->__PVT__way0_dirty_113;
    vlSelf->__Vdly__way0_dirty_112 = vlSelf->__PVT__way0_dirty_112;
    vlSelf->__Vdly__way0_dirty_111 = vlSelf->__PVT__way0_dirty_111;
    vlSelf->__Vdly__way0_dirty_110 = vlSelf->__PVT__way0_dirty_110;
    vlSelf->__Vdly__way0_dirty_105 = vlSelf->__PVT__way0_dirty_105;
    vlSelf->__Vdly__way0_dirty_104 = vlSelf->__PVT__way0_dirty_104;
    vlSelf->__Vdly__way0_dirty_99 = vlSelf->__PVT__way0_dirty_99;
    vlSelf->__Vdly__way0_dirty_98 = vlSelf->__PVT__way0_dirty_98;
    vlSelf->__Vdly__way0_dirty_73 = vlSelf->__PVT__way0_dirty_73;
    vlSelf->__Vdly__way0_dirty_18 = vlSelf->__PVT__way0_dirty_18;
    vlSelf->__Vdly__way0_dirty_12 = vlSelf->__PVT__way0_dirty_12;
    vlSelf->__Vdly__way0_dirty_11 = vlSelf->__PVT__way0_dirty_11;
    vlSelf->__Vdly__lru_119 = vlSelf->__PVT__lru_119;
    vlSelf->__Vdly__lru_118 = vlSelf->__PVT__lru_118;
    vlSelf->__Vdly__lru_117 = vlSelf->__PVT__lru_117;
    vlSelf->__Vdly__lru_116 = vlSelf->__PVT__lru_116;
    vlSelf->__Vdly__lru_115 = vlSelf->__PVT__lru_115;
    vlSelf->__Vdly__lru_114 = vlSelf->__PVT__lru_114;
    vlSelf->__Vdly__lru_113 = vlSelf->__PVT__lru_113;
    vlSelf->__Vdly__lru_112 = vlSelf->__PVT__lru_112;
    vlSelf->__Vdly__lru_109 = vlSelf->__PVT__lru_109;
    vlSelf->__Vdly__lru_108 = vlSelf->__PVT__lru_108;
    vlSelf->__Vdly__lru_107 = vlSelf->__PVT__lru_107;
    vlSelf->__Vdly__lru_106 = vlSelf->__PVT__lru_106;
    vlSelf->__Vdly__lru_105 = vlSelf->__PVT__lru_105;
    vlSelf->__Vdly__lru_104 = vlSelf->__PVT__lru_104;
    vlSelf->__Vdly__lru_103 = vlSelf->__PVT__lru_103;
    vlSelf->__Vdly__lru_102 = vlSelf->__PVT__lru_102;
    vlSelf->__Vdly__lru_101 = vlSelf->__PVT__lru_101;
    vlSelf->__Vdly__lru_100 = vlSelf->__PVT__lru_100;
    vlSelf->__Vdly__lru_99 = vlSelf->__PVT__lru_99;
    vlSelf->__Vdly__lru_98 = vlSelf->__PVT__lru_98;
    vlSelf->__Vdly__lru_81 = vlSelf->__PVT__lru_81;
    vlSelf->__Vdly__lru_80 = vlSelf->__PVT__lru_80;
    vlSelf->__Vdly__lru_79 = vlSelf->__PVT__lru_79;
    vlSelf->__Vdly__lru_78 = vlSelf->__PVT__lru_78;
    vlSelf->__Vdly__lru_77 = vlSelf->__PVT__lru_77;
    vlSelf->__Vdly__lru_76 = vlSelf->__PVT__lru_76;
    vlSelf->__Vdly__lru_75 = vlSelf->__PVT__lru_75;
    vlSelf->__Vdly__lru_74 = vlSelf->__PVT__lru_74;
    vlSelf->__Vdly__lru_73 = vlSelf->__PVT__lru_73;
    vlSelf->__Vdly__lru_72 = vlSelf->__PVT__lru_72;
    vlSelf->__Vdly__lru_71 = vlSelf->__PVT__lru_71;
    vlSelf->__Vdly__lru_70 = vlSelf->__PVT__lru_70;
    vlSelf->__Vdly__lru_68 = vlSelf->__PVT__lru_68;
    vlSelf->__Vdly__lru_67 = vlSelf->__PVT__lru_67;
    vlSelf->__Vdly__lru_66 = vlSelf->__PVT__lru_66;
    vlSelf->__Vdly__lru_65 = vlSelf->__PVT__lru_65;
    vlSelf->__Vdly__lru_64 = vlSelf->__PVT__lru_64;
    vlSelf->__Vdly__lru_63 = vlSelf->__PVT__lru_63;
    vlSelf->__Vdly__lru_62 = vlSelf->__PVT__lru_62;
    vlSelf->__Vdly__lru_61 = vlSelf->__PVT__lru_61;
    vlSelf->__Vdly__lru_60 = vlSelf->__PVT__lru_60;
    vlSelf->__Vdly__lru_59 = vlSelf->__PVT__lru_59;
    vlSelf->__Vdly__lru_58 = vlSelf->__PVT__lru_58;
    vlSelf->__Vdly__lru_57 = vlSelf->__PVT__lru_57;
    vlSelf->__Vdly__lru_56 = vlSelf->__PVT__lru_56;
    vlSelf->__Vdly__lru_55 = vlSelf->__PVT__lru_55;
    vlSelf->__Vdly__lru_54 = vlSelf->__PVT__lru_54;
    vlSelf->__Vdly__lru_53 = vlSelf->__PVT__lru_53;
    vlSelf->__Vdly__lru_52 = vlSelf->__PVT__lru_52;
    vlSelf->__Vdly__lru_51 = vlSelf->__PVT__lru_51;
    vlSelf->__Vdly__lru_50 = vlSelf->__PVT__lru_50;
    vlSelf->__Vdly__lru_49 = vlSelf->__PVT__lru_49;
    vlSelf->__Vdly__lru_48 = vlSelf->__PVT__lru_48;
    vlSelf->__Vdly__lru_47 = vlSelf->__PVT__lru_47;
    vlSelf->__Vdly__lru_46 = vlSelf->__PVT__lru_46;
    vlSelf->__Vdly__lru_45 = vlSelf->__PVT__lru_45;
    vlSelf->__Vdly__lru_44 = vlSelf->__PVT__lru_44;
    vlSelf->__Vdly__lru_43 = vlSelf->__PVT__lru_43;
    vlSelf->__Vdly__lru_42 = vlSelf->__PVT__lru_42;
    vlSelf->__Vdly__lru_41 = vlSelf->__PVT__lru_41;
    vlSelf->__Vdly__lru_40 = vlSelf->__PVT__lru_40;
    vlSelf->__Vdly__lru_39 = vlSelf->__PVT__lru_39;
    vlSelf->__Vdly__lru_38 = vlSelf->__PVT__lru_38;
    vlSelf->__Vdly__lru_37 = vlSelf->__PVT__lru_37;
    vlSelf->__Vdly__lru_36 = vlSelf->__PVT__lru_36;
    vlSelf->__Vdly__lru_35 = vlSelf->__PVT__lru_35;
    vlSelf->__Vdly__lru_34 = vlSelf->__PVT__lru_34;
    vlSelf->__Vdly__lru_33 = vlSelf->__PVT__lru_33;
    vlSelf->__Vdly__lru_32 = vlSelf->__PVT__lru_32;
    vlSelf->__Vdly__lru_31 = vlSelf->__PVT__lru_31;
    vlSelf->__Vdly__lru_30 = vlSelf->__PVT__lru_30;
    vlSelf->__Vdly__lru_29 = vlSelf->__PVT__lru_29;
    vlSelf->__Vdly__lru_28 = vlSelf->__PVT__lru_28;
    vlSelf->__Vdly__lru_27 = vlSelf->__PVT__lru_27;
    vlSelf->__Vdly__lru_26 = vlSelf->__PVT__lru_26;
    vlSelf->__Vdly__lru_25 = vlSelf->__PVT__lru_25;
    vlSelf->__Vdly__lru_24 = vlSelf->__PVT__lru_24;
    vlSelf->__Vdly__lru_23 = vlSelf->__PVT__lru_23;
    vlSelf->__Vdly__lru_22 = vlSelf->__PVT__lru_22;
    vlSelf->__Vdly__lru_21 = vlSelf->__PVT__lru_21;
    vlSelf->__Vdly__lru_20 = vlSelf->__PVT__lru_20;
    vlSelf->__Vdly__lru_19 = vlSelf->__PVT__lru_19;
    vlSelf->__Vdly__lru_18 = vlSelf->__PVT__lru_18;
    vlSelf->__Vdly__lru_17 = vlSelf->__PVT__lru_17;
    vlSelf->__Vdly__lru_10 = vlSelf->__PVT__lru_10;
    vlSelf->__Vdly__lru_9 = vlSelf->__PVT__lru_9;
    vlSelf->__Vdly__lru_8 = vlSelf->__PVT__lru_8;
    vlSelf->__Vdly__lru_7 = vlSelf->__PVT__lru_7;
    vlSelf->__Vdly__sram_rdata_reg = vlSelf->__PVT__sram_rdata_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_phy_addr_reg = 0ULL;
    } else if (vlSelf->__PVT__stage1_stall_reg) {
        vlSelf->__Vdly__stage1_sram_phy_addr_reg = 
            ((IData)(vlSelf->__PVT__io_tlb_req) ? vlSelf->__PVT__io_p_addr_for_tlb
              : vlSelf->__PVT__stage1_addr_line_mapping);
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_127 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_126 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_125 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_124 = 0U;
    } else if ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_124 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_123 = 0U;
    } else if ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_123 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_122 = 0U;
    } else if ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_122 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_121 = 0U;
    } else if ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_121 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_120 = 0U;
    } else if ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_120 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_119 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_118 = 0U;
    } else if ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_118 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_117 = 0U;
    } else if ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_117 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_116 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_115 = 0U;
    } else if ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_115 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_114 = 0U;
    } else if ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_114 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_113 = 0U;
    } else if ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_113 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_112 = 0U;
    } else if ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_112 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_111 = 0U;
    } else if ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_111 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_110 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_109 = 0U;
    } else if ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_109 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_108 = 0U;
    } else if ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_108 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_107 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_106 = 0U;
    } else if ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_106 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_105 = 0U;
    } else if ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_105 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_104 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_103 = 0U;
    } else if ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_103 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_80 = 0U;
    } else if ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_80 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_79 = 0U;
    } else if ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_79 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_78 = 0U;
    } else if ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_78 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_77 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_76 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_75 = 0U;
    } else if ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_75 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_74 = 0U;
    } else if ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_74 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_73 = 0U;
    } else if ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_73 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_72 = 0U;
    } else if ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_72 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_71 = 0U;
    } else if ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_71 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_70 = 0U;
    } else if ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_70 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_69 = 0U;
    } else if ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_69 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_68 = 0U;
    } else if ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_68 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_67 = 0U;
    } else if ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_67 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_66 = 0U;
    } else if ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_66 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_113 = 0U;
    } else if ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_113 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_112 = 0U;
    } else if ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_112 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_111 = 0U;
    } else if ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_111 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_110 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_105 = 0U;
    } else if ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_105 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_104 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_99 = 0U;
    } else if ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_99 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_98 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_73 = 0U;
    } else if ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_73 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_18 = 0U;
    } else if ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_18 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_12 = 0U;
    } else if ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_12 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_11 = 0U;
    } else if ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_11 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_119 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_118 = 0U;
    } else if ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_118 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_117 = 0U;
    } else if ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_117 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_116 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_115 = 0U;
    } else if ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_115 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_114 = 0U;
    } else if ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_114 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_113 = 0U;
    } else if ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_113 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_112 = 0U;
    } else if ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_112 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_109 = 0U;
    } else if ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_109 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_108 = 0U;
    } else if ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_108 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_107 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_106 = 0U;
    } else if ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_106 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_105 = 0U;
    } else if ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_105 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_104 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_103 = 0U;
    } else if ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_103 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_102 = 0U;
    } else if ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_102 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_101 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_100 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                    ? (IData)(vlSelf->__PVT___lru_T_5)
                                    : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                        | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                        ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                            ? (IData)(vlSelf->__PVT__lru_127)
                                            : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_99 = 0U;
    } else if ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_99 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_98 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_81 = 0U;
    } else if ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_81 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_80 = 0U;
    } else if ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_80 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_79 = 0U;
    } else if ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_79 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_78 = 0U;
    } else if ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_78 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_77 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_76 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_75 = 0U;
    } else if ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_75 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_74 = 0U;
    } else if ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_74 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_73 = 0U;
    } else if ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_73 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_72 = 0U;
    } else if ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_72 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_71 = 0U;
    } else if ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_71 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_70 = 0U;
    } else if ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_70 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_68 = 0U;
    } else if ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_68 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_67 = 0U;
    } else if ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_67 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_66 = 0U;
    } else if ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_66 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_65 = 0U;
    } else if ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_65 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_64 = 0U;
    } else if ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_64 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_63 = 0U;
    } else if ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_63 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_62 = 0U;
    } else if ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_62 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_61 = 0U;
    } else if ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_61 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_60 = 0U;
    } else if ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_60 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_59 = 0U;
    } else if ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_59 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_58 = 0U;
    } else if ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_58 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_57 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_56 = 0U;
    } else if ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_56 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_55 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_54 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_53 = 0U;
    } else if ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_53 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_52 = 0U;
    } else if ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_52 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_51 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_50 = 0U;
    } else if ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_50 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_49 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_48 = 0U;
    } else if ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_48 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_47 = 0U;
    } else if ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_47 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_46 = 0U;
    } else if ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_46 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_45 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_44 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_43 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_42 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_41 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_40 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_39 = 0U;
    } else if ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_39 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_38 = 0U;
    } else if ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_38 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_37 = 0U;
    } else if ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_37 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_36 = 0U;
    } else if ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_36 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_35 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_34 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_33 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_32 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_31 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_30 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_29 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_28 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_27 = 0U;
    } else if ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_27 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_26 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_25 = 0U;
    } else if ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_25 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_24 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_23 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_22 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_21 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_20 = 0U;
    } else if ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_20 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_19 = 0U;
    } else if ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_19 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_18 = 0U;
    } else if ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_18 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_17 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_10 = 0U;
    } else if ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_10 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                   ? (IData)(vlSelf->__PVT___lru_T_5)
                                   : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                       | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                       ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                           ? (IData)(vlSelf->__PVT__lru_127)
                                           : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_9 = 0U;
    } else if ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_9 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_8 = 0U;
    } else if ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_8 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_7 = 0U;
    } else if ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        vlSelf->__Vdly__lru_7 = ((IData)(vlSelf->__PVT___way0_dirty_T)
                                  ? (IData)(vlSelf->__PVT___lru_T_5)
                                  : (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                      | (IData)(vlSelf->__PVT___way0_dirty_T_9))
                                      ? (IData)(vlSelf->__PVT___way0_dirty_T_7)
                                      : ((0x7fU == 
                                          (0x7fU & 
                                           VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                          ? (IData)(vlSelf->__PVT__lru_127)
                                          : (IData)(vlSelf->__PVT___GEN_127))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__sram_rdata_reg = 0ULL;
    } else if (vlSelf->__PVT___io_sram_data_ok_T_1) {
        vlSelf->__Vdly__sram_rdata_reg = vlSelf->__PVT__wait_data;
    } else if (vlSelf->__PVT___cache_wdata_T_3) {
        vlSelf->__Vdly__sram_rdata_reg = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                           ? ((7U == 
                                               (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                               ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                               : vlSelf->__PVT___GEN_1928)
                                           : ((7U == 
                                               (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                               ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                               : vlSelf->__PVT___GEN_1936));
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT__way0_dirty_111 = vlSelf->__Vdly__way0_dirty_111;
    vlSelf->__PVT__way0_dirty_110 = vlSelf->__Vdly__way0_dirty_110;
    vlSelf->__PVT__way0_dirty_105 = vlSelf->__Vdly__way0_dirty_105;
    vlSelf->__PVT__way0_dirty_104 = vlSelf->__Vdly__way0_dirty_104;
    vlSelf->__PVT__way0_dirty_99 = vlSelf->__Vdly__way0_dirty_99;
    vlSelf->__PVT__way0_dirty_98 = vlSelf->__Vdly__way0_dirty_98;
    vlSelf->__PVT__way1_dirty_80 = vlSelf->__Vdly__way1_dirty_80;
    vlSelf->__PVT__way1_dirty_79 = vlSelf->__Vdly__way1_dirty_79;
    vlSelf->__PVT__way1_dirty_78 = vlSelf->__Vdly__way1_dirty_78;
    vlSelf->__PVT__way1_dirty_77 = vlSelf->__Vdly__way1_dirty_77;
    vlSelf->__PVT__way1_dirty_76 = vlSelf->__Vdly__way1_dirty_76;
    vlSelf->__PVT__way1_dirty_75 = vlSelf->__Vdly__way1_dirty_75;
    vlSelf->__PVT__way1_dirty_74 = vlSelf->__Vdly__way1_dirty_74;
    vlSelf->__PVT__way1_dirty_73 = vlSelf->__Vdly__way1_dirty_73;
    vlSelf->__PVT__way0_dirty_73 = vlSelf->__Vdly__way0_dirty_73;
    vlSelf->__PVT__way1_dirty_72 = vlSelf->__Vdly__way1_dirty_72;
    vlSelf->__PVT__way1_dirty_71 = vlSelf->__Vdly__way1_dirty_71;
    vlSelf->__PVT__way1_dirty_70 = vlSelf->__Vdly__way1_dirty_70;
    vlSelf->__PVT__way1_dirty_69 = vlSelf->__Vdly__way1_dirty_69;
    vlSelf->__PVT__way1_dirty_68 = vlSelf->__Vdly__way1_dirty_68;
    vlSelf->__PVT__way1_dirty_67 = vlSelf->__Vdly__way1_dirty_67;
    vlSelf->__PVT__way1_dirty_66 = vlSelf->__Vdly__way1_dirty_66;
    vlSelf->__PVT__way0_dirty_18 = vlSelf->__Vdly__way0_dirty_18;
    vlSelf->__PVT__way0_dirty_12 = vlSelf->__Vdly__way0_dirty_12;
    vlSelf->__PVT__way0_dirty_11 = vlSelf->__Vdly__way0_dirty_11;
    vlSelf->__PVT__lru_119 = vlSelf->__Vdly__lru_119;
    vlSelf->__PVT__lru_118 = vlSelf->__Vdly__lru_118;
    vlSelf->__PVT__lru_117 = vlSelf->__Vdly__lru_117;
    vlSelf->__PVT__lru_116 = vlSelf->__Vdly__lru_116;
    vlSelf->__PVT__lru_115 = vlSelf->__Vdly__lru_115;
    vlSelf->__PVT__lru_114 = vlSelf->__Vdly__lru_114;
    vlSelf->__PVT__lru_113 = vlSelf->__Vdly__lru_113;
    vlSelf->__PVT__lru_112 = vlSelf->__Vdly__lru_112;
    vlSelf->__PVT__lru_109 = vlSelf->__Vdly__lru_109;
    vlSelf->__PVT__lru_108 = vlSelf->__Vdly__lru_108;
    vlSelf->__PVT__lru_107 = vlSelf->__Vdly__lru_107;
    vlSelf->__PVT__lru_106 = vlSelf->__Vdly__lru_106;
    vlSelf->__PVT__lru_105 = vlSelf->__Vdly__lru_105;
    vlSelf->__PVT__lru_104 = vlSelf->__Vdly__lru_104;
    vlSelf->__PVT__lru_103 = vlSelf->__Vdly__lru_103;
    vlSelf->__PVT__lru_102 = vlSelf->__Vdly__lru_102;
    vlSelf->__PVT__lru_101 = vlSelf->__Vdly__lru_101;
    vlSelf->__PVT__lru_100 = vlSelf->__Vdly__lru_100;
    vlSelf->__PVT__lru_99 = vlSelf->__Vdly__lru_99;
    vlSelf->__PVT__lru_98 = vlSelf->__Vdly__lru_98;
    vlSelf->__PVT__lru_81 = vlSelf->__Vdly__lru_81;
    vlSelf->__PVT__lru_80 = vlSelf->__Vdly__lru_80;
    vlSelf->__PVT__lru_79 = vlSelf->__Vdly__lru_79;
    vlSelf->__PVT__lru_78 = vlSelf->__Vdly__lru_78;
    vlSelf->__PVT__lru_77 = vlSelf->__Vdly__lru_77;
    vlSelf->__PVT__lru_76 = vlSelf->__Vdly__lru_76;
    vlSelf->__PVT__lru_75 = vlSelf->__Vdly__lru_75;
    vlSelf->__PVT__lru_74 = vlSelf->__Vdly__lru_74;
    vlSelf->__PVT__lru_73 = vlSelf->__Vdly__lru_73;
    vlSelf->__PVT__lru_72 = vlSelf->__Vdly__lru_72;
    vlSelf->__PVT__lru_71 = vlSelf->__Vdly__lru_71;
    vlSelf->__PVT__lru_70 = vlSelf->__Vdly__lru_70;
    vlSelf->__PVT__lru_68 = vlSelf->__Vdly__lru_68;
    vlSelf->__PVT__lru_67 = vlSelf->__Vdly__lru_67;
    vlSelf->__PVT__lru_66 = vlSelf->__Vdly__lru_66;
    vlSelf->__PVT__lru_65 = vlSelf->__Vdly__lru_65;
    vlSelf->__PVT__lru_64 = vlSelf->__Vdly__lru_64;
    vlSelf->__PVT__lru_63 = vlSelf->__Vdly__lru_63;
    vlSelf->__PVT__lru_62 = vlSelf->__Vdly__lru_62;
    vlSelf->__PVT__lru_61 = vlSelf->__Vdly__lru_61;
    vlSelf->__PVT__lru_60 = vlSelf->__Vdly__lru_60;
    vlSelf->__PVT__lru_59 = vlSelf->__Vdly__lru_59;
    vlSelf->__PVT__lru_58 = vlSelf->__Vdly__lru_58;
    vlSelf->__PVT__lru_57 = vlSelf->__Vdly__lru_57;
    vlSelf->__PVT__lru_56 = vlSelf->__Vdly__lru_56;
    vlSelf->__PVT__lru_55 = vlSelf->__Vdly__lru_55;
    vlSelf->__PVT__lru_54 = vlSelf->__Vdly__lru_54;
    vlSelf->__PVT__lru_53 = vlSelf->__Vdly__lru_53;
    vlSelf->__PVT__lru_52 = vlSelf->__Vdly__lru_52;
    vlSelf->__PVT__lru_51 = vlSelf->__Vdly__lru_51;
    vlSelf->__PVT__lru_50 = vlSelf->__Vdly__lru_50;
    vlSelf->__PVT__lru_49 = vlSelf->__Vdly__lru_49;
    vlSelf->__PVT__lru_48 = vlSelf->__Vdly__lru_48;
    vlSelf->__PVT__lru_47 = vlSelf->__Vdly__lru_47;
    vlSelf->__PVT__lru_46 = vlSelf->__Vdly__lru_46;
    vlSelf->__PVT__lru_45 = vlSelf->__Vdly__lru_45;
    vlSelf->__PVT__lru_44 = vlSelf->__Vdly__lru_44;
    vlSelf->__PVT__lru_43 = vlSelf->__Vdly__lru_43;
    vlSelf->__PVT__lru_42 = vlSelf->__Vdly__lru_42;
    vlSelf->__PVT__lru_41 = vlSelf->__Vdly__lru_41;
    vlSelf->__PVT__lru_40 = vlSelf->__Vdly__lru_40;
    vlSelf->__PVT__lru_39 = vlSelf->__Vdly__lru_39;
    vlSelf->__PVT__lru_38 = vlSelf->__Vdly__lru_38;
    vlSelf->__PVT__lru_37 = vlSelf->__Vdly__lru_37;
    vlSelf->__PVT__lru_36 = vlSelf->__Vdly__lru_36;
    vlSelf->__PVT__lru_35 = vlSelf->__Vdly__lru_35;
    vlSelf->__PVT__lru_34 = vlSelf->__Vdly__lru_34;
    vlSelf->__PVT__lru_33 = vlSelf->__Vdly__lru_33;
    vlSelf->__PVT__lru_32 = vlSelf->__Vdly__lru_32;
    vlSelf->__PVT__lru_31 = vlSelf->__Vdly__lru_31;
    vlSelf->__PVT__lru_30 = vlSelf->__Vdly__lru_30;
    vlSelf->__PVT__lru_29 = vlSelf->__Vdly__lru_29;
    vlSelf->__PVT__lru_28 = vlSelf->__Vdly__lru_28;
    vlSelf->__PVT__lru_27 = vlSelf->__Vdly__lru_27;
    vlSelf->__PVT__lru_26 = vlSelf->__Vdly__lru_26;
    vlSelf->__PVT__lru_25 = vlSelf->__Vdly__lru_25;
    vlSelf->__PVT__lru_24 = vlSelf->__Vdly__lru_24;
    vlSelf->__PVT__lru_23 = vlSelf->__Vdly__lru_23;
    vlSelf->__PVT__lru_22 = vlSelf->__Vdly__lru_22;
    vlSelf->__PVT__lru_21 = vlSelf->__Vdly__lru_21;
    vlSelf->__PVT__lru_20 = vlSelf->__Vdly__lru_20;
    vlSelf->__PVT__lru_19 = vlSelf->__Vdly__lru_19;
    vlSelf->__PVT__lru_18 = vlSelf->__Vdly__lru_18;
    vlSelf->__PVT__lru_17 = vlSelf->__Vdly__lru_17;
    vlSelf->__Vdly__wait_data = vlSelf->__PVT__wait_data;
    vlSelf->__Vdly__stage2_sram_addr_reg = vlSelf->__PVT__stage2_sram_addr_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__wait_data = 0ULL;
    } else if (((2U == (IData)(vlSelf->__PVT__work_state)) 
                & (IData)(vlSelf->__PVT__io_port_rvalid))) {
        vlSelf->__Vdly__wait_data = vlSelf->__PVT__io_port_rdata;
    } else if ((((0xdU == (IData)(vlSelf->__PVT__work_state)) 
                 & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                & ((IData)(vlSelf->__PVT__read_counter) 
                   == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 3U, 3U))))) {
        vlSelf->__Vdly__wait_data = vlSelf->__PVT__io_port_rdata;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage2_sram_addr_reg = 0ULL;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage2_sram_addr_reg = vlSelf->__PVT__stage1_addr_line_mapping;
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__Vdly__work_state = vlSelf->__PVT__work_state;
    vlSelf->__Vdly__stage2_sram_write_reg = vlSelf->__PVT__stage2_sram_write_reg;
    vlSelf->__Vdly__stage1_sram_cache_reg = vlSelf->__PVT__stage1_sram_cache_reg;
    vlSelf->__Vdly__stage1_sram_req_reg = vlSelf->__PVT__stage1_sram_req_reg;
    vlSelf->__Vdly__stage2_stall_reg = vlSelf->__PVT__stage2_stall_reg;
    vlSelf->__Vdly__write_access_complete_reg = vlSelf->__PVT__write_access_complete_reg;
    vlSelf->__Vdly__write_counter = vlSelf->__PVT__write_counter;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__work_state = 0x18U;
    } else if ((7U == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT__io_port_bvalid) {
            vlSelf->__Vdly__work_state = 8U;
        }
    } else if ((6U == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT___access_work_state_T_20) {
            vlSelf->__Vdly__work_state = 7U;
        }
    } else if ((0xfU == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT__io_port_awready) {
            vlSelf->__Vdly__work_state = 6U;
        }
    } else {
        vlSelf->__Vdly__work_state = ((0x10U == (IData)(vlSelf->__PVT__work_state))
                                       ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_T_67));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage2_sram_write_reg = 0U;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage2_sram_write_reg = vlSelf->__PVT__stage1_sram_wr_reg;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_cache_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_cache_reg = vlSelf->__PVT__io_sram_cache;
    }
    vlSelf->__Vdly__stage1_sram_req_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                           & ((IData)(vlSelf->__PVT__io_sram_req) 
                                              | (IData)(vlSelf->__PVT___stage1_sram_req_reg_T_1)));
    vlSelf->__Vdly__stage2_stall_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                        & (3U == (3U 
                                                  & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U))));
    vlSelf->__Vdly__write_access_complete_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->__PVT__work_state)) 
                                                    | (IData)(vlSelf->__PVT___GEN_4642)));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__write_counter = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__write_counter = vlSelf->__PVT___write_counter_T_6;
    } else if ((6U == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__write_counter = vlSelf->__PVT___write_counter_T_6;
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT__way1_dirty_127 = vlSelf->__Vdly__way1_dirty_127;
    vlSelf->__PVT__way0_dirty_127 = vlSelf->__Vdly__way0_dirty_127;
    vlSelf->__PVT__way1_dirty_126 = vlSelf->__Vdly__way1_dirty_126;
    vlSelf->__PVT__way0_dirty_126 = vlSelf->__Vdly__way0_dirty_126;
    vlSelf->__PVT__way1_dirty_125 = vlSelf->__Vdly__way1_dirty_125;
    vlSelf->__PVT__way0_dirty_125 = vlSelf->__Vdly__way0_dirty_125;
    vlSelf->__PVT__way1_dirty_124 = vlSelf->__Vdly__way1_dirty_124;
    vlSelf->__PVT__way0_dirty_124 = vlSelf->__Vdly__way0_dirty_124;
    vlSelf->__PVT__way1_dirty_123 = vlSelf->__Vdly__way1_dirty_123;
    vlSelf->__PVT__way0_dirty_123 = vlSelf->__Vdly__way0_dirty_123;
    vlSelf->__PVT__way1_dirty_122 = vlSelf->__Vdly__way1_dirty_122;
    vlSelf->__PVT__way0_dirty_122 = vlSelf->__Vdly__way0_dirty_122;
    vlSelf->__PVT__way1_dirty_121 = vlSelf->__Vdly__way1_dirty_121;
    vlSelf->__PVT__way0_dirty_121 = vlSelf->__Vdly__way0_dirty_121;
    vlSelf->__PVT__way1_dirty_120 = vlSelf->__Vdly__way1_dirty_120;
    vlSelf->__PVT__way0_dirty_120 = vlSelf->__Vdly__way0_dirty_120;
    vlSelf->__PVT__way1_dirty_119 = vlSelf->__Vdly__way1_dirty_119;
    vlSelf->__PVT__way0_dirty_119 = vlSelf->__Vdly__way0_dirty_119;
    vlSelf->__PVT__way1_dirty_118 = vlSelf->__Vdly__way1_dirty_118;
    vlSelf->__PVT__way0_dirty_118 = vlSelf->__Vdly__way0_dirty_118;
    vlSelf->__PVT__way1_dirty_117 = vlSelf->__Vdly__way1_dirty_117;
    vlSelf->__PVT__way0_dirty_117 = vlSelf->__Vdly__way0_dirty_117;
    vlSelf->__PVT__way1_dirty_116 = vlSelf->__Vdly__way1_dirty_116;
    vlSelf->__PVT__way0_dirty_116 = vlSelf->__Vdly__way0_dirty_116;
    vlSelf->__PVT__way1_dirty_115 = vlSelf->__Vdly__way1_dirty_115;
    vlSelf->__PVT__way0_dirty_115 = vlSelf->__Vdly__way0_dirty_115;
    vlSelf->__PVT__way1_dirty_114 = vlSelf->__Vdly__way1_dirty_114;
    vlSelf->__PVT__way0_dirty_114 = vlSelf->__Vdly__way0_dirty_114;
    vlSelf->__PVT__way1_dirty_113 = vlSelf->__Vdly__way1_dirty_113;
    vlSelf->__PVT__way0_dirty_113 = vlSelf->__Vdly__way0_dirty_113;
    vlSelf->__PVT__way1_dirty_112 = vlSelf->__Vdly__way1_dirty_112;
    vlSelf->__PVT__way0_dirty_112 = vlSelf->__Vdly__way0_dirty_112;
    vlSelf->__PVT__way1_dirty_111 = vlSelf->__Vdly__way1_dirty_111;
    vlSelf->__PVT__way1_dirty_110 = vlSelf->__Vdly__way1_dirty_110;
    vlSelf->__PVT__way1_dirty_109 = vlSelf->__Vdly__way1_dirty_109;
    vlSelf->__PVT__way1_dirty_108 = vlSelf->__Vdly__way1_dirty_108;
    vlSelf->__PVT__way1_dirty_107 = vlSelf->__Vdly__way1_dirty_107;
    vlSelf->__PVT__way1_dirty_106 = vlSelf->__Vdly__way1_dirty_106;
    vlSelf->__PVT__way1_dirty_105 = vlSelf->__Vdly__way1_dirty_105;
    vlSelf->__PVT__way1_dirty_104 = vlSelf->__Vdly__way1_dirty_104;
    vlSelf->__PVT__way1_dirty_103 = vlSelf->__Vdly__way1_dirty_103;
    vlSelf->__PVT__way1_dirty_102 = vlSelf->__Vdly__way1_dirty_102;
    vlSelf->__PVT__lru_10 = vlSelf->__Vdly__lru_10;
    vlSelf->__PVT__lru_9 = vlSelf->__Vdly__lru_9;
    vlSelf->__PVT__lru_8 = vlSelf->__Vdly__lru_8;
    vlSelf->__PVT__lru_7 = vlSelf->__Vdly__lru_7;
    vlSelf->__PVT__lru_6 = vlSelf->__Vdly__lru_6;
    vlSelf->__PVT__lru_5 = vlSelf->__Vdly__lru_5;
    vlSelf->__PVT__lru_4 = vlSelf->__Vdly__lru_4;
    vlSelf->__PVT__lru_3 = vlSelf->__Vdly__lru_3;
    vlSelf->__PVT__lru_2 = vlSelf->__Vdly__lru_2;
    vlSelf->__PVT__lru_1 = vlSelf->__Vdly__lru_1;
    vlSelf->__PVT__lru_0 = vlSelf->__Vdly__lru_0;
    vlSelf->__Vdly__stage1_sram_wr_reg = vlSelf->__PVT__stage1_sram_wr_reg;
    vlSelf->__PVT__stage1_sram_cache_reg = vlSelf->__Vdly__stage1_sram_cache_reg;
    vlSelf->__PVT__stage1_sram_req_reg = vlSelf->__Vdly__stage1_sram_req_reg;
    vlSelf->__Vdly__stage1_sram_valid0_reg = vlSelf->__PVT__stage1_sram_valid0_reg;
    vlSelf->__Vdly__stage1_sram_hit0_reg = vlSelf->__PVT__stage1_sram_hit0_reg;
    vlSelf->__Vdly__stage1_sram_valid1_reg = vlSelf->__PVT__stage1_sram_valid1_reg;
    vlSelf->__Vdly__stage1_sram_hit1_reg = vlSelf->__PVT__stage1_sram_hit1_reg;
    vlSelf->__PVT__stage2_stall_reg = vlSelf->__Vdly__stage2_stall_reg;
    vlSelf->__Vdly__stage2_hit0_reg = vlSelf->__PVT__stage2_hit0_reg;
    vlSelf->__Vdly__lru_127 = vlSelf->__PVT__lru_127;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 3U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 1U);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_wr_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_wr_reg = vlSelf->__PVT__io_sram_wr;
    }
    vlSelf->__PVT___state_ready_lookup_should_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? 0U : 0x19U);
    vlSelf->__PVT___state_ready_lookup_should_be_T_2 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 0U);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_hit0_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_hit0_reg = vlSelf->__PVT__dcache_tag_io_hit;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_valid0_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_valid0_reg = vlSelf->__PVT__dcache_tag_io_valid;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_hit1_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_hit1_reg = vlSelf->__PVT__dcache_tag_1_io_hit;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_valid1_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_valid1_reg = vlSelf->__PVT__dcache_tag_1_io_valid;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage2_hit0_reg = 0U;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage2_hit0_reg = vlSelf->__PVT___hit_T;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lru_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
        if (vlSelf->__PVT___way0_dirty_T) {
            vlSelf->__Vdly__lru_127 = vlSelf->__PVT___lru_T_5;
        } else if (((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                    | (IData)(vlSelf->__PVT___way0_dirty_T_9))) {
            vlSelf->__Vdly__lru_127 = vlSelf->__PVT___way0_dirty_T_7;
        } else if ((0x7fU != (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))) {
            vlSelf->__Vdly__lru_127 = vlSelf->__PVT___GEN_127;
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT__stage1_sram_wr_reg = vlSelf->__Vdly__stage1_sram_wr_reg;
    vlSelf->__PVT__lru_127 = vlSelf->__Vdly__lru_127;
    vlSelf->__PVT__stage1_sram_valid0_reg = vlSelf->__Vdly__stage1_sram_valid0_reg;
    vlSelf->__PVT__stage1_sram_hit0_reg = vlSelf->__Vdly__stage1_sram_hit0_reg;
    vlSelf->__PVT__stage1_sram_valid1_reg = vlSelf->__Vdly__stage1_sram_valid1_reg;
    vlSelf->__PVT__stage1_sram_hit1_reg = vlSelf->__Vdly__stage1_sram_hit1_reg;
    vlSelf->__PVT__wait_data = vlSelf->__Vdly__wait_data;
    vlSelf->__PVT__stage2_hit0_reg = vlSelf->__Vdly__stage2_hit0_reg;
    vlSelf->__Vdly__read_counter = vlSelf->__PVT__read_counter;
    vlSelf->__PVT__stage2_sram_addr_reg = vlSelf->__Vdly__stage2_sram_addr_reg;
    vlSelf->__Vdly__stage1_addr_line_mapping = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__18\n"); );
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
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_addr_line_mapping = 0ULL;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_addr_line_mapping = vlSelf->__PVT__io_sram_addr;
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_6)
            : 0x19U);
    vlSelf->__PVT__work_state = vlSelf->__Vdly__work_state;
    vlSelf->__PVT__stage1_addr_line_mapping = vlSelf->__Vdly__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_1 
        = ((IData)(vlSelf->__PVT__io_port_rvalid) ? 0x18U
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___wait_data_T_3 = (0xdU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_9 = (0U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_sram_data_ok_T_1 = (0x18U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___cache_wdata_T_3 = (0x19U == (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__37(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__37\n"); );
    // Body
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__38(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__38\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_7_rdata = vlSelf->__PVT__dcache_data_7_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__39(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__39\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_7_rdata = vlSelf->__PVT__dcache_data_15_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__40(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__40\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_6_rdata = vlSelf->__PVT__dcache_data_6_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__41(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__41\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_6_rdata = vlSelf->__PVT__dcache_data_14_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__42(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__42\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_5_rdata = vlSelf->__PVT__dcache_data_5_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__43(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__43\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_5_rdata = vlSelf->__PVT__dcache_data_13_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__44(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__44\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_4_rdata = vlSelf->__PVT__dcache_data_4_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__45(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__45\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_4_rdata = vlSelf->__PVT__dcache_data_12_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__46(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__46\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_3_rdata = vlSelf->__PVT__dcache_data_3_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__47(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__47\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_3_rdata = vlSelf->__PVT__dcache_data_11_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__48(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__48\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_2_rdata = vlSelf->__PVT__dcache_data_2_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__49(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__49\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_2_rdata = vlSelf->__PVT__dcache_data_10_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__50(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__50\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_0_rdata = vlSelf->__PVT__dcache_data_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__51(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__51\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way0_1_rdata = vlSelf->__PVT__dcache_data_1_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__52(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__52\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_0_rdata = vlSelf->__PVT__dcache_data_8_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__53(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__53\n"); );
    // Body
    vlSelf->__PVT__dcache_data_way1_1_rdata = vlSelf->__PVT__dcache_data_9_io_rdata;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1931 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT___GEN_1932 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_1931);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__2(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__2\n"); );
    // Body
    vlSelf->__PVT___GEN_1933 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_1932);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT___GEN_1934 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_1933);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSelf->__PVT___GEN_1935 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_1934);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__5(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__5\n"); );
    // Body
    vlSelf->__PVT___GEN_1936 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_1935);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__6(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__6\n"); );
    // Body
    vlSelf->__PVT___GEN_1937 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_1936);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__54(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__54\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__56(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__56\n"); );
    // Body
    vlSelf->__PVT__write_access_complete_reg = vlSelf->__Vdly__write_access_complete_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__57(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__57\n"); );
    // Body
    vlSelf->__PVT___state_ready_lookup_should_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_2)
            : 0x19U);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__58(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__58\n"); );
    // Body
    vlSelf->__PVT___hit_T = ((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                             & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT___hit_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_hit1_reg) 
                               & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__59(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__59\n"); );
    // Body
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                          | (IData)(vlSelf->__PVT___hit_T_1));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__60(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__60\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T_5 = (0xeU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T = (1U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_1 = (0xcU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_2 = (8U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_wdata_T = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T = (0xaU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T_7 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_dirty_T_9 = (0x10U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT__state_ready_lookup_should_be = ((IData)(vlSelf->__PVT__hit)
                                                    ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_3)
                                                    : (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_5));
    vlSelf->__PVT__dcache_tag_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_tag_1_io_waddr = vlSelf->__PVT__stage1_addr_line_mapping;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__62(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__62\n"); );
    // Body
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__63(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__63\n"); );
    // Body
    vlSelf->__PVT___way0_dirty_T = (0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay));
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__64(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__64\n"); );
    // Body
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_2 = 
        ((IData)(vlSelf->__PVT___way0_dirty_T_9) | (IData)(vlSelf->__PVT___way0_dirty_T));
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__66(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__66\n"); );
    // Body
    vlSelf->__Vdly__stage1_sram_size_reg = vlSelf->__PVT__stage1_sram_size_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__67(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__67\n"); );
    // Body
    vlSelf->__Vdly__stage1_sram_size_reg = (3U & ((IData)(vlSelf->__PVT__reset)
                                                   ? 0U
                                                   : 
                                                  VL_SEL_IIII(3, (IData)(vlSelf->__PVT___stage1_sram_size_reg_T_1), 0U, 2U)));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__68(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__68\n"); );
    // Body
    vlSelf->__PVT__stage2_sram_write_reg = vlSelf->__Vdly__stage2_sram_write_reg;
    vlSelf->__PVT__stage1_sram_size_reg = vlSelf->__Vdly__stage1_sram_size_reg;
    vlSelf->__PVT__stage1_sram_phy_addr_reg = vlSelf->__Vdly__stage1_sram_phy_addr_reg;
    vlSelf->__PVT__write_counter = vlSelf->__Vdly__write_counter;
    vlSelf->__Vdly__stage1_stall_reg = vlSelf->__PVT__stage1_stall_reg;
    vlSelf->__PVT__sram_rdata_reg = vlSelf->__Vdly__sram_rdata_reg;
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__7(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__7\n"); );
    // Body
    vlSelf->__PVT___GEN_2075 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_1923 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__8(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__8\n"); );
    // Body
    vlSelf->__PVT___GEN_2067 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__9(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__9\n"); );
    // Body
    vlSelf->__PVT___GEN_2076 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_2075);
    vlSelf->__PVT___GEN_1924 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_1923);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__10(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__10\n"); );
    // Body
    vlSelf->__PVT___GEN_2068 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_2067);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__11(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__11\n"); );
    // Body
    vlSelf->__PVT___GEN_2077 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_2076);
    vlSelf->__PVT___GEN_1925 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_1924);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__12(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__12\n"); );
    // Body
    vlSelf->__PVT___GEN_2069 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_2068);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__13(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__13\n"); );
    // Body
    vlSelf->__PVT___GEN_2078 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_2077);
    vlSelf->__PVT___GEN_1926 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_1925);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__14(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__14\n"); );
    // Body
    vlSelf->__PVT___GEN_2070 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_2069);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__15(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__15\n"); );
    // Body
    vlSelf->__PVT___GEN_2079 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_2078);
    vlSelf->__PVT___GEN_1927 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_1926);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__16(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__16\n"); );
    // Body
    vlSelf->__PVT___GEN_2071 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_2070);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__17(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__17\n"); );
    // Body
    vlSelf->__PVT___GEN_2080 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_2079);
    vlSelf->__PVT___GEN_1928 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_1927);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__18(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__18\n"); );
    // Body
    vlSelf->__PVT___GEN_2072 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_2071);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__19(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__19\n"); );
    // Body
    vlSelf->__PVT___GEN_2081 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_2080);
    vlSelf->__PVT___GEN_1929 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 3U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_1928);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__20(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__20\n"); );
    // Body
    vlSelf->__PVT___GEN_2073 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_2072);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__21(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__21\n"); );
    // Body
    vlSelf->__PVT__hit_word = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                ? vlSelf->__PVT___GEN_1929
                                : vlSelf->__PVT___GEN_1937);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__22(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__22\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_2 = ((IData)(vlSelf->__PVT___cache_wdata_T_3)
                                          ? vlSelf->__PVT__hit_word
                                          : 0ULL);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__23(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_comb__TOP__mycpu_top__data_cache__23\n"); );
    // Body
    vlSelf->__PVT___io_sram_rdata_T_3 = ((IData)(vlSelf->__PVT___io_sram_data_ok_T_1)
                                          ? vlSelf->__PVT__wait_data
                                          : vlSelf->__PVT___io_sram_rdata_T_2);
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__79(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__79\n"); );
    // Body
    vlSelf->__PVT___GEN_268 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_267));
    vlSelf->__PVT___GEN_780 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_779));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__80(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__80\n"); );
    // Body
    vlSelf->__PVT___GEN_269 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_781 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_780));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__81(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__81\n"); );
    // Body
    vlSelf->__PVT___GEN_270 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_269));
    vlSelf->__PVT___GEN_782 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_781));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__82(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__82\n"); );
    // Body
    vlSelf->__PVT___GEN_271 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_783 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_782));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__83(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__83\n"); );
    // Body
    vlSelf->__PVT___GEN_272 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_784 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_783));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__84(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__84\n"); );
    // Body
    vlSelf->__PVT___GEN_273 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_785 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_784));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__85(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__85\n"); );
    // Body
    vlSelf->__PVT___GEN_274 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_786 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_785));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__86(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__86\n"); );
    // Body
    vlSelf->__PVT___GEN_275 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_787 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_786));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__87(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__87\n"); );
    // Body
    vlSelf->__PVT___GEN_276 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_788 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_787));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__88(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__88\n"); );
    // Body
    vlSelf->__PVT___GEN_277 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_789 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_788));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__89(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__89\n"); );
    // Body
    vlSelf->__PVT___GEN_278 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_790 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_789));
    vlSelf->__PVT___GEN_279 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_791 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_790));
    vlSelf->__PVT___GEN_280 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_279));
    vlSelf->__PVT___GEN_792 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_791));
    vlSelf->__PVT___GEN_281 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_280));
    vlSelf->__PVT___GEN_793 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_792));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__90\n"); );
    // Body
    vlSelf->__PVT___GEN_282 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_281));
    vlSelf->__PVT___GEN_794 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_793));
    vlSelf->__PVT___GEN_283 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_795 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_794));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__91(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__91\n"); );
    // Body
    vlSelf->__PVT___GEN_284 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_283));
    vlSelf->__PVT___GEN_796 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_795));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__92(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__92\n"); );
    // Body
    vlSelf->__PVT___GEN_285 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_797 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_796));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__93(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__93\n"); );
    // Body
    vlSelf->__PVT___GEN_286 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_798 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_797));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__94(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__94\n"); );
    // Body
    vlSelf->__PVT___GEN_287 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_799 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_798));
    vlSelf->__PVT___GEN_288 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_800 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_799));
    vlSelf->__PVT___GEN_289 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_801 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_800));
    vlSelf->__PVT___GEN_290 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_802 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_801));
    vlSelf->__PVT___GEN_291 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_803 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_802));
    vlSelf->__PVT___GEN_292 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_804 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_803));
    vlSelf->__PVT___GEN_293 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_805 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_804));
    vlSelf->__PVT___GEN_294 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_293));
    vlSelf->__PVT___GEN_806 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_805));
    vlSelf->__PVT___GEN_295 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_294));
    vlSelf->__PVT___GEN_807 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_806));
    vlSelf->__PVT___GEN_296 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_295));
    vlSelf->__PVT___GEN_808 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_807));
    vlSelf->__PVT___GEN_297 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_809 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_808));
    vlSelf->__PVT___GEN_298 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_297));
    vlSelf->__PVT___GEN_810 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_809));
    vlSelf->__PVT___GEN_299 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_811 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_810));
    vlSelf->__PVT___GEN_300 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_812 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_811));
    vlSelf->__PVT___GEN_301 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_813 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_812));
    vlSelf->__PVT___GEN_302 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_814 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_813));
    vlSelf->__PVT___GEN_303 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_815 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_814));
    vlSelf->__PVT___GEN_304 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_816 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_815));
    vlSelf->__PVT___GEN_305 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_817 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_816));
    vlSelf->__PVT___GEN_306 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_818 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_817));
    vlSelf->__PVT___GEN_307 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_819 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_818));
    vlSelf->__PVT___GEN_308 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_307));
    vlSelf->__PVT___GEN_820 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_819));
    vlSelf->__PVT___GEN_309 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_308));
    vlSelf->__PVT___GEN_821 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_820));
    vlSelf->__PVT___GEN_310 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_309));
    vlSelf->__PVT___GEN_822 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_821));
    vlSelf->__PVT___GEN_311 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_823 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_822));
    vlSelf->__PVT___GEN_312 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_311));
    vlSelf->__PVT___GEN_824 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_823));
    vlSelf->__PVT___GEN_313 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_825 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_824));
    vlSelf->__PVT___GEN_314 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_826 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_825));
    vlSelf->__PVT___GEN_315 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_827 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_826));
    vlSelf->__PVT___GEN_316 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_828 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_827));
    vlSelf->__PVT___GEN_317 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_829 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_828));
    vlSelf->__PVT___GEN_318 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_830 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_829));
    vlSelf->__PVT___GEN_319 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_831 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_830));
    vlSelf->__PVT___GEN_320 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_832 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_831));
    vlSelf->__PVT___GEN_321 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_833 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_832));
    vlSelf->__PVT___GEN_322 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_321));
    vlSelf->__PVT___GEN_834 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_833));
    vlSelf->__PVT___GEN_323 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_322));
    vlSelf->__PVT___GEN_835 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_834));
    vlSelf->__PVT___GEN_324 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_323));
    vlSelf->__PVT___GEN_836 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_835));
    vlSelf->__PVT___GEN_325 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_837 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_836));
    vlSelf->__PVT___GEN_326 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_325));
    vlSelf->__PVT___GEN_838 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_837));
    vlSelf->__PVT___GEN_327 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_839 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_838));
    vlSelf->__PVT___GEN_328 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_840 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_839));
    vlSelf->__PVT___GEN_329 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_841 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_840));
    vlSelf->__PVT___GEN_330 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_842 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_841));
    vlSelf->__PVT___GEN_331 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_843 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_842));
    vlSelf->__PVT___GEN_332 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_844 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_843));
    vlSelf->__PVT___GEN_333 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_845 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_844));
    vlSelf->__PVT___GEN_334 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_846 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_845));
    vlSelf->__PVT___GEN_335 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_847 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_846));
    vlSelf->__PVT___GEN_336 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_335));
    vlSelf->__PVT___GEN_848 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_847));
    vlSelf->__PVT___GEN_337 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_336));
    vlSelf->__PVT___GEN_849 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_848));
    vlSelf->__PVT___GEN_338 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_337));
    vlSelf->__PVT___GEN_850 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_849));
    vlSelf->__PVT___GEN_339 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_851 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_850));
    vlSelf->__PVT___GEN_340 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_339));
    vlSelf->__PVT___GEN_852 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_851));
    vlSelf->__PVT___GEN_341 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_853 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_852));
    vlSelf->__PVT___GEN_342 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_854 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_853));
    vlSelf->__PVT___GEN_343 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_855 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_854));
    vlSelf->__PVT___GEN_344 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_856 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_855));
    vlSelf->__PVT___GEN_345 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_857 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_856));
    vlSelf->__PVT___GEN_346 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_858 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_857));
    vlSelf->__PVT___GEN_347 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_859 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_858));
    vlSelf->__PVT___GEN_348 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_860 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_859));
    vlSelf->__PVT___GEN_349 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_861 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_860));
    vlSelf->__PVT___GEN_350 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_349));
    vlSelf->__PVT___GEN_862 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_861));
    vlSelf->__PVT___GEN_863 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_862));
    vlSelf->__PVT___GEN_864 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_863));
    vlSelf->__PVT___GEN_865 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_864));
    vlSelf->__PVT___GEN_866 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_865));
    vlSelf->__PVT___GEN_867 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_866));
    vlSelf->__PVT___GEN_868 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_867));
    vlSelf->__PVT___GEN_869 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_868));
    vlSelf->__PVT___GEN_870 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_869));
    vlSelf->__PVT___GEN_871 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_870));
    vlSelf->__PVT___GEN_872 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_871));
    vlSelf->__PVT___GEN_873 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_872));
    vlSelf->__PVT___GEN_874 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_873));
    vlSelf->__PVT___GEN_875 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_874));
    vlSelf->__PVT___GEN_876 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_875));
    vlSelf->__PVT___GEN_877 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_876));
    vlSelf->__PVT___GEN_878 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_877));
    vlSelf->__PVT___GEN_879 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_878));
    vlSelf->__PVT___GEN_880 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_879));
    vlSelf->__PVT___GEN_881 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_880));
    vlSelf->__PVT___GEN_882 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_881));
    vlSelf->__PVT___GEN_883 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_882));
    vlSelf->__PVT___GEN_884 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_883));
    vlSelf->__PVT___GEN_885 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_884));
    vlSelf->__PVT___GEN_886 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_885));
    vlSelf->__PVT___GEN_887 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_886));
    vlSelf->__PVT___GEN_888 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_887));
    vlSelf->__PVT___GEN_889 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_888));
    vlSelf->__PVT___GEN_890 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_889));
    vlSelf->__PVT___GEN_891 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_890));
    vlSelf->__PVT___GEN_892 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_891));
    vlSelf->__PVT___GEN_893 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_892));
    vlSelf->__PVT___GEN_894 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_893));
    vlSelf->__PVT___GEN_895 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_894));
    vlSelf->__PVT___GEN_896 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_895));
}

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__101(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__101\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__103(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___nba_sequent__TOP__mycpu_top__data_cache__103\n"); );
    // Body
    vlSelf->__PVT___GEN_351 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_350));
    vlSelf->__PVT___GEN_352 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_351));
    vlSelf->__PVT___GEN_353 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_354 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_353));
    vlSelf->__PVT___GEN_355 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_356 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_357 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_358 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_359 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_360 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_361 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_362 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_363 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_364 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_363));
    vlSelf->__PVT___GEN_365 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_364));
    vlSelf->__PVT___GEN_366 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_365));
    vlSelf->__PVT___GEN_367 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_368 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_367));
    vlSelf->__PVT___GEN_369 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_370 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_371 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_372 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_373 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_374 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_375 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_376 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_377 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_378 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_377));
    vlSelf->__PVT___GEN_379 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_378));
    vlSelf->__PVT___GEN_380 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_379));
    vlSelf->__PVT___GEN_381 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_382 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_381));
    vlSelf->__PVT___GEN_383 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_384 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 6U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_383));
}
