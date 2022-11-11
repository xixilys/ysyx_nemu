// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dcache_tag.h"

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__0(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__0\n"); );
    // Body
    vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__tag_regs0_62;
    vlSelf->__Vdly__tag_regs1_61 = vlSelf->__PVT__tag_regs1_61;
    vlSelf->__Vdly__tag_regs0_61 = vlSelf->__PVT__tag_regs0_61;
    vlSelf->__Vdly__tag_regs1_60 = vlSelf->__PVT__tag_regs1_60;
    vlSelf->__Vdly__tag_regs1_57 = vlSelf->__PVT__tag_regs1_57;
    vlSelf->__Vdly__tag_regs1_40 = vlSelf->__PVT__tag_regs1_40;
    vlSelf->__Vdly__tag_regs1_39 = vlSelf->__PVT__tag_regs1_39;
    vlSelf->__Vdly__tag_regs1_6 = vlSelf->__PVT__tag_regs1_6;
    vlSelf->__Vdly__tag_regs0_3 = vlSelf->__PVT__tag_regs0_3;
    vlSelf->__Vdly__tag_regs0_2 = vlSelf->__PVT__tag_regs0_2;
    vlSelf->__Vdly__tag_regs0_1 = vlSelf->__PVT__tag_regs0_1;
    vlSelf->__Vdly__tag_regs0_0 = vlSelf->__PVT__tag_regs0_0;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__1(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_62 = 0ULL;
    } else if ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__tag_regs0_63;
        } else if ((0x3eU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_61 = 0ULL;
    } else if ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_61 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_61 = 0ULL;
    } else if ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_61 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_60 = 0ULL;
    } else if ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_60 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_57 = 0ULL;
    } else if ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_57 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_40 = 0ULL;
    } else if ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_40 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_39 = 0ULL;
    } else if ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_39 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_6 = 0ULL;
    } else if ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_6 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_3 = 0ULL;
    } else if ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_3 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_2 = 0ULL;
    } else if ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_2 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_0 = 0ULL;
    } else if ((0U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_0 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_1 = 0ULL;
    } else if ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_1 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__2(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__2\n"); );
    // Body
    vlSelf->__PVT__tag_regs1_61 = vlSelf->__Vdly__tag_regs1_61;
    vlSelf->__PVT__tag_regs0_61 = vlSelf->__Vdly__tag_regs0_61;
    vlSelf->__PVT__tag_regs1_60 = vlSelf->__Vdly__tag_regs1_60;
    vlSelf->__PVT__tag_regs1_57 = vlSelf->__Vdly__tag_regs1_57;
    vlSelf->__PVT__tag_regs1_40 = vlSelf->__Vdly__tag_regs1_40;
    vlSelf->__PVT__tag_regs1_39 = vlSelf->__Vdly__tag_regs1_39;
    vlSelf->__PVT__tag_regs1_6 = vlSelf->__Vdly__tag_regs1_6;
    vlSelf->__PVT__tag_regs0_3 = vlSelf->__Vdly__tag_regs0_3;
    vlSelf->__PVT__tag_regs0_2 = vlSelf->__Vdly__tag_regs0_2;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__3(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__3\n"); );
    // Body
    vlSelf->__Vdly__tag_regs0_60 = vlSelf->__PVT__tag_regs0_60;
    vlSelf->__Vdly__tag_regs1_59 = vlSelf->__PVT__tag_regs1_59;
    vlSelf->__Vdly__tag_regs0_59 = vlSelf->__PVT__tag_regs0_59;
    vlSelf->__Vdly__tag_regs1_58 = vlSelf->__PVT__tag_regs1_58;
    vlSelf->__Vdly__tag_regs0_58 = vlSelf->__PVT__tag_regs0_58;
    vlSelf->__Vdly__tag_regs0_57 = vlSelf->__PVT__tag_regs0_57;
    vlSelf->__Vdly__tag_regs1_56 = vlSelf->__PVT__tag_regs1_56;
    vlSelf->__Vdly__tag_regs0_56 = vlSelf->__PVT__tag_regs0_56;
    vlSelf->__Vdly__tag_regs1_55 = vlSelf->__PVT__tag_regs1_55;
    vlSelf->__Vdly__tag_regs0_55 = vlSelf->__PVT__tag_regs0_55;
    vlSelf->__Vdly__tag_regs1_54 = vlSelf->__PVT__tag_regs1_54;
    vlSelf->__Vdly__tag_regs0_54 = vlSelf->__PVT__tag_regs0_54;
    vlSelf->__Vdly__tag_regs1_53 = vlSelf->__PVT__tag_regs1_53;
    vlSelf->__Vdly__tag_regs0_53 = vlSelf->__PVT__tag_regs0_53;
    vlSelf->__Vdly__tag_regs1_52 = vlSelf->__PVT__tag_regs1_52;
    vlSelf->__Vdly__tag_regs0_52 = vlSelf->__PVT__tag_regs0_52;
    vlSelf->__Vdly__tag_regs1_51 = vlSelf->__PVT__tag_regs1_51;
    vlSelf->__Vdly__tag_regs0_51 = vlSelf->__PVT__tag_regs0_51;
    vlSelf->__Vdly__tag_regs1_50 = vlSelf->__PVT__tag_regs1_50;
    vlSelf->__Vdly__tag_regs1_49 = vlSelf->__PVT__tag_regs1_49;
    vlSelf->__Vdly__tag_regs1_48 = vlSelf->__PVT__tag_regs1_48;
    vlSelf->__Vdly__tag_regs1_47 = vlSelf->__PVT__tag_regs1_47;
    vlSelf->__Vdly__tag_regs1_46 = vlSelf->__PVT__tag_regs1_46;
    vlSelf->__Vdly__tag_regs1_45 = vlSelf->__PVT__tag_regs1_45;
    vlSelf->__Vdly__tag_regs1_44 = vlSelf->__PVT__tag_regs1_44;
    vlSelf->__Vdly__tag_regs1_43 = vlSelf->__PVT__tag_regs1_43;
    vlSelf->__Vdly__tag_regs1_42 = vlSelf->__PVT__tag_regs1_42;
    vlSelf->__Vdly__tag_regs1_41 = vlSelf->__PVT__tag_regs1_41;
    vlSelf->__Vdly__tag_regs1_38 = vlSelf->__PVT__tag_regs1_38;
    vlSelf->__Vdly__tag_regs1_37 = vlSelf->__PVT__tag_regs1_37;
    vlSelf->__Vdly__tag_regs1_36 = vlSelf->__PVT__tag_regs1_36;
    vlSelf->__Vdly__tag_regs1_35 = vlSelf->__PVT__tag_regs1_35;
    vlSelf->__Vdly__tag_regs1_34 = vlSelf->__PVT__tag_regs1_34;
    vlSelf->__Vdly__tag_regs0_34 = vlSelf->__PVT__tag_regs0_34;
    vlSelf->__Vdly__tag_regs1_33 = vlSelf->__PVT__tag_regs1_33;
    vlSelf->__Vdly__tag_regs0_33 = vlSelf->__PVT__tag_regs0_33;
    vlSelf->__Vdly__tag_regs1_32 = vlSelf->__PVT__tag_regs1_32;
    vlSelf->__Vdly__tag_regs0_32 = vlSelf->__PVT__tag_regs0_32;
    vlSelf->__Vdly__tag_regs1_31 = vlSelf->__PVT__tag_regs1_31;
    vlSelf->__Vdly__tag_regs0_31 = vlSelf->__PVT__tag_regs0_31;
    vlSelf->__Vdly__tag_regs1_30 = vlSelf->__PVT__tag_regs1_30;
    vlSelf->__Vdly__tag_regs1_29 = vlSelf->__PVT__tag_regs1_29;
    vlSelf->__Vdly__tag_regs1_28 = vlSelf->__PVT__tag_regs1_28;
    vlSelf->__Vdly__tag_regs1_27 = vlSelf->__PVT__tag_regs1_27;
    vlSelf->__Vdly__tag_regs1_26 = vlSelf->__PVT__tag_regs1_26;
    vlSelf->__Vdly__tag_regs1_25 = vlSelf->__PVT__tag_regs1_25;
    vlSelf->__Vdly__tag_regs1_24 = vlSelf->__PVT__tag_regs1_24;
    vlSelf->__Vdly__tag_regs1_23 = vlSelf->__PVT__tag_regs1_23;
    vlSelf->__Vdly__tag_regs1_22 = vlSelf->__PVT__tag_regs1_22;
    vlSelf->__Vdly__tag_regs1_21 = vlSelf->__PVT__tag_regs1_21;
    vlSelf->__Vdly__tag_regs1_20 = vlSelf->__PVT__tag_regs1_20;
    vlSelf->__Vdly__tag_regs1_19 = vlSelf->__PVT__tag_regs1_19;
    vlSelf->__Vdly__tag_regs1_18 = vlSelf->__PVT__tag_regs1_18;
    vlSelf->__Vdly__tag_regs1_17 = vlSelf->__PVT__tag_regs1_17;
    vlSelf->__Vdly__tag_regs1_16 = vlSelf->__PVT__tag_regs1_16;
    vlSelf->__Vdly__tag_regs1_15 = vlSelf->__PVT__tag_regs1_15;
    vlSelf->__Vdly__tag_regs1_14 = vlSelf->__PVT__tag_regs1_14;
    vlSelf->__Vdly__tag_regs0_14 = vlSelf->__PVT__tag_regs0_14;
    vlSelf->__Vdly__tag_regs1_13 = vlSelf->__PVT__tag_regs1_13;
    vlSelf->__Vdly__tag_regs0_13 = vlSelf->__PVT__tag_regs0_13;
    vlSelf->__Vdly__tag_regs1_12 = vlSelf->__PVT__tag_regs1_12;
    vlSelf->__Vdly__tag_regs0_12 = vlSelf->__PVT__tag_regs0_12;
    vlSelf->__Vdly__tag_regs1_11 = vlSelf->__PVT__tag_regs1_11;
    vlSelf->__Vdly__tag_regs0_11 = vlSelf->__PVT__tag_regs0_11;
    vlSelf->__Vdly__tag_regs1_10 = vlSelf->__PVT__tag_regs1_10;
    vlSelf->__Vdly__tag_regs0_10 = vlSelf->__PVT__tag_regs0_10;
    vlSelf->__Vdly__tag_regs1_9 = vlSelf->__PVT__tag_regs1_9;
    vlSelf->__Vdly__tag_regs0_9 = vlSelf->__PVT__tag_regs0_9;
    vlSelf->__Vdly__tag_regs1_8 = vlSelf->__PVT__tag_regs1_8;
    vlSelf->__Vdly__tag_regs0_8 = vlSelf->__PVT__tag_regs0_8;
    vlSelf->__Vdly__tag_regs1_7 = vlSelf->__PVT__tag_regs1_7;
    vlSelf->__Vdly__tag_regs0_7 = vlSelf->__PVT__tag_regs0_7;
    vlSelf->__Vdly__tag_regs1_5 = vlSelf->__PVT__tag_regs1_5;
    vlSelf->__Vdly__tag_regs0_5 = vlSelf->__PVT__tag_regs0_5;
    vlSelf->__Vdly__tag_regs1_4 = vlSelf->__PVT__tag_regs1_4;
    vlSelf->__Vdly__tag_regs0_4 = vlSelf->__PVT__tag_regs0_4;
    vlSelf->__Vdly__tag_regs1_3 = vlSelf->__PVT__tag_regs1_3;
    vlSelf->__Vdly__tag_regs1_2 = vlSelf->__PVT__tag_regs1_2;
    vlSelf->__Vdly__tag_regs1_1 = vlSelf->__PVT__tag_regs1_1;
    vlSelf->__Vdly__tag_regs1_0 = vlSelf->__PVT__tag_regs1_0;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__4(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_60 = 0ULL;
    } else if ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_60 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_59 = 0ULL;
    } else if ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_59 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_59 = 0ULL;
    } else if ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_59 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_58 = 0ULL;
    } else if ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_58 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_58 = 0ULL;
    } else if ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_58 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_57 = 0ULL;
    } else if ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_57 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_56 = 0ULL;
    } else if ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_56 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_56 = 0ULL;
    } else if ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_56 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_55 = 0ULL;
    } else if ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_55 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_55 = 0ULL;
    } else if ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_55 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_54 = 0ULL;
    } else if ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_54 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_54 = 0ULL;
    } else if ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_54 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_53 = 0ULL;
    } else if ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_53 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_53 = 0ULL;
    } else if ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_53 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_52 = 0ULL;
    } else if ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_52 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_52 = 0ULL;
    } else if ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_52 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_51 = 0ULL;
    } else if ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_51 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_51 = 0ULL;
    } else if ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_51 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_50 = 0ULL;
    } else if ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_50 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_49 = 0ULL;
    } else if ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_49 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_48 = 0ULL;
    } else if ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_48 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_47 = 0ULL;
    } else if ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_47 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_46 = 0ULL;
    } else if ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_46 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_45 = 0ULL;
    } else if ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_45 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_44 = 0ULL;
    } else if ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_44 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_43 = 0ULL;
    } else if ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_43 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_42 = 0ULL;
    } else if ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_42 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_41 = 0ULL;
    } else if ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_41 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_38 = 0ULL;
    } else if ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_38 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_37 = 0ULL;
    } else if ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_37 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_36 = 0ULL;
    } else if ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_36 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_35 = 0ULL;
    } else if ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_35 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_34 = 0ULL;
    } else if ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_34 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_34 = 0ULL;
    } else if ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_34 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_33 = 0ULL;
    } else if ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_33 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_33 = 0ULL;
    } else if ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_33 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_32 = 0ULL;
    } else if ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_32 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_32 = 0ULL;
    } else if ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_32 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_31 = 0ULL;
    } else if ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_31 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_31 = 0ULL;
    } else if ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_31 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_30 = 0ULL;
    } else if ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_30 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_29 = 0ULL;
    } else if ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_29 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_28 = 0ULL;
    } else if ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_28 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_27 = 0ULL;
    } else if ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_27 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_26 = 0ULL;
    } else if ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_26 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_25 = 0ULL;
    } else if ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_25 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_24 = 0ULL;
    } else if ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_24 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_23 = 0ULL;
    } else if ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_23 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_22 = 0ULL;
    } else if ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_22 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_21 = 0ULL;
    } else if ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_21 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_20 = 0ULL;
    } else if ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_20 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_19 = 0ULL;
    } else if ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_19 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_18 = 0ULL;
    } else if ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_18 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_17 = 0ULL;
    } else if ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_17 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_16 = 0ULL;
    } else if ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_16 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_15 = 0ULL;
    } else if ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_15 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_14 = 0ULL;
    } else if ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_14 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_14 = 0ULL;
    } else if ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_14 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_13 = 0ULL;
    } else if ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_13 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_13 = 0ULL;
    } else if ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_13 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_12 = 0ULL;
    } else if ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_12 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_12 = 0ULL;
    } else if ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_12 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_11 = 0ULL;
    } else if ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_11 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_11 = 0ULL;
    } else if ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_11 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_10 = 0ULL;
    } else if ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_10 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_10 = 0ULL;
    } else if ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_10 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_9 = 0ULL;
    } else if ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_9 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_9 = 0ULL;
    } else if ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_9 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_8 = 0ULL;
    } else if ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_8 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_8 = 0ULL;
    } else if ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_8 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_7 = 0ULL;
    } else if ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_7 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_7 = 0ULL;
    } else if ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_7 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_5 = 0ULL;
    } else if ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_5 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_5 = 0ULL;
    } else if ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_5 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_4 = 0ULL;
    } else if ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_4 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_4 = 0ULL;
    } else if ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_4 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_3 = 0ULL;
    } else if ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_3 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_2 = 0ULL;
    } else if ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_2 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_0 = 0ULL;
    } else if ((0U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_0 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_1 = 0ULL;
    } else if ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_1 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__5(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__5\n"); );
    // Body
    vlSelf->__PVT__tag_regs0_60 = vlSelf->__Vdly__tag_regs0_60;
    vlSelf->__PVT__tag_regs1_59 = vlSelf->__Vdly__tag_regs1_59;
    vlSelf->__PVT__tag_regs0_59 = vlSelf->__Vdly__tag_regs0_59;
    vlSelf->__PVT__tag_regs1_58 = vlSelf->__Vdly__tag_regs1_58;
    vlSelf->__PVT__tag_regs0_58 = vlSelf->__Vdly__tag_regs0_58;
    vlSelf->__PVT__tag_regs0_57 = vlSelf->__Vdly__tag_regs0_57;
    vlSelf->__PVT__tag_regs1_56 = vlSelf->__Vdly__tag_regs1_56;
    vlSelf->__PVT__tag_regs0_56 = vlSelf->__Vdly__tag_regs0_56;
    vlSelf->__PVT__tag_regs1_55 = vlSelf->__Vdly__tag_regs1_55;
    vlSelf->__PVT__tag_regs0_55 = vlSelf->__Vdly__tag_regs0_55;
    vlSelf->__PVT__tag_regs1_54 = vlSelf->__Vdly__tag_regs1_54;
    vlSelf->__PVT__tag_regs0_54 = vlSelf->__Vdly__tag_regs0_54;
    vlSelf->__PVT__tag_regs1_53 = vlSelf->__Vdly__tag_regs1_53;
    vlSelf->__PVT__tag_regs0_53 = vlSelf->__Vdly__tag_regs0_53;
    vlSelf->__PVT__tag_regs1_52 = vlSelf->__Vdly__tag_regs1_52;
    vlSelf->__PVT__tag_regs0_52 = vlSelf->__Vdly__tag_regs0_52;
    vlSelf->__PVT__tag_regs1_51 = vlSelf->__Vdly__tag_regs1_51;
    vlSelf->__PVT__tag_regs0_51 = vlSelf->__Vdly__tag_regs0_51;
    vlSelf->__PVT__tag_regs1_50 = vlSelf->__Vdly__tag_regs1_50;
    vlSelf->__PVT__tag_regs1_49 = vlSelf->__Vdly__tag_regs1_49;
    vlSelf->__PVT__tag_regs1_48 = vlSelf->__Vdly__tag_regs1_48;
    vlSelf->__PVT__tag_regs1_47 = vlSelf->__Vdly__tag_regs1_47;
    vlSelf->__PVT__tag_regs1_46 = vlSelf->__Vdly__tag_regs1_46;
    vlSelf->__PVT__tag_regs1_45 = vlSelf->__Vdly__tag_regs1_45;
    vlSelf->__PVT__tag_regs1_44 = vlSelf->__Vdly__tag_regs1_44;
    vlSelf->__PVT__tag_regs1_43 = vlSelf->__Vdly__tag_regs1_43;
    vlSelf->__PVT__tag_regs1_42 = vlSelf->__Vdly__tag_regs1_42;
    vlSelf->__PVT__tag_regs1_41 = vlSelf->__Vdly__tag_regs1_41;
    vlSelf->__PVT__tag_regs1_38 = vlSelf->__Vdly__tag_regs1_38;
    vlSelf->__PVT__tag_regs1_37 = vlSelf->__Vdly__tag_regs1_37;
    vlSelf->__PVT__tag_regs1_36 = vlSelf->__Vdly__tag_regs1_36;
    vlSelf->__PVT__tag_regs1_35 = vlSelf->__Vdly__tag_regs1_35;
    vlSelf->__PVT__tag_regs1_34 = vlSelf->__Vdly__tag_regs1_34;
    vlSelf->__PVT__tag_regs0_34 = vlSelf->__Vdly__tag_regs0_34;
    vlSelf->__PVT__tag_regs1_33 = vlSelf->__Vdly__tag_regs1_33;
    vlSelf->__PVT__tag_regs0_33 = vlSelf->__Vdly__tag_regs0_33;
    vlSelf->__PVT__tag_regs1_32 = vlSelf->__Vdly__tag_regs1_32;
    vlSelf->__PVT__tag_regs0_32 = vlSelf->__Vdly__tag_regs0_32;
    vlSelf->__PVT__tag_regs1_31 = vlSelf->__Vdly__tag_regs1_31;
    vlSelf->__PVT__tag_regs0_31 = vlSelf->__Vdly__tag_regs0_31;
    vlSelf->__PVT__tag_regs1_30 = vlSelf->__Vdly__tag_regs1_30;
    vlSelf->__PVT__tag_regs1_29 = vlSelf->__Vdly__tag_regs1_29;
    vlSelf->__PVT__tag_regs1_28 = vlSelf->__Vdly__tag_regs1_28;
    vlSelf->__PVT__tag_regs1_27 = vlSelf->__Vdly__tag_regs1_27;
    vlSelf->__PVT__tag_regs1_26 = vlSelf->__Vdly__tag_regs1_26;
    vlSelf->__PVT__tag_regs1_25 = vlSelf->__Vdly__tag_regs1_25;
    vlSelf->__PVT__tag_regs1_24 = vlSelf->__Vdly__tag_regs1_24;
    vlSelf->__PVT__tag_regs1_23 = vlSelf->__Vdly__tag_regs1_23;
    vlSelf->__PVT__tag_regs1_22 = vlSelf->__Vdly__tag_regs1_22;
    vlSelf->__PVT__tag_regs1_21 = vlSelf->__Vdly__tag_regs1_21;
    vlSelf->__PVT__tag_regs1_20 = vlSelf->__Vdly__tag_regs1_20;
    vlSelf->__PVT__tag_regs1_19 = vlSelf->__Vdly__tag_regs1_19;
    vlSelf->__PVT__tag_regs1_18 = vlSelf->__Vdly__tag_regs1_18;
    vlSelf->__PVT__tag_regs1_17 = vlSelf->__Vdly__tag_regs1_17;
    vlSelf->__PVT__tag_regs1_16 = vlSelf->__Vdly__tag_regs1_16;
    vlSelf->__PVT__tag_regs1_15 = vlSelf->__Vdly__tag_regs1_15;
    vlSelf->__PVT__tag_regs1_14 = vlSelf->__Vdly__tag_regs1_14;
    vlSelf->__PVT__tag_regs0_14 = vlSelf->__Vdly__tag_regs0_14;
    vlSelf->__PVT__tag_regs1_13 = vlSelf->__Vdly__tag_regs1_13;
    vlSelf->__PVT__tag_regs0_13 = vlSelf->__Vdly__tag_regs0_13;
    vlSelf->__PVT__tag_regs1_12 = vlSelf->__Vdly__tag_regs1_12;
    vlSelf->__PVT__tag_regs0_12 = vlSelf->__Vdly__tag_regs0_12;
    vlSelf->__PVT__tag_regs1_11 = vlSelf->__Vdly__tag_regs1_11;
    vlSelf->__PVT__tag_regs0_11 = vlSelf->__Vdly__tag_regs0_11;
    vlSelf->__PVT__tag_regs1_10 = vlSelf->__Vdly__tag_regs1_10;
    vlSelf->__PVT__tag_regs0_10 = vlSelf->__Vdly__tag_regs0_10;
    vlSelf->__PVT__tag_regs1_9 = vlSelf->__Vdly__tag_regs1_9;
    vlSelf->__PVT__tag_regs0_9 = vlSelf->__Vdly__tag_regs0_9;
    vlSelf->__PVT__tag_regs1_8 = vlSelf->__Vdly__tag_regs1_8;
    vlSelf->__PVT__tag_regs0_8 = vlSelf->__Vdly__tag_regs0_8;
    vlSelf->__PVT__tag_regs1_7 = vlSelf->__Vdly__tag_regs1_7;
    vlSelf->__PVT__tag_regs0_7 = vlSelf->__Vdly__tag_regs0_7;
    vlSelf->__PVT__tag_regs1_5 = vlSelf->__Vdly__tag_regs1_5;
    vlSelf->__PVT__tag_regs0_5 = vlSelf->__Vdly__tag_regs0_5;
    vlSelf->__PVT__tag_regs1_4 = vlSelf->__Vdly__tag_regs1_4;
    vlSelf->__PVT__tag_regs0_4 = vlSelf->__Vdly__tag_regs0_4;
    vlSelf->__PVT__tag_regs1_3 = vlSelf->__Vdly__tag_regs1_3;
    vlSelf->__PVT__tag_regs1_2 = vlSelf->__Vdly__tag_regs1_2;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__6(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__6\n"); );
    // Body
    vlSelf->__Vdly__tag_regs0_50 = vlSelf->__PVT__tag_regs0_50;
    vlSelf->__Vdly__tag_regs0_49 = vlSelf->__PVT__tag_regs0_49;
    vlSelf->__Vdly__tag_regs0_48 = vlSelf->__PVT__tag_regs0_48;
    vlSelf->__Vdly__tag_regs0_47 = vlSelf->__PVT__tag_regs0_47;
    vlSelf->__Vdly__tag_regs0_46 = vlSelf->__PVT__tag_regs0_46;
    vlSelf->__Vdly__tag_regs0_45 = vlSelf->__PVT__tag_regs0_45;
    vlSelf->__Vdly__tag_regs0_44 = vlSelf->__PVT__tag_regs0_44;
    vlSelf->__Vdly__tag_regs0_43 = vlSelf->__PVT__tag_regs0_43;
    vlSelf->__Vdly__tag_regs0_42 = vlSelf->__PVT__tag_regs0_42;
    vlSelf->__Vdly__tag_regs0_41 = vlSelf->__PVT__tag_regs0_41;
    vlSelf->__Vdly__tag_regs0_40 = vlSelf->__PVT__tag_regs0_40;
    vlSelf->__Vdly__tag_regs0_39 = vlSelf->__PVT__tag_regs0_39;
    vlSelf->__Vdly__tag_regs0_38 = vlSelf->__PVT__tag_regs0_38;
    vlSelf->__Vdly__tag_regs0_37 = vlSelf->__PVT__tag_regs0_37;
    vlSelf->__Vdly__tag_regs0_36 = vlSelf->__PVT__tag_regs0_36;
    vlSelf->__Vdly__tag_regs0_35 = vlSelf->__PVT__tag_regs0_35;
    vlSelf->__Vdly__tag_regs0_30 = vlSelf->__PVT__tag_regs0_30;
    vlSelf->__Vdly__tag_regs0_29 = vlSelf->__PVT__tag_regs0_29;
    vlSelf->__Vdly__tag_regs0_28 = vlSelf->__PVT__tag_regs0_28;
    vlSelf->__Vdly__tag_regs0_27 = vlSelf->__PVT__tag_regs0_27;
    vlSelf->__Vdly__tag_regs0_26 = vlSelf->__PVT__tag_regs0_26;
    vlSelf->__Vdly__tag_regs0_25 = vlSelf->__PVT__tag_regs0_25;
    vlSelf->__Vdly__tag_regs0_24 = vlSelf->__PVT__tag_regs0_24;
    vlSelf->__Vdly__tag_regs0_23 = vlSelf->__PVT__tag_regs0_23;
    vlSelf->__Vdly__tag_regs0_22 = vlSelf->__PVT__tag_regs0_22;
    vlSelf->__Vdly__tag_regs0_21 = vlSelf->__PVT__tag_regs0_21;
    vlSelf->__Vdly__tag_regs0_20 = vlSelf->__PVT__tag_regs0_20;
    vlSelf->__Vdly__tag_regs0_19 = vlSelf->__PVT__tag_regs0_19;
    vlSelf->__Vdly__tag_regs0_18 = vlSelf->__PVT__tag_regs0_18;
    vlSelf->__Vdly__tag_regs0_17 = vlSelf->__PVT__tag_regs0_17;
    vlSelf->__Vdly__tag_regs0_16 = vlSelf->__PVT__tag_regs0_16;
    vlSelf->__Vdly__tag_regs0_15 = vlSelf->__PVT__tag_regs0_15;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__7(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_50 = 0ULL;
    } else if ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_50 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_49 = 0ULL;
    } else if ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_49 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_48 = 0ULL;
    } else if ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_48 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_47 = 0ULL;
    } else if ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_47 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_46 = 0ULL;
    } else if ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_46 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_45 = 0ULL;
    } else if ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_45 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_44 = 0ULL;
    } else if ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_44 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_43 = 0ULL;
    } else if ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_43 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_42 = 0ULL;
    } else if ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_42 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_41 = 0ULL;
    } else if ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_41 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_40 = 0ULL;
    } else if ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_40 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_39 = 0ULL;
    } else if ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_39 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_38 = 0ULL;
    } else if ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_38 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_37 = 0ULL;
    } else if ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_37 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_36 = 0ULL;
    } else if ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_36 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_35 = 0ULL;
    } else if ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_35 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_30 = 0ULL;
    } else if ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_30 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_29 = 0ULL;
    } else if ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_29 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_28 = 0ULL;
    } else if ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_28 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_27 = 0ULL;
    } else if ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_27 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_26 = 0ULL;
    } else if ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_26 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_25 = 0ULL;
    } else if ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_25 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_24 = 0ULL;
    } else if ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_24 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_23 = 0ULL;
    } else if ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_23 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_22 = 0ULL;
    } else if ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_22 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_21 = 0ULL;
    } else if ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_21 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_20 = 0ULL;
    } else if ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_20 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_19 = 0ULL;
    } else if ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_19 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_18 = 0ULL;
    } else if ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_18 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_17 = 0ULL;
    } else if ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_17 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_16 = 0ULL;
    } else if ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_16 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_15 = 0ULL;
    } else if ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_15 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__8(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__8\n"); );
    // Body
    vlSelf->__PVT__tag_regs0_50 = vlSelf->__Vdly__tag_regs0_50;
    vlSelf->__PVT__tag_regs0_49 = vlSelf->__Vdly__tag_regs0_49;
    vlSelf->__PVT__tag_regs0_48 = vlSelf->__Vdly__tag_regs0_48;
    vlSelf->__PVT__tag_regs0_47 = vlSelf->__Vdly__tag_regs0_47;
    vlSelf->__PVT__tag_regs0_46 = vlSelf->__Vdly__tag_regs0_46;
    vlSelf->__PVT__tag_regs0_45 = vlSelf->__Vdly__tag_regs0_45;
    vlSelf->__PVT__tag_regs0_44 = vlSelf->__Vdly__tag_regs0_44;
    vlSelf->__PVT__tag_regs0_43 = vlSelf->__Vdly__tag_regs0_43;
    vlSelf->__PVT__tag_regs0_42 = vlSelf->__Vdly__tag_regs0_42;
    vlSelf->__PVT__tag_regs0_41 = vlSelf->__Vdly__tag_regs0_41;
    vlSelf->__PVT__tag_regs0_40 = vlSelf->__Vdly__tag_regs0_40;
    vlSelf->__PVT__tag_regs0_39 = vlSelf->__Vdly__tag_regs0_39;
    vlSelf->__PVT__tag_regs0_38 = vlSelf->__Vdly__tag_regs0_38;
    vlSelf->__PVT__tag_regs0_37 = vlSelf->__Vdly__tag_regs0_37;
    vlSelf->__PVT__tag_regs0_36 = vlSelf->__Vdly__tag_regs0_36;
    vlSelf->__PVT__tag_regs0_35 = vlSelf->__Vdly__tag_regs0_35;
    vlSelf->__PVT__tag_regs0_30 = vlSelf->__Vdly__tag_regs0_30;
    vlSelf->__PVT__tag_regs0_29 = vlSelf->__Vdly__tag_regs0_29;
    vlSelf->__PVT__tag_regs0_28 = vlSelf->__Vdly__tag_regs0_28;
    vlSelf->__PVT__tag_regs0_27 = vlSelf->__Vdly__tag_regs0_27;
    vlSelf->__PVT__tag_regs0_26 = vlSelf->__Vdly__tag_regs0_26;
    vlSelf->__PVT__tag_regs0_25 = vlSelf->__Vdly__tag_regs0_25;
    vlSelf->__PVT__tag_regs0_24 = vlSelf->__Vdly__tag_regs0_24;
    vlSelf->__PVT__tag_regs0_23 = vlSelf->__Vdly__tag_regs0_23;
    vlSelf->__PVT__tag_regs0_22 = vlSelf->__Vdly__tag_regs0_22;
    vlSelf->__PVT__tag_regs0_21 = vlSelf->__Vdly__tag_regs0_21;
    vlSelf->__PVT__tag_regs0_20 = vlSelf->__Vdly__tag_regs0_20;
    vlSelf->__PVT__tag_regs0_19 = vlSelf->__Vdly__tag_regs0_19;
    vlSelf->__PVT__tag_regs0_18 = vlSelf->__Vdly__tag_regs0_18;
    vlSelf->__PVT__tag_regs0_17 = vlSelf->__Vdly__tag_regs0_17;
    vlSelf->__PVT__tag_regs0_16 = vlSelf->__Vdly__tag_regs0_16;
    vlSelf->__PVT__tag_regs0_15 = vlSelf->__Vdly__tag_regs0_15;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__9(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__9\n"); );
    // Body
    vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__tag_regs1_62;
    vlSelf->__Vdly__tag_regs0_6 = vlSelf->__PVT__tag_regs0_6;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__10(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__10\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_62 = 0ULL;
    } else if ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__tag_regs1_63;
        } else if ((0x3eU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT___GEN_189;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_6 = 0ULL;
    } else if ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_6 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__11(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__11\n"); );
    // Body
    vlSelf->__PVT__tag_regs0_6 = vlSelf->__Vdly__tag_regs0_6;
    vlSelf->__PVT__tag_regs1_1 = vlSelf->__Vdly__tag_regs1_1;
    vlSelf->__PVT__tag_regs1_0 = vlSelf->__Vdly__tag_regs1_0;
    vlSelf->__PVT__tag_regs0_1 = vlSelf->__Vdly__tag_regs0_1;
    vlSelf->__PVT__tag_regs0_0 = vlSelf->__Vdly__tag_regs0_0;
    vlSelf->__Vdly__tag_regs1_63 = vlSelf->__PVT__tag_regs1_63;
    vlSelf->__Vdly__tag_regs0_63 = vlSelf->__PVT__tag_regs0_63;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__12(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__12\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_63 = 0ULL;
    } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))) {
            vlSelf->__Vdly__tag_regs0_63 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_63 = ((0x3eU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_62
                                             : vlSelf->__PVT___GEN_61);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_63 = 0ULL;
    } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))) {
            vlSelf->__Vdly__tag_regs1_63 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_63 = ((0x3eU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_62
                                             : vlSelf->__PVT___GEN_189);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__13(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag__13\n"); );
    // Body
    vlSelf->__PVT__tag_regs1_63 = vlSelf->__Vdly__tag_regs1_63;
    vlSelf->__PVT__tag_regs0_63 = vlSelf->__Vdly__tag_regs0_63;
    vlSelf->__PVT__tag_regs1_62 = vlSelf->__Vdly__tag_regs1_62;
    vlSelf->__PVT__tag_regs0_62 = vlSelf->__Vdly__tag_regs0_62;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__0(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_1
                              : vlSelf->__PVT__tag_regs0_0);
    vlSelf->__PVT___GEN_129 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_1
                                : vlSelf->__PVT__tag_regs1_0);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__1(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__1\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_2
                              : vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___GEN_130 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_2
                                : vlSelf->__PVT___GEN_129);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__2(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__2\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_3
                              : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT___GEN_131 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_3
                                : vlSelf->__PVT___GEN_130);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__3(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__3\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_4
                              : vlSelf->__PVT___GEN_3);
    vlSelf->__PVT___GEN_132 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_4
                                : vlSelf->__PVT___GEN_131);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__4(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__4\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_5
                              : vlSelf->__PVT___GEN_4);
    vlSelf->__PVT___GEN_133 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_5
                                : vlSelf->__PVT___GEN_132);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__5(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__5\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_6
                              : vlSelf->__PVT___GEN_5);
    vlSelf->__PVT___GEN_134 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_6
                                : vlSelf->__PVT___GEN_133);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__6(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__6\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_7
                              : vlSelf->__PVT___GEN_6);
    vlSelf->__PVT___GEN_135 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_7
                                : vlSelf->__PVT___GEN_134);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__7(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__7\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_8
                              : vlSelf->__PVT___GEN_7);
    vlSelf->__PVT___GEN_136 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_8
                                : vlSelf->__PVT___GEN_135);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__8(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__8\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_9
                              : vlSelf->__PVT___GEN_8);
    vlSelf->__PVT___GEN_137 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_9
                                : vlSelf->__PVT___GEN_136);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__9(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__9\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_10
                               : vlSelf->__PVT___GEN_9);
    vlSelf->__PVT___GEN_138 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_10
                                : vlSelf->__PVT___GEN_137);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__10(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__10\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_11
                               : vlSelf->__PVT___GEN_10);
    vlSelf->__PVT___GEN_139 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_11
                                : vlSelf->__PVT___GEN_138);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__11(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__11\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_12
                               : vlSelf->__PVT___GEN_11);
    vlSelf->__PVT___GEN_140 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_12
                                : vlSelf->__PVT___GEN_139);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__12(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__12\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_13
                               : vlSelf->__PVT___GEN_12);
    vlSelf->__PVT___GEN_141 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_13
                                : vlSelf->__PVT___GEN_140);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__13(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__13\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_14
                               : vlSelf->__PVT___GEN_13);
    vlSelf->__PVT___GEN_142 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_14
                                : vlSelf->__PVT___GEN_141);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__14(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__14\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_15
                               : vlSelf->__PVT___GEN_14);
    vlSelf->__PVT___GEN_143 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_15
                                : vlSelf->__PVT___GEN_142);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__15(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__15\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_16
                               : vlSelf->__PVT___GEN_15);
    vlSelf->__PVT___GEN_144 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_16
                                : vlSelf->__PVT___GEN_143);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__16(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__16\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_17
                               : vlSelf->__PVT___GEN_16);
    vlSelf->__PVT___GEN_145 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_17
                                : vlSelf->__PVT___GEN_144);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__17(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__17\n"); );
    // Body
    vlSelf->__PVT___GEN_18 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_18
                               : vlSelf->__PVT___GEN_17);
    vlSelf->__PVT___GEN_146 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_18
                                : vlSelf->__PVT___GEN_145);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__18(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__18\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_19
                               : vlSelf->__PVT___GEN_18);
    vlSelf->__PVT___GEN_147 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_19
                                : vlSelf->__PVT___GEN_146);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__19(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__19\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_20
                               : vlSelf->__PVT___GEN_19);
    vlSelf->__PVT___GEN_148 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_20
                                : vlSelf->__PVT___GEN_147);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__20(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__20\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_21
                               : vlSelf->__PVT___GEN_20);
    vlSelf->__PVT___GEN_149 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_21
                                : vlSelf->__PVT___GEN_148);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__21(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__21\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_22
                               : vlSelf->__PVT___GEN_21);
    vlSelf->__PVT___GEN_150 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_22
                                : vlSelf->__PVT___GEN_149);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__22(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__22\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_23
                               : vlSelf->__PVT___GEN_22);
    vlSelf->__PVT___GEN_151 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_23
                                : vlSelf->__PVT___GEN_150);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__23(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__23\n"); );
    // Body
    vlSelf->__PVT___GEN_385 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_1
                                : vlSelf->__PVT__tag_regs1_0);
    vlSelf->__PVT___GEN_449 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_1
                                : vlSelf->__PVT__tag_regs0_0);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__24(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__24\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_24
                               : vlSelf->__PVT___GEN_23);
    vlSelf->__PVT___GEN_152 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_24
                                : vlSelf->__PVT___GEN_151);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__25(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__25\n"); );
    // Body
    vlSelf->__PVT___GEN_386 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_2
                                : vlSelf->__PVT___GEN_385);
    vlSelf->__PVT___GEN_450 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_2
                                : vlSelf->__PVT___GEN_449);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__26(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__26\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_25
                               : vlSelf->__PVT___GEN_24);
    vlSelf->__PVT___GEN_153 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_25
                                : vlSelf->__PVT___GEN_152);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__27(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__27\n"); );
    // Body
    vlSelf->__PVT___GEN_387 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_3
                                : vlSelf->__PVT___GEN_386);
    vlSelf->__PVT___GEN_451 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_3
                                : vlSelf->__PVT___GEN_450);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__28(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__28\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_26
                               : vlSelf->__PVT___GEN_25);
    vlSelf->__PVT___GEN_154 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_26
                                : vlSelf->__PVT___GEN_153);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__29(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__29\n"); );
    // Body
    vlSelf->__PVT___GEN_388 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_4
                                : vlSelf->__PVT___GEN_387);
    vlSelf->__PVT___GEN_452 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_4
                                : vlSelf->__PVT___GEN_451);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__30(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__30\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_27
                               : vlSelf->__PVT___GEN_26);
    vlSelf->__PVT___GEN_155 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_27
                                : vlSelf->__PVT___GEN_154);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__31(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__31\n"); );
    // Body
    vlSelf->__PVT___GEN_389 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_5
                                : vlSelf->__PVT___GEN_388);
    vlSelf->__PVT___GEN_453 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_5
                                : vlSelf->__PVT___GEN_452);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__32(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__32\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_28
                               : vlSelf->__PVT___GEN_27);
    vlSelf->__PVT___GEN_156 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_28
                                : vlSelf->__PVT___GEN_155);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__33(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__33\n"); );
    // Body
    vlSelf->__PVT___GEN_390 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_6
                                : vlSelf->__PVT___GEN_389);
    vlSelf->__PVT___GEN_454 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_6
                                : vlSelf->__PVT___GEN_453);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__34(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__34\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_29
                               : vlSelf->__PVT___GEN_28);
    vlSelf->__PVT___GEN_157 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_29
                                : vlSelf->__PVT___GEN_156);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__35(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__35\n"); );
    // Body
    vlSelf->__PVT___GEN_391 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_7
                                : vlSelf->__PVT___GEN_390);
    vlSelf->__PVT___GEN_455 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_7
                                : vlSelf->__PVT___GEN_454);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__36(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__36\n"); );
    // Body
    vlSelf->__PVT___GEN_30 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_30
                               : vlSelf->__PVT___GEN_29);
    vlSelf->__PVT___GEN_158 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_30
                                : vlSelf->__PVT___GEN_157);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__37(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__37\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_8
                                : vlSelf->__PVT___GEN_391);
    vlSelf->__PVT___GEN_456 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_8
                                : vlSelf->__PVT___GEN_455);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__38(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__38\n"); );
    // Body
    vlSelf->__PVT___GEN_31 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_31
                               : vlSelf->__PVT___GEN_30);
    vlSelf->__PVT___GEN_159 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_31
                                : vlSelf->__PVT___GEN_158);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__39(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__39\n"); );
    // Body
    vlSelf->__PVT___GEN_393 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_9
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_457 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_9
                                : vlSelf->__PVT___GEN_456);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__40(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__40\n"); );
    // Body
    vlSelf->__PVT___GEN_32 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_32
                               : vlSelf->__PVT___GEN_31);
    vlSelf->__PVT___GEN_160 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_32
                                : vlSelf->__PVT___GEN_159);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__41(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__41\n"); );
    // Body
    vlSelf->__PVT___GEN_394 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_10
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_458 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_10
                                : vlSelf->__PVT___GEN_457);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__42(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__42\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_33
                               : vlSelf->__PVT___GEN_32);
    vlSelf->__PVT___GEN_161 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_33
                                : vlSelf->__PVT___GEN_160);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__43(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__43\n"); );
    // Body
    vlSelf->__PVT___GEN_395 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_11
                                : vlSelf->__PVT___GEN_394);
    vlSelf->__PVT___GEN_459 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_11
                                : vlSelf->__PVT___GEN_458);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__44(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__44\n"); );
    // Body
    vlSelf->__PVT___GEN_34 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_34
                               : vlSelf->__PVT___GEN_33);
    vlSelf->__PVT___GEN_162 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_34
                                : vlSelf->__PVT___GEN_161);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__45(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__45\n"); );
    // Body
    vlSelf->__PVT___GEN_396 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_12
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_460 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_12
                                : vlSelf->__PVT___GEN_459);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__46(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__46\n"); );
    // Body
    vlSelf->__PVT___GEN_35 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_35
                               : vlSelf->__PVT___GEN_34);
    vlSelf->__PVT___GEN_163 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_35
                                : vlSelf->__PVT___GEN_162);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__47(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__47\n"); );
    // Body
    vlSelf->__PVT___GEN_397 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_13
                                : vlSelf->__PVT___GEN_396);
    vlSelf->__PVT___GEN_461 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_13
                                : vlSelf->__PVT___GEN_460);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__48(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__48\n"); );
    // Body
    vlSelf->__PVT___GEN_36 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_36
                               : vlSelf->__PVT___GEN_35);
    vlSelf->__PVT___GEN_164 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_36
                                : vlSelf->__PVT___GEN_163);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__49(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__49\n"); );
    // Body
    vlSelf->__PVT___GEN_398 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_14
                                : vlSelf->__PVT___GEN_397);
    vlSelf->__PVT___GEN_462 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_14
                                : vlSelf->__PVT___GEN_461);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__50(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__50\n"); );
    // Body
    vlSelf->__PVT___GEN_37 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_37
                               : vlSelf->__PVT___GEN_36);
    vlSelf->__PVT___GEN_165 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_37
                                : vlSelf->__PVT___GEN_164);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__51(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__51\n"); );
    // Body
    vlSelf->__PVT___GEN_399 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_15
                                : vlSelf->__PVT___GEN_398);
    vlSelf->__PVT___GEN_463 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_15
                                : vlSelf->__PVT___GEN_462);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__52(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__52\n"); );
    // Body
    vlSelf->__PVT___GEN_38 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_38
                               : vlSelf->__PVT___GEN_37);
    vlSelf->__PVT___GEN_166 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_38
                                : vlSelf->__PVT___GEN_165);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__53(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__53\n"); );
    // Body
    vlSelf->__PVT___GEN_400 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_16
                                : vlSelf->__PVT___GEN_399);
    vlSelf->__PVT___GEN_464 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_16
                                : vlSelf->__PVT___GEN_463);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__54(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__54\n"); );
    // Body
    vlSelf->__PVT___GEN_39 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_39
                               : vlSelf->__PVT___GEN_38);
    vlSelf->__PVT___GEN_167 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_39
                                : vlSelf->__PVT___GEN_166);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__55(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__55\n"); );
    // Body
    vlSelf->__PVT___GEN_401 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_17
                                : vlSelf->__PVT___GEN_400);
    vlSelf->__PVT___GEN_465 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_17
                                : vlSelf->__PVT___GEN_464);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__56(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__56\n"); );
    // Body
    vlSelf->__PVT___GEN_40 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_40
                               : vlSelf->__PVT___GEN_39);
    vlSelf->__PVT___GEN_168 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_40
                                : vlSelf->__PVT___GEN_167);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__57(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__57\n"); );
    // Body
    vlSelf->__PVT___GEN_402 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_18
                                : vlSelf->__PVT___GEN_401);
    vlSelf->__PVT___GEN_466 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_18
                                : vlSelf->__PVT___GEN_465);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__58(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__58\n"); );
    // Body
    vlSelf->__PVT___GEN_41 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_41
                               : vlSelf->__PVT___GEN_40);
    vlSelf->__PVT___GEN_169 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_41
                                : vlSelf->__PVT___GEN_168);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__59(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__59\n"); );
    // Body
    vlSelf->__PVT___GEN_403 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_19
                                : vlSelf->__PVT___GEN_402);
    vlSelf->__PVT___GEN_467 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_19
                                : vlSelf->__PVT___GEN_466);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__60(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__60\n"); );
    // Body
    vlSelf->__PVT___GEN_42 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_42
                               : vlSelf->__PVT___GEN_41);
    vlSelf->__PVT___GEN_170 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_42
                                : vlSelf->__PVT___GEN_169);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__61(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__61\n"); );
    // Body
    vlSelf->__PVT___GEN_404 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_20
                                : vlSelf->__PVT___GEN_403);
    vlSelf->__PVT___GEN_468 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_20
                                : vlSelf->__PVT___GEN_467);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__62(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__62\n"); );
    // Body
    vlSelf->__PVT___GEN_43 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_43
                               : vlSelf->__PVT___GEN_42);
    vlSelf->__PVT___GEN_171 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_43
                                : vlSelf->__PVT___GEN_170);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__63(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__63\n"); );
    // Body
    vlSelf->__PVT___GEN_405 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_21
                                : vlSelf->__PVT___GEN_404);
    vlSelf->__PVT___GEN_469 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_21
                                : vlSelf->__PVT___GEN_468);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__64(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__64\n"); );
    // Body
    vlSelf->__PVT___GEN_44 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_44
                               : vlSelf->__PVT___GEN_43);
    vlSelf->__PVT___GEN_172 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_44
                                : vlSelf->__PVT___GEN_171);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__65(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__65\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_22
                                : vlSelf->__PVT___GEN_405);
    vlSelf->__PVT___GEN_470 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_22
                                : vlSelf->__PVT___GEN_469);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__66(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__66\n"); );
    // Body
    vlSelf->__PVT___GEN_45 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_45
                               : vlSelf->__PVT___GEN_44);
    vlSelf->__PVT___GEN_173 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_45
                                : vlSelf->__PVT___GEN_172);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__67(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__67\n"); );
    // Body
    vlSelf->__PVT___GEN_407 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_23
                                : vlSelf->__PVT___GEN_406);
    vlSelf->__PVT___GEN_471 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_23
                                : vlSelf->__PVT___GEN_470);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__68(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__68\n"); );
    // Body
    vlSelf->__PVT___GEN_46 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_46
                               : vlSelf->__PVT___GEN_45);
    vlSelf->__PVT___GEN_174 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_46
                                : vlSelf->__PVT___GEN_173);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__69(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__69\n"); );
    // Body
    vlSelf->__PVT___GEN_408 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_24
                                : vlSelf->__PVT___GEN_407);
    vlSelf->__PVT___GEN_472 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_24
                                : vlSelf->__PVT___GEN_471);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__70(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__70\n"); );
    // Body
    vlSelf->__PVT___GEN_47 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_47
                               : vlSelf->__PVT___GEN_46);
    vlSelf->__PVT___GEN_175 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_47
                                : vlSelf->__PVT___GEN_174);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__71(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__71\n"); );
    // Body
    vlSelf->__PVT___GEN_409 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_25
                                : vlSelf->__PVT___GEN_408);
    vlSelf->__PVT___GEN_473 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_25
                                : vlSelf->__PVT___GEN_472);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__72(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__72\n"); );
    // Body
    vlSelf->__PVT___GEN_48 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_48
                               : vlSelf->__PVT___GEN_47);
    vlSelf->__PVT___GEN_176 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_48
                                : vlSelf->__PVT___GEN_175);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__73(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__73\n"); );
    // Body
    vlSelf->__PVT___GEN_410 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_26
                                : vlSelf->__PVT___GEN_409);
    vlSelf->__PVT___GEN_474 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_26
                                : vlSelf->__PVT___GEN_473);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__74(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__74\n"); );
    // Body
    vlSelf->__PVT___GEN_49 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_49
                               : vlSelf->__PVT___GEN_48);
    vlSelf->__PVT___GEN_177 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_49
                                : vlSelf->__PVT___GEN_176);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__75(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__75\n"); );
    // Body
    vlSelf->__PVT___GEN_411 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_27
                                : vlSelf->__PVT___GEN_410);
    vlSelf->__PVT___GEN_475 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_27
                                : vlSelf->__PVT___GEN_474);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__76(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__76\n"); );
    // Body
    vlSelf->__PVT___GEN_50 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_50
                               : vlSelf->__PVT___GEN_49);
    vlSelf->__PVT___GEN_178 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_50
                                : vlSelf->__PVT___GEN_177);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__77(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__77\n"); );
    // Body
    vlSelf->__PVT___GEN_412 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_28
                                : vlSelf->__PVT___GEN_411);
    vlSelf->__PVT___GEN_476 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_28
                                : vlSelf->__PVT___GEN_475);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__78(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__78\n"); );
    // Body
    vlSelf->__PVT___GEN_51 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_51
                               : vlSelf->__PVT___GEN_50);
    vlSelf->__PVT___GEN_179 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_51
                                : vlSelf->__PVT___GEN_178);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__79(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__79\n"); );
    // Body
    vlSelf->__PVT___GEN_413 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_29
                                : vlSelf->__PVT___GEN_412);
    vlSelf->__PVT___GEN_477 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_29
                                : vlSelf->__PVT___GEN_476);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__80(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__80\n"); );
    // Body
    vlSelf->__PVT___GEN_52 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_52
                               : vlSelf->__PVT___GEN_51);
    vlSelf->__PVT___GEN_180 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_52
                                : vlSelf->__PVT___GEN_179);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__81(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__81\n"); );
    // Body
    vlSelf->__PVT___GEN_414 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_30
                                : vlSelf->__PVT___GEN_413);
    vlSelf->__PVT___GEN_478 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_30
                                : vlSelf->__PVT___GEN_477);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__82(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__82\n"); );
    // Body
    vlSelf->__PVT___GEN_53 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_53
                               : vlSelf->__PVT___GEN_52);
    vlSelf->__PVT___GEN_181 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_53
                                : vlSelf->__PVT___GEN_180);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__83(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__83\n"); );
    // Body
    vlSelf->__PVT___GEN_415 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_31
                                : vlSelf->__PVT___GEN_414);
    vlSelf->__PVT___GEN_479 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_31
                                : vlSelf->__PVT___GEN_478);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__84(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__84\n"); );
    // Body
    vlSelf->__PVT___GEN_54 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_54
                               : vlSelf->__PVT___GEN_53);
    vlSelf->__PVT___GEN_182 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_54
                                : vlSelf->__PVT___GEN_181);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__85(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__85\n"); );
    // Body
    vlSelf->__PVT___GEN_416 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_32
                                : vlSelf->__PVT___GEN_415);
    vlSelf->__PVT___GEN_480 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_32
                                : vlSelf->__PVT___GEN_479);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__86(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__86\n"); );
    // Body
    vlSelf->__PVT___GEN_55 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_55
                               : vlSelf->__PVT___GEN_54);
    vlSelf->__PVT___GEN_183 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_55
                                : vlSelf->__PVT___GEN_182);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__87(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__87\n"); );
    // Body
    vlSelf->__PVT___GEN_417 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_33
                                : vlSelf->__PVT___GEN_416);
    vlSelf->__PVT___GEN_481 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_33
                                : vlSelf->__PVT___GEN_480);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__88(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__88\n"); );
    // Body
    vlSelf->__PVT___GEN_56 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_56
                               : vlSelf->__PVT___GEN_55);
    vlSelf->__PVT___GEN_184 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_56
                                : vlSelf->__PVT___GEN_183);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__89(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__89\n"); );
    // Body
    vlSelf->__PVT___GEN_418 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_34
                                : vlSelf->__PVT___GEN_417);
    vlSelf->__PVT___GEN_482 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_34
                                : vlSelf->__PVT___GEN_481);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__90(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__90\n"); );
    // Body
    vlSelf->__PVT___GEN_57 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_57
                               : vlSelf->__PVT___GEN_56);
    vlSelf->__PVT___GEN_185 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_57
                                : vlSelf->__PVT___GEN_184);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__91(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__91\n"); );
    // Body
    vlSelf->__PVT___GEN_419 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_35
                                : vlSelf->__PVT___GEN_418);
    vlSelf->__PVT___GEN_483 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_35
                                : vlSelf->__PVT___GEN_482);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__92(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__92\n"); );
    // Body
    vlSelf->__PVT___GEN_58 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_58
                               : vlSelf->__PVT___GEN_57);
    vlSelf->__PVT___GEN_186 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_58
                                : vlSelf->__PVT___GEN_185);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__93(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__93\n"); );
    // Body
    vlSelf->__PVT___GEN_420 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_36
                                : vlSelf->__PVT___GEN_419);
    vlSelf->__PVT___GEN_484 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_36
                                : vlSelf->__PVT___GEN_483);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__94(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__94\n"); );
    // Body
    vlSelf->__PVT___GEN_59 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_59
                               : vlSelf->__PVT___GEN_58);
    vlSelf->__PVT___GEN_187 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_59
                                : vlSelf->__PVT___GEN_186);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__95(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__95\n"); );
    // Body
    vlSelf->__PVT___GEN_421 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_37
                                : vlSelf->__PVT___GEN_420);
    vlSelf->__PVT___GEN_485 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_37
                                : vlSelf->__PVT___GEN_484);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__96(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__96\n"); );
    // Body
    vlSelf->__PVT___GEN_60 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_60
                               : vlSelf->__PVT___GEN_59);
    vlSelf->__PVT___GEN_188 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_60
                                : vlSelf->__PVT___GEN_187);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__97(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__97\n"); );
    // Body
    vlSelf->__PVT___GEN_422 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_38
                                : vlSelf->__PVT___GEN_421);
    vlSelf->__PVT___GEN_486 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_38
                                : vlSelf->__PVT___GEN_485);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__98(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__98\n"); );
    // Body
    vlSelf->__PVT___GEN_61 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_61
                               : vlSelf->__PVT___GEN_60);
    vlSelf->__PVT___GEN_189 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_61
                                : vlSelf->__PVT___GEN_188);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__99(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__99\n"); );
    // Body
    vlSelf->__PVT___GEN_423 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_39
                                : vlSelf->__PVT___GEN_422);
    vlSelf->__PVT___GEN_487 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_39
                                : vlSelf->__PVT___GEN_486);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__100(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__100\n"); );
    // Body
    vlSelf->__PVT___GEN_62 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_62
                               : vlSelf->__PVT___GEN_61);
    vlSelf->__PVT___GEN_190 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_62
                                : vlSelf->__PVT___GEN_189);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__101(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__101\n"); );
    // Body
    vlSelf->__PVT___GEN_424 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_40
                                : vlSelf->__PVT___GEN_423);
    vlSelf->__PVT___GEN_488 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_40
                                : vlSelf->__PVT___GEN_487);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__102(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__102\n"); );
    // Body
    vlSelf->__PVT___GEN_63 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_63
                               : vlSelf->__PVT___GEN_62);
    vlSelf->__PVT___GEN_191 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_63
                                : vlSelf->__PVT___GEN_190);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__103(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__103\n"); );
    // Body
    vlSelf->__PVT___GEN_425 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_41
                                : vlSelf->__PVT___GEN_424);
    vlSelf->__PVT___GEN_489 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_41
                                : vlSelf->__PVT___GEN_488);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__104(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__104\n"); );
    // Body
    vlSelf->__PVT__io_tag = (0x7ffffffffffffULL & (
                                                   (1U 
                                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                                    ? 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_191, 0U, 0x33U)
                                                    : 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_63, 0U, 0x33U)));
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__105(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__105\n"); );
    // Body
    vlSelf->__PVT___GEN_426 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_42
                                : vlSelf->__PVT___GEN_425);
    vlSelf->__PVT___GEN_490 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_42
                                : vlSelf->__PVT___GEN_489);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__106(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__106\n"); );
    // Body
    vlSelf->__PVT___GEN_427 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_43
                                : vlSelf->__PVT___GEN_426);
    vlSelf->__PVT___GEN_491 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_43
                                : vlSelf->__PVT___GEN_490);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__107(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__107\n"); );
    // Body
    vlSelf->__PVT___GEN_428 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_44
                                : vlSelf->__PVT___GEN_427);
    vlSelf->__PVT___GEN_492 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_44
                                : vlSelf->__PVT___GEN_491);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__108(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__108\n"); );
    // Body
    vlSelf->__PVT___GEN_429 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_45
                                : vlSelf->__PVT___GEN_428);
    vlSelf->__PVT___GEN_493 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_45
                                : vlSelf->__PVT___GEN_492);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__109(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__109\n"); );
    // Body
    vlSelf->__PVT___GEN_430 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_46
                                : vlSelf->__PVT___GEN_429);
    vlSelf->__PVT___GEN_494 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_46
                                : vlSelf->__PVT___GEN_493);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__110(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__110\n"); );
    // Body
    vlSelf->__PVT___GEN_431 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_47
                                : vlSelf->__PVT___GEN_430);
    vlSelf->__PVT___GEN_495 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_47
                                : vlSelf->__PVT___GEN_494);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__111(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__111\n"); );
    // Body
    vlSelf->__PVT___GEN_432 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_48
                                : vlSelf->__PVT___GEN_431);
    vlSelf->__PVT___GEN_496 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_48
                                : vlSelf->__PVT___GEN_495);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__112(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__112\n"); );
    // Body
    vlSelf->__PVT___GEN_433 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_49
                                : vlSelf->__PVT___GEN_432);
    vlSelf->__PVT___GEN_497 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_49
                                : vlSelf->__PVT___GEN_496);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__113(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__113\n"); );
    // Body
    vlSelf->__PVT___GEN_434 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_50
                                : vlSelf->__PVT___GEN_433);
    vlSelf->__PVT___GEN_498 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_50
                                : vlSelf->__PVT___GEN_497);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__114(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__114\n"); );
    // Body
    vlSelf->__PVT___GEN_435 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_51
                                : vlSelf->__PVT___GEN_434);
    vlSelf->__PVT___GEN_499 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_51
                                : vlSelf->__PVT___GEN_498);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__115(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__115\n"); );
    // Body
    vlSelf->__PVT___GEN_436 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_52
                                : vlSelf->__PVT___GEN_435);
    vlSelf->__PVT___GEN_500 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_52
                                : vlSelf->__PVT___GEN_499);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__116(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__116\n"); );
    // Body
    vlSelf->__PVT___GEN_437 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_53
                                : vlSelf->__PVT___GEN_436);
    vlSelf->__PVT___GEN_501 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_53
                                : vlSelf->__PVT___GEN_500);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__117(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__117\n"); );
    // Body
    vlSelf->__PVT___GEN_438 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_54
                                : vlSelf->__PVT___GEN_437);
    vlSelf->__PVT___GEN_502 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_54
                                : vlSelf->__PVT___GEN_501);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__118(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__118\n"); );
    // Body
    vlSelf->__PVT___GEN_439 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_55
                                : vlSelf->__PVT___GEN_438);
    vlSelf->__PVT___GEN_503 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_55
                                : vlSelf->__PVT___GEN_502);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__119(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__119\n"); );
    // Body
    vlSelf->__PVT___GEN_440 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_56
                                : vlSelf->__PVT___GEN_439);
    vlSelf->__PVT___GEN_504 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_56
                                : vlSelf->__PVT___GEN_503);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__120(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__120\n"); );
    // Body
    vlSelf->__PVT___GEN_441 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_57
                                : vlSelf->__PVT___GEN_440);
    vlSelf->__PVT___GEN_505 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_57
                                : vlSelf->__PVT___GEN_504);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__121(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__121\n"); );
    // Body
    vlSelf->__PVT___GEN_442 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_58
                                : vlSelf->__PVT___GEN_441);
    vlSelf->__PVT___GEN_506 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_58
                                : vlSelf->__PVT___GEN_505);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__122(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__122\n"); );
    // Body
    vlSelf->__PVT___GEN_443 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_59
                                : vlSelf->__PVT___GEN_442);
    vlSelf->__PVT___GEN_507 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_59
                                : vlSelf->__PVT___GEN_506);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__123(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__123\n"); );
    // Body
    vlSelf->__PVT___GEN_444 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_60
                                : vlSelf->__PVT___GEN_443);
    vlSelf->__PVT___GEN_508 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_60
                                : vlSelf->__PVT___GEN_507);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__124(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__124\n"); );
    // Body
    vlSelf->__PVT___GEN_445 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_61
                                : vlSelf->__PVT___GEN_444);
    vlSelf->__PVT___GEN_509 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_61
                                : vlSelf->__PVT___GEN_508);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__125(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__125\n"); );
    // Body
    vlSelf->__PVT___GEN_446 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_62
                                : vlSelf->__PVT___GEN_445);
    vlSelf->__PVT___GEN_510 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_62
                                : vlSelf->__PVT___GEN_509);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__126(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__126\n"); );
    // Body
    vlSelf->__PVT___GEN_447 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_63
                                : vlSelf->__PVT___GEN_446);
    vlSelf->__PVT___GEN_511 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_63
                                : vlSelf->__PVT___GEN_510);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__127(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag__127\n"); );
    // Body
    vlSelf->__PVT__io_hit = ((VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U) 
                              & ((0x7ffffffffffffULL 
                                  & VL_SEL_QQII(52, vlSelf->__PVT___GEN_447, 0U, 0x33U)) 
                                 == (0x7ffffffffffffULL 
                                     & VL_SEL_QQII(64, vlSelf->__PVT__io_raddr, 0xdU, 0x33U)))) 
                             | ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U)) 
                                & ((0x7ffffffffffffULL 
                                    & VL_SEL_QQII(52, vlSelf->__PVT___GEN_511, 0U, 0x33U)) 
                                   == (0x7ffffffffffffULL 
                                       & VL_SEL_QQII(64, vlSelf->__PVT__io_raddr, 0xdU, 0x33U)))));
    vlSelf->__PVT__io_valid = (1U & ((1U & VL_BITSEL_IQII(64, vlSelf->__PVT__io_raddr, 6U))
                                      ? VL_BITSEL_IQII(52, vlSelf->__PVT___GEN_447, 0x33U)
                                      : VL_BITSEL_IQII(52, vlSelf->__PVT___GEN_511, 0x33U)));
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__0(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__0\n"); );
    // Body
    vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__tag_regs0_62;
    vlSelf->__Vdly__tag_regs1_61 = vlSelf->__PVT__tag_regs1_61;
    vlSelf->__Vdly__tag_regs0_61 = vlSelf->__PVT__tag_regs0_61;
    vlSelf->__Vdly__tag_regs1_60 = vlSelf->__PVT__tag_regs1_60;
    vlSelf->__Vdly__tag_regs1_57 = vlSelf->__PVT__tag_regs1_57;
    vlSelf->__Vdly__tag_regs1_40 = vlSelf->__PVT__tag_regs1_40;
    vlSelf->__Vdly__tag_regs1_39 = vlSelf->__PVT__tag_regs1_39;
    vlSelf->__Vdly__tag_regs1_6 = vlSelf->__PVT__tag_regs1_6;
    vlSelf->__Vdly__tag_regs0_3 = vlSelf->__PVT__tag_regs0_3;
    vlSelf->__Vdly__tag_regs0_2 = vlSelf->__PVT__tag_regs0_2;
    vlSelf->__Vdly__tag_regs0_1 = vlSelf->__PVT__tag_regs0_1;
    vlSelf->__Vdly__tag_regs0_0 = vlSelf->__PVT__tag_regs0_0;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__1(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_62 = 0ULL;
    } else if ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT__tag_regs0_63;
        } else if ((0x3eU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_62 = vlSelf->__PVT___GEN_61;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_61 = 0ULL;
    } else if ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_61 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_61 = 0ULL;
    } else if ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_61 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_60 = 0ULL;
    } else if ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_60 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_57 = 0ULL;
    } else if ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_57 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_40 = 0ULL;
    } else if ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_40 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_39 = 0ULL;
    } else if ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_39 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_6 = 0ULL;
    } else if ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_6 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_3 = 0ULL;
    } else if ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_3 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_2 = 0ULL;
    } else if ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_2 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_0 = 0ULL;
    } else if ((0U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_0 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_1 = 0ULL;
    } else if ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_1 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__2(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__2\n"); );
    // Body
    vlSelf->__PVT__tag_regs1_61 = vlSelf->__Vdly__tag_regs1_61;
    vlSelf->__PVT__tag_regs0_61 = vlSelf->__Vdly__tag_regs0_61;
    vlSelf->__PVT__tag_regs1_60 = vlSelf->__Vdly__tag_regs1_60;
    vlSelf->__PVT__tag_regs1_57 = vlSelf->__Vdly__tag_regs1_57;
    vlSelf->__PVT__tag_regs1_40 = vlSelf->__Vdly__tag_regs1_40;
    vlSelf->__PVT__tag_regs1_39 = vlSelf->__Vdly__tag_regs1_39;
    vlSelf->__PVT__tag_regs1_6 = vlSelf->__Vdly__tag_regs1_6;
    vlSelf->__PVT__tag_regs0_3 = vlSelf->__Vdly__tag_regs0_3;
    vlSelf->__PVT__tag_regs0_2 = vlSelf->__Vdly__tag_regs0_2;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__3(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__3\n"); );
    // Body
    vlSelf->__Vdly__tag_regs0_60 = vlSelf->__PVT__tag_regs0_60;
    vlSelf->__Vdly__tag_regs1_59 = vlSelf->__PVT__tag_regs1_59;
    vlSelf->__Vdly__tag_regs0_59 = vlSelf->__PVT__tag_regs0_59;
    vlSelf->__Vdly__tag_regs1_58 = vlSelf->__PVT__tag_regs1_58;
    vlSelf->__Vdly__tag_regs0_58 = vlSelf->__PVT__tag_regs0_58;
    vlSelf->__Vdly__tag_regs0_57 = vlSelf->__PVT__tag_regs0_57;
    vlSelf->__Vdly__tag_regs1_56 = vlSelf->__PVT__tag_regs1_56;
    vlSelf->__Vdly__tag_regs0_56 = vlSelf->__PVT__tag_regs0_56;
    vlSelf->__Vdly__tag_regs1_55 = vlSelf->__PVT__tag_regs1_55;
    vlSelf->__Vdly__tag_regs0_55 = vlSelf->__PVT__tag_regs0_55;
    vlSelf->__Vdly__tag_regs1_54 = vlSelf->__PVT__tag_regs1_54;
    vlSelf->__Vdly__tag_regs0_54 = vlSelf->__PVT__tag_regs0_54;
    vlSelf->__Vdly__tag_regs1_53 = vlSelf->__PVT__tag_regs1_53;
    vlSelf->__Vdly__tag_regs0_53 = vlSelf->__PVT__tag_regs0_53;
    vlSelf->__Vdly__tag_regs1_52 = vlSelf->__PVT__tag_regs1_52;
    vlSelf->__Vdly__tag_regs0_52 = vlSelf->__PVT__tag_regs0_52;
    vlSelf->__Vdly__tag_regs1_51 = vlSelf->__PVT__tag_regs1_51;
    vlSelf->__Vdly__tag_regs0_51 = vlSelf->__PVT__tag_regs0_51;
    vlSelf->__Vdly__tag_regs1_50 = vlSelf->__PVT__tag_regs1_50;
    vlSelf->__Vdly__tag_regs0_50 = vlSelf->__PVT__tag_regs0_50;
    vlSelf->__Vdly__tag_regs1_49 = vlSelf->__PVT__tag_regs1_49;
    vlSelf->__Vdly__tag_regs0_49 = vlSelf->__PVT__tag_regs0_49;
    vlSelf->__Vdly__tag_regs1_48 = vlSelf->__PVT__tag_regs1_48;
    vlSelf->__Vdly__tag_regs0_48 = vlSelf->__PVT__tag_regs0_48;
    vlSelf->__Vdly__tag_regs1_47 = vlSelf->__PVT__tag_regs1_47;
    vlSelf->__Vdly__tag_regs0_47 = vlSelf->__PVT__tag_regs0_47;
    vlSelf->__Vdly__tag_regs1_46 = vlSelf->__PVT__tag_regs1_46;
    vlSelf->__Vdly__tag_regs0_46 = vlSelf->__PVT__tag_regs0_46;
    vlSelf->__Vdly__tag_regs1_45 = vlSelf->__PVT__tag_regs1_45;
    vlSelf->__Vdly__tag_regs0_45 = vlSelf->__PVT__tag_regs0_45;
    vlSelf->__Vdly__tag_regs1_44 = vlSelf->__PVT__tag_regs1_44;
    vlSelf->__Vdly__tag_regs0_44 = vlSelf->__PVT__tag_regs0_44;
    vlSelf->__Vdly__tag_regs1_43 = vlSelf->__PVT__tag_regs1_43;
    vlSelf->__Vdly__tag_regs0_43 = vlSelf->__PVT__tag_regs0_43;
    vlSelf->__Vdly__tag_regs1_42 = vlSelf->__PVT__tag_regs1_42;
    vlSelf->__Vdly__tag_regs0_42 = vlSelf->__PVT__tag_regs0_42;
    vlSelf->__Vdly__tag_regs1_41 = vlSelf->__PVT__tag_regs1_41;
    vlSelf->__Vdly__tag_regs0_41 = vlSelf->__PVT__tag_regs0_41;
    vlSelf->__Vdly__tag_regs0_40 = vlSelf->__PVT__tag_regs0_40;
    vlSelf->__Vdly__tag_regs0_39 = vlSelf->__PVT__tag_regs0_39;
    vlSelf->__Vdly__tag_regs1_38 = vlSelf->__PVT__tag_regs1_38;
    vlSelf->__Vdly__tag_regs0_38 = vlSelf->__PVT__tag_regs0_38;
    vlSelf->__Vdly__tag_regs1_37 = vlSelf->__PVT__tag_regs1_37;
    vlSelf->__Vdly__tag_regs0_37 = vlSelf->__PVT__tag_regs0_37;
    vlSelf->__Vdly__tag_regs1_36 = vlSelf->__PVT__tag_regs1_36;
    vlSelf->__Vdly__tag_regs0_36 = vlSelf->__PVT__tag_regs0_36;
    vlSelf->__Vdly__tag_regs1_35 = vlSelf->__PVT__tag_regs1_35;
    vlSelf->__Vdly__tag_regs0_35 = vlSelf->__PVT__tag_regs0_35;
    vlSelf->__Vdly__tag_regs1_34 = vlSelf->__PVT__tag_regs1_34;
    vlSelf->__Vdly__tag_regs0_34 = vlSelf->__PVT__tag_regs0_34;
    vlSelf->__Vdly__tag_regs1_33 = vlSelf->__PVT__tag_regs1_33;
    vlSelf->__Vdly__tag_regs0_33 = vlSelf->__PVT__tag_regs0_33;
    vlSelf->__Vdly__tag_regs1_32 = vlSelf->__PVT__tag_regs1_32;
    vlSelf->__Vdly__tag_regs0_32 = vlSelf->__PVT__tag_regs0_32;
    vlSelf->__Vdly__tag_regs1_31 = vlSelf->__PVT__tag_regs1_31;
    vlSelf->__Vdly__tag_regs0_31 = vlSelf->__PVT__tag_regs0_31;
    vlSelf->__Vdly__tag_regs1_30 = vlSelf->__PVT__tag_regs1_30;
    vlSelf->__Vdly__tag_regs0_30 = vlSelf->__PVT__tag_regs0_30;
    vlSelf->__Vdly__tag_regs1_29 = vlSelf->__PVT__tag_regs1_29;
    vlSelf->__Vdly__tag_regs0_29 = vlSelf->__PVT__tag_regs0_29;
    vlSelf->__Vdly__tag_regs1_28 = vlSelf->__PVT__tag_regs1_28;
    vlSelf->__Vdly__tag_regs0_28 = vlSelf->__PVT__tag_regs0_28;
    vlSelf->__Vdly__tag_regs1_27 = vlSelf->__PVT__tag_regs1_27;
    vlSelf->__Vdly__tag_regs0_27 = vlSelf->__PVT__tag_regs0_27;
    vlSelf->__Vdly__tag_regs1_26 = vlSelf->__PVT__tag_regs1_26;
    vlSelf->__Vdly__tag_regs0_26 = vlSelf->__PVT__tag_regs0_26;
    vlSelf->__Vdly__tag_regs1_25 = vlSelf->__PVT__tag_regs1_25;
    vlSelf->__Vdly__tag_regs0_25 = vlSelf->__PVT__tag_regs0_25;
    vlSelf->__Vdly__tag_regs1_24 = vlSelf->__PVT__tag_regs1_24;
    vlSelf->__Vdly__tag_regs0_24 = vlSelf->__PVT__tag_regs0_24;
    vlSelf->__Vdly__tag_regs1_23 = vlSelf->__PVT__tag_regs1_23;
    vlSelf->__Vdly__tag_regs0_23 = vlSelf->__PVT__tag_regs0_23;
    vlSelf->__Vdly__tag_regs1_22 = vlSelf->__PVT__tag_regs1_22;
    vlSelf->__Vdly__tag_regs0_22 = vlSelf->__PVT__tag_regs0_22;
    vlSelf->__Vdly__tag_regs1_21 = vlSelf->__PVT__tag_regs1_21;
    vlSelf->__Vdly__tag_regs0_21 = vlSelf->__PVT__tag_regs0_21;
    vlSelf->__Vdly__tag_regs1_20 = vlSelf->__PVT__tag_regs1_20;
    vlSelf->__Vdly__tag_regs0_20 = vlSelf->__PVT__tag_regs0_20;
    vlSelf->__Vdly__tag_regs1_19 = vlSelf->__PVT__tag_regs1_19;
    vlSelf->__Vdly__tag_regs0_19 = vlSelf->__PVT__tag_regs0_19;
    vlSelf->__Vdly__tag_regs1_18 = vlSelf->__PVT__tag_regs1_18;
    vlSelf->__Vdly__tag_regs0_18 = vlSelf->__PVT__tag_regs0_18;
    vlSelf->__Vdly__tag_regs1_17 = vlSelf->__PVT__tag_regs1_17;
    vlSelf->__Vdly__tag_regs0_17 = vlSelf->__PVT__tag_regs0_17;
    vlSelf->__Vdly__tag_regs1_16 = vlSelf->__PVT__tag_regs1_16;
    vlSelf->__Vdly__tag_regs0_16 = vlSelf->__PVT__tag_regs0_16;
    vlSelf->__Vdly__tag_regs1_15 = vlSelf->__PVT__tag_regs1_15;
    vlSelf->__Vdly__tag_regs0_15 = vlSelf->__PVT__tag_regs0_15;
    vlSelf->__Vdly__tag_regs1_14 = vlSelf->__PVT__tag_regs1_14;
    vlSelf->__Vdly__tag_regs0_14 = vlSelf->__PVT__tag_regs0_14;
    vlSelf->__Vdly__tag_regs1_13 = vlSelf->__PVT__tag_regs1_13;
    vlSelf->__Vdly__tag_regs0_13 = vlSelf->__PVT__tag_regs0_13;
    vlSelf->__Vdly__tag_regs1_12 = vlSelf->__PVT__tag_regs1_12;
    vlSelf->__Vdly__tag_regs0_12 = vlSelf->__PVT__tag_regs0_12;
    vlSelf->__Vdly__tag_regs1_11 = vlSelf->__PVT__tag_regs1_11;
    vlSelf->__Vdly__tag_regs0_11 = vlSelf->__PVT__tag_regs0_11;
    vlSelf->__Vdly__tag_regs1_10 = vlSelf->__PVT__tag_regs1_10;
    vlSelf->__Vdly__tag_regs0_10 = vlSelf->__PVT__tag_regs0_10;
    vlSelf->__Vdly__tag_regs1_9 = vlSelf->__PVT__tag_regs1_9;
    vlSelf->__Vdly__tag_regs0_9 = vlSelf->__PVT__tag_regs0_9;
    vlSelf->__Vdly__tag_regs1_8 = vlSelf->__PVT__tag_regs1_8;
    vlSelf->__Vdly__tag_regs0_8 = vlSelf->__PVT__tag_regs0_8;
    vlSelf->__Vdly__tag_regs1_7 = vlSelf->__PVT__tag_regs1_7;
    vlSelf->__Vdly__tag_regs0_7 = vlSelf->__PVT__tag_regs0_7;
    vlSelf->__Vdly__tag_regs1_5 = vlSelf->__PVT__tag_regs1_5;
    vlSelf->__Vdly__tag_regs0_5 = vlSelf->__PVT__tag_regs0_5;
    vlSelf->__Vdly__tag_regs1_4 = vlSelf->__PVT__tag_regs1_4;
    vlSelf->__Vdly__tag_regs0_4 = vlSelf->__PVT__tag_regs0_4;
    vlSelf->__Vdly__tag_regs1_3 = vlSelf->__PVT__tag_regs1_3;
    vlSelf->__Vdly__tag_regs1_2 = vlSelf->__PVT__tag_regs1_2;
    vlSelf->__Vdly__tag_regs1_1 = vlSelf->__PVT__tag_regs1_1;
    vlSelf->__Vdly__tag_regs1_0 = vlSelf->__PVT__tag_regs1_0;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__4(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__4\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_60 = 0ULL;
    } else if ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_60 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_59 = 0ULL;
    } else if ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_59 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_59 = 0ULL;
    } else if ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_59 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_58 = 0ULL;
    } else if ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_58 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_58 = 0ULL;
    } else if ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_58 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_57 = 0ULL;
    } else if ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_57 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_56 = 0ULL;
    } else if ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_56 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_56 = 0ULL;
    } else if ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_56 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_55 = 0ULL;
    } else if ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_55 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_55 = 0ULL;
    } else if ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_55 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_54 = 0ULL;
    } else if ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_54 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_54 = 0ULL;
    } else if ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_54 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_53 = 0ULL;
    } else if ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_53 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_53 = 0ULL;
    } else if ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_53 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_52 = 0ULL;
    } else if ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_52 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_52 = 0ULL;
    } else if ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_52 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_51 = 0ULL;
    } else if ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_51 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_51 = 0ULL;
    } else if ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_51 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_50 = 0ULL;
    } else if ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_50 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_50 = 0ULL;
    } else if ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_50 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_49 = 0ULL;
    } else if ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_49 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_49 = 0ULL;
    } else if ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_49 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_48 = 0ULL;
    } else if ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_48 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_48 = 0ULL;
    } else if ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_48 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_47 = 0ULL;
    } else if ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_47 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_47 = 0ULL;
    } else if ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_47 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_46 = 0ULL;
    } else if ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_46 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_46 = 0ULL;
    } else if ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_46 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_45 = 0ULL;
    } else if ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_45 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_45 = 0ULL;
    } else if ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_45 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_44 = 0ULL;
    } else if ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_44 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_44 = 0ULL;
    } else if ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_44 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_43 = 0ULL;
    } else if ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_43 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_43 = 0ULL;
    } else if ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_43 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_42 = 0ULL;
    } else if ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_42 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_42 = 0ULL;
    } else if ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_42 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_41 = 0ULL;
    } else if ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_41 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_41 = 0ULL;
    } else if ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_41 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_40 = 0ULL;
    } else if ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_40 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_39 = 0ULL;
    } else if ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_39 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_38 = 0ULL;
    } else if ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_38 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_38 = 0ULL;
    } else if ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_38 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_37 = 0ULL;
    } else if ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_37 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_37 = 0ULL;
    } else if ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_37 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_36 = 0ULL;
    } else if ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_36 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_36 = 0ULL;
    } else if ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_36 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_35 = 0ULL;
    } else if ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_35 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_35 = 0ULL;
    } else if ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_35 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_34 = 0ULL;
    } else if ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_34 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_34 = 0ULL;
    } else if ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_34 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_33 = 0ULL;
    } else if ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_33 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_33 = 0ULL;
    } else if ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_33 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_32 = 0ULL;
    } else if ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_32 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_32 = 0ULL;
    } else if ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_32 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_31 = 0ULL;
    } else if ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_31 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_31 = 0ULL;
    } else if ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_31 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_30 = 0ULL;
    } else if ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_30 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_30 = 0ULL;
    } else if ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_30 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_29 = 0ULL;
    } else if ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_29 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_29 = 0ULL;
    } else if ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_29 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_28 = 0ULL;
    } else if ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_28 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_28 = 0ULL;
    } else if ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_28 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_27 = 0ULL;
    } else if ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_27 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_27 = 0ULL;
    } else if ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_27 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_26 = 0ULL;
    } else if ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_26 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_26 = 0ULL;
    } else if ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_26 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_25 = 0ULL;
    } else if ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_25 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_25 = 0ULL;
    } else if ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_25 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_24 = 0ULL;
    } else if ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_24 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_24 = 0ULL;
    } else if ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_24 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_23 = 0ULL;
    } else if ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_23 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_23 = 0ULL;
    } else if ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_23 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_22 = 0ULL;
    } else if ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_22 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_22 = 0ULL;
    } else if ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_22 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_21 = 0ULL;
    } else if ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_21 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_21 = 0ULL;
    } else if ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_21 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_20 = 0ULL;
    } else if ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_20 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_20 = 0ULL;
    } else if ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_20 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_19 = 0ULL;
    } else if ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_19 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_19 = 0ULL;
    } else if ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_19 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_18 = 0ULL;
    } else if ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_18 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_18 = 0ULL;
    } else if ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_18 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_17 = 0ULL;
    } else if ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_17 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_17 = 0ULL;
    } else if ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_17 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_16 = 0ULL;
    } else if ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_16 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_16 = 0ULL;
    } else if ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_16 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_15 = 0ULL;
    } else if ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_15 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_15 = 0ULL;
    } else if ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_15 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_14 = 0ULL;
    } else if ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_14 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_14 = 0ULL;
    } else if ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_14 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_13 = 0ULL;
    } else if ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_13 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_13 = 0ULL;
    } else if ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_13 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_12 = 0ULL;
    } else if ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_12 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_12 = 0ULL;
    } else if ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_12 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_11 = 0ULL;
    } else if ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_11 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_11 = 0ULL;
    } else if ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_11 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_10 = 0ULL;
    } else if ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_10 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs0_62
                                                 : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_10 = 0ULL;
    } else if ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_10 = (((IData)(vlSelf->__PVT__io_wen) 
                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x3fU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_63
                                             : ((0x3eU 
                                                 == 
                                                 (0x3fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                 ? vlSelf->__PVT__tag_regs1_62
                                                 : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_9 = 0ULL;
    } else if ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_9 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_9 = 0ULL;
    } else if ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_9 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_8 = 0ULL;
    } else if ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_8 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_8 = 0ULL;
    } else if ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_8 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_7 = 0ULL;
    } else if ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_7 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_7 = 0ULL;
    } else if ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_7 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_5 = 0ULL;
    } else if ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_5 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_5 = 0ULL;
    } else if ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_5 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_4 = 0ULL;
    } else if ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_4 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_4 = 0ULL;
    } else if ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_4 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_3 = 0ULL;
    } else if ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_3 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_2 = 0ULL;
    } else if ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_2 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_0 = 0ULL;
    } else if ((0U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_0 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_1 = 0ULL;
    } else if ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs1_1 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs1_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs1_62
                                                : vlSelf->__PVT___GEN_189)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__5(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__5\n"); );
    // Body
    vlSelf->__PVT__tag_regs0_60 = vlSelf->__Vdly__tag_regs0_60;
    vlSelf->__PVT__tag_regs1_59 = vlSelf->__Vdly__tag_regs1_59;
    vlSelf->__PVT__tag_regs0_59 = vlSelf->__Vdly__tag_regs0_59;
    vlSelf->__PVT__tag_regs1_58 = vlSelf->__Vdly__tag_regs1_58;
    vlSelf->__PVT__tag_regs0_58 = vlSelf->__Vdly__tag_regs0_58;
    vlSelf->__PVT__tag_regs0_57 = vlSelf->__Vdly__tag_regs0_57;
    vlSelf->__PVT__tag_regs1_56 = vlSelf->__Vdly__tag_regs1_56;
    vlSelf->__PVT__tag_regs0_56 = vlSelf->__Vdly__tag_regs0_56;
    vlSelf->__PVT__tag_regs1_55 = vlSelf->__Vdly__tag_regs1_55;
    vlSelf->__PVT__tag_regs0_55 = vlSelf->__Vdly__tag_regs0_55;
    vlSelf->__PVT__tag_regs1_54 = vlSelf->__Vdly__tag_regs1_54;
    vlSelf->__PVT__tag_regs0_54 = vlSelf->__Vdly__tag_regs0_54;
    vlSelf->__PVT__tag_regs1_53 = vlSelf->__Vdly__tag_regs1_53;
    vlSelf->__PVT__tag_regs0_53 = vlSelf->__Vdly__tag_regs0_53;
    vlSelf->__PVT__tag_regs1_52 = vlSelf->__Vdly__tag_regs1_52;
    vlSelf->__PVT__tag_regs0_52 = vlSelf->__Vdly__tag_regs0_52;
    vlSelf->__PVT__tag_regs1_51 = vlSelf->__Vdly__tag_regs1_51;
    vlSelf->__PVT__tag_regs0_51 = vlSelf->__Vdly__tag_regs0_51;
    vlSelf->__PVT__tag_regs1_50 = vlSelf->__Vdly__tag_regs1_50;
    vlSelf->__PVT__tag_regs0_50 = vlSelf->__Vdly__tag_regs0_50;
    vlSelf->__PVT__tag_regs1_49 = vlSelf->__Vdly__tag_regs1_49;
    vlSelf->__PVT__tag_regs0_49 = vlSelf->__Vdly__tag_regs0_49;
    vlSelf->__PVT__tag_regs1_48 = vlSelf->__Vdly__tag_regs1_48;
    vlSelf->__PVT__tag_regs0_48 = vlSelf->__Vdly__tag_regs0_48;
    vlSelf->__PVT__tag_regs1_47 = vlSelf->__Vdly__tag_regs1_47;
    vlSelf->__PVT__tag_regs0_47 = vlSelf->__Vdly__tag_regs0_47;
    vlSelf->__PVT__tag_regs1_46 = vlSelf->__Vdly__tag_regs1_46;
    vlSelf->__PVT__tag_regs0_46 = vlSelf->__Vdly__tag_regs0_46;
    vlSelf->__PVT__tag_regs1_45 = vlSelf->__Vdly__tag_regs1_45;
    vlSelf->__PVT__tag_regs0_45 = vlSelf->__Vdly__tag_regs0_45;
    vlSelf->__PVT__tag_regs1_44 = vlSelf->__Vdly__tag_regs1_44;
    vlSelf->__PVT__tag_regs0_44 = vlSelf->__Vdly__tag_regs0_44;
    vlSelf->__PVT__tag_regs1_43 = vlSelf->__Vdly__tag_regs1_43;
    vlSelf->__PVT__tag_regs0_43 = vlSelf->__Vdly__tag_regs0_43;
    vlSelf->__PVT__tag_regs1_42 = vlSelf->__Vdly__tag_regs1_42;
    vlSelf->__PVT__tag_regs0_42 = vlSelf->__Vdly__tag_regs0_42;
    vlSelf->__PVT__tag_regs1_41 = vlSelf->__Vdly__tag_regs1_41;
    vlSelf->__PVT__tag_regs0_41 = vlSelf->__Vdly__tag_regs0_41;
    vlSelf->__PVT__tag_regs0_40 = vlSelf->__Vdly__tag_regs0_40;
    vlSelf->__PVT__tag_regs0_39 = vlSelf->__Vdly__tag_regs0_39;
    vlSelf->__PVT__tag_regs1_38 = vlSelf->__Vdly__tag_regs1_38;
    vlSelf->__PVT__tag_regs0_38 = vlSelf->__Vdly__tag_regs0_38;
    vlSelf->__PVT__tag_regs1_37 = vlSelf->__Vdly__tag_regs1_37;
    vlSelf->__PVT__tag_regs0_37 = vlSelf->__Vdly__tag_regs0_37;
    vlSelf->__PVT__tag_regs1_36 = vlSelf->__Vdly__tag_regs1_36;
    vlSelf->__PVT__tag_regs0_36 = vlSelf->__Vdly__tag_regs0_36;
    vlSelf->__PVT__tag_regs1_35 = vlSelf->__Vdly__tag_regs1_35;
    vlSelf->__PVT__tag_regs0_35 = vlSelf->__Vdly__tag_regs0_35;
    vlSelf->__PVT__tag_regs1_34 = vlSelf->__Vdly__tag_regs1_34;
    vlSelf->__PVT__tag_regs0_34 = vlSelf->__Vdly__tag_regs0_34;
    vlSelf->__PVT__tag_regs1_33 = vlSelf->__Vdly__tag_regs1_33;
    vlSelf->__PVT__tag_regs0_33 = vlSelf->__Vdly__tag_regs0_33;
    vlSelf->__PVT__tag_regs1_32 = vlSelf->__Vdly__tag_regs1_32;
    vlSelf->__PVT__tag_regs0_32 = vlSelf->__Vdly__tag_regs0_32;
    vlSelf->__PVT__tag_regs1_31 = vlSelf->__Vdly__tag_regs1_31;
    vlSelf->__PVT__tag_regs0_31 = vlSelf->__Vdly__tag_regs0_31;
    vlSelf->__PVT__tag_regs1_30 = vlSelf->__Vdly__tag_regs1_30;
    vlSelf->__PVT__tag_regs0_30 = vlSelf->__Vdly__tag_regs0_30;
    vlSelf->__PVT__tag_regs1_29 = vlSelf->__Vdly__tag_regs1_29;
    vlSelf->__PVT__tag_regs0_29 = vlSelf->__Vdly__tag_regs0_29;
    vlSelf->__PVT__tag_regs1_28 = vlSelf->__Vdly__tag_regs1_28;
    vlSelf->__PVT__tag_regs0_28 = vlSelf->__Vdly__tag_regs0_28;
    vlSelf->__PVT__tag_regs1_27 = vlSelf->__Vdly__tag_regs1_27;
    vlSelf->__PVT__tag_regs0_27 = vlSelf->__Vdly__tag_regs0_27;
    vlSelf->__PVT__tag_regs1_26 = vlSelf->__Vdly__tag_regs1_26;
    vlSelf->__PVT__tag_regs0_26 = vlSelf->__Vdly__tag_regs0_26;
    vlSelf->__PVT__tag_regs1_25 = vlSelf->__Vdly__tag_regs1_25;
    vlSelf->__PVT__tag_regs0_25 = vlSelf->__Vdly__tag_regs0_25;
    vlSelf->__PVT__tag_regs1_24 = vlSelf->__Vdly__tag_regs1_24;
    vlSelf->__PVT__tag_regs0_24 = vlSelf->__Vdly__tag_regs0_24;
    vlSelf->__PVT__tag_regs1_23 = vlSelf->__Vdly__tag_regs1_23;
    vlSelf->__PVT__tag_regs0_23 = vlSelf->__Vdly__tag_regs0_23;
    vlSelf->__PVT__tag_regs1_22 = vlSelf->__Vdly__tag_regs1_22;
    vlSelf->__PVT__tag_regs0_22 = vlSelf->__Vdly__tag_regs0_22;
    vlSelf->__PVT__tag_regs1_21 = vlSelf->__Vdly__tag_regs1_21;
    vlSelf->__PVT__tag_regs0_21 = vlSelf->__Vdly__tag_regs0_21;
    vlSelf->__PVT__tag_regs1_20 = vlSelf->__Vdly__tag_regs1_20;
    vlSelf->__PVT__tag_regs0_20 = vlSelf->__Vdly__tag_regs0_20;
    vlSelf->__PVT__tag_regs1_19 = vlSelf->__Vdly__tag_regs1_19;
    vlSelf->__PVT__tag_regs0_19 = vlSelf->__Vdly__tag_regs0_19;
    vlSelf->__PVT__tag_regs1_18 = vlSelf->__Vdly__tag_regs1_18;
    vlSelf->__PVT__tag_regs0_18 = vlSelf->__Vdly__tag_regs0_18;
    vlSelf->__PVT__tag_regs1_17 = vlSelf->__Vdly__tag_regs1_17;
    vlSelf->__PVT__tag_regs0_17 = vlSelf->__Vdly__tag_regs0_17;
    vlSelf->__PVT__tag_regs1_16 = vlSelf->__Vdly__tag_regs1_16;
    vlSelf->__PVT__tag_regs0_16 = vlSelf->__Vdly__tag_regs0_16;
    vlSelf->__PVT__tag_regs1_15 = vlSelf->__Vdly__tag_regs1_15;
    vlSelf->__PVT__tag_regs0_15 = vlSelf->__Vdly__tag_regs0_15;
    vlSelf->__PVT__tag_regs1_14 = vlSelf->__Vdly__tag_regs1_14;
    vlSelf->__PVT__tag_regs0_14 = vlSelf->__Vdly__tag_regs0_14;
    vlSelf->__PVT__tag_regs1_13 = vlSelf->__Vdly__tag_regs1_13;
    vlSelf->__PVT__tag_regs0_13 = vlSelf->__Vdly__tag_regs0_13;
    vlSelf->__PVT__tag_regs1_12 = vlSelf->__Vdly__tag_regs1_12;
    vlSelf->__PVT__tag_regs0_12 = vlSelf->__Vdly__tag_regs0_12;
    vlSelf->__PVT__tag_regs1_11 = vlSelf->__Vdly__tag_regs1_11;
    vlSelf->__PVT__tag_regs0_11 = vlSelf->__Vdly__tag_regs0_11;
    vlSelf->__PVT__tag_regs1_10 = vlSelf->__Vdly__tag_regs1_10;
    vlSelf->__PVT__tag_regs0_10 = vlSelf->__Vdly__tag_regs0_10;
    vlSelf->__PVT__tag_regs1_9 = vlSelf->__Vdly__tag_regs1_9;
    vlSelf->__PVT__tag_regs0_9 = vlSelf->__Vdly__tag_regs0_9;
    vlSelf->__PVT__tag_regs1_8 = vlSelf->__Vdly__tag_regs1_8;
    vlSelf->__PVT__tag_regs0_8 = vlSelf->__Vdly__tag_regs0_8;
    vlSelf->__PVT__tag_regs1_7 = vlSelf->__Vdly__tag_regs1_7;
    vlSelf->__PVT__tag_regs0_7 = vlSelf->__Vdly__tag_regs0_7;
    vlSelf->__PVT__tag_regs1_5 = vlSelf->__Vdly__tag_regs1_5;
    vlSelf->__PVT__tag_regs0_5 = vlSelf->__Vdly__tag_regs0_5;
    vlSelf->__PVT__tag_regs1_4 = vlSelf->__Vdly__tag_regs1_4;
    vlSelf->__PVT__tag_regs0_4 = vlSelf->__Vdly__tag_regs0_4;
    vlSelf->__PVT__tag_regs1_3 = vlSelf->__Vdly__tag_regs1_3;
    vlSelf->__PVT__tag_regs1_2 = vlSelf->__Vdly__tag_regs1_2;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__6(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__6\n"); );
    // Body
    vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__tag_regs1_62;
    vlSelf->__Vdly__tag_regs0_6 = vlSelf->__PVT__tag_regs0_6;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__7(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__7\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_62 = 0ULL;
    } else if ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT__tag_regs1_63;
        } else if ((0x3eU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_62 = vlSelf->__PVT___GEN_189;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_6 = 0ULL;
    } else if ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        vlSelf->__Vdly__tag_regs0_6 = (((IData)(vlSelf->__PVT__io_wen) 
                                        & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x3fU == 
                                            (0x3fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                            ? vlSelf->__PVT__tag_regs0_63
                                            : ((0x3eU 
                                                == 
                                                (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                                ? vlSelf->__PVT__tag_regs0_62
                                                : vlSelf->__PVT___GEN_61)));
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__8(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__8\n"); );
    // Body
    vlSelf->__PVT__tag_regs0_6 = vlSelf->__Vdly__tag_regs0_6;
    vlSelf->__PVT__tag_regs1_1 = vlSelf->__Vdly__tag_regs1_1;
    vlSelf->__PVT__tag_regs1_0 = vlSelf->__Vdly__tag_regs1_0;
    vlSelf->__PVT__tag_regs0_1 = vlSelf->__Vdly__tag_regs0_1;
    vlSelf->__PVT__tag_regs0_0 = vlSelf->__Vdly__tag_regs0_0;
    vlSelf->__Vdly__tag_regs1_63 = vlSelf->__PVT__tag_regs1_63;
    vlSelf->__Vdly__tag_regs0_63 = vlSelf->__PVT__tag_regs0_63;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__9(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs0_63 = 0ULL;
    } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & (~ VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U)))) {
            vlSelf->__Vdly__tag_regs0_63 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs0_63 = ((0x3eU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs0_62
                                             : vlSelf->__PVT___GEN_61);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs1_63 = 0ULL;
    } else if ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
        if (((IData)(vlSelf->__PVT__io_wen) & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))) {
            vlSelf->__Vdly__tag_regs1_63 = vlSelf->__PVT__io_wdata;
        } else if ((0x3fU != (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))) {
            vlSelf->__Vdly__tag_regs1_63 = ((0x3eU 
                                             == (0x3fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                             ? vlSelf->__PVT__tag_regs1_62
                                             : vlSelf->__PVT___GEN_189);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__10(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_sequent__TOP__mycpu_top__data_cache__dcache_tag_1__10\n"); );
    // Body
    vlSelf->__PVT__tag_regs1_63 = vlSelf->__Vdly__tag_regs1_63;
    vlSelf->__PVT__tag_regs0_63 = vlSelf->__Vdly__tag_regs0_63;
    vlSelf->__PVT__tag_regs1_62 = vlSelf->__Vdly__tag_regs1_62;
    vlSelf->__PVT__tag_regs0_62 = vlSelf->__Vdly__tag_regs0_62;
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__0(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_1
                              : vlSelf->__PVT__tag_regs0_0);
    vlSelf->__PVT___GEN_129 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_1
                                : vlSelf->__PVT__tag_regs1_0);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__1(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__1\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_2
                              : vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___GEN_130 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_2
                                : vlSelf->__PVT___GEN_129);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__2(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__2\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_3
                              : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT___GEN_131 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_3
                                : vlSelf->__PVT___GEN_130);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__3(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__3\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_4
                              : vlSelf->__PVT___GEN_3);
    vlSelf->__PVT___GEN_132 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_4
                                : vlSelf->__PVT___GEN_131);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__4(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__4\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_5
                              : vlSelf->__PVT___GEN_4);
    vlSelf->__PVT___GEN_133 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_5
                                : vlSelf->__PVT___GEN_132);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__5(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__5\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_6
                              : vlSelf->__PVT___GEN_5);
    vlSelf->__PVT___GEN_134 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_6
                                : vlSelf->__PVT___GEN_133);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__6(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__6\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_7
                              : vlSelf->__PVT___GEN_6);
    vlSelf->__PVT___GEN_135 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_7
                                : vlSelf->__PVT___GEN_134);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__7(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__7\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_8
                              : vlSelf->__PVT___GEN_7);
    vlSelf->__PVT___GEN_136 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_8
                                : vlSelf->__PVT___GEN_135);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__8(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__8\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_9
                              : vlSelf->__PVT___GEN_8);
    vlSelf->__PVT___GEN_137 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_9
                                : vlSelf->__PVT___GEN_136);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__9(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__9\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_10
                               : vlSelf->__PVT___GEN_9);
    vlSelf->__PVT___GEN_138 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_10
                                : vlSelf->__PVT___GEN_137);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__10(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__10\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_11
                               : vlSelf->__PVT___GEN_10);
    vlSelf->__PVT___GEN_139 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_11
                                : vlSelf->__PVT___GEN_138);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__11(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__11\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_12
                               : vlSelf->__PVT___GEN_11);
    vlSelf->__PVT___GEN_140 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_12
                                : vlSelf->__PVT___GEN_139);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__12(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__12\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_13
                               : vlSelf->__PVT___GEN_12);
    vlSelf->__PVT___GEN_141 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_13
                                : vlSelf->__PVT___GEN_140);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__13(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__13\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_14
                               : vlSelf->__PVT___GEN_13);
    vlSelf->__PVT___GEN_142 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_14
                                : vlSelf->__PVT___GEN_141);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__14(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__14\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_15
                               : vlSelf->__PVT___GEN_14);
    vlSelf->__PVT___GEN_143 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_15
                                : vlSelf->__PVT___GEN_142);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__15(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__15\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_16
                               : vlSelf->__PVT___GEN_15);
    vlSelf->__PVT___GEN_144 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_16
                                : vlSelf->__PVT___GEN_143);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__16(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__16\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_17
                               : vlSelf->__PVT___GEN_16);
    vlSelf->__PVT___GEN_145 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_17
                                : vlSelf->__PVT___GEN_144);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__17(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__17\n"); );
    // Body
    vlSelf->__PVT___GEN_18 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_18
                               : vlSelf->__PVT___GEN_17);
    vlSelf->__PVT___GEN_146 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_18
                                : vlSelf->__PVT___GEN_145);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__18(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__18\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_19
                               : vlSelf->__PVT___GEN_18);
    vlSelf->__PVT___GEN_147 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_19
                                : vlSelf->__PVT___GEN_146);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__19(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__19\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_20
                               : vlSelf->__PVT___GEN_19);
    vlSelf->__PVT___GEN_148 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_20
                                : vlSelf->__PVT___GEN_147);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__20(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__20\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_21
                               : vlSelf->__PVT___GEN_20);
    vlSelf->__PVT___GEN_149 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_21
                                : vlSelf->__PVT___GEN_148);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__21(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__21\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_22
                               : vlSelf->__PVT___GEN_21);
    vlSelf->__PVT___GEN_150 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_22
                                : vlSelf->__PVT___GEN_149);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__22(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__22\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_23
                               : vlSelf->__PVT___GEN_22);
    vlSelf->__PVT___GEN_151 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_23
                                : vlSelf->__PVT___GEN_150);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__23(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__23\n"); );
    // Body
    vlSelf->__PVT___GEN_385 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_1
                                : vlSelf->__PVT__tag_regs1_0);
    vlSelf->__PVT___GEN_449 = ((1U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_1
                                : vlSelf->__PVT__tag_regs0_0);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__24(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__24\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_24
                               : vlSelf->__PVT___GEN_23);
    vlSelf->__PVT___GEN_152 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_24
                                : vlSelf->__PVT___GEN_151);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__25(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__25\n"); );
    // Body
    vlSelf->__PVT___GEN_386 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_2
                                : vlSelf->__PVT___GEN_385);
    vlSelf->__PVT___GEN_450 = ((2U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_2
                                : vlSelf->__PVT___GEN_449);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__26(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__26\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_25
                               : vlSelf->__PVT___GEN_24);
    vlSelf->__PVT___GEN_153 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_25
                                : vlSelf->__PVT___GEN_152);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__27(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__27\n"); );
    // Body
    vlSelf->__PVT___GEN_387 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_3
                                : vlSelf->__PVT___GEN_386);
    vlSelf->__PVT___GEN_451 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_3
                                : vlSelf->__PVT___GEN_450);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__28(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__28\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_26
                               : vlSelf->__PVT___GEN_25);
    vlSelf->__PVT___GEN_154 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_26
                                : vlSelf->__PVT___GEN_153);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__29(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__29\n"); );
    // Body
    vlSelf->__PVT___GEN_388 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_4
                                : vlSelf->__PVT___GEN_387);
    vlSelf->__PVT___GEN_452 = ((4U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_4
                                : vlSelf->__PVT___GEN_451);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__30(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__30\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_27
                               : vlSelf->__PVT___GEN_26);
    vlSelf->__PVT___GEN_155 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_27
                                : vlSelf->__PVT___GEN_154);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__31(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__31\n"); );
    // Body
    vlSelf->__PVT___GEN_389 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_5
                                : vlSelf->__PVT___GEN_388);
    vlSelf->__PVT___GEN_453 = ((5U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_5
                                : vlSelf->__PVT___GEN_452);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__32(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__32\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_28
                               : vlSelf->__PVT___GEN_27);
    vlSelf->__PVT___GEN_156 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_28
                                : vlSelf->__PVT___GEN_155);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__33(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__33\n"); );
    // Body
    vlSelf->__PVT___GEN_390 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_6
                                : vlSelf->__PVT___GEN_389);
    vlSelf->__PVT___GEN_454 = ((6U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_6
                                : vlSelf->__PVT___GEN_453);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__34(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__34\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_29
                               : vlSelf->__PVT___GEN_28);
    vlSelf->__PVT___GEN_157 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_29
                                : vlSelf->__PVT___GEN_156);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__35(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__35\n"); );
    // Body
    vlSelf->__PVT___GEN_391 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_7
                                : vlSelf->__PVT___GEN_390);
    vlSelf->__PVT___GEN_455 = ((7U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_7
                                : vlSelf->__PVT___GEN_454);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__36(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__36\n"); );
    // Body
    vlSelf->__PVT___GEN_30 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_30
                               : vlSelf->__PVT___GEN_29);
    vlSelf->__PVT___GEN_158 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_30
                                : vlSelf->__PVT___GEN_157);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__37(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__37\n"); );
    // Body
    vlSelf->__PVT___GEN_392 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_8
                                : vlSelf->__PVT___GEN_391);
    vlSelf->__PVT___GEN_456 = ((8U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_8
                                : vlSelf->__PVT___GEN_455);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__38(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__38\n"); );
    // Body
    vlSelf->__PVT___GEN_31 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_31
                               : vlSelf->__PVT___GEN_30);
    vlSelf->__PVT___GEN_159 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_31
                                : vlSelf->__PVT___GEN_158);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__39(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__39\n"); );
    // Body
    vlSelf->__PVT___GEN_393 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_9
                                : vlSelf->__PVT___GEN_392);
    vlSelf->__PVT___GEN_457 = ((9U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_9
                                : vlSelf->__PVT___GEN_456);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__40(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__40\n"); );
    // Body
    vlSelf->__PVT___GEN_32 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_32
                               : vlSelf->__PVT___GEN_31);
    vlSelf->__PVT___GEN_160 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_32
                                : vlSelf->__PVT___GEN_159);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__41(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__41\n"); );
    // Body
    vlSelf->__PVT___GEN_394 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_10
                                : vlSelf->__PVT___GEN_393);
    vlSelf->__PVT___GEN_458 = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_10
                                : vlSelf->__PVT___GEN_457);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__42(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__42\n"); );
    // Body
    vlSelf->__PVT___GEN_33 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_33
                               : vlSelf->__PVT___GEN_32);
    vlSelf->__PVT___GEN_161 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_33
                                : vlSelf->__PVT___GEN_160);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__43(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__43\n"); );
    // Body
    vlSelf->__PVT___GEN_395 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_11
                                : vlSelf->__PVT___GEN_394);
    vlSelf->__PVT___GEN_459 = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_11
                                : vlSelf->__PVT___GEN_458);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__44(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__44\n"); );
    // Body
    vlSelf->__PVT___GEN_34 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_34
                               : vlSelf->__PVT___GEN_33);
    vlSelf->__PVT___GEN_162 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_34
                                : vlSelf->__PVT___GEN_161);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__45(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__45\n"); );
    // Body
    vlSelf->__PVT___GEN_396 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_12
                                : vlSelf->__PVT___GEN_395);
    vlSelf->__PVT___GEN_460 = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_12
                                : vlSelf->__PVT___GEN_459);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__46(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__46\n"); );
    // Body
    vlSelf->__PVT___GEN_35 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_35
                               : vlSelf->__PVT___GEN_34);
    vlSelf->__PVT___GEN_163 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_35
                                : vlSelf->__PVT___GEN_162);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__47(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__47\n"); );
    // Body
    vlSelf->__PVT___GEN_397 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_13
                                : vlSelf->__PVT___GEN_396);
    vlSelf->__PVT___GEN_461 = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_13
                                : vlSelf->__PVT___GEN_460);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__48(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__48\n"); );
    // Body
    vlSelf->__PVT___GEN_36 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_36
                               : vlSelf->__PVT___GEN_35);
    vlSelf->__PVT___GEN_164 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_36
                                : vlSelf->__PVT___GEN_163);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__49(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__49\n"); );
    // Body
    vlSelf->__PVT___GEN_398 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_14
                                : vlSelf->__PVT___GEN_397);
    vlSelf->__PVT___GEN_462 = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_14
                                : vlSelf->__PVT___GEN_461);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__50(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__50\n"); );
    // Body
    vlSelf->__PVT___GEN_37 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_37
                               : vlSelf->__PVT___GEN_36);
    vlSelf->__PVT___GEN_165 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_37
                                : vlSelf->__PVT___GEN_164);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__51(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__51\n"); );
    // Body
    vlSelf->__PVT___GEN_399 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_15
                                : vlSelf->__PVT___GEN_398);
    vlSelf->__PVT___GEN_463 = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_15
                                : vlSelf->__PVT___GEN_462);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__52(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__52\n"); );
    // Body
    vlSelf->__PVT___GEN_38 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_38
                               : vlSelf->__PVT___GEN_37);
    vlSelf->__PVT___GEN_166 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_38
                                : vlSelf->__PVT___GEN_165);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__53(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__53\n"); );
    // Body
    vlSelf->__PVT___GEN_400 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_16
                                : vlSelf->__PVT___GEN_399);
    vlSelf->__PVT___GEN_464 = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_16
                                : vlSelf->__PVT___GEN_463);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__54(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__54\n"); );
    // Body
    vlSelf->__PVT___GEN_39 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_39
                               : vlSelf->__PVT___GEN_38);
    vlSelf->__PVT___GEN_167 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_39
                                : vlSelf->__PVT___GEN_166);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__55(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__55\n"); );
    // Body
    vlSelf->__PVT___GEN_401 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_17
                                : vlSelf->__PVT___GEN_400);
    vlSelf->__PVT___GEN_465 = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_17
                                : vlSelf->__PVT___GEN_464);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__56(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__56\n"); );
    // Body
    vlSelf->__PVT___GEN_40 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_40
                               : vlSelf->__PVT___GEN_39);
    vlSelf->__PVT___GEN_168 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_40
                                : vlSelf->__PVT___GEN_167);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__57(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__57\n"); );
    // Body
    vlSelf->__PVT___GEN_402 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_18
                                : vlSelf->__PVT___GEN_401);
    vlSelf->__PVT___GEN_466 = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_18
                                : vlSelf->__PVT___GEN_465);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__58(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__58\n"); );
    // Body
    vlSelf->__PVT___GEN_41 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_41
                               : vlSelf->__PVT___GEN_40);
    vlSelf->__PVT___GEN_169 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_41
                                : vlSelf->__PVT___GEN_168);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__59(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__59\n"); );
    // Body
    vlSelf->__PVT___GEN_403 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_19
                                : vlSelf->__PVT___GEN_402);
    vlSelf->__PVT___GEN_467 = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_19
                                : vlSelf->__PVT___GEN_466);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__60(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__60\n"); );
    // Body
    vlSelf->__PVT___GEN_42 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_42
                               : vlSelf->__PVT___GEN_41);
    vlSelf->__PVT___GEN_170 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_42
                                : vlSelf->__PVT___GEN_169);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__61(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__61\n"); );
    // Body
    vlSelf->__PVT___GEN_404 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_20
                                : vlSelf->__PVT___GEN_403);
    vlSelf->__PVT___GEN_468 = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_20
                                : vlSelf->__PVT___GEN_467);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__62(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__62\n"); );
    // Body
    vlSelf->__PVT___GEN_43 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_43
                               : vlSelf->__PVT___GEN_42);
    vlSelf->__PVT___GEN_171 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_43
                                : vlSelf->__PVT___GEN_170);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__63(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__63\n"); );
    // Body
    vlSelf->__PVT___GEN_405 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_21
                                : vlSelf->__PVT___GEN_404);
    vlSelf->__PVT___GEN_469 = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_21
                                : vlSelf->__PVT___GEN_468);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__64(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__64\n"); );
    // Body
    vlSelf->__PVT___GEN_44 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_44
                               : vlSelf->__PVT___GEN_43);
    vlSelf->__PVT___GEN_172 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_44
                                : vlSelf->__PVT___GEN_171);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__65(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__65\n"); );
    // Body
    vlSelf->__PVT___GEN_406 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_22
                                : vlSelf->__PVT___GEN_405);
    vlSelf->__PVT___GEN_470 = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_22
                                : vlSelf->__PVT___GEN_469);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__66(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__66\n"); );
    // Body
    vlSelf->__PVT___GEN_45 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_45
                               : vlSelf->__PVT___GEN_44);
    vlSelf->__PVT___GEN_173 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_45
                                : vlSelf->__PVT___GEN_172);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__67(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__67\n"); );
    // Body
    vlSelf->__PVT___GEN_407 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_23
                                : vlSelf->__PVT___GEN_406);
    vlSelf->__PVT___GEN_471 = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_23
                                : vlSelf->__PVT___GEN_470);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__68(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__68\n"); );
    // Body
    vlSelf->__PVT___GEN_46 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_46
                               : vlSelf->__PVT___GEN_45);
    vlSelf->__PVT___GEN_174 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_46
                                : vlSelf->__PVT___GEN_173);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__69(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__69\n"); );
    // Body
    vlSelf->__PVT___GEN_408 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_24
                                : vlSelf->__PVT___GEN_407);
    vlSelf->__PVT___GEN_472 = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_24
                                : vlSelf->__PVT___GEN_471);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__70(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__70\n"); );
    // Body
    vlSelf->__PVT___GEN_47 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_47
                               : vlSelf->__PVT___GEN_46);
    vlSelf->__PVT___GEN_175 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_47
                                : vlSelf->__PVT___GEN_174);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__71(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__71\n"); );
    // Body
    vlSelf->__PVT___GEN_409 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_25
                                : vlSelf->__PVT___GEN_408);
    vlSelf->__PVT___GEN_473 = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_25
                                : vlSelf->__PVT___GEN_472);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__72(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__72\n"); );
    // Body
    vlSelf->__PVT___GEN_48 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_48
                               : vlSelf->__PVT___GEN_47);
    vlSelf->__PVT___GEN_176 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_48
                                : vlSelf->__PVT___GEN_175);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__73(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__73\n"); );
    // Body
    vlSelf->__PVT___GEN_410 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_26
                                : vlSelf->__PVT___GEN_409);
    vlSelf->__PVT___GEN_474 = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_26
                                : vlSelf->__PVT___GEN_473);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__74(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__74\n"); );
    // Body
    vlSelf->__PVT___GEN_49 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_49
                               : vlSelf->__PVT___GEN_48);
    vlSelf->__PVT___GEN_177 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_49
                                : vlSelf->__PVT___GEN_176);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__75(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__75\n"); );
    // Body
    vlSelf->__PVT___GEN_411 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_27
                                : vlSelf->__PVT___GEN_410);
    vlSelf->__PVT___GEN_475 = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_27
                                : vlSelf->__PVT___GEN_474);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__76(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__76\n"); );
    // Body
    vlSelf->__PVT___GEN_50 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_50
                               : vlSelf->__PVT___GEN_49);
    vlSelf->__PVT___GEN_178 = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_50
                                : vlSelf->__PVT___GEN_177);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__77(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__77\n"); );
    // Body
    vlSelf->__PVT___GEN_412 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_28
                                : vlSelf->__PVT___GEN_411);
    vlSelf->__PVT___GEN_476 = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_28
                                : vlSelf->__PVT___GEN_475);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__78(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__78\n"); );
    // Body
    vlSelf->__PVT___GEN_51 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_51
                               : vlSelf->__PVT___GEN_50);
    vlSelf->__PVT___GEN_179 = ((0x33U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_51
                                : vlSelf->__PVT___GEN_178);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__79(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__79\n"); );
    // Body
    vlSelf->__PVT___GEN_413 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_29
                                : vlSelf->__PVT___GEN_412);
    vlSelf->__PVT___GEN_477 = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_29
                                : vlSelf->__PVT___GEN_476);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__80(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__80\n"); );
    // Body
    vlSelf->__PVT___GEN_52 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_52
                               : vlSelf->__PVT___GEN_51);
    vlSelf->__PVT___GEN_180 = ((0x34U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_52
                                : vlSelf->__PVT___GEN_179);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__81(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__81\n"); );
    // Body
    vlSelf->__PVT___GEN_414 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_30
                                : vlSelf->__PVT___GEN_413);
    vlSelf->__PVT___GEN_478 = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_30
                                : vlSelf->__PVT___GEN_477);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__82(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__82\n"); );
    // Body
    vlSelf->__PVT___GEN_53 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_53
                               : vlSelf->__PVT___GEN_52);
    vlSelf->__PVT___GEN_181 = ((0x35U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_53
                                : vlSelf->__PVT___GEN_180);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__83(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__83\n"); );
    // Body
    vlSelf->__PVT___GEN_415 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_31
                                : vlSelf->__PVT___GEN_414);
    vlSelf->__PVT___GEN_479 = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_31
                                : vlSelf->__PVT___GEN_478);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__84(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__84\n"); );
    // Body
    vlSelf->__PVT___GEN_54 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_54
                               : vlSelf->__PVT___GEN_53);
    vlSelf->__PVT___GEN_182 = ((0x36U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_54
                                : vlSelf->__PVT___GEN_181);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__85(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__85\n"); );
    // Body
    vlSelf->__PVT___GEN_416 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_32
                                : vlSelf->__PVT___GEN_415);
    vlSelf->__PVT___GEN_480 = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_32
                                : vlSelf->__PVT___GEN_479);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__86(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__86\n"); );
    // Body
    vlSelf->__PVT___GEN_55 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_55
                               : vlSelf->__PVT___GEN_54);
    vlSelf->__PVT___GEN_183 = ((0x37U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_55
                                : vlSelf->__PVT___GEN_182);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__87(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__87\n"); );
    // Body
    vlSelf->__PVT___GEN_417 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_33
                                : vlSelf->__PVT___GEN_416);
    vlSelf->__PVT___GEN_481 = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_33
                                : vlSelf->__PVT___GEN_480);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__88(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__88\n"); );
    // Body
    vlSelf->__PVT___GEN_56 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_56
                               : vlSelf->__PVT___GEN_55);
    vlSelf->__PVT___GEN_184 = ((0x38U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_56
                                : vlSelf->__PVT___GEN_183);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__89(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__89\n"); );
    // Body
    vlSelf->__PVT___GEN_418 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_34
                                : vlSelf->__PVT___GEN_417);
    vlSelf->__PVT___GEN_482 = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_34
                                : vlSelf->__PVT___GEN_481);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__90(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__90\n"); );
    // Body
    vlSelf->__PVT___GEN_57 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_57
                               : vlSelf->__PVT___GEN_56);
    vlSelf->__PVT___GEN_185 = ((0x39U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_57
                                : vlSelf->__PVT___GEN_184);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__91(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__91\n"); );
    // Body
    vlSelf->__PVT___GEN_419 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_35
                                : vlSelf->__PVT___GEN_418);
    vlSelf->__PVT___GEN_483 = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_35
                                : vlSelf->__PVT___GEN_482);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__92(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__92\n"); );
    // Body
    vlSelf->__PVT___GEN_58 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_58
                               : vlSelf->__PVT___GEN_57);
    vlSelf->__PVT___GEN_186 = ((0x3aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_58
                                : vlSelf->__PVT___GEN_185);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__93(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__93\n"); );
    // Body
    vlSelf->__PVT___GEN_420 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_36
                                : vlSelf->__PVT___GEN_419);
    vlSelf->__PVT___GEN_484 = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_36
                                : vlSelf->__PVT___GEN_483);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__94(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__94\n"); );
    // Body
    vlSelf->__PVT___GEN_59 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_59
                               : vlSelf->__PVT___GEN_58);
    vlSelf->__PVT___GEN_187 = ((0x3bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_59
                                : vlSelf->__PVT___GEN_186);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__95(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__95\n"); );
    // Body
    vlSelf->__PVT___GEN_421 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_37
                                : vlSelf->__PVT___GEN_420);
    vlSelf->__PVT___GEN_485 = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_37
                                : vlSelf->__PVT___GEN_484);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__96(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__96\n"); );
    // Body
    vlSelf->__PVT___GEN_60 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_60
                               : vlSelf->__PVT___GEN_59);
    vlSelf->__PVT___GEN_188 = ((0x3cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_60
                                : vlSelf->__PVT___GEN_187);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__97(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__97\n"); );
    // Body
    vlSelf->__PVT___GEN_422 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_38
                                : vlSelf->__PVT___GEN_421);
    vlSelf->__PVT___GEN_486 = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_38
                                : vlSelf->__PVT___GEN_485);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__98(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__98\n"); );
    // Body
    vlSelf->__PVT___GEN_61 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_61
                               : vlSelf->__PVT___GEN_60);
    vlSelf->__PVT___GEN_189 = ((0x3dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_61
                                : vlSelf->__PVT___GEN_188);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__99(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__99\n"); );
    // Body
    vlSelf->__PVT___GEN_423 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_39
                                : vlSelf->__PVT___GEN_422);
    vlSelf->__PVT___GEN_487 = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_39
                                : vlSelf->__PVT___GEN_486);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__100(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__100\n"); );
    // Body
    vlSelf->__PVT___GEN_62 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_62
                               : vlSelf->__PVT___GEN_61);
    vlSelf->__PVT___GEN_190 = ((0x3eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_62
                                : vlSelf->__PVT___GEN_189);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__101(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__101\n"); );
    // Body
    vlSelf->__PVT___GEN_424 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_40
                                : vlSelf->__PVT___GEN_423);
    vlSelf->__PVT___GEN_488 = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_40
                                : vlSelf->__PVT___GEN_487);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__102(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__102\n"); );
    // Body
    vlSelf->__PVT___GEN_63 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                               ? vlSelf->__PVT__tag_regs0_63
                               : vlSelf->__PVT___GEN_62);
    vlSelf->__PVT___GEN_191 = ((0x3fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_63
                                : vlSelf->__PVT___GEN_190);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__103(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__103\n"); );
    // Body
    vlSelf->__PVT___GEN_425 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_41
                                : vlSelf->__PVT___GEN_424);
    vlSelf->__PVT___GEN_489 = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_41
                                : vlSelf->__PVT___GEN_488);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__104(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__104\n"); );
    // Body
    vlSelf->__PVT__io_tag = (0x7ffffffffffffULL & (
                                                   (1U 
                                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__io_waddr, 6U))
                                                    ? 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_191, 0U, 0x33U)
                                                    : 
                                                   VL_SEL_QQII(52, vlSelf->__PVT___GEN_63, 0U, 0x33U)));
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__105(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__105\n"); );
    // Body
    vlSelf->__PVT___GEN_426 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_42
                                : vlSelf->__PVT___GEN_425);
    vlSelf->__PVT___GEN_490 = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_42
                                : vlSelf->__PVT___GEN_489);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__106(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__106\n"); );
    // Body
    vlSelf->__PVT___GEN_427 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_43
                                : vlSelf->__PVT___GEN_426);
    vlSelf->__PVT___GEN_491 = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_43
                                : vlSelf->__PVT___GEN_490);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__107(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__107\n"); );
    // Body
    vlSelf->__PVT___GEN_428 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_44
                                : vlSelf->__PVT___GEN_427);
    vlSelf->__PVT___GEN_492 = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_44
                                : vlSelf->__PVT___GEN_491);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__108(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__108\n"); );
    // Body
    vlSelf->__PVT___GEN_429 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_45
                                : vlSelf->__PVT___GEN_428);
    vlSelf->__PVT___GEN_493 = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_45
                                : vlSelf->__PVT___GEN_492);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__109(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__109\n"); );
    // Body
    vlSelf->__PVT___GEN_430 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_46
                                : vlSelf->__PVT___GEN_429);
    vlSelf->__PVT___GEN_494 = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_46
                                : vlSelf->__PVT___GEN_493);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__110(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__110\n"); );
    // Body
    vlSelf->__PVT___GEN_431 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_47
                                : vlSelf->__PVT___GEN_430);
    vlSelf->__PVT___GEN_495 = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_47
                                : vlSelf->__PVT___GEN_494);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__111(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__111\n"); );
    // Body
    vlSelf->__PVT___GEN_432 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_48
                                : vlSelf->__PVT___GEN_431);
    vlSelf->__PVT___GEN_496 = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_48
                                : vlSelf->__PVT___GEN_495);
}

VL_INLINE_OPT void Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__112(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___nba_comb__TOP__mycpu_top__data_cache__dcache_tag_1__112\n"); );
    // Body
    vlSelf->__PVT___GEN_433 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_49
                                : vlSelf->__PVT___GEN_432);
    vlSelf->__PVT___GEN_497 = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_raddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs0_49
                                : vlSelf->__PVT___GEN_496);
}
